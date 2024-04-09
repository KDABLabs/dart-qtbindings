/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
/// SPDX-License-Identifier: MIT

/// This helper script generates the Qt bindings

import 'dart:io';
import 'utils.dart' as Utils;
import 'package:path/path.dart';

final String s_sourcePath = dirname(Platform.script.toFilePath());

Future<int> runCommand(String command, List<String> args,
    {String? workingDirectory = null, Map<String, String>? env = null}) async {
  print("Running: ${command} ${args.join(" ")}");

  Process process = await Process.start(command, args,
          workingDirectory: workingDirectory, environment: env)
      .then((process) {
    stderr.addStream(process.stderr);
    stdout.addStream(process.stdout);

    return process;
  });

  return await process.exitCode;
}

String generatedDir() {
  return s_sourcePath + "/generated";
}

String testAppDir() {
  return s_sourcePath + "/app";
}

String generatedFFICpp() {
  return generatedDir() + "/" + "QtDartBindings/dart/ffi";
}

List<String> qtIncludes() {
  return Utils.includeArguments();
}

void main(List<String> args_) async {
  int res = await runCommand(
      "dartagnan",
      ["--output-directory=${generatedDir()}", "--license-file=license-file-template"] +
          qtIncludes() +
          ["bindings_global.h", "typesystem.xml"]);

  if (res != 0) {
    print("Error running dartagnan!");
    exit(res);
  }

  /// If dartagnan already ran, then the tests don't need to
  final bool runCodeFormat =
      !Platform.environment.containsKey('DARTAGNAN_RUNS_CODE_FORMAT');

  if (runCodeFormat) {
    res = await Utils.runDartFormat(generatedDir());
    if (res != 0) {
      print("Error running dartfmt!");
      exit(res);
    }

    res = await Utils.runClangFormat(generatedFFICpp());
    if (res != 0) {
      print("Error running clang-format!");
      exit(res);
    }
  }

  if (await Utils.getPackages(workingDirectory: testAppDir()) != 0) {
    print("Error running dart pub get");
    exit(res);
  }
}

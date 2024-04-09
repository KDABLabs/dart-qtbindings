/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
/// SPDX-License-Identifier: MIT
import 'dart:ffi' as ffi;
import 'dart:io' show Platform;

String bindingsLibraryName(String name) {
  if (Platform.isWindows) return "${name}.dll";
  if (Platform.isMacOS) return "lib${name}.dylib";
  return "lib${name}.so";
}

class Library {
  var _dylib;

  ffi.DynamicLibrary get dylib {
    return _dylib;
  }

  static var _library = null;

  factory Library.instance() {
    // Singleton impl.
    if (_library == null) _library = Library._();
    return _library;
  }

  Library._() {
    // DYLD_LIBRARY_PATH doesn't work by default on newer macOS. Instead
    // introduce our own env variable for the same use case
    var bindingsPath = Platform.environment["DARTAGNAN_BINDINGSLIB_PATH"] ?? "";

    var libraryPath = bindingsLibraryName("QtDartBindings");
    if (!bindingsPath.isEmpty) {
      libraryPath = bindingsPath + "/" + libraryPath;
    }

    _dylib = ffi.DynamicLibrary.open(libraryPath);
  }
}

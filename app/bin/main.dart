/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
/// SPDX-License-Identifier: MIT

import 'package:QtDartBindings/Bindings.dart';
import 'dart:async';

class MyButton extends QPushButton {
  MyButton(String title) : super.ctor3(title, parent: null) {}

  void mousePressEvent(QMouseEvent? e) {
    if (e == null)
      return; // Required check, otherwise null safety compile error

    print("Mouse press! ${e.pos().x()},${e.pos().y()}");

    final widgets = QApplication.topLevelWidgets();
    final numWidgets = widgets.size();

    for (int i = 0; i < numWidgets; ++i) {
      final QRect geometry = widgets.at(i).frameGeometry();
      print("Widget: ${geometry.width()}x${geometry.height()}");
    }

    super.mousePressEvent(e);
  }
}

void runQtEventLoop() async {
  // We can't simply call QApplication.exec(), as that would block dart's
  // event loop. This will do for now.
  QCoreApplication.processEvents();
  Timer(Duration(milliseconds: 10), runQtEventLoop);
}

void main() {
  var app = QApplication();
  var widget = QWidget(parent: null);

  var lay = QVBoxLayout(widget);
  var helloButton = MyButton("Hello2");
  helloButton.onClicked(() {
    print("Button clicked!");
  });

  var maxButton = MyButton("Maximize");
  var minButton = MyButton("Minimize");
  maxButton.onClicked(widget.showMaximized);
  minButton.onClicked(widget.showMinimized, context: widget);

  lay.addWidget(helloButton);
  lay.addWidget(maxButton);
  lay.addWidget(minButton);

  lay.addStretch();

  widget.setWindowTitle("Dart!");
  widget.resize_2(300, 1000);
  widget.show();

  QRect geo = widget.geometry();
  print("Size= ${geo.width()}x${geo.height()}");

  print("Window Title: " + widget.windowTitle().toDartString());

  runQtEventLoop();
  print("Dart event loop is not blocked!");
}

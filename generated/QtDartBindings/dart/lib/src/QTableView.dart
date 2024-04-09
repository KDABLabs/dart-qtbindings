/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
/// SPDX-License-Identifier: MIT
import 'dart:ffi' as ffi;
import 'package:ffi/ffi.dart';
import 'TypeHelpers.dart';
import '../Bindings.dart';
import '../LibraryLoader.dart';

var _dylib = Library.instance().dylib;

class QTableView extends QAbstractItemView {
  QTableView.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QTableView.init() : super.init() {}
  factory QTableView.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QTableView;
    }
    return QTableView.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QTableView_Finalizer";
  } //QTableView(QWidget * parent)

  QTableView({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QTableView__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  }
  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // clearSpans()

  clearSpans() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTableView__clearSpans')
        .asFunction();
    func(thisCpp);
  } // columnAt(int x) const

  int columnAt(int x) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__columnAt_int')
        .asFunction();
    return func(thisCpp, x);
  } // columnCountChanged(int oldCount, int newCount)

  columnCountChanged(int oldCount, int newCount) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__columnCountChanged_int_int')
        .asFunction();
    func(thisCpp, oldCount, newCount);
  } // columnMoved(int column, int oldIndex, int newIndex)

  columnMoved(int column, int oldIndex, int newIndex) {
    final void_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__columnMoved_int_int_int')
        .asFunction();
    func(thisCpp, column, oldIndex, newIndex);
  } // columnResized(int column, int oldWidth, int newWidth)

  columnResized(int column, int oldWidth, int newWidth) {
    final void_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__columnResized_int_int_int')
        .asFunction();
    func(thisCpp, column, oldWidth, newWidth);
  } // columnSpan(int row, int column) const

  int columnSpan(int row, int column) {
    final int_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__columnSpan_int_int')
        .asFunction();
    return func(thisCpp, row, column);
  } // columnViewportPosition(int column) const

  int columnViewportPosition(int column) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__columnViewportPosition_int')
        .asFunction();
    return func(thisCpp, column);
  } // columnWidth(int column) const

  int columnWidth(int column) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__columnWidth_int')
        .asFunction();
    return func(thisCpp, column);
  }

  static void commitData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? editor) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::commitData(QWidget * editor)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.commitData((editor == null || editor.address == 0)
        ? null
        : QWidget.fromCppPointer(editor));
  }

  static void currentChanged_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> current, ffi.Pointer<void> previous) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::currentChanged(const QModelIndex & current, const QModelIndex & previous)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.currentChanged(QModelIndex.fromCppPointer(current),
        QModelIndex.fromCppPointer(previous));
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::customEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.customEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static void dataChanged_calledFromC(
      ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> topLeft,
      ffi.Pointer<void> bottomRight,
      ffi.Pointer<void>? roles) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QList<int > & roles)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.dataChanged(QModelIndex.fromCppPointer(topLeft),
        QModelIndex.fromCppPointer(bottomRight),
        roles: (roles == null || roles.address == 0)
            ? null
            : QList.fromCppPointer(roles));
  }

  static int devType_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static void doItemsLayout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::doItemsLayout()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.doItemsLayout();
  }

  static void editorDestroyed_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? editor) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::editorDestroyed(QObject * editor)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.editorDestroyed((editor == null || editor.address == 0)
        ? null
        : QObject.fromCppPointer(editor));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::event(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.event((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? object, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::eventFilter(QObject * object, QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.eventFilter(
        (object == null || object.address == 0)
            ? null
            : QObject.fromCppPointer(object),
        (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static int focusNextPrevChild_calledFromC(
      ffi.Pointer<void> thisCpp, int next) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  } // hideColumn(int column)

  hideColumn(int column) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__hideColumn_int')
        .asFunction();
    func(thisCpp, column);
  } // hideRow(int row)

  hideRow(int row) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__hideRow_int')
        .asFunction();
    func(thisCpp, row);
  }

  static int horizontalOffset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::horizontalOffset() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.horizontalOffset();
    return result;
  }

  static void horizontalScrollbarAction_calledFromC(
      ffi.Pointer<void> thisCpp, int action) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::horizontalScrollbarAction(int action)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.horizontalScrollbarAction(action);
  }

  static void horizontalScrollbarValueChanged_calledFromC(
      ffi.Pointer<void> thisCpp, int value) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::horizontalScrollbarValueChanged(int value)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.horizontalScrollbarValueChanged(value);
  }

  static ffi.Pointer<void> indexAt_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? p) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::indexAt(const QPoint & p) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexAt(
        (p == null || p.address == 0) ? null : QPoint.fromCppPointer(p));
    return result.thisCpp;
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  } // isColumnHidden(int column) const

  bool isColumnHidden(int column) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__isColumnHidden_int')
        .asFunction();
    return func(thisCpp, column) != 0;
  } // isCornerButtonEnabled() const

  bool isCornerButtonEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTableView__isCornerButtonEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static int isIndexHidden_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::isIndexHidden(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.isIndexHidden(QModelIndex.fromCppPointer(index));
    return result ? 1 : 0;
  } // isRowHidden(int row) const

  bool isRowHidden(int row) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__isRowHidden_int')
        .asFunction();
    return func(thisCpp, row) != 0;
  } // isSortingEnabled() const

  bool isSortingEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTableView__isSortingEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void keyboardSearch_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? search) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::keyboardSearch(const QString & search)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.keyboardSearch(QString.fromCppPointer(search).toDartString());
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::mouseMoveEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::mousePressEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::mouseReleaseEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> moveCursor_calledFromC(
      ffi.Pointer<void> thisCpp, int cursorAction, int modifiers) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.moveCursor(cursorAction, modifiers);
    return result.thisCpp;
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::paintEvent(QPaintEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent(
        (e == null || e.address == 0) ? null : QPaintEvent.fromCppPointer(e));
  }

  static void reset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::reset()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.reset();
  } // resizeColumnToContents(int column)

  resizeColumnToContents(int column) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__resizeColumnToContents_int')
        .asFunction();
    func(thisCpp, column);
  } // resizeColumnsToContents()

  resizeColumnsToContents() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTableView__resizeColumnsToContents')
        .asFunction();
    func(thisCpp);
  } // resizeRowToContents(int row)

  resizeRowToContents(int row) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__resizeRowToContents_int')
        .asFunction();
    func(thisCpp, row);
  } // resizeRowsToContents()

  resizeRowsToContents() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTableView__resizeRowsToContents')
        .asFunction();
    func(thisCpp);
  } // rowAt(int y) const

  int rowAt(int y) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__rowAt_int')
        .asFunction();
    return func(thisCpp, y);
  } // rowCountChanged(int oldCount, int newCount)

  rowCountChanged(int oldCount, int newCount) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__rowCountChanged_int_int')
        .asFunction();
    func(thisCpp, oldCount, newCount);
  } // rowHeight(int row) const

  int rowHeight(int row) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__rowHeight_int')
        .asFunction();
    return func(thisCpp, row);
  } // rowMoved(int row, int oldIndex, int newIndex)

  rowMoved(int row, int oldIndex, int newIndex) {
    final void_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__rowMoved_int_int_int')
        .asFunction();
    func(thisCpp, row, oldIndex, newIndex);
  } // rowResized(int row, int oldHeight, int newHeight)

  rowResized(int row, int oldHeight, int newHeight) {
    final void_Func_voidstar_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__rowResized_int_int_int')
        .asFunction();
    func(thisCpp, row, oldHeight, newHeight);
  } // rowSpan(int row, int column) const

  int rowSpan(int row, int column) {
    final int_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__rowSpan_int_int')
        .asFunction();
    return func(thisCpp, row, column);
  } // rowViewportPosition(int row) const

  int rowViewportPosition(int row) {
    final int_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__rowViewportPosition_int')
        .asFunction();
    return func(thisCpp, row);
  }

  static void rowsAboutToBeRemoved_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent, int start, int end) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.rowsAboutToBeRemoved(
        QModelIndex.fromCppPointer(parent), start, end);
  }

  static void rowsInserted_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent, int start, int end) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::rowsInserted(const QModelIndex & parent, int start, int end)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.rowsInserted(QModelIndex.fromCppPointer(parent), start, end);
  }

  static void scrollContentsBy_calledFromC(
      ffi.Pointer<void> thisCpp, int dx, int dy) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::scrollContentsBy(int dx, int dy)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollContentsBy(dx, dy);
  }

  static void scrollTo_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index, int hint) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollTo(QModelIndex.fromCppPointer(index), hint: hint);
  }

  static void selectAll_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::selectAll()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.selectAll();
  } // selectColumn(int column)

  selectColumn(int column) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__selectColumn_int')
        .asFunction();
    func(thisCpp, column);
  } // selectRow(int row)

  selectRow(int row) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__selectRow_int')
        .asFunction();
    func(thisCpp, row);
  }

  static ffi.Pointer<void> selectedIndexes_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::selectedIndexes() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.selectedIndexes();
    return result.thisCpp;
  }

  static void selectionChanged_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> selected, ffi.Pointer<void> deselected) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.selectionChanged(QItemSelection.fromCppPointer(selected),
        QItemSelection.fromCppPointer(deselected));
  }

  static int selectionCommand_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> index, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::selectionCommand(const QModelIndex & index, const QEvent * event) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.selectionCommand(
        QModelIndex.fromCppPointer(index),
        event: (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result;
  } // setColumnHidden(int column, bool hide)

  setColumnHidden(int column, bool hide) {
    final void_Func_voidstar_int_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int8_FFI>>(
            'c_QTableView__setColumnHidden_int_bool')
        .asFunction();
    func(thisCpp, column, hide ? 1 : 0);
  } // setColumnWidth(int column, int width)

  setColumnWidth(int column, int width) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__setColumnWidth_int_int')
        .asFunction();
    func(thisCpp, column, width);
  } // setCornerButtonEnabled(bool enable)

  setCornerButtonEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTableView__setCornerButtonEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  }

  static void setModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? model) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::setModel(QAbstractItemModel * model)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setModel((model == null || model.address == 0)
        ? null
        : QAbstractItemModel.fromCppPointer(model));
  }

  static void setRootIndex_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::setRootIndex(const QModelIndex & index)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setRootIndex(QModelIndex.fromCppPointer(index));
  } // setRowHeight(int row, int height)

  setRowHeight(int row, int height) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__setRowHeight_int_int')
        .asFunction();
    func(thisCpp, row, height);
  } // setRowHidden(int row, bool hide)

  setRowHidden(int row, bool hide) {
    final void_Func_voidstar_int_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int8_FFI>>(
            'c_QTableView__setRowHidden_int_bool')
        .asFunction();
    func(thisCpp, row, hide ? 1 : 0);
  }

  static void setSelection_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? rect, int command) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSelection(
        (rect == null || rect.address == 0) ? null : QRect.fromCppPointer(rect),
        command);
  }

  static void setSelectionModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? selectionModel) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::setSelectionModel(QItemSelectionModel * selectionModel)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSelectionModel(
        (selectionModel == null || selectionModel.address == 0)
            ? null
            : QItemSelectionModel.fromCppPointer(selectionModel));
  } // setShowGrid(bool show)

  setShowGrid(bool show) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTableView__setShowGrid_bool')
        .asFunction();
    func(thisCpp, show ? 1 : 0);
  } // setSortingEnabled(bool enable)

  setSortingEnabled(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTableView__setSortingEnabled_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  } // setSpan(int row, int column, int rowSpan, int columnSpan)

  setSpan(int row, int column, int rowSpan, int columnSpan) {
    final void_Func_voidstar_int_int_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__setSpan_int_int_int_int')
        .asFunction();
    func(thisCpp, row, column, rowSpan, columnSpan);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  } // setWordWrap(bool on)

  setWordWrap(bool on) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QTableView__setWordWrap_bool')
        .asFunction();
    func(thisCpp, on ? 1 : 0);
  }

  static void setupViewport_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? viewport) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::setupViewport(QWidget * viewport)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setupViewport((viewport == null || viewport.address == 0)
        ? null
        : QWidget.fromCppPointer(viewport));
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  } // showColumn(int column)

  showColumn(int column) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__showColumn_int')
        .asFunction();
    func(thisCpp, column);
  } // showGrid() const

  bool showGrid() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTableView__showGrid')
        .asFunction();
    return func(thisCpp) != 0;
  } // showRow(int row)

  showRow(int row) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QTableView__showRow_int')
        .asFunction();
    func(thisCpp, row);
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static int sizeHintForColumn_calledFromC(
      ffi.Pointer<void> thisCpp, int column) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::sizeHintForColumn(int column) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHintForColumn(column);
    return result;
  }

  static int sizeHintForRow_calledFromC(ffi.Pointer<void> thisCpp, int row) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::sizeHintForRow(int row) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHintForRow(row);
    return result;
  } // sortByColumn(int column, Qt::SortOrder order)

  sortByColumn(int column, int order) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QTableView__sortByColumn_int_SortOrder')
        .asFunction();
    func(thisCpp, column, order);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QTableView__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  }

  static void updateEditorData_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::updateEditorData()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateEditorData();
  }

  static void updateEditorGeometries_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::updateEditorGeometries()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateEditorGeometries();
  }

  static void updateGeometries_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::updateGeometries()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateGeometries();
  }

  static int verticalOffset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::verticalOffset() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.verticalOffset();
    return result;
  }

  static void verticalScrollbarAction_calledFromC(
      ffi.Pointer<void> thisCpp, int action) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::verticalScrollbarAction(int action)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.verticalScrollbarAction(action);
  }

  static void verticalScrollbarValueChanged_calledFromC(
      ffi.Pointer<void> thisCpp, int value) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::verticalScrollbarValueChanged(int value)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.verticalScrollbarValueChanged(value);
  }

  static int viewportEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::viewportEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportEvent(
        (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result ? 1 : 0;
  }

  static ffi.Pointer<void> viewportSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::viewportSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportSizeHint();
    return result.thisCpp;
  } // visualIndex(const QModelIndex & index) const

  int visualIndex(QModelIndex index) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_QTableView__visualIndex_QModelIndex')
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  static ffi.Pointer<void> visualRect_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::visualRect(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.visualRect(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static ffi.Pointer<void> visualRegionForSelection_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> selection) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QTableView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QTableView::visualRegionForSelection(const QItemSelection & selection) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .visualRegionForSelection(QItemSelection.fromCppPointer(selection));
    return result.thisCpp;
  } // wordWrap() const

  bool wordWrap() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QTableView__wordWrap')
        .asFunction();
    return func(thisCpp) != 0;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QTableView__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QTableView__changeEvent_QEvent";
      case 5397:
        return "c_QTableView__commitData_QWidget";
      case 5399:
        return "c_QTableView__currentChanged_QModelIndex_QModelIndex";
      case 946:
        return "c_QTableView__customEvent_QEvent";
      case 5401:
        return "c_QTableView__dataChanged_QModelIndex_QModelIndex_QList_int";
      case 1145:
        return "c_QTableView__devType";
      case 5404:
        return "c_QTableView__doItemsLayout";
      case 5409:
        return "c_QTableView__editorDestroyed_QObject";
      case 956:
        return "c_QTableView__event_QEvent";
      case 957:
        return "c_QTableView__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QTableView__focusNextPrevChild_bool";
      case 1169:
        return "c_QTableView__hasHeightForWidth";
      case 1173:
        return "c_QTableView__heightForWidth_int";
      case 5413:
        return "c_QTableView__horizontalOffset";
      case 5414:
        return "c_QTableView__horizontalScrollbarAction_int";
      case 5415:
        return "c_QTableView__horizontalScrollbarValueChanged_int";
      case 5418:
        return "c_QTableView__indexAt_QPoint";
      case 1176:
        return "c_QTableView__initPainter_QPainter";
      case 5420:
        return "c_QTableView__isIndexHidden_QModelIndex";
      case 5422:
        return "c_QTableView__keyboardSearch_QString";
      case 1202:
        return "c_QTableView__leaveEvent_QEvent";
      case 1222:
        return "c_QTableView__minimumSizeHint";
      case 1224:
        return "c_QTableView__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QTableView__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QTableView__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QTableView__mouseReleaseEvent_QMouseEvent";
      case 5425:
        return "c_QTableView__moveCursor_CursorAction_KeyboardModifiers";
      case 1235:
        return "c_QTableView__paintEvent_QPaintEvent";
      case 5428:
        return "c_QTableView__reset";
      case 5432:
        return "c_QTableView__rowsAboutToBeRemoved_QModelIndex_int_int";
      case 5433:
        return "c_QTableView__rowsInserted_QModelIndex_int_int";
      case 5218:
        return "c_QTableView__scrollContentsBy_int_int";
      case 5436:
        return "c_QTableView__scrollTo_QModelIndex_ScrollHint";
      case 5439:
        return "c_QTableView__selectAll";
      case 5440:
        return "c_QTableView__selectedIndexes";
      case 5441:
        return "c_QTableView__selectionChanged_QItemSelection_QItemSelection";
      case 5442:
        return "c_QTableView__selectionCommand_QModelIndex_QEvent";
      case 5455:
        return "c_QTableView__setModel_QAbstractItemModel";
      case 5456:
        return "c_QTableView__setRootIndex_QModelIndex";
      case 5457:
        return "c_QTableView__setSelection_QRect_SelectionFlags";
      case 5458:
        return "c_QTableView__setSelectionModel_QItemSelectionModel";
      case 1314:
        return "c_QTableView__setVisible_bool";
      case 5226:
        return "c_QTableView__setupViewport_QWidget";
      case 1323:
        return "c_QTableView__sharedPainter";
      case 1331:
        return "c_QTableView__sizeHint";
      case 5463:
        return "c_QTableView__sizeHintForColumn_int";
      case 5465:
        return "c_QTableView__sizeHintForRow_int";
      case 5471:
        return "c_QTableView__updateEditorData";
      case 5472:
        return "c_QTableView__updateEditorGeometries";
      case 5473:
        return "c_QTableView__updateGeometries";
      case 5474:
        return "c_QTableView__verticalOffset";
      case 5475:
        return "c_QTableView__verticalScrollbarAction_int";
      case 5476:
        return "c_QTableView__verticalScrollbarValueChanged_int";
      case 5229:
        return "c_QTableView__viewportEvent_QEvent";
      case 5230:
        return "c_QTableView__viewportSizeHint";
      case 5479:
        return "c_QTableView__visualRect_QModelIndex";
      case 5480:
        return "c_QTableView__visualRegionForSelection_QItemSelection";
    }
    return super.cFunctionSymbolName(methodId);
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 1128:
        return "changeEvent";
      case 5397:
        return "commitData";
      case 5399:
        return "currentChanged";
      case 946:
        return "customEvent";
      case 5401:
        return "dataChanged";
      case 1145:
        return "devType";
      case 5404:
        return "doItemsLayout";
      case 5409:
        return "editorDestroyed";
      case 956:
        return "event";
      case 957:
        return "eventFilter";
      case 1155:
        return "focusNextPrevChild";
      case 1169:
        return "hasHeightForWidth";
      case 1173:
        return "heightForWidth";
      case 5413:
        return "horizontalOffset";
      case 5414:
        return "horizontalScrollbarAction";
      case 5415:
        return "horizontalScrollbarValueChanged";
      case 5418:
        return "indexAt";
      case 1176:
        return "initPainter";
      case 5420:
        return "isIndexHidden";
      case 5422:
        return "keyboardSearch";
      case 1202:
        return "leaveEvent";
      case 1222:
        return "minimumSizeHint";
      case 1224:
        return "mouseDoubleClickEvent";
      case 1226:
        return "mouseMoveEvent";
      case 1227:
        return "mousePressEvent";
      case 1228:
        return "mouseReleaseEvent";
      case 5425:
        return "moveCursor";
      case 1235:
        return "paintEvent";
      case 5428:
        return "reset";
      case 5432:
        return "rowsAboutToBeRemoved";
      case 5433:
        return "rowsInserted";
      case 5218:
        return "scrollContentsBy";
      case 5436:
        return "scrollTo";
      case 5439:
        return "selectAll";
      case 5440:
        return "selectedIndexes";
      case 5441:
        return "selectionChanged";
      case 5442:
        return "selectionCommand";
      case 5455:
        return "setModel";
      case 5456:
        return "setRootIndex";
      case 5457:
        return "setSelection";
      case 5458:
        return "setSelectionModel";
      case 1314:
        return "setVisible";
      case 5226:
        return "setupViewport";
      case 1323:
        return "sharedPainter";
      case 1331:
        return "sizeHint";
      case 5463:
        return "sizeHintForColumn";
      case 5465:
        return "sizeHintForRow";
      case 5471:
        return "updateEditorData";
      case 5472:
        return "updateEditorGeometries";
      case 5473:
        return "updateGeometries";
      case 5474:
        return "verticalOffset";
      case 5475:
        return "verticalScrollbarAction";
      case 5476:
        return "verticalScrollbarValueChanged";
      case 5229:
        return "viewportEvent";
      case 5230:
        return "viewportSizeHint";
      case 5479:
        return "visualRect";
      case 5480:
        return "visualRegionForSelection";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QTableView__registerVirtualMethodCallback')
        .asFunction();
    final callback1128 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QFrame.changeEvent_calledFromC);
    registerCallback(thisCpp, callback1128, 1128);
    final callback5397 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.commitData_calledFromC);
    registerCallback(thisCpp, callback5397, 5397);
    final callback5399 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_voidstar_FFI>(
            QTableView.currentChanged_calledFromC);
    registerCallback(thisCpp, callback5399, 5399);
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    final callback5401 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_voidstar_voidstar_FFI>(
        QAbstractItemView.dataChanged_calledFromC);
    registerCallback(thisCpp, callback5401, 5401);
    const callbackExcept1145 = 0;
    final callback1145 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QWidget.devType_calledFromC, callbackExcept1145);
    registerCallback(thisCpp, callback1145, 1145);
    final callback5404 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QTableView.doItemsLayout_calledFromC);
    registerCallback(thisCpp, callback5404, 5404);
    final callback5409 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.editorDestroyed_calledFromC);
    registerCallback(thisCpp, callback5409, 5409);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.event_calledFromC, callbackExcept956);
    registerCallback(thisCpp, callback956, 956);
    const callbackExcept957 = 0;
    final callback957 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractItemView.eventFilter_calledFromC, callbackExcept957);
    registerCallback(thisCpp, callback957, 957);
    const callbackExcept1155 = 0;
    final callback1155 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_ffi_Int8_FFI>(
            QAbstractItemView.focusNextPrevChild_calledFromC,
            callbackExcept1155);
    registerCallback(thisCpp, callback1155, 1155);
    const callbackExcept1169 = 0;
    final callback1169 = ffi.Pointer.fromFunction<bool_Func_voidstar_FFI>(
        QWidget.hasHeightForWidth_calledFromC, callbackExcept1169);
    registerCallback(thisCpp, callback1169, 1169);
    const callbackExcept1173 = 0;
    final callback1173 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QWidget.heightForWidth_calledFromC, callbackExcept1173);
    registerCallback(thisCpp, callback1173, 1173);
    const callbackExcept5413 = 0;
    final callback5413 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QTableView.horizontalOffset_calledFromC, callbackExcept5413);
    registerCallback(thisCpp, callback5413, 5413);
    final callback5414 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QTableView.horizontalScrollbarAction_calledFromC);
    registerCallback(thisCpp, callback5414, 5414);
    final callback5415 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.horizontalScrollbarValueChanged_calledFromC);
    registerCallback(thisCpp, callback5415, 5415);
    final callback5418 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QTableView.indexAt_calledFromC);
    registerCallback(thisCpp, callback5418, 5418);
    final callback1176 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.initPainter_calledFromC);
    registerCallback(thisCpp, callback1176, 1176);
    const callbackExcept5420 = 0;
    final callback5420 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QTableView.isIndexHidden_calledFromC, callbackExcept5420);
    registerCallback(thisCpp, callback5420, 5420);
    final callback5422 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.keyboardSearch_calledFromC);
    registerCallback(thisCpp, callback5422, 5422);
    final callback1202 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.leaveEvent_calledFromC);
    registerCallback(thisCpp, callback1202, 1202);
    final callback1222 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractScrollArea.minimumSizeHint_calledFromC);
    registerCallback(thisCpp, callback1222, 1222);
    final callback1224 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mouseDoubleClickEvent_calledFromC);
    registerCallback(thisCpp, callback1224, 1224);
    final callback1226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback5425 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QTableView.moveCursor_calledFromC);
    registerCallback(thisCpp, callback5425, 5425);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTableView.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback5428 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.reset_calledFromC);
    registerCallback(thisCpp, callback5428, 5428);
    final callback5432 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QAbstractItemView.rowsAboutToBeRemoved_calledFromC);
    registerCallback(thisCpp, callback5432, 5432);
    final callback5433 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QAbstractItemView.rowsInserted_calledFromC);
    registerCallback(thisCpp, callback5433, 5433);
    final callback5218 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QTableView.scrollContentsBy_calledFromC);
    registerCallback(thisCpp, callback5218, 5218);
    final callback5436 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QTableView.scrollTo_calledFromC);
    registerCallback(thisCpp, callback5436, 5436);
    final callback5439 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.selectAll_calledFromC);
    registerCallback(thisCpp, callback5439, 5439);
    final callback5440 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QTableView.selectedIndexes_calledFromC);
    registerCallback(thisCpp, callback5440, 5440);
    final callback5441 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_voidstar_FFI>(
            QTableView.selectionChanged_calledFromC);
    registerCallback(thisCpp, callback5441, 5441);
    const callbackExcept5442 = 0;
    final callback5442 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractItemView.selectionCommand_calledFromC, callbackExcept5442);
    registerCallback(thisCpp, callback5442, 5442);
    final callback5455 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTableView.setModel_calledFromC);
    registerCallback(thisCpp, callback5455, 5455);
    final callback5456 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTableView.setRootIndex_calledFromC);
    registerCallback(thisCpp, callback5456, 5456);
    final callback5457 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QTableView.setSelection_calledFromC);
    registerCallback(thisCpp, callback5457, 5457);
    final callback5458 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QTableView.setSelectionModel_calledFromC);
    registerCallback(thisCpp, callback5458, 5458);
    final callback1314 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int8_FFI>(
            QWidget.setVisible_calledFromC);
    registerCallback(thisCpp, callback1314, 1314);
    final callback5226 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractScrollArea.setupViewport_calledFromC);
    registerCallback(thisCpp, callback5226, 5226);
    final callback1323 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QWidget.sharedPainter_calledFromC);
    registerCallback(thisCpp, callback1323, 1323);
    final callback1331 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QAbstractScrollArea.sizeHint_calledFromC);
    registerCallback(thisCpp, callback1331, 1331);
    const callbackExcept5463 = 0;
    final callback5463 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QTableView.sizeHintForColumn_calledFromC, callbackExcept5463);
    registerCallback(thisCpp, callback5463, 5463);
    const callbackExcept5465 = 0;
    final callback5465 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QTableView.sizeHintForRow_calledFromC, callbackExcept5465);
    registerCallback(thisCpp, callback5465, 5465);
    final callback5471 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.updateEditorData_calledFromC);
    registerCallback(thisCpp, callback5471, 5471);
    final callback5472 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.updateEditorGeometries_calledFromC);
    registerCallback(thisCpp, callback5472, 5472);
    final callback5473 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QTableView.updateGeometries_calledFromC);
    registerCallback(thisCpp, callback5473, 5473);
    const callbackExcept5474 = 0;
    final callback5474 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QTableView.verticalOffset_calledFromC, callbackExcept5474);
    registerCallback(thisCpp, callback5474, 5474);
    final callback5475 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QTableView.verticalScrollbarAction_calledFromC);
    registerCallback(thisCpp, callback5475, 5475);
    final callback5476 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.verticalScrollbarValueChanged_calledFromC);
    registerCallback(thisCpp, callback5476, 5476);
    const callbackExcept5229 = 0;
    final callback5229 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.viewportEvent_calledFromC, callbackExcept5229);
    registerCallback(thisCpp, callback5229, 5229);
    final callback5230 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QTableView.viewportSizeHint_calledFromC);
    registerCallback(thisCpp, callback5230, 5230);
    final callback5479 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QTableView.visualRect_calledFromC);
    registerCallback(thisCpp, callback5479, 5479);
    final callback5480 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QTableView.visualRegionForSelection_calledFromC);
    registerCallback(thisCpp, callback5480, 5480);
  }
}

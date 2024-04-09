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

class QListView extends QAbstractItemView {
  QListView.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QListView.init() : super.init() {}
  factory QListView.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer)) {
      var instance = QObject.s_dartInstanceByCppPtr[cppPointer.address];
      if (instance != null) return instance as QListView;
    }
    return QListView.fromCppPointer(cppPointer, needsAutoDelete);
  }
  String getFinalizerName() {
    return "c_QListView_Finalizer";
  } //QListView(QWidget * parent)

  QListView({required QWidget? parent}) : super.init() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QListView__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    QObject.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // batchSize() const
  int batchSize() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QListView__batchSize')
        .asFunction();
    return func(thisCpp);
  }

  static void changeEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::changeEvent(QEvent * arg__1)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.changeEvent((arg__1 == null || arg__1.address == 0)
        ? null
        : QEvent.fromCppPointer(arg__1));
  } // clearPropertyFlags()

  clearPropertyFlags() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QListView__clearPropertyFlags')
        .asFunction();
    func(thisCpp);
  }

  static void commitData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? editor) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::commitData(QWidget * editor)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.commitData((editor == null || editor.address == 0)
        ? null
        : QWidget.fromCppPointer(editor));
  } // contentsSize() const

  QSize contentsSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QListView__contentsSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static void currentChanged_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> current, ffi.Pointer<void> previous) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::currentChanged(const QModelIndex & current, const QModelIndex & previous)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.currentChanged(QModelIndex.fromCppPointer(current),
        QModelIndex.fromCppPointer(previous));
  }

  static void customEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::customEvent(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QList<int > & roles)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::devType() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.devType();
    return result;
  }

  static void doItemsLayout_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::doItemsLayout()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.doItemsLayout();
  }

  static void editorDestroyed_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? editor) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::editorDestroyed(QObject * editor)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.editorDestroyed((editor == null || editor.address == 0)
        ? null
        : QObject.fromCppPointer(editor));
  }

  static int event_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::event(QEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .event((e == null || e.address == 0) ? null : QEvent.fromCppPointer(e));
    return result ? 1 : 0;
  }

  static int eventFilter_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void>? object, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::eventFilter(QObject * object, QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::focusNextPrevChild(bool next)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.focusNextPrevChild(next != 0);
    return result ? 1 : 0;
  } // gridSize() const

  QSize gridSize() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QListView__gridSize')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }

  static int hasHeightForWidth_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::hasHeightForWidth() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.hasHeightForWidth();
    return result ? 1 : 0;
  }

  static int heightForWidth_calledFromC(ffi.Pointer<void> thisCpp, int arg__1) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::heightForWidth(int arg__1) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.heightForWidth(arg__1);
    return result;
  }

  static int horizontalOffset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::horizontalOffset() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.horizontalOffset();
    return result;
  }

  static void horizontalScrollbarAction_calledFromC(
      ffi.Pointer<void> thisCpp, int action) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::horizontalScrollbarAction(int action)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.horizontalScrollbarAction(action);
  }

  static void horizontalScrollbarValueChanged_calledFromC(
      ffi.Pointer<void> thisCpp, int value) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::horizontalScrollbarValueChanged(int value)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.horizontalScrollbarValueChanged(value);
  }

  static ffi.Pointer<void> indexAt_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? p) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::indexAt(const QPoint & p) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.indexAt(
        (p == null || p.address == 0) ? null : QPoint.fromCppPointer(p));
    return result.thisCpp;
  } // indexesMoved(const QList<QModelIndex > & indexes)

  indexesMoved(QList? indexes) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QListView__indexesMoved_QList_QModelIndex')
        .asFunction();
    func(thisCpp, indexes == null ? ffi.nullptr : indexes.thisCpp);
  }

  void onIndexesMoved(Function callback, {QObject? context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'c_QListView__onIndexesMoved_QList_QModelIndex')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onIndexesMoved_callback);
    final callbackMethod = onIndexesMoved_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onIndexesMoved_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onIndexesMoved_callback] ?? [];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }

  static void initPainter_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? painter) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::initPainter(QPainter * painter) const! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.initPainter((painter == null || painter.address == 0)
        ? null
        : QPainter.fromCppPointer(painter));
  }

  static int isIndexHidden_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::isIndexHidden(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result =
        dartInstance.isIndexHidden(QModelIndex.fromCppPointer(index));
    return result ? 1 : 0;
  } // isRowHidden(int row) const

  bool isRowHidden(int row) {
    final bool_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_ffi_Int32_FFI>>(
            'c_QListView__isRowHidden_int')
        .asFunction();
    return func(thisCpp, row) != 0;
  } // isSelectionRectVisible() const

  bool isSelectionRectVisible() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QListView__isSelectionRectVisible')
        .asFunction();
    return func(thisCpp) != 0;
  } // isWrapping() const

  bool isWrapping() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QListView__isWrapping')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void keyboardSearch_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? search) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::keyboardSearch(const QString & search)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.keyboardSearch(QString.fromCppPointer(search).toDartString());
  }

  static void leaveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::leaveEvent(QEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.leaveEvent((event == null || event.address == 0)
        ? null
        : QEvent.fromCppPointer(event));
  }

  static ffi.Pointer<void> minimumSizeHint_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::minimumSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.minimumSizeHint();
    return result.thisCpp;
  } // modelColumn() const

  int modelColumn() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QListView__modelColumn')
        .asFunction();
    return func(thisCpp);
  }

  static void mouseDoubleClickEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::mouseDoubleClickEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseDoubleClickEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseMoveEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::mouseMoveEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseMoveEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static void mousePressEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::mousePressEvent(QMouseEvent * event)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mousePressEvent((event == null || event.address == 0)
        ? null
        : QMouseEvent.fromCppPointer(event));
  }

  static void mouseReleaseEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::mouseReleaseEvent(QMouseEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.mouseReleaseEvent(
        (e == null || e.address == 0) ? null : QMouseEvent.fromCppPointer(e));
  }

  static ffi.Pointer<void> moveCursor_calledFromC(
      ffi.Pointer<void> thisCpp, int cursorAction, int modifiers) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers)! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.moveCursor(cursorAction, modifiers);
    return result.thisCpp;
  }

  static void paintEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? e) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::paintEvent(QPaintEvent * e)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.paintEvent(
        (e == null || e.address == 0) ? null : QPaintEvent.fromCppPointer(e));
  } // rectForIndex(const QModelIndex & index) const

  QRect rectForIndex(QModelIndex index) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QListView__rectForIndex_QModelIndex')
        .asFunction();
    ffi.Pointer<void> result =
        func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
    return QRect.fromCppPointer(result, true);
  }

  static void reset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::reset()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.reset();
  } // resizeContents(int width, int height)

  resizeContents(int width, int height) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QListView__resizeContents_int_int')
        .asFunction();
    func(thisCpp, width, height);
  }

  static void rowsAboutToBeRemoved_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent, int start, int end) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.rowsAboutToBeRemoved(
        QModelIndex.fromCppPointer(parent), start, end);
  }

  static void rowsInserted_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> parent, int start, int end) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::rowsInserted(const QModelIndex & parent, int start, int end)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.rowsInserted(QModelIndex.fromCppPointer(parent), start, end);
  }

  static void scrollContentsBy_calledFromC(
      ffi.Pointer<void> thisCpp, int dx, int dy) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::scrollContentsBy(int dx, int dy)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollContentsBy(dx, dy);
  }

  static void scrollTo_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index, int hint) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.scrollTo(QModelIndex.fromCppPointer(index), hint: hint);
  }

  static void selectAll_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::selectAll()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.selectAll();
  }

  static ffi.Pointer<void> selectedIndexes_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::selectedIndexes() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.selectedIndexes();
    return result.thisCpp;
  }

  static void selectionChanged_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> selected, ffi.Pointer<void> deselected) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.selectionChanged(QItemSelection.fromCppPointer(selected),
        QItemSelection.fromCppPointer(deselected));
  }

  static int selectionCommand_calledFromC(ffi.Pointer<void> thisCpp,
      ffi.Pointer<void> index, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::selectionCommand(const QModelIndex & index, const QEvent * event) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.selectionCommand(
        QModelIndex.fromCppPointer(index),
        event: (event == null || event.address == 0)
            ? null
            : QEvent.fromCppPointer(event));
    return result;
  } // setBatchSize(int batchSize)

  setBatchSize(int batchSize) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QListView__setBatchSize_int')
        .asFunction();
    func(thisCpp, batchSize);
  } // setGridSize(const QSize & size)

  setGridSize(QSize? size) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QListView__setGridSize_QSize')
        .asFunction();
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  }

  static void setModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? model) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::setModel(QAbstractItemModel * model)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setModel((model == null || model.address == 0)
        ? null
        : QAbstractItemModel.fromCppPointer(model));
  } // setModelColumn(int column)

  setModelColumn(int column) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QListView__setModelColumn_int')
        .asFunction();
    func(thisCpp, column);
  } // setPositionForIndex(const QPoint & position, const QModelIndex & index)

  setPositionForIndex(QPoint? position, QModelIndex index) {
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'c_QListView__setPositionForIndex_QPoint_QModelIndex')
        .asFunction();
    func(thisCpp, position == null ? ffi.nullptr : position.thisCpp,
        index == null ? ffi.nullptr : index.thisCpp);
  }

  static void setRootIndex_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::setRootIndex(const QModelIndex & index)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setRootIndex(QModelIndex.fromCppPointer(index));
  } // setRowHidden(int row, bool hide)

  setRowHidden(int row, bool hide) {
    final void_Func_voidstar_int_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int8_FFI>>(
            'c_QListView__setRowHidden_int_bool')
        .asFunction();
    func(thisCpp, row, hide ? 1 : 0);
  }

  static void setSelection_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? rect, int command) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSelection(
        (rect == null || rect.address == 0) ? null : QRect.fromCppPointer(rect),
        command);
  }

  static void setSelectionModel_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? selectionModel) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::setSelectionModel(QItemSelectionModel * selectionModel)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setSelectionModel(
        (selectionModel == null || selectionModel.address == 0)
            ? null
            : QItemSelectionModel.fromCppPointer(selectionModel));
  } // setSelectionRectVisible(bool show)

  setSelectionRectVisible(bool show) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QListView__setSelectionRectVisible_bool')
        .asFunction();
    func(thisCpp, show ? 1 : 0);
  } // setSpacing(int space)

  setSpacing(int space) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QListView__setSpacing_int')
        .asFunction();
    func(thisCpp, space);
  } // setUniformItemSizes(bool enable)

  setUniformItemSizes(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QListView__setUniformItemSizes_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  }

  static void setVisible_calledFromC(ffi.Pointer<void> thisCpp, int visible) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::setVisible(bool visible)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setVisible(visible != 0);
  } // setWordWrap(bool on)

  setWordWrap(bool on) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QListView__setWordWrap_bool')
        .asFunction();
    func(thisCpp, on ? 1 : 0);
  } // setWrapping(bool enable)

  setWrapping(bool enable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QListView__setWrapping_bool')
        .asFunction();
    func(thisCpp, enable ? 1 : 0);
  }

  static void setupViewport_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? viewport) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::setupViewport(QWidget * viewport)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setupViewport((viewport == null || viewport.address == 0)
        ? null
        : QWidget.fromCppPointer(viewport));
  }

  static ffi.Pointer<void> sharedPainter_calledFromC(
      ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::sharedPainter() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sharedPainter();
    return result.thisCpp;
  }

  static ffi.Pointer<void> sizeHint_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::sizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHint();
    return result.thisCpp;
  }

  static int sizeHintForColumn_calledFromC(
      ffi.Pointer<void> thisCpp, int column) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::sizeHintForColumn(int column) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHintForColumn(column);
    return result;
  }

  static int sizeHintForRow_calledFromC(ffi.Pointer<void> thisCpp, int row) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::sizeHintForRow(int row) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.sizeHintForRow(row);
    return result;
  } // spacing() const

  int spacing() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QListView__spacing')
        .asFunction();
    return func(thisCpp);
  }

  static // tr(const char * s, const char * c, int n)
      QString tr(String? s, String? c, int n) {
    final voidstar_Func_string_string_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_string_string_ffi_Int32_FFI>>(
            'c_static_QListView__tr_char_char_int')
        .asFunction();
    ffi.Pointer<void> result = func(
        s?.toNativeUtf8() ?? ffi.nullptr, c?.toNativeUtf8() ?? ffi.nullptr, n);
    return QString.fromCppPointer(result, true);
  } // uniformItemSizes() const

  bool uniformItemSizes() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QListView__uniformItemSizes')
        .asFunction();
    return func(thisCpp) != 0;
  }

  static void updateEditorData_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::updateEditorData()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateEditorData();
  }

  static void updateEditorGeometries_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::updateEditorGeometries()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateEditorGeometries();
  }

  static void updateGeometries_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::updateGeometries()! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.updateGeometries();
  }

  static int verticalOffset_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::verticalOffset() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.verticalOffset();
    return result;
  }

  static void verticalScrollbarAction_calledFromC(
      ffi.Pointer<void> thisCpp, int action) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::verticalScrollbarAction(int action)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.verticalScrollbarAction(action);
  }

  static void verticalScrollbarValueChanged_calledFromC(
      ffi.Pointer<void> thisCpp, int value) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::verticalScrollbarValueChanged(int value)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.verticalScrollbarValueChanged(value);
  }

  static int viewportEvent_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void>? event) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::viewportEvent(QEvent * event)! (${thisCpp.address})");
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
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::viewportSizeHint() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.viewportSizeHint();
    return result.thisCpp;
  } // visualIndex(const QModelIndex & index) const

  int visualIndex(QModelIndex index) {
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'c_QListView__visualIndex_QModelIndex')
        .asFunction();
    return func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }

  static ffi.Pointer<void> visualRect_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> index) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::visualRect(const QModelIndex & index) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.visualRect(QModelIndex.fromCppPointer(index));
    return result.thisCpp;
  }

  static ffi.Pointer<void> visualRegionForSelection_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> selection) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QListView;
    if (dartInstance == null) {
      print(
          "Dart instance not found for QListView::visualRegionForSelection(const QItemSelection & selection) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance
        .visualRegionForSelection(QItemSelection.fromCppPointer(selection));
    return result.thisCpp;
  } // wordWrap() const

  bool wordWrap() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QListView__wordWrap')
        .asFunction();
    return func(thisCpp) != 0;
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QListView__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 1128:
        return "c_QListView__changeEvent_QEvent";
      case 5397:
        return "c_QListView__commitData_QWidget";
      case 5399:
        return "c_QListView__currentChanged_QModelIndex_QModelIndex";
      case 946:
        return "c_QListView__customEvent_QEvent";
      case 5401:
        return "c_QListView__dataChanged_QModelIndex_QModelIndex_QList_int";
      case 1145:
        return "c_QListView__devType";
      case 5404:
        return "c_QListView__doItemsLayout";
      case 5409:
        return "c_QListView__editorDestroyed_QObject";
      case 956:
        return "c_QListView__event_QEvent";
      case 957:
        return "c_QListView__eventFilter_QObject_QEvent";
      case 1155:
        return "c_QListView__focusNextPrevChild_bool";
      case 1169:
        return "c_QListView__hasHeightForWidth";
      case 1173:
        return "c_QListView__heightForWidth_int";
      case 5413:
        return "c_QListView__horizontalOffset";
      case 5414:
        return "c_QListView__horizontalScrollbarAction_int";
      case 5415:
        return "c_QListView__horizontalScrollbarValueChanged_int";
      case 5418:
        return "c_QListView__indexAt_QPoint";
      case 1176:
        return "c_QListView__initPainter_QPainter";
      case 5420:
        return "c_QListView__isIndexHidden_QModelIndex";
      case 5422:
        return "c_QListView__keyboardSearch_QString";
      case 1202:
        return "c_QListView__leaveEvent_QEvent";
      case 1222:
        return "c_QListView__minimumSizeHint";
      case 1224:
        return "c_QListView__mouseDoubleClickEvent_QMouseEvent";
      case 1226:
        return "c_QListView__mouseMoveEvent_QMouseEvent";
      case 1227:
        return "c_QListView__mousePressEvent_QMouseEvent";
      case 1228:
        return "c_QListView__mouseReleaseEvent_QMouseEvent";
      case 5425:
        return "c_QListView__moveCursor_CursorAction_KeyboardModifiers";
      case 1235:
        return "c_QListView__paintEvent_QPaintEvent";
      case 5428:
        return "c_QListView__reset";
      case 5432:
        return "c_QListView__rowsAboutToBeRemoved_QModelIndex_int_int";
      case 5433:
        return "c_QListView__rowsInserted_QModelIndex_int_int";
      case 5218:
        return "c_QListView__scrollContentsBy_int_int";
      case 5436:
        return "c_QListView__scrollTo_QModelIndex_ScrollHint";
      case 5439:
        return "c_QListView__selectAll";
      case 5440:
        return "c_QListView__selectedIndexes";
      case 5441:
        return "c_QListView__selectionChanged_QItemSelection_QItemSelection";
      case 5442:
        return "c_QListView__selectionCommand_QModelIndex_QEvent";
      case 5455:
        return "c_QListView__setModel_QAbstractItemModel";
      case 5456:
        return "c_QListView__setRootIndex_QModelIndex";
      case 5457:
        return "c_QListView__setSelection_QRect_SelectionFlags";
      case 5458:
        return "c_QListView__setSelectionModel_QItemSelectionModel";
      case 1314:
        return "c_QListView__setVisible_bool";
      case 5226:
        return "c_QListView__setupViewport_QWidget";
      case 1323:
        return "c_QListView__sharedPainter";
      case 1331:
        return "c_QListView__sizeHint";
      case 5463:
        return "c_QListView__sizeHintForColumn_int";
      case 5465:
        return "c_QListView__sizeHintForRow_int";
      case 5471:
        return "c_QListView__updateEditorData";
      case 5472:
        return "c_QListView__updateEditorGeometries";
      case 5473:
        return "c_QListView__updateGeometries";
      case 5474:
        return "c_QListView__verticalOffset";
      case 5475:
        return "c_QListView__verticalScrollbarAction_int";
      case 5476:
        return "c_QListView__verticalScrollbarValueChanged_int";
      case 5229:
        return "c_QListView__viewportEvent_QEvent";
      case 5230:
        return "c_QListView__viewportSizeHint";
      case 5479:
        return "c_QListView__visualRect_QModelIndex";
      case 5480:
        return "c_QListView__visualRegionForSelection_QItemSelection";
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
            'c_QListView__registerVirtualMethodCallback')
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
            QListView.currentChanged_calledFromC);
    registerCallback(thisCpp, callback5399, 5399);
    final callback946 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QObject.customEvent_calledFromC);
    registerCallback(thisCpp, callback946, 946);
    final callback5401 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_voidstar_voidstar_FFI>(
        QListView.dataChanged_calledFromC);
    registerCallback(thisCpp, callback5401, 5401);
    const callbackExcept1145 = 0;
    final callback1145 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QWidget.devType_calledFromC, callbackExcept1145);
    registerCallback(thisCpp, callback1145, 1145);
    final callback5404 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QListView.doItemsLayout_calledFromC);
    registerCallback(thisCpp, callback5404, 5404);
    final callback5409 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.editorDestroyed_calledFromC);
    registerCallback(thisCpp, callback5409, 5409);
    const callbackExcept956 = 0;
    final callback956 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QListView.event_calledFromC, callbackExcept956);
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
        QListView.horizontalOffset_calledFromC, callbackExcept5413);
    registerCallback(thisCpp, callback5413, 5413);
    final callback5414 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.horizontalScrollbarAction_calledFromC);
    registerCallback(thisCpp, callback5414, 5414);
    final callback5415 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.horizontalScrollbarValueChanged_calledFromC);
    registerCallback(thisCpp, callback5415, 5415);
    final callback5418 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QListView.indexAt_calledFromC);
    registerCallback(thisCpp, callback5418, 5418);
    final callback1176 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QWidget.initPainter_calledFromC);
    registerCallback(thisCpp, callback1176, 1176);
    const callbackExcept5420 = 0;
    final callback5420 =
        ffi.Pointer.fromFunction<bool_Func_voidstar_voidstar_FFI>(
            QListView.isIndexHidden_calledFromC, callbackExcept5420);
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
            QListView.mouseMoveEvent_calledFromC);
    registerCallback(thisCpp, callback1226, 1226);
    final callback1227 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.mousePressEvent_calledFromC);
    registerCallback(thisCpp, callback1227, 1227);
    final callback1228 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QListView.mouseReleaseEvent_calledFromC);
    registerCallback(thisCpp, callback1228, 1228);
    final callback5425 = ffi.Pointer.fromFunction<
            voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QListView.moveCursor_calledFromC);
    registerCallback(thisCpp, callback5425, 5425);
    final callback1235 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QListView.paintEvent_calledFromC);
    registerCallback(thisCpp, callback1235, 1235);
    final callback5428 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QListView.reset_calledFromC);
    registerCallback(thisCpp, callback5428, 5428);
    final callback5432 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QListView.rowsAboutToBeRemoved_calledFromC);
    registerCallback(thisCpp, callback5432, 5432);
    final callback5433 = ffi.Pointer.fromFunction<
            void_Func_voidstar_voidstar_ffi_Int32_ffi_Int32_FFI>(
        QListView.rowsInserted_calledFromC);
    registerCallback(thisCpp, callback5433, 5433);
    final callback5218 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>(
            QListView.scrollContentsBy_calledFromC);
    registerCallback(thisCpp, callback5218, 5218);
    final callback5436 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QListView.scrollTo_calledFromC);
    registerCallback(thisCpp, callback5436, 5436);
    final callback5439 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.selectAll_calledFromC);
    registerCallback(thisCpp, callback5439, 5439);
    final callback5440 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QListView.selectedIndexes_calledFromC);
    registerCallback(thisCpp, callback5440, 5440);
    final callback5441 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_voidstar_FFI>(
            QListView.selectionChanged_calledFromC);
    registerCallback(thisCpp, callback5441, 5441);
    const callbackExcept5442 = 0;
    final callback5442 =
        ffi.Pointer.fromFunction<int_Func_voidstar_voidstar_voidstar_FFI>(
            QAbstractItemView.selectionCommand_calledFromC, callbackExcept5442);
    registerCallback(thisCpp, callback5442, 5442);
    final callback5455 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.setModel_calledFromC);
    registerCallback(thisCpp, callback5455, 5455);
    final callback5456 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QListView.setRootIndex_calledFromC);
    registerCallback(thisCpp, callback5456, 5456);
    final callback5457 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QListView.setSelection_calledFromC);
    registerCallback(thisCpp, callback5457, 5457);
    final callback5458 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_FFI>(
            QAbstractItemView.setSelectionModel_calledFromC);
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
            QAbstractItemView.sizeHintForColumn_calledFromC,
            callbackExcept5463);
    registerCallback(thisCpp, callback5463, 5463);
    const callbackExcept5465 = 0;
    final callback5465 =
        ffi.Pointer.fromFunction<int_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.sizeHintForRow_calledFromC, callbackExcept5465);
    registerCallback(thisCpp, callback5465, 5465);
    final callback5471 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.updateEditorData_calledFromC);
    registerCallback(thisCpp, callback5471, 5471);
    final callback5472 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QAbstractItemView.updateEditorGeometries_calledFromC);
    registerCallback(thisCpp, callback5472, 5472);
    final callback5473 = ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(
        QListView.updateGeometries_calledFromC);
    registerCallback(thisCpp, callback5473, 5473);
    const callbackExcept5474 = 0;
    final callback5474 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QListView.verticalOffset_calledFromC, callbackExcept5474);
    registerCallback(thisCpp, callback5474, 5474);
    final callback5475 =
        ffi.Pointer.fromFunction<void_Func_voidstar_ffi_Int32_FFI>(
            QAbstractItemView.verticalScrollbarAction_calledFromC);
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
        QListView.viewportSizeHint_calledFromC);
    registerCallback(thisCpp, callback5230, 5230);
    final callback5479 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QListView.visualRect_calledFromC);
    registerCallback(thisCpp, callback5479, 5479);
    final callback5480 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_voidstar_FFI>(
            QListView.visualRegionForSelection_calledFromC);
    registerCallback(thisCpp, callback5480, 5480);
  }
}

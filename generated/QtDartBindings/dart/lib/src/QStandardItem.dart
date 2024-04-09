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
final _finalizerFunc = (String name) {
  return _dylib
      .lookup<ffi.NativeFunction<ffi.Void Function(ffi.Pointer)>>(name);
};

Map<String, ffi.NativeFinalizer> _finalizers = {};

class QStandardItem implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QStandardItem>();
  var _thisCpp = null;
  bool _needsAutoDelete = false;
  get thisCpp => _thisCpp;
  set thisCpp(var ptr) {
    _thisCpp = ptr;
    ffi.Pointer<ffi.Void> ptrvoid = ptr.cast<ffi.Void>();
    if (_needsAutoDelete) {
      final String finalizerName = getFinalizerName();
      if (!_finalizers.keys.contains(runtimeType)) {
        _finalizers[finalizerName] =
            ffi.NativeFinalizer(_finalizerFunc(finalizerName).cast());
      }
      _finalizers[finalizerName]!.attach(this, ptrvoid);
    }
  }

  static bool isCached(var cppPointer) {
    return s_dartInstanceByCppPtr.containsKey(cppPointer.address);
  }

  factory QStandardItem.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
            QStandardItem.fromCppPointer(cppPointer, needsAutoDelete))
        as QStandardItem;
  }
  QStandardItem.fromCppPointer(var cppPointer,
      [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QStandardItem.init() {}
  String getFinalizerName() {
    return "c_QStandardItem_Finalizer";
  } //QStandardItem()

  QStandardItem() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            'c_QStandardItem__constructor')
        .asFunction();
    thisCpp = func();
    QStandardItem.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QStandardItem(const QIcon & icon, const QString & text)
  QStandardItem.ctor2(QIcon icon, String? text) {
    final voidstar_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__constructor_QIcon_QString')
        .asFunction();
    thisCpp = func(icon == null ? ffi.nullptr : icon.thisCpp,
        text?.toNativeUtf8() ?? ffi.nullptr);
    QStandardItem.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QStandardItem(const QString & text)
  QStandardItem.ctor3(String? text) {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__constructor_QString')
        .asFunction();
    thisCpp = func(text?.toNativeUtf8() ?? ffi.nullptr);
    QStandardItem.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } //QStandardItem(int rows, int columns)
  QStandardItem.ctor4(int rows, {int columns = 1}) {
    final voidstar_Func_int_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__constructor_int_int')
        .asFunction();
    thisCpp = func(rows, columns);
    QStandardItem.s_dartInstanceByCppPtr[thisCpp.address] = this;
    registerCallbacks();
  } // accessibleDescription() const
  QString accessibleDescription() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__accessibleDescription')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // accessibleText() const

  QString accessibleText() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__accessibleText')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // appendColumn(const QList<QStandardItem* > & items)

  appendColumn(QList? items) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__appendColumn_QList_QStandardItem')
        .asFunction();
    func(thisCpp, items == null ? ffi.nullptr : items.thisCpp);
  } // appendRow(QStandardItem * item)

  appendRow(QStandardItem? item) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__appendRow_QStandardItem')
        .asFunction();
    func(thisCpp, item == null ? ffi.nullptr : item.thisCpp);
  } // appendRow(const QList<QStandardItem* > & items)

  appendRow_2(QList? items) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__appendRow_QList_QStandardItem')
        .asFunction();
    func(thisCpp, items == null ? ffi.nullptr : items.thisCpp);
  } // appendRows(const QList<QStandardItem* > & items)

  appendRows(QList? items) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__appendRows_QList_QStandardItem')
        .asFunction();
    func(thisCpp, items == null ? ffi.nullptr : items.thisCpp);
  } // background() const

  QBrush background() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__background')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, true);
  } // child(int row, int column) const

  QStandardItem child(int row, {int column = 0}) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__child_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row, column);
    return QStandardItem.fromCppPointer(result, false);
  } // clearData()

  clearData() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStandardItem__clearData')
        .asFunction();
    func(thisCpp);
  } // clone() const

  QStandardItem clone() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            cFunctionSymbolName(280))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QStandardItem.fromCppPointer(result, false);
  }

  static ffi.Pointer<void> clone_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QStandardItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStandardItem::clone() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.clone();
    return result.thisCpp;
  } // column() const

  int column() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStandardItem__column')
        .asFunction();
    return func(thisCpp);
  } // columnCount() const

  int columnCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStandardItem__columnCount')
        .asFunction();
    return func(thisCpp);
  } // data(int role) const

  QVariant data({int role = Qt_ItemDataRole.UserRole + 1}) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(283))
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, role);
    return QVariant.fromCppPointer(result, true);
  }

  static ffi.Pointer<void> data_calledFromC(
      ffi.Pointer<void> thisCpp, int role) {
    var dartInstance = QStandardItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStandardItem::data(int role) const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.data(role: role);
    return result.thisCpp;
  } // emitDataChanged()

  emitDataChanged() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStandardItem__emitDataChanged')
        .asFunction();
    func(thisCpp);
  } // font() const

  QFont font() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__font')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QFont.fromCppPointer(result, true);
  } // foreground() const

  QBrush foreground() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__foreground')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QBrush.fromCppPointer(result, true);
  } // hasChildren() const

  bool hasChildren() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__hasChildren')
        .asFunction();
    return func(thisCpp) != 0;
  } // icon() const

  QIcon icon() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__icon')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QIcon.fromCppPointer(result, true);
  } // index() const

  QModelIndex index() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__index')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  } // insertColumn(int column, const QList<QStandardItem* > & items)

  insertColumn(int column, QList? items) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QStandardItem__insertColumn_int_QList_QStandardItem')
        .asFunction();
    func(thisCpp, column, items == null ? ffi.nullptr : items.thisCpp);
  } // insertColumns(int column, int count)

  insertColumns(int column, int count) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__insertColumns_int_int')
        .asFunction();
    func(thisCpp, column, count);
  } // insertRow(int row, QStandardItem * item)

  insertRow(int row, QStandardItem? item) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QStandardItem__insertRow_int_QStandardItem')
        .asFunction();
    func(thisCpp, row, item == null ? ffi.nullptr : item.thisCpp);
  } // insertRow(int row, const QList<QStandardItem* > & items)

  insertRow_2(int row, QList? items) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QStandardItem__insertRow_int_QList_QStandardItem')
        .asFunction();
    func(thisCpp, row, items == null ? ffi.nullptr : items.thisCpp);
  } // insertRows(int row, const QList<QStandardItem* > & items)

  insertRows(int row, QList? items) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QStandardItem__insertRows_int_QList_QStandardItem')
        .asFunction();
    func(thisCpp, row, items == null ? ffi.nullptr : items.thisCpp);
  } // insertRows(int row, int count)

  insertRows_2(int row, int count) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__insertRows_int_int')
        .asFunction();
    func(thisCpp, row, count);
  } // isAutoTristate() const

  bool isAutoTristate() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isAutoTristate')
        .asFunction();
    return func(thisCpp) != 0;
  } // isCheckable() const

  bool isCheckable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isCheckable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isDragEnabled() const

  bool isDragEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isDragEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isDropEnabled() const

  bool isDropEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isDropEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isEditable() const

  bool isEditable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isEditable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isEnabled() const

  bool isEnabled() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isEnabled')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSelectable() const

  bool isSelectable() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isSelectable')
        .asFunction();
    return func(thisCpp) != 0;
  } // isUserTristate() const

  bool isUserTristate() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'c_QStandardItem__isUserTristate')
        .asFunction();
    return func(thisCpp) != 0;
  } // model() const

  QStandardItemModel model() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__model')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QStandardItemModel.fromCppPointer(result, false);
  } // parent() const

  QStandardItem parent() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__parent')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QStandardItem.fromCppPointer(result, false);
  } // removeColumn(int column)

  removeColumn(int column) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStandardItem__removeColumn_int')
        .asFunction();
    func(thisCpp, column);
  } // removeColumns(int column, int count)

  removeColumns(int column, int count) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__removeColumns_int_int')
        .asFunction();
    func(thisCpp, column, count);
  } // removeRow(int row)

  removeRow(int row) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStandardItem__removeRow_int')
        .asFunction();
    func(thisCpp, row);
  } // removeRows(int row, int count)

  removeRows(int row, int count) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__removeRows_int_int')
        .asFunction();
    func(thisCpp, row, count);
  } // row() const

  int row() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStandardItem__row')
        .asFunction();
    return func(thisCpp);
  } // rowCount() const

  int rowCount() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'c_QStandardItem__rowCount')
        .asFunction();
    return func(thisCpp);
  } // setAccessibleDescription(const QString & accessibleDescription)

  setAccessibleDescription(String? accessibleDescription) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setAccessibleDescription_QString')
        .asFunction();
    func(thisCpp, accessibleDescription?.toNativeUtf8() ?? ffi.nullptr);
  } // setAccessibleText(const QString & accessibleText)

  setAccessibleText(String? accessibleText) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setAccessibleText_QString')
        .asFunction();
    func(thisCpp, accessibleText?.toNativeUtf8() ?? ffi.nullptr);
  } // setAutoTristate(bool tristate)

  setAutoTristate(bool tristate) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setAutoTristate_bool')
        .asFunction();
    func(thisCpp, tristate ? 1 : 0);
  } // setBackground(const QBrush & brush)

  setBackground(QBrush brush) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setBackground_QBrush')
        .asFunction();
    func(thisCpp, brush == null ? ffi.nullptr : brush.thisCpp);
  } // setCheckable(bool checkable)

  setCheckable(bool checkable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setCheckable_bool')
        .asFunction();
    func(thisCpp, checkable ? 1 : 0);
  } // setChild(int row, QStandardItem * item)

  setChild(int row, QStandardItem? item) {
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'c_QStandardItem__setChild_int_QStandardItem')
        .asFunction();
    func(thisCpp, row, item == null ? ffi.nullptr : item.thisCpp);
  } // setChild(int row, int column, QStandardItem * item)

  setChild_2(int row, int column, QStandardItem? item) {
    final void_Func_voidstar_int_int_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_ffi_Int32_voidstar_FFI>>(
            'c_QStandardItem__setChild_int_int_QStandardItem')
        .asFunction();
    func(thisCpp, row, column, item == null ? ffi.nullptr : item.thisCpp);
  } // setColumnCount(int columns)

  setColumnCount(int columns) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStandardItem__setColumnCount_int')
        .asFunction();
    func(thisCpp, columns);
  } // setData(const QVariant & value, int role)

  setData(QVariant value, {int role = Qt_ItemDataRole.UserRole + 1}) {
    final void_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            cFunctionSymbolName(322))
        .asFunction();
    func(thisCpp, value == null ? ffi.nullptr : value.thisCpp, role);
  }

  static void setData_calledFromC(
      ffi.Pointer<void> thisCpp, ffi.Pointer<void> value, int role) {
    var dartInstance = QStandardItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStandardItem::setData(const QVariant & value, int role)! (${thisCpp.address})");
      throw Error();
    }
    dartInstance.setData(QVariant.fromCppPointer(value), role: role);
  } // setDragEnabled(bool dragEnabled)

  setDragEnabled(bool dragEnabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setDragEnabled_bool')
        .asFunction();
    func(thisCpp, dragEnabled ? 1 : 0);
  } // setDropEnabled(bool dropEnabled)

  setDropEnabled(bool dropEnabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setDropEnabled_bool')
        .asFunction();
    func(thisCpp, dropEnabled ? 1 : 0);
  } // setEditable(bool editable)

  setEditable(bool editable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setEditable_bool')
        .asFunction();
    func(thisCpp, editable ? 1 : 0);
  } // setEnabled(bool enabled)

  setEnabled(bool enabled) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setEnabled_bool')
        .asFunction();
    func(thisCpp, enabled ? 1 : 0);
  } // setFont(const QFont & font)

  setFont(QFont? font) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setFont_QFont')
        .asFunction();
    func(thisCpp, font == null ? ffi.nullptr : font.thisCpp);
  } // setForeground(const QBrush & brush)

  setForeground(QBrush brush) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setForeground_QBrush')
        .asFunction();
    func(thisCpp, brush == null ? ffi.nullptr : brush.thisCpp);
  } // setIcon(const QIcon & icon)

  setIcon(QIcon icon) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setIcon_QIcon')
        .asFunction();
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp);
  } // setRowCount(int rows)

  setRowCount(int rows) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStandardItem__setRowCount_int')
        .asFunction();
    func(thisCpp, rows);
  } // setSelectable(bool selectable)

  setSelectable(bool selectable) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setSelectable_bool')
        .asFunction();
    func(thisCpp, selectable ? 1 : 0);
  } // setSizeHint(const QSize & sizeHint)

  setSizeHint(QSize? sizeHint) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setSizeHint_QSize')
        .asFunction();
    func(thisCpp, sizeHint == null ? ffi.nullptr : sizeHint.thisCpp);
  } // setStatusTip(const QString & statusTip)

  setStatusTip(String? statusTip) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setStatusTip_QString')
        .asFunction();
    func(thisCpp, statusTip?.toNativeUtf8() ?? ffi.nullptr);
  } // setText(const QString & text)

  setText(String? text) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setText_QString')
        .asFunction();
    func(thisCpp, text?.toNativeUtf8() ?? ffi.nullptr);
  } // setToolTip(const QString & toolTip)

  setToolTip(String? toolTip) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setToolTip_QString')
        .asFunction();
    func(thisCpp, toolTip?.toNativeUtf8() ?? ffi.nullptr);
  } // setUserTristate(bool tristate)

  setUserTristate(bool tristate) {
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'c_QStandardItem__setUserTristate_bool')
        .asFunction();
    func(thisCpp, tristate ? 1 : 0);
  } // setWhatsThis(const QString & whatsThis)

  setWhatsThis(String? whatsThis) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'c_QStandardItem__setWhatsThis_QString')
        .asFunction();
    func(thisCpp, whatsThis?.toNativeUtf8() ?? ffi.nullptr);
  } // sizeHint() const

  QSize sizeHint() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__sizeHint')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  } // sortChildren(int column, Qt::SortOrder order)

  sortChildren(int column, {int order = Qt_SortOrder.AscendingOrder}) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__sortChildren_int_SortOrder')
        .asFunction();
    func(thisCpp, column, order);
  } // statusTip() const

  QString statusTip() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__statusTip')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // takeChild(int row, int column)

  QStandardItem takeChild(int row, {int column = 0}) {
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'c_QStandardItem__takeChild_int_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row, column);
    return QStandardItem.fromCppPointer(result, false);
  } // takeColumn(int column)

  QList takeColumn(int column) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStandardItem__takeColumn_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, column);
    return QList<QStandardItem>.fromCppPointer(result, true);
  } // takeRow(int row)

  QList takeRow(int row) {
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'c_QStandardItem__takeRow_int')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp, row);
    return QList<QStandardItem>.fromCppPointer(result, true);
  } // text() const

  QString text() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__text')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // toolTip() const

  QString toolTip() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__toolTip')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  } // type() const

  int type() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            cFunctionSymbolName(346))
        .asFunction();
    return func(thisCpp);
  }

  static int type_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance = QStandardItem.s_dartInstanceByCppPtr[thisCpp.address];
    if (dartInstance == null) {
      print(
          "Dart instance not found for QStandardItem::type() const! (${thisCpp.address})");
      throw Error();
    }
    final result = dartInstance.type();
    return result;
  } // whatsThis() const

  QString whatsThis() {
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'c_QStandardItem__whatsThis')
        .asFunction();
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'c_QStandardItem__destructor')
        .asFunction();
    func(thisCpp);
  }

  String cFunctionSymbolName(int methodId) {
    switch (methodId) {
      case 280:
        return "c_QStandardItem__clone";
      case 283:
        return "c_QStandardItem__data_int";
      case 322:
        return "c_QStandardItem__setData_QVariant_int";
      case 346:
        return "c_QStandardItem__type";
    }
    return "";
  }

  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 280:
        return "clone";
      case 283:
        return "data";
      case 322:
        return "setData";
      case 346:
        return "type";
    }
    throw Error();
  }

  void registerCallbacks() {
    assert(thisCpp != null);
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'c_QStandardItem__registerVirtualMethodCallback')
        .asFunction();
    final callback280 = ffi.Pointer.fromFunction<voidstar_Func_voidstar_FFI>(
        QStandardItem.clone_calledFromC);
    registerCallback(thisCpp, callback280, 280);
    final callback283 =
        ffi.Pointer.fromFunction<voidstar_Func_voidstar_ffi_Int32_FFI>(
            QStandardItem.data_calledFromC);
    registerCallback(thisCpp, callback283, 283);
    final callback322 =
        ffi.Pointer.fromFunction<void_Func_voidstar_voidstar_ffi_Int32_FFI>(
            QStandardItem.setData_calledFromC);
    registerCallback(thisCpp, callback322, 322);
    const callbackExcept346 = 0;
    final callback346 = ffi.Pointer.fromFunction<int_Func_voidstar_FFI>(
        QStandardItem.type_calledFromC, callbackExcept346);
    registerCallback(thisCpp, callback346, 346);
  }
}

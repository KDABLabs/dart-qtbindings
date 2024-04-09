//tag=1052
import 'dart:ffi' as ffi;
import 'package:ffi/ffi.dart';
import 'TypeHelpers.dart';
import '../Bindings.dart';
import '../FinalizerHelpers.dart';

//tag=1051
var _dylib = Library.instance().dylib;
final _finalizer =
    _dylib.lookup<ffi.NativeFunction<Dart_WeakPersistentHandleFinalizer_Type>>(
        'dartffi_QComboBox_Finalizer');

class QComboBox extends QWidget {
//tag=1064
  QComboBox.fromCppPointer(var cppPointer, [var needsAutoDelete = false])
      : super.fromCppPointer(cppPointer, needsAutoDelete) {}
  QComboBox.init() : super.init() {}
//tag=1062
  factory QComboBox.fromCache(var cppPointer, [needsAutoDelete = false]) {
    if (QObject.isCached(cppPointer))
      return QObject.s_dartInstanceByCppPtr[cppPointer.address];
    return QComboBox.fromCppPointer(cppPointer, needsAutoDelete);
  }
//tag=1023
//QComboBox(QWidget * parent)
  QComboBox({QWidget parent}) : super.init() {
//tag=1075
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__constructor_QWidget')
        .asFunction();
    thisCpp = func(parent == null ? ffi.nullptr : parent.thisCpp);
    registerCallbacks(); // TODO|PERFORMANCE: Don't register in all derived classes
  }
//tag=1024

//tag=1027
// activated(int index)
  void activated(int index) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__activated_int')
        .asFunction();
//tag=1030
    func(thisCpp, index);
  }

//tag=1077
  void onActivated(Function callback, {QObject context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'dartffi_QComboBox__onActivated_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onActivated_callback);
    final callbackMethod = onActivated_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onActivated_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onActivated_callback];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }
//tag=1024

//tag=1027
// addItem(const QIcon & icon, const QString & text, const QVariant & userData)
  void addItem(QIcon icon, String text, {QVariant userData}) {
//tag=1028
    final void_Func_voidstar_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_voidstar_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__addItem_QIcon_QString_QVariant')
        .asFunction();
//tag=1030
    func(thisCpp, icon == null ? ffi.nullptr : icon.thisCpp,
        text.toNativeUtf8(), userData == null ? ffi.nullptr : userData.thisCpp);
  }
//tag=1024

//tag=1027
// addItem(const QString & text, const QVariant & userData)
  void addItem_2(String text, {QVariant userData}) {
//tag=1028
    final void_Func_voidstar_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__addItem_QString_QVariant')
        .asFunction();
//tag=1030
    func(thisCpp, text.toNativeUtf8(),
        userData == null ? ffi.nullptr : userData.thisCpp);
  }
//tag=1024

//tag=1027
// clear()
  void clear() {
//tag=1028
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'dartffi_QComboBox__clear')
        .asFunction();
//tag=1030
    func(thisCpp);
  }
//tag=1024

//tag=1027
// clearEditText()
  void clearEditText() {
//tag=1028
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'dartffi_QComboBox__clearEditText')
        .asFunction();
//tag=1030
    func(thisCpp);
  }
//tag=1024

//tag=1027
// count() const
  int count() {
//tag=1028
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'dartffi_QComboBox__count')
        .asFunction();
//tag=1031
    return func(thisCpp);
  }
//tag=1024

//tag=1027
// currentData(int role) const
  QVariant currentData({int role = Qt_ItemDataRole.UserRole}) {
//tag=1028
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__currentData_int')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp, role);
    return QVariant.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// currentIndex() const
  int currentIndex() {
//tag=1028
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'dartffi_QComboBox__currentIndex')
        .asFunction();
//tag=1031
    return func(thisCpp);
  }
//tag=1024

//tag=1027
// currentIndexChanged(int index)
  void currentIndexChanged(int index) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__currentIndexChanged_int')
        .asFunction();
//tag=1030
    func(thisCpp, index);
  }

//tag=1077
  void onCurrentIndexChanged(Function callback, {QObject context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'dartffi_QComboBox__onCurrentIndexChanged_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCurrentIndexChanged_callback);
    final callbackMethod = onCurrentIndexChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCurrentIndexChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onCurrentIndexChanged_callback];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }
//tag=1024

//tag=1027
// currentText() const
  QString currentText() {
//tag=1028
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__currentText')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// currentTextChanged(const QString & arg__1)
  void currentTextChanged(String arg__1) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__currentTextChanged_QString')
        .asFunction();
//tag=1030
    func(thisCpp, arg__1.toNativeUtf8());
  }

//tag=1077
  void onCurrentTextChanged(Function callback, {QObject context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'dartffi_QComboBox__onCurrentTextChanged_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onCurrentTextChanged_callback);
    final callbackMethod = onCurrentTextChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onCurrentTextChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onCurrentTextChanged_callback];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }
//tag=1024

//tag=1027
// duplicatesEnabled() const
  bool duplicatesEnabled() {
//tag=1028
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'dartffi_QComboBox__duplicatesEnabled')
        .asFunction();
//tag=1029
    return func(thisCpp) != 0;
  }
//tag=1024

//tag=1027
// editTextChanged(const QString & arg__1)
  void editTextChanged(String arg__1) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__editTextChanged_QString')
        .asFunction();
//tag=1030
    func(thisCpp, arg__1.toNativeUtf8());
  }

//tag=1077
  void onEditTextChanged(Function callback, {QObject context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'dartffi_QComboBox__onEditTextChanged_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onEditTextChanged_callback);
    final callbackMethod = onEditTextChanged_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onEditTextChanged_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onEditTextChanged_callback];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }
//tag=1024

//tag=1027
// findData(const QVariant & data, int role) const
  int findData(QVariant data, {int role = Qt_ItemDataRole.UserRole}) {
//tag=1028
    final int_Func_voidstar_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__findData_QVariant_int')
        .asFunction();
//tag=1031
    return func(thisCpp, data == null ? ffi.nullptr : data.thisCpp, role);
  }
//tag=1024

//tag=1027
// findText(const QString & text) const
  int findText(String text) {
//tag=1028
    final int_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__findText_QString')
        .asFunction();
//tag=1031
    return func(thisCpp, text.toNativeUtf8());
  }
//tag=1024

//tag=1027
// hasFrame() const
  bool hasFrame() {
//tag=1028
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'dartffi_QComboBox__hasFrame')
        .asFunction();
//tag=1029
    return func(thisCpp) != 0;
  }
//tag=1024

//tag=1027
// hidePopup()
  void hidePopup() {
//tag=1028
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'dartffi_QComboBox__hidePopup')
        .asFunction();
//tag=1030
    func(thisCpp);
  }

//tag=1035
  static void hidePopup_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    if (dartInstance == null) {
      print("Dart instance not found!");
      return null;
    }
//tag=1036
    dartInstance.hidePopup();
  }
//tag=1024

//tag=1027
// highlighted(int index)
  void highlighted(int index) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__highlighted_int')
        .asFunction();
//tag=1030
    func(thisCpp, index);
  }

//tag=1077
  void onHighlighted(Function callback, {QObject context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'dartffi_QComboBox__onHighlighted_int')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onHighlighted_callback);
    final callbackMethod = onHighlighted_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onHighlighted_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onHighlighted_callback];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }
//tag=1024

//tag=1027
// iconSize() const
  QSize iconSize() {
//tag=1028
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__iconSize')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp);
    return QSize.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// insertItem(int index, const QIcon & icon, const QString & text, const QVariant & userData)
  void insertItem(int index, QIcon icon, String text, {QVariant userData}) {
//tag=1028
    final void_Func_voidstar_int_voidstar_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__insertItem_int_QIcon_QString_QVariant')
        .asFunction();
//tag=1030
    func(thisCpp, index, icon == null ? ffi.nullptr : icon.thisCpp,
        text.toNativeUtf8(), userData == null ? ffi.nullptr : userData.thisCpp);
  }
//tag=1024

//tag=1027
// insertItem(int index, const QString & text, const QVariant & userData)
  void insertItem_2(int index, String text, {QVariant userData}) {
//tag=1028
    final void_Func_voidstar_int_voidstar_voidstar func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__insertItem_int_QString_QVariant')
        .asFunction();
//tag=1030
    func(thisCpp, index, text.toNativeUtf8(),
        userData == null ? ffi.nullptr : userData.thisCpp);
  }
//tag=1024

//tag=1027
// insertSeparator(int index)
  void insertSeparator(int index) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__insertSeparator_int')
        .asFunction();
//tag=1030
    func(thisCpp, index);
  }
//tag=1024

//tag=1027
// isEditable() const
  bool isEditable() {
//tag=1028
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            'dartffi_QComboBox__isEditable')
        .asFunction();
//tag=1029
    return func(thisCpp) != 0;
  }
//tag=1024

//tag=1027
// itemData(int index, int role) const
  QVariant itemData(int index, {int role = Qt_ItemDataRole.UserRole}) {
//tag=1028
    final voidstar_Func_voidstar_int_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    voidstar_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            'dartffi_QComboBox__itemData_int_int')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp, index, role);
    return QVariant.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// itemIcon(int index) const
  QIcon itemIcon(int index) {
//tag=1028
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__itemIcon_int')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp, index);
    return QIcon.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// itemText(int index) const
  QString itemText(int index) {
//tag=1028
    final voidstar_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__itemText_int')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp, index);
    return QString.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// lineEdit() const
  QLineEdit lineEdit() {
//tag=1028
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__lineEdit')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp);
    return QLineEdit.fromCppPointer(result, false);
  }
//tag=1024

//tag=1027
// maxCount() const
  int maxCount() {
//tag=1028
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'dartffi_QComboBox__maxCount')
        .asFunction();
//tag=1031
    return func(thisCpp);
  }
//tag=1024

//tag=1027
// maxVisibleItems() const
  int maxVisibleItems() {
//tag=1028
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'dartffi_QComboBox__maxVisibleItems')
        .asFunction();
//tag=1031
    return func(thisCpp);
  }
//tag=1024

//tag=1027
// minimumContentsLength() const
  int minimumContentsLength() {
//tag=1028
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'dartffi_QComboBox__minimumContentsLength')
        .asFunction();
//tag=1031
    return func(thisCpp);
  }
//tag=1024

//tag=1027
// model() const
  QAbstractItemModel model() {
//tag=1028
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__model')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp);
    return QAbstractItemModel.fromCppPointer(result, false);
  }
//tag=1024

//tag=1027
// modelColumn() const
  int modelColumn() {
//tag=1028
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            'dartffi_QComboBox__modelColumn')
        .asFunction();
//tag=1031
    return func(thisCpp);
  }
//tag=1024

//tag=1027
// placeholderText() const
  QString placeholderText() {
//tag=1028
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__placeholderText')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp);
    return QString.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// removeItem(int index)
  void removeItem(int index) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__removeItem_int')
        .asFunction();
//tag=1030
    func(thisCpp, index);
  }
//tag=1024

//tag=1027
// rootModelIndex() const
  QModelIndex rootModelIndex() {
//tag=1028
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__rootModelIndex')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp);
    return QModelIndex.fromCppPointer(result, true);
  }
//tag=1024

//tag=1027
// setCurrentIndex(int index)
  void setCurrentIndex(int index) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__setCurrentIndex_int')
        .asFunction();
//tag=1030
    func(thisCpp, index);
  }
//tag=1024

//tag=1027
// setCurrentText(const QString & text)
  void setCurrentText(String text) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setCurrentText_QString')
        .asFunction();
//tag=1030
    func(thisCpp, text.toNativeUtf8());
  }
//tag=1024

//tag=1027
// setDuplicatesEnabled(bool enable)
  void setDuplicatesEnabled(bool enable) {
//tag=1028
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'dartffi_QComboBox__setDuplicatesEnabled_bool')
        .asFunction();
//tag=1030
    func(thisCpp, enable ? 1 : 0);
  }
//tag=1024

//tag=1027
// setEditText(const QString & text)
  void setEditText(String text) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setEditText_QString')
        .asFunction();
//tag=1030
    func(thisCpp, text.toNativeUtf8());
  }
//tag=1024

//tag=1027
// setEditable(bool editable)
  void setEditable(bool editable) {
//tag=1028
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'dartffi_QComboBox__setEditable_bool')
        .asFunction();
//tag=1030
    func(thisCpp, editable ? 1 : 0);
  }
//tag=1024

//tag=1027
// setFrame(bool arg__1)
  void setFrame(bool arg__1) {
//tag=1028
    final void_Func_voidstar_bool func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int8_FFI>>(
            'dartffi_QComboBox__setFrame_bool')
        .asFunction();
//tag=1030
    func(thisCpp, arg__1 ? 1 : 0);
  }
//tag=1024

//tag=1027
// setIconSize(const QSize & size)
  void setIconSize(QSize size) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setIconSize_QSize')
        .asFunction();
//tag=1030
    func(thisCpp, size == null ? ffi.nullptr : size.thisCpp);
  }
//tag=1024

//tag=1027
// setItemData(int index, const QVariant & value, int role)
  void setItemData(int index, QVariant value,
      {int role = Qt_ItemDataRole.UserRole}) {
//tag=1028
    final void_Func_voidstar_int_voidstar_int func = _dylib
        .lookup<
                ffi.NativeFunction<
                    void_Func_voidstar_ffi_Int32_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__setItemData_int_QVariant_int')
        .asFunction();
//tag=1030
    func(thisCpp, index, value == null ? ffi.nullptr : value.thisCpp, role);
  }
//tag=1024

//tag=1027
// setItemIcon(int index, const QIcon & icon)
  void setItemIcon(int index, QIcon icon) {
//tag=1028
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'dartffi_QComboBox__setItemIcon_int_QIcon')
        .asFunction();
//tag=1030
    func(thisCpp, index, icon == null ? ffi.nullptr : icon.thisCpp);
  }
//tag=1024

//tag=1027
// setItemText(int index, const QString & text)
  void setItemText(int index, String text) {
//tag=1028
    final void_Func_voidstar_int_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_voidstar_FFI>>(
            'dartffi_QComboBox__setItemText_int_QString')
        .asFunction();
//tag=1030
    func(thisCpp, index, text.toNativeUtf8());
  }
//tag=1024

//tag=1027
// setLineEdit(QLineEdit * edit)
  void setLineEdit(QLineEdit edit) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setLineEdit_QLineEdit')
        .asFunction();
//tag=1030
    func(thisCpp, edit == null ? ffi.nullptr : edit.thisCpp);
  }
//tag=1024

//tag=1027
// setMaxCount(int max)
  void setMaxCount(int max) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__setMaxCount_int')
        .asFunction();
//tag=1030
    func(thisCpp, max);
  }
//tag=1024

//tag=1027
// setMaxVisibleItems(int maxItems)
  void setMaxVisibleItems(int maxItems) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__setMaxVisibleItems_int')
        .asFunction();
//tag=1030
    func(thisCpp, maxItems);
  }
//tag=1024

//tag=1027
// setMinimumContentsLength(int characters)
  void setMinimumContentsLength(int characters) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__setMinimumContentsLength_int')
        .asFunction();
//tag=1030
    func(thisCpp, characters);
  }
//tag=1024

//tag=1027
// setModel(QAbstractItemModel * model)
  void setModel(QAbstractItemModel model) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setModel_QAbstractItemModel')
        .asFunction();
//tag=1030
    func(thisCpp, model == null ? ffi.nullptr : model.thisCpp);
  }
//tag=1024

//tag=1027
// setModelColumn(int visibleColumn)
  void setModelColumn(int visibleColumn) {
//tag=1028
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            'dartffi_QComboBox__setModelColumn_int')
        .asFunction();
//tag=1030
    func(thisCpp, visibleColumn);
  }
//tag=1024

//tag=1027
// setPlaceholderText(const QString & placeholderText)
  void setPlaceholderText(String placeholderText) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setPlaceholderText_QString')
        .asFunction();
//tag=1030
    func(thisCpp, placeholderText.toNativeUtf8());
  }
//tag=1024

//tag=1027
// setRootModelIndex(const QModelIndex & index)
  void setRootModelIndex(QModelIndex index) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setRootModelIndex_QModelIndex')
        .asFunction();
//tag=1030
    func(thisCpp, index == null ? ffi.nullptr : index.thisCpp);
  }
//tag=1024

//tag=1027
// setView(QAbstractItemView * itemView)
  void setView(QAbstractItemView itemView) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__setView_QAbstractItemView')
        .asFunction();
//tag=1030
    func(thisCpp, itemView == null ? ffi.nullptr : itemView.thisCpp);
  }
//tag=1024

//tag=1027
// showPopup()
  void showPopup() {
//tag=1028
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'dartffi_QComboBox__showPopup')
        .asFunction();
//tag=1030
    func(thisCpp);
  }

//tag=1035
  static void showPopup_calledFromC(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    if (dartInstance == null) {
      print("Dart instance not found!");
      return null;
    }
//tag=1036
    dartInstance.showPopup();
  }
//tag=1024

//tag=1027
// textActivated(const QString & arg__1)
  void textActivated(String arg__1) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__textActivated_QString')
        .asFunction();
//tag=1030
    func(thisCpp, arg__1.toNativeUtf8());
  }

//tag=1077
  void onTextActivated(Function callback, {QObject context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'dartffi_QComboBox__onTextActivated_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTextActivated_callback);
    final callbackMethod = onTextActivated_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTextActivated_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTextActivated_callback];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }
//tag=1024

//tag=1027
// textHighlighted(const QString & arg__1)
  void textHighlighted(String arg__1) {
//tag=1028
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            'dartffi_QComboBox__textHighlighted_QString')
        .asFunction();
//tag=1030
    func(thisCpp, arg__1.toNativeUtf8());
  }

//tag=1077
  void onTextHighlighted(Function callback, {QObject context}) {
    final SignalHandler func = _dylib
        .lookup<ffi.NativeFunction<SignalHandler_FFI>>(
            'dartffi_QComboBox__onTextHighlighted_QString')
        .asFunction();
    final dartCallback =
        ffi.Pointer.fromFunction<ffi.Void Function(ffi.Pointer<void>)>(
            onTextHighlighted_callback);
    final callbackMethod = onTextHighlighted_callback;
    var handlers = signalHandlerersBySignal[callbackMethod] ?? [];
    handlers.add(callback);
    signalHandlerersBySignal[callbackMethod] = handlers;
    ffi.Pointer<void> contextPtr =
        context == null ? ffi.nullptr : context.thisCpp;
    func(thisCpp, contextPtr, dartCallback);
  }

  static void onTextHighlighted_callback(ffi.Pointer<void> thisCpp) {
    var dartInstance =
        QObject.s_dartInstanceByCppPtr[thisCpp.address] as QComboBox;
    final signalHandlers =
        dartInstance.signalHandlerersBySignal[onTextHighlighted_callback];
    for (var signalHandler in signalHandlers) {
      signalHandler();
    }
  }
//tag=1024

//tag=1027
// view() const
  QAbstractItemView view() {
//tag=1028
    final voidstar_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
            'dartffi_QComboBox__view')
        .asFunction();
//tag=1033
    ffi.Pointer<void> result = func(thisCpp);
    return QAbstractItemView.fromCppPointer(result, false);
  }

//tag=1022
  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            'dartffi_QComboBox__destructor')
        .asFunction();
    func(thisCpp);
  }

//tag=1019
  static String methodNameFromId(int methodId) {
    switch (methodId) {
      case 67:
        return "hidePopup";
      case 231:
        return "showPopup";
    }
    return null;
  }

//tag=1020
  void registerCallbacks() {
    final RegisterMethodIsReimplementedCallback registerCallback = _dylib
        .lookup<ffi.NativeFunction<RegisterMethodIsReimplementedCallback_FFI>>(
            'dartffi_QComboBox__registerVirtualMethodCallback')
        .asFunction();

//tag=1021
    final callback67 =
        ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(hidePopup_calledFromC);
    registerCallback(thisCpp, callback67, 67);
//tag=1021
    final callback231 =
        ffi.Pointer.fromFunction<void_Func_voidstar_FFI>(showPopup_calledFromC);
    registerCallback(thisCpp, callback231, 231);
  }
}

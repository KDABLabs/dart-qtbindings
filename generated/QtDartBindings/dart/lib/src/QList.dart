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

class QList<T> implements ffi.Finalizable {
  static var s_dartInstanceByCppPtr = Map<int, QList>();
  var _thisCpp = null;
  bool _needsAutoDelete = true;
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

  factory QList.fromCache(var cppPointer, [needsAutoDelete = false]) {
    return (s_dartInstanceByCppPtr[cppPointer.address] ??
        QList.fromCppPointer(cppPointer, needsAutoDelete)) as QList<T>;
  }
  QList.fromCppPointer(var cppPointer, [this._needsAutoDelete = false]) {
    thisCpp = cppPointer;
  }
  QList.init() {}
  String getCFunctionName(int id) {
    if (this is QList<QVariant>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QVariant_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QVariant_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QVariant_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QVariant_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QVariant_T___back";
          break;
        case 2777:
          return "c_QList_T_QVariant_T___back";
          break;
        case 2778:
          return "c_QList_T_QVariant_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QVariant_T___clear";
          break;
        case 2781:
          return "c_QList_T_QVariant_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QVariant_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QVariant_T___count";
          break;
        case 2786:
          return "c_QList_T_QVariant_T___detach";
          break;
        case 2787:
          return "c_QList_T_QVariant_T___empty";
          break;
        case 2788:
          return "c_QList_T_QVariant_T___first";
          break;
        case 2789:
          return "c_QList_T_QVariant_T___first";
          break;
        case 2790:
          return "c_QList_T_QVariant_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QVariant_T___front";
          break;
        case 2794:
          return "c_QList_T_QVariant_T___front";
          break;
        case 2795:
          return "c_QList_T_QVariant_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QVariant_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QVariant_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QVariant_T___last";
          break;
        case 2799:
          return "c_QList_T_QVariant_T___last";
          break;
        case 2800:
          return "c_QList_T_QVariant_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QVariant_T___length";
          break;
        case 2802:
          return "c_QList_T_QVariant_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QVariant_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QVariant_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QVariant_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QVariant_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QVariant_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QVariant_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QVariant_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QVariant_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QVariant_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QVariant_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QVariant_T___size";
          break;
        case 2823:
          return "c_QList_T_QVariant_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QVariant_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QVariant_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QVariant_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QVariant_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QVariant_T___toList";
          break;
        case 2830:
          return "c_QList_T_QVariant_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QVariant_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QString>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QString_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QString_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QString_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QString_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QString_T___back";
          break;
        case 2777:
          return "c_QList_T_QString_T___back";
          break;
        case 2778:
          return "c_QList_T_QString_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QString_T___clear";
          break;
        case 2781:
          return "c_QList_T_QString_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QString_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QString_T___count";
          break;
        case 2786:
          return "c_QList_T_QString_T___detach";
          break;
        case 2787:
          return "c_QList_T_QString_T___empty";
          break;
        case 2788:
          return "c_QList_T_QString_T___first";
          break;
        case 2789:
          return "c_QList_T_QString_T___first";
          break;
        case 2790:
          return "c_QList_T_QString_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QString_T___front";
          break;
        case 2794:
          return "c_QList_T_QString_T___front";
          break;
        case 2795:
          return "c_QList_T_QString_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QString_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QString_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QString_T___last";
          break;
        case 2799:
          return "c_QList_T_QString_T___last";
          break;
        case 2800:
          return "c_QList_T_QString_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QString_T___length";
          break;
        case 2802:
          return "c_QList_T_QString_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QString_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QString_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QString_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QString_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QString_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QString_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QString_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QString_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QString_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QString_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QString_T___size";
          break;
        case 2823:
          return "c_QList_T_QString_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QString_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QString_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QString_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QString_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QString_T___toList";
          break;
        case 2830:
          return "c_QList_T_QString_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QString_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<int>) {
      switch (id) {
        case 2771:
          return "c_QList_T_unsigned_int_T___constructor";
          break;
        case 2772:
          return "c_QList_T_unsigned_int_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_unsigned_int_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_unsigned_int_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_unsigned_int_T___back";
          break;
        case 2777:
          return "c_QList_T_unsigned_int_T___back";
          break;
        case 2778:
          return "c_QList_T_unsigned_int_T___capacity";
          break;
        case 2779:
          return "c_QList_T_unsigned_int_T___clear";
          break;
        case 2781:
          return "c_QList_T_unsigned_int_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_unsigned_int_T___constLast";
          break;
        case 2783:
          return "c_QList_T_unsigned_int_T___count";
          break;
        case 2786:
          return "c_QList_T_unsigned_int_T___detach";
          break;
        case 2787:
          return "c_QList_T_unsigned_int_T___empty";
          break;
        case 2788:
          return "c_QList_T_unsigned_int_T___first";
          break;
        case 2789:
          return "c_QList_T_unsigned_int_T___first";
          break;
        case 2790:
          return "c_QList_T_unsigned_int_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_unsigned_int_T___front";
          break;
        case 2794:
          return "c_QList_T_unsigned_int_T___front";
          break;
        case 2795:
          return "c_QList_T_unsigned_int_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_unsigned_int_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_unsigned_int_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_unsigned_int_T___last";
          break;
        case 2799:
          return "c_QList_T_unsigned_int_T___last";
          break;
        case 2800:
          return "c_QList_T_unsigned_int_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_unsigned_int_T___length";
          break;
        case 2802:
          return "c_QList_T_unsigned_int_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_unsigned_int_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_unsigned_int_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_unsigned_int_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_unsigned_int_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_unsigned_int_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_unsigned_int_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_unsigned_int_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_unsigned_int_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_unsigned_int_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_unsigned_int_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_unsigned_int_T___size";
          break;
        case 2823:
          return "c_QList_T_unsigned_int_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_unsigned_int_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_unsigned_int_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_unsigned_int_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_unsigned_int_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_unsigned_int_T___toList";
          break;
        case 2830:
          return "c_QList_T_unsigned_int_T___toVector";
          break;
        case 2831:
          return "c_QList_T_unsigned_int_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QStandardItem>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QStandardItem_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QStandardItem_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QStandardItem_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QStandardItem_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QStandardItem_T___back";
          break;
        case 2777:
          return "c_QList_T_QStandardItem_T___back";
          break;
        case 2778:
          return "c_QList_T_QStandardItem_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QStandardItem_T___clear";
          break;
        case 2781:
          return "c_QList_T_QStandardItem_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QStandardItem_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QStandardItem_T___count";
          break;
        case 2786:
          return "c_QList_T_QStandardItem_T___detach";
          break;
        case 2787:
          return "c_QList_T_QStandardItem_T___empty";
          break;
        case 2788:
          return "c_QList_T_QStandardItem_T___first";
          break;
        case 2789:
          return "c_QList_T_QStandardItem_T___first";
          break;
        case 2790:
          return "c_QList_T_QStandardItem_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QStandardItem_T___front";
          break;
        case 2794:
          return "c_QList_T_QStandardItem_T___front";
          break;
        case 2795:
          return "c_QList_T_QStandardItem_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QStandardItem_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QStandardItem_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QStandardItem_T___last";
          break;
        case 2799:
          return "c_QList_T_QStandardItem_T___last";
          break;
        case 2800:
          return "c_QList_T_QStandardItem_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QStandardItem_T___length";
          break;
        case 2802:
          return "c_QList_T_QStandardItem_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QStandardItem_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QStandardItem_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QStandardItem_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QStandardItem_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QStandardItem_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QStandardItem_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QStandardItem_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QStandardItem_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QStandardItem_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QStandardItem_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QStandardItem_T___size";
          break;
        case 2823:
          return "c_QList_T_QStandardItem_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QStandardItem_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QStandardItem_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QStandardItem_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QStandardItem_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QStandardItem_T___toList";
          break;
        case 2830:
          return "c_QList_T_QStandardItem_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QStandardItem_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<double>) {
      switch (id) {
        case 2771:
          return "c_QList_T_qreal_T___constructor";
          break;
        case 2772:
          return "c_QList_T_qreal_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_qreal_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_qreal_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_qreal_T___back";
          break;
        case 2777:
          return "c_QList_T_qreal_T___back";
          break;
        case 2778:
          return "c_QList_T_qreal_T___capacity";
          break;
        case 2779:
          return "c_QList_T_qreal_T___clear";
          break;
        case 2781:
          return "c_QList_T_qreal_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_qreal_T___constLast";
          break;
        case 2783:
          return "c_QList_T_qreal_T___count";
          break;
        case 2786:
          return "c_QList_T_qreal_T___detach";
          break;
        case 2787:
          return "c_QList_T_qreal_T___empty";
          break;
        case 2788:
          return "c_QList_T_qreal_T___first";
          break;
        case 2789:
          return "c_QList_T_qreal_T___first";
          break;
        case 2790:
          return "c_QList_T_qreal_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_qreal_T___front";
          break;
        case 2794:
          return "c_QList_T_qreal_T___front";
          break;
        case 2795:
          return "c_QList_T_qreal_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_qreal_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_qreal_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_qreal_T___last";
          break;
        case 2799:
          return "c_QList_T_qreal_T___last";
          break;
        case 2800:
          return "c_QList_T_qreal_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_qreal_T___length";
          break;
        case 2802:
          return "c_QList_T_qreal_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_qreal_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_qreal_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_qreal_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_qreal_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_qreal_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_qreal_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_qreal_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_qreal_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_qreal_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_qreal_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_qreal_T___size";
          break;
        case 2823:
          return "c_QList_T_qreal_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_qreal_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_qreal_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_qreal_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_qreal_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_qreal_T___toList";
          break;
        case 2830:
          return "c_QList_T_qreal_T___toVector";
          break;
        case 2831:
          return "c_QList_T_qreal_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QObject>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QObject_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QObject_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QObject_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QObject_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QObject_T___back";
          break;
        case 2777:
          return "c_QList_T_QObject_T___back";
          break;
        case 2778:
          return "c_QList_T_QObject_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QObject_T___clear";
          break;
        case 2781:
          return "c_QList_T_QObject_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QObject_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QObject_T___count";
          break;
        case 2786:
          return "c_QList_T_QObject_T___detach";
          break;
        case 2787:
          return "c_QList_T_QObject_T___empty";
          break;
        case 2788:
          return "c_QList_T_QObject_T___first";
          break;
        case 2789:
          return "c_QList_T_QObject_T___first";
          break;
        case 2790:
          return "c_QList_T_QObject_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QObject_T___front";
          break;
        case 2794:
          return "c_QList_T_QObject_T___front";
          break;
        case 2795:
          return "c_QList_T_QObject_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QObject_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QObject_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QObject_T___last";
          break;
        case 2799:
          return "c_QList_T_QObject_T___last";
          break;
        case 2800:
          return "c_QList_T_QObject_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QObject_T___length";
          break;
        case 2802:
          return "c_QList_T_QObject_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QObject_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QObject_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QObject_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QObject_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QObject_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QObject_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QObject_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QObject_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QObject_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QObject_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QObject_T___size";
          break;
        case 2823:
          return "c_QList_T_QObject_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QObject_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QObject_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QObject_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QObject_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QObject_T___toList";
          break;
        case 2830:
          return "c_QList_T_QObject_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QObject_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QByteArray>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QByteArray_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QByteArray_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QByteArray_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QByteArray_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QByteArray_T___back";
          break;
        case 2777:
          return "c_QList_T_QByteArray_T___back";
          break;
        case 2778:
          return "c_QList_T_QByteArray_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QByteArray_T___clear";
          break;
        case 2781:
          return "c_QList_T_QByteArray_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QByteArray_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QByteArray_T___count";
          break;
        case 2786:
          return "c_QList_T_QByteArray_T___detach";
          break;
        case 2787:
          return "c_QList_T_QByteArray_T___empty";
          break;
        case 2788:
          return "c_QList_T_QByteArray_T___first";
          break;
        case 2789:
          return "c_QList_T_QByteArray_T___first";
          break;
        case 2790:
          return "c_QList_T_QByteArray_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QByteArray_T___front";
          break;
        case 2794:
          return "c_QList_T_QByteArray_T___front";
          break;
        case 2795:
          return "c_QList_T_QByteArray_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QByteArray_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QByteArray_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QByteArray_T___last";
          break;
        case 2799:
          return "c_QList_T_QByteArray_T___last";
          break;
        case 2800:
          return "c_QList_T_QByteArray_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QByteArray_T___length";
          break;
        case 2802:
          return "c_QList_T_QByteArray_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QByteArray_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QByteArray_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QByteArray_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QByteArray_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QByteArray_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QByteArray_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QByteArray_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QByteArray_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QByteArray_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QByteArray_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QByteArray_T___size";
          break;
        case 2823:
          return "c_QList_T_QByteArray_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QByteArray_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QByteArray_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QByteArray_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QByteArray_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QByteArray_T___toList";
          break;
        case 2830:
          return "c_QList_T_QByteArray_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QByteArray_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QAction>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QAction_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QAction_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QAction_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QAction_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QAction_T___back";
          break;
        case 2777:
          return "c_QList_T_QAction_T___back";
          break;
        case 2778:
          return "c_QList_T_QAction_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QAction_T___clear";
          break;
        case 2781:
          return "c_QList_T_QAction_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QAction_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QAction_T___count";
          break;
        case 2786:
          return "c_QList_T_QAction_T___detach";
          break;
        case 2787:
          return "c_QList_T_QAction_T___empty";
          break;
        case 2788:
          return "c_QList_T_QAction_T___first";
          break;
        case 2789:
          return "c_QList_T_QAction_T___first";
          break;
        case 2790:
          return "c_QList_T_QAction_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QAction_T___front";
          break;
        case 2794:
          return "c_QList_T_QAction_T___front";
          break;
        case 2795:
          return "c_QList_T_QAction_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QAction_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QAction_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QAction_T___last";
          break;
        case 2799:
          return "c_QList_T_QAction_T___last";
          break;
        case 2800:
          return "c_QList_T_QAction_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QAction_T___length";
          break;
        case 2802:
          return "c_QList_T_QAction_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QAction_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QAction_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QAction_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QAction_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QAction_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QAction_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QAction_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QAction_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QAction_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QAction_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QAction_T___size";
          break;
        case 2823:
          return "c_QList_T_QAction_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QAction_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QAction_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QAction_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QAction_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QAction_T___toList";
          break;
        case 2830:
          return "c_QList_T_QAction_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QAction_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QKeySequence>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QKeySequence_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QKeySequence_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QKeySequence_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QKeySequence_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QKeySequence_T___back";
          break;
        case 2777:
          return "c_QList_T_QKeySequence_T___back";
          break;
        case 2778:
          return "c_QList_T_QKeySequence_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QKeySequence_T___clear";
          break;
        case 2781:
          return "c_QList_T_QKeySequence_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QKeySequence_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QKeySequence_T___count";
          break;
        case 2786:
          return "c_QList_T_QKeySequence_T___detach";
          break;
        case 2787:
          return "c_QList_T_QKeySequence_T___empty";
          break;
        case 2788:
          return "c_QList_T_QKeySequence_T___first";
          break;
        case 2789:
          return "c_QList_T_QKeySequence_T___first";
          break;
        case 2790:
          return "c_QList_T_QKeySequence_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QKeySequence_T___front";
          break;
        case 2794:
          return "c_QList_T_QKeySequence_T___front";
          break;
        case 2795:
          return "c_QList_T_QKeySequence_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QKeySequence_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QKeySequence_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QKeySequence_T___last";
          break;
        case 2799:
          return "c_QList_T_QKeySequence_T___last";
          break;
        case 2800:
          return "c_QList_T_QKeySequence_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QKeySequence_T___length";
          break;
        case 2802:
          return "c_QList_T_QKeySequence_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QKeySequence_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QKeySequence_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QKeySequence_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QKeySequence_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QKeySequence_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QKeySequence_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QKeySequence_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QKeySequence_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QKeySequence_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QKeySequence_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QKeySequence_T___size";
          break;
        case 2823:
          return "c_QList_T_QKeySequence_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QKeySequence_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QKeySequence_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QKeySequence_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QKeySequence_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QKeySequence_T___toList";
          break;
        case 2830:
          return "c_QList_T_QKeySequence_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QKeySequence_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QModelIndex>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QModelIndex_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QModelIndex_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QModelIndex_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QModelIndex_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QModelIndex_T___back";
          break;
        case 2777:
          return "c_QList_T_QModelIndex_T___back";
          break;
        case 2778:
          return "c_QList_T_QModelIndex_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QModelIndex_T___clear";
          break;
        case 2781:
          return "c_QList_T_QModelIndex_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QModelIndex_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QModelIndex_T___count";
          break;
        case 2786:
          return "c_QList_T_QModelIndex_T___detach";
          break;
        case 2787:
          return "c_QList_T_QModelIndex_T___empty";
          break;
        case 2788:
          return "c_QList_T_QModelIndex_T___first";
          break;
        case 2789:
          return "c_QList_T_QModelIndex_T___first";
          break;
        case 2790:
          return "c_QList_T_QModelIndex_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QModelIndex_T___front";
          break;
        case 2794:
          return "c_QList_T_QModelIndex_T___front";
          break;
        case 2795:
          return "c_QList_T_QModelIndex_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QModelIndex_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QModelIndex_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QModelIndex_T___last";
          break;
        case 2799:
          return "c_QList_T_QModelIndex_T___last";
          break;
        case 2800:
          return "c_QList_T_QModelIndex_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QModelIndex_T___length";
          break;
        case 2802:
          return "c_QList_T_QModelIndex_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QModelIndex_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QModelIndex_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QModelIndex_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QModelIndex_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QModelIndex_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QModelIndex_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QModelIndex_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QModelIndex_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QModelIndex_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QModelIndex_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QModelIndex_T___size";
          break;
        case 2823:
          return "c_QList_T_QModelIndex_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QModelIndex_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QModelIndex_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QModelIndex_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QModelIndex_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QModelIndex_T___toList";
          break;
        case 2830:
          return "c_QList_T_QModelIndex_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QModelIndex_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QItemSelectionRange>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QItemSelectionRange_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QItemSelectionRange_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QItemSelectionRange_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QItemSelectionRange_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QItemSelectionRange_T___back";
          break;
        case 2777:
          return "c_QList_T_QItemSelectionRange_T___back";
          break;
        case 2778:
          return "c_QList_T_QItemSelectionRange_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QItemSelectionRange_T___clear";
          break;
        case 2781:
          return "c_QList_T_QItemSelectionRange_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QItemSelectionRange_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QItemSelectionRange_T___count";
          break;
        case 2786:
          return "c_QList_T_QItemSelectionRange_T___detach";
          break;
        case 2787:
          return "c_QList_T_QItemSelectionRange_T___empty";
          break;
        case 2788:
          return "c_QList_T_QItemSelectionRange_T___first";
          break;
        case 2789:
          return "c_QList_T_QItemSelectionRange_T___first";
          break;
        case 2790:
          return "c_QList_T_QItemSelectionRange_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QItemSelectionRange_T___front";
          break;
        case 2794:
          return "c_QList_T_QItemSelectionRange_T___front";
          break;
        case 2795:
          return "c_QList_T_QItemSelectionRange_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QItemSelectionRange_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QItemSelectionRange_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QItemSelectionRange_T___last";
          break;
        case 2799:
          return "c_QList_T_QItemSelectionRange_T___last";
          break;
        case 2800:
          return "c_QList_T_QItemSelectionRange_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QItemSelectionRange_T___length";
          break;
        case 2802:
          return "c_QList_T_QItemSelectionRange_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QItemSelectionRange_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QItemSelectionRange_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QItemSelectionRange_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QItemSelectionRange_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QItemSelectionRange_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QItemSelectionRange_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QItemSelectionRange_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QItemSelectionRange_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QItemSelectionRange_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QItemSelectionRange_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QItemSelectionRange_T___size";
          break;
        case 2823:
          return "c_QList_T_QItemSelectionRange_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QItemSelectionRange_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QItemSelectionRange_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QItemSelectionRange_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QItemSelectionRange_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QItemSelectionRange_T___toList";
          break;
        case 2830:
          return "c_QList_T_QItemSelectionRange_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QItemSelectionRange_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QSize>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QSize_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QSize_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QSize_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QSize_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QSize_T___back";
          break;
        case 2777:
          return "c_QList_T_QSize_T___back";
          break;
        case 2778:
          return "c_QList_T_QSize_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QSize_T___clear";
          break;
        case 2781:
          return "c_QList_T_QSize_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QSize_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QSize_T___count";
          break;
        case 2786:
          return "c_QList_T_QSize_T___detach";
          break;
        case 2787:
          return "c_QList_T_QSize_T___empty";
          break;
        case 2788:
          return "c_QList_T_QSize_T___first";
          break;
        case 2789:
          return "c_QList_T_QSize_T___first";
          break;
        case 2790:
          return "c_QList_T_QSize_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QSize_T___front";
          break;
        case 2794:
          return "c_QList_T_QSize_T___front";
          break;
        case 2795:
          return "c_QList_T_QSize_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QSize_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QSize_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QSize_T___last";
          break;
        case 2799:
          return "c_QList_T_QSize_T___last";
          break;
        case 2800:
          return "c_QList_T_QSize_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QSize_T___length";
          break;
        case 2802:
          return "c_QList_T_QSize_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QSize_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QSize_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QSize_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QSize_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QSize_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QSize_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QSize_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QSize_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QSize_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QSize_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QSize_T___size";
          break;
        case 2823:
          return "c_QList_T_QSize_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QSize_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QSize_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QSize_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QSize_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QSize_T___toList";
          break;
        case 2830:
          return "c_QList_T_QSize_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QSize_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<int>) {
      switch (id) {
        case 2771:
          return "c_QList_T_int_T___constructor";
          break;
        case 2772:
          return "c_QList_T_int_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_int_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_int_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_int_T___back";
          break;
        case 2777:
          return "c_QList_T_int_T___back";
          break;
        case 2778:
          return "c_QList_T_int_T___capacity";
          break;
        case 2779:
          return "c_QList_T_int_T___clear";
          break;
        case 2781:
          return "c_QList_T_int_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_int_T___constLast";
          break;
        case 2783:
          return "c_QList_T_int_T___count";
          break;
        case 2786:
          return "c_QList_T_int_T___detach";
          break;
        case 2787:
          return "c_QList_T_int_T___empty";
          break;
        case 2788:
          return "c_QList_T_int_T___first";
          break;
        case 2789:
          return "c_QList_T_int_T___first";
          break;
        case 2790:
          return "c_QList_T_int_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_int_T___front";
          break;
        case 2794:
          return "c_QList_T_int_T___front";
          break;
        case 2795:
          return "c_QList_T_int_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_int_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_int_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_int_T___last";
          break;
        case 2799:
          return "c_QList_T_int_T___last";
          break;
        case 2800:
          return "c_QList_T_int_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_int_T___length";
          break;
        case 2802:
          return "c_QList_T_int_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_int_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_int_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_int_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_int_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_int_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_int_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_int_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_int_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_int_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_int_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_int_T___size";
          break;
        case 2823:
          return "c_QList_T_int_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_int_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_int_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_int_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_int_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_int_T___toList";
          break;
        case 2830:
          return "c_QList_T_int_T___toVector";
          break;
        case 2831:
          return "c_QList_T_int_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QWindow>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QWindow_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QWindow_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QWindow_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QWindow_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QWindow_T___back";
          break;
        case 2777:
          return "c_QList_T_QWindow_T___back";
          break;
        case 2778:
          return "c_QList_T_QWindow_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QWindow_T___clear";
          break;
        case 2781:
          return "c_QList_T_QWindow_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QWindow_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QWindow_T___count";
          break;
        case 2786:
          return "c_QList_T_QWindow_T___detach";
          break;
        case 2787:
          return "c_QList_T_QWindow_T___empty";
          break;
        case 2788:
          return "c_QList_T_QWindow_T___first";
          break;
        case 2789:
          return "c_QList_T_QWindow_T___first";
          break;
        case 2790:
          return "c_QList_T_QWindow_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QWindow_T___front";
          break;
        case 2794:
          return "c_QList_T_QWindow_T___front";
          break;
        case 2795:
          return "c_QList_T_QWindow_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QWindow_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QWindow_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QWindow_T___last";
          break;
        case 2799:
          return "c_QList_T_QWindow_T___last";
          break;
        case 2800:
          return "c_QList_T_QWindow_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QWindow_T___length";
          break;
        case 2802:
          return "c_QList_T_QWindow_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QWindow_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QWindow_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QWindow_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QWindow_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QWindow_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QWindow_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QWindow_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QWindow_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QWindow_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QWindow_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QWindow_T___size";
          break;
        case 2823:
          return "c_QList_T_QWindow_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QWindow_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QWindow_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QWindow_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QWindow_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QWindow_T___toList";
          break;
        case 2830:
          return "c_QList_T_QWindow_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QWindow_T___value_qsizetype";
          break;
      }
    }
    if (this is QList<QWidget>) {
      switch (id) {
        case 2771:
          return "c_QList_T_QWidget_T___constructor";
          break;
        case 2772:
          return "c_QList_T_QWidget_T___constructor_qsizetype";
          break;
        case 2774:
          return "c_QList_T_QWidget_T___append_QList_T";
          break;
        case 2775:
          return "c_QList_T_QWidget_T___at_qsizetype";
          break;
        case 2776:
          return "c_QList_T_QWidget_T___back";
          break;
        case 2777:
          return "c_QList_T_QWidget_T___back";
          break;
        case 2778:
          return "c_QList_T_QWidget_T___capacity";
          break;
        case 2779:
          return "c_QList_T_QWidget_T___clear";
          break;
        case 2781:
          return "c_QList_T_QWidget_T___constFirst";
          break;
        case 2782:
          return "c_QList_T_QWidget_T___constLast";
          break;
        case 2783:
          return "c_QList_T_QWidget_T___count";
          break;
        case 2786:
          return "c_QList_T_QWidget_T___detach";
          break;
        case 2787:
          return "c_QList_T_QWidget_T___empty";
          break;
        case 2788:
          return "c_QList_T_QWidget_T___first";
          break;
        case 2789:
          return "c_QList_T_QWidget_T___first";
          break;
        case 2790:
          return "c_QList_T_QWidget_T___first_qsizetype";
          break;
        case 2793:
          return "c_QList_T_QWidget_T___front";
          break;
        case 2794:
          return "c_QList_T_QWidget_T___front";
          break;
        case 2795:
          return "c_QList_T_QWidget_T___isDetached";
          break;
        case 2796:
          return "c_QList_T_QWidget_T___isEmpty";
          break;
        case 2797:
          return "c_QList_T_QWidget_T___isSharedWith_QList_T";
          break;
        case 2798:
          return "c_QList_T_QWidget_T___last";
          break;
        case 2799:
          return "c_QList_T_QWidget_T___last";
          break;
        case 2800:
          return "c_QList_T_QWidget_T___last_qsizetype";
          break;
        case 2801:
          return "c_QList_T_QWidget_T___length";
          break;
        case 2802:
          return "c_QList_T_QWidget_T___mid_qsizetype_qsizetype";
          break;
        case 2803:
          return "c_QList_T_QWidget_T___move_qsizetype_qsizetype";
          break;
        case 2812:
          return "c_QList_T_QWidget_T___pop_back";
          break;
        case 2813:
          return "c_QList_T_QWidget_T___pop_front";
          break;
        case 2814:
          return "c_QList_T_QWidget_T___remove_qsizetype_qsizetype";
          break;
        case 2815:
          return "c_QList_T_QWidget_T___removeAt_qsizetype";
          break;
        case 2816:
          return "c_QList_T_QWidget_T___removeFirst";
          break;
        case 2817:
          return "c_QList_T_QWidget_T___removeLast";
          break;
        case 2818:
          return "c_QList_T_QWidget_T___reserve_qsizetype";
          break;
        case 2819:
          return "c_QList_T_QWidget_T___resize_qsizetype";
          break;
        case 2821:
          return "c_QList_T_QWidget_T___shrink_to_fit";
          break;
        case 2822:
          return "c_QList_T_QWidget_T___size";
          break;
        case 2823:
          return "c_QList_T_QWidget_T___sliced_qsizetype";
          break;
        case 2824:
          return "c_QList_T_QWidget_T___sliced_qsizetype_qsizetype";
          break;
        case 2825:
          return "c_QList_T_QWidget_T___squeeze";
          break;
        case 2827:
          return "c_QList_T_QWidget_T___swapItemsAt_qsizetype_qsizetype";
          break;
        case 2828:
          return "c_QList_T_QWidget_T___takeAt_qsizetype";
          break;
        case 2829:
          return "c_QList_T_QWidget_T___toList";
          break;
        case 2830:
          return "c_QList_T_QWidget_T___toVector";
          break;
        case 2831:
          return "c_QList_T_QWidget_T___value_qsizetype";
          break;
      }
    }
    return "";
  }

  String getFinalizerName() {
    if (this is QList<QVariant>) {
      return "c_QList_T_QVariant_T__Finalizer";
    }
    if (this is QList<QString>) {
      return "c_QList_T_QString_T__Finalizer";
    }
    if (this is QList<int>) {
      return "c_QList_T_unsigned_int_T__Finalizer";
    }
    if (this is QList<QStandardItem>) {
      return "c_QList_T_QStandardItem_T__Finalizer";
    }
    if (this is QList<double>) {
      return "c_QList_T_qreal_T__Finalizer";
    }
    if (this is QList<QObject>) {
      return "c_QList_T_QObject_T__Finalizer";
    }
    if (this is QList<QByteArray>) {
      return "c_QList_T_QByteArray_T__Finalizer";
    }
    if (this is QList<QAction>) {
      return "c_QList_T_QAction_T__Finalizer";
    }
    if (this is QList<QKeySequence>) {
      return "c_QList_T_QKeySequence_T__Finalizer";
    }
    if (this is QList<QModelIndex>) {
      return "c_QList_T_QModelIndex_T__Finalizer";
    }
    if (this is QList<QItemSelectionRange>) {
      return "c_QList_T_QItemSelectionRange_T__Finalizer";
    }
    if (this is QList<QSize>) {
      return "c_QList_T_QSize_T__Finalizer";
    }
    if (this is QList<int>) {
      return "c_QList_T_int_T__Finalizer";
    }
    if (this is QList<QWindow>) {
      return "c_QList_T_QWindow_T__Finalizer";
    }
    if (this is QList<QWidget>) {
      return "c_QList_T_QWidget_T__Finalizer";
    }
    print(
        "ERROR: Couldn't find finalizerName for" + this.runtimeType.toString());
    return "";
  } //QList<T>()

  QList() {
    final voidstar_Func_void func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_void_FFI>>(
            '${getCFunctionName(2771)}')
        .asFunction();
    thisCpp = func();
    QList.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } //QList<T>(qsizetype size)
  QList.ctor2(int size) {
    final voidstar_Func_int func = _dylib
        .lookup<ffi.NativeFunction<voidstar_Func_ffi_Int32_FFI>>(
            '${getCFunctionName(2772)}')
        .asFunction();
    thisCpp = func(size);
    QList.s_dartInstanceByCppPtr[thisCpp.address] = this;
  } // append(const QList<T > & l)
  append(QList? l) {
    final void_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_voidstar_FFI>>(
            '${getCFunctionName(2774)}')
        .asFunction();
    func(thisCpp, l == null ? ffi.nullptr : l.thisCpp);
  } // at(qsizetype i) const

  T at(int i) {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2775)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // back()

  T back() {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2776)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // capacity() const

  int capacity() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            '${getCFunctionName(2778)}')
        .asFunction();
    return func(thisCpp);
  } // clear()

  clear() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2779)}')
        .asFunction();
    func(thisCpp);
  } // constFirst() const

  T constFirst() {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2781)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // constLast() const

  T constLast() {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2782)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // count() const

  int count() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            '${getCFunctionName(2783)}')
        .asFunction();
    return func(thisCpp);
  } // detach()

  detach() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2786)}')
        .asFunction();
    func(thisCpp);
  } // empty() const

  bool empty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            '${getCFunctionName(2787)}')
        .asFunction();
    return func(thisCpp) != 0;
  } // first()

  T first() {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2788)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // front()

  T front() {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2793)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // isDetached() const

  bool isDetached() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            '${getCFunctionName(2795)}')
        .asFunction();
    return func(thisCpp) != 0;
  } // isEmpty() const

  bool isEmpty() {
    final bool_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_FFI>>(
            '${getCFunctionName(2796)}')
        .asFunction();
    return func(thisCpp) != 0;
  } // isSharedWith(const QList<T > & other) const

  bool isSharedWith(QList? other) {
    final bool_Func_voidstar_voidstar func = _dylib
        .lookup<ffi.NativeFunction<bool_Func_voidstar_voidstar_FFI>>(
            '${getCFunctionName(2797)}')
        .asFunction();
    return func(thisCpp, other == null ? ffi.nullptr : other.thisCpp) != 0;
  } // last()

  T last() {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
              '${getCFunctionName(2798)}')
          .asFunction();
      return (func(thisCpp) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // length() const

  int length() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            '${getCFunctionName(2801)}')
        .asFunction();
    return func(thisCpp);
  } // move(qsizetype from, qsizetype to)

  move(int from, int to) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            '${getCFunctionName(2803)}')
        .asFunction();
    func(thisCpp, from, to);
  } // pop_back()

  pop_back() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2812)}')
        .asFunction();
    func(thisCpp);
  } // pop_front()

  pop_front() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2813)}')
        .asFunction();
    func(thisCpp);
  } // remove(qsizetype i, qsizetype n)

  remove(int i, {int n = 1}) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            '${getCFunctionName(2814)}')
        .asFunction();
    func(thisCpp, i, n);
  } // removeAt(qsizetype i)

  removeAt(int i) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            '${getCFunctionName(2815)}')
        .asFunction();
    func(thisCpp, i);
  } // removeFirst()

  removeFirst() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2816)}')
        .asFunction();
    func(thisCpp);
  } // removeLast()

  removeLast() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2817)}')
        .asFunction();
    func(thisCpp);
  } // reserve(qsizetype size)

  reserve(int size) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            '${getCFunctionName(2818)}')
        .asFunction();
    func(thisCpp, size);
  } // resize(qsizetype size)

  resize(int size) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            '${getCFunctionName(2819)}')
        .asFunction();
    func(thisCpp, size);
  } // resize_internal(qsizetype i)

  resize_internal(int i) {
    final void_Func_voidstar_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_FFI>>(
            '${getCFunctionName(2820)}')
        .asFunction();
    func(thisCpp, i);
  } // shrink_to_fit()

  shrink_to_fit() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2821)}')
        .asFunction();
    func(thisCpp);
  } // size() const

  int size() {
    final int_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<int_Func_voidstar_FFI>>(
            '${getCFunctionName(2822)}')
        .asFunction();
    return func(thisCpp);
  } // squeeze()

  squeeze() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(2825)}')
        .asFunction();
    func(thisCpp);
  } // swapItemsAt(qsizetype i, qsizetype j)

  swapItemsAt(int i, int j) {
    final void_Func_voidstar_int_int func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_ffi_Int32_ffi_Int32_FFI>>(
            '${getCFunctionName(2827)}')
        .asFunction();
    func(thisCpp, i, j);
  } // takeAt(qsizetype i)

  T takeAt(int i) {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2828)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  } // value(qsizetype i) const

  T value(int i) {
    if (this is QList<QAction>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QAction.fromCppPointer(result, false) as T);
    }
    if (this is QList<QByteArray>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QByteArray.fromCppPointer(result, true) as T);
    }
    if (this is QList<QItemSelectionRange>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QItemSelectionRange.fromCppPointer(result, true) as T);
    }
    if (this is QList<QKeySequence>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QKeySequence.fromCppPointer(result, true) as T);
    }
    if (this is QList<QModelIndex>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QModelIndex.fromCppPointer(result, true) as T);
    }
    if (this is QList<QSize>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QSize.fromCppPointer(result, true) as T);
    }
    if (this is QList<QStandardItem>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QStandardItem.fromCppPointer(result, false) as T);
    }
    if (this is QList<QString>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QString.fromCppPointer(result, true) as T);
    }
    if (this is QList<QVariant>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QVariant.fromCppPointer(result, true) as T);
    }
    if (this is QList<QWidget>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QWidget.fromCppPointer(result, false) as T);
    }
    if (this is QList<QWindow>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QWindow.fromCppPointer(result, false) as T);
    }
    if (this is QList<QObject>) {
      final voidstar_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<voidstar_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      ffi.Pointer<void> result = func(thisCpp, i);
      return (QObject.fromCppPointer(result, false) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    if (this is QList<double>) {
      final double_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<double_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    if (this is QList<int>) {
      final int_Func_voidstar_int func = _dylib
          .lookup<ffi.NativeFunction<int_Func_voidstar_ffi_Int32_FFI>>(
              '${getCFunctionName(2831)}')
          .asFunction();
      return (func(thisCpp, i) as T);
    }
    print(
        "Unreachable, but required, due to null safety we need to return something");
    throw Error();
  }

  void release() {
    final void_Func_voidstar func = _dylib
        .lookup<ffi.NativeFunction<void_Func_voidstar_FFI>>(
            '${getCFunctionName(-2)}')
        .asFunction();
    func(thisCpp);
  }
}

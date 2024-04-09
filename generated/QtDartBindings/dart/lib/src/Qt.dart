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

class Qt_Orientation {
  static const Horizontal = 1;
  static const Vertical = 2;
}

class Qt_SortOrder {
  static const AscendingOrder = 0;
  static const DescendingOrder = 1;
}

class Qt_AlignmentFlag {
  static const AlignLeft = 1;
  static const AlignLeading = 1;
  static const AlignRight = 2;
  static const AlignTrailing = 2;
  static const AlignHCenter = 4;
  static const AlignJustify = 8;
  static const AlignAbsolute = 16;
  static const AlignHorizontal_Mask = 31;
  static const AlignTop = 32;
  static const AlignBottom = 64;
  static const AlignVCenter = 128;
  static const AlignBaseline = 256;
  static const AlignVertical_Mask = 480;
  static const AlignCenter = 132;
}

class Qt_KeyboardModifier {
  static const NoModifier = 0;
  static const ShiftModifier = 33554432;
  static const ControlModifier = 67108864;
  static const AltModifier = 134217728;
  static const MetaModifier = 268435456;
  static const KeypadModifier = 536870912;
  static const GroupSwitchModifier = 1073741824;
  static const KeyboardModifierMask = 4261412864;
}

class Qt_LayoutDirection {
  static const LeftToRight = 0;
  static const RightToLeft = 1;
  static const LayoutDirectionAuto = 2;
}

class Qt_ItemDataRole {
  static const DisplayRole = 0;
  static const DecorationRole = 1;
  static const EditRole = 2;
  static const ToolTipRole = 3;
  static const StatusTipRole = 4;
  static const WhatsThisRole = 5;
  static const FontRole = 6;
  static const TextAlignmentRole = 7;
  static const BackgroundRole = 8;
  static const ForegroundRole = 9;
  static const CheckStateRole = 10;
  static const AccessibleTextRole = 11;
  static const AccessibleDescriptionRole = 12;
  static const SizeHintRole = 13;
  static const InitialSortOrderRole = 14;
  static const DisplayPropertyRole = 27;
  static const DecorationPropertyRole = 28;
  static const ToolTipPropertyRole = 29;
  static const StatusTipPropertyRole = 30;
  static const WhatsThisPropertyRole = 31;
  static const UserRole = 256;
}

class Qt_EventPriority {
  static const HighEventPriority = 1;
  static const NormalEventPriority = 0;
  static const LowEventPriority = -1;
}

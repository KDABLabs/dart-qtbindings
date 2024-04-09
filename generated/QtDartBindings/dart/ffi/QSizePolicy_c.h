/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qsizepolicy.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QSizePolicy_wrapper : public ::QSizePolicy {
public:
  ~QSizePolicy_wrapper();
  QSizePolicy_wrapper();
  QSizePolicy_wrapper(
      QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical,
      QSizePolicy::ControlType type = QSizePolicy::ControlType::DefaultType);
  QSizePolicy::ControlType controlType() const;
  QFlags<Qt::Orientation> expandingDirections() const;
  bool hasHeightForWidth() const;
  bool hasWidthForHeight() const;
  QSizePolicy::Policy horizontalPolicy() const;
  int horizontalStretch() const;
  bool retainSizeWhenHidden() const;
  void setControlType(QSizePolicy::ControlType type);
  void setHeightForWidth(bool b);
  void setHorizontalPolicy(QSizePolicy::Policy d);
  void setHorizontalStretch(int stretchFactor);
  void setRetainSizeWhenHidden(bool retainSize);
  void setVerticalPolicy(QSizePolicy::Policy d);
  void setVerticalStretch(int stretchFactor);
  void setWidthForHeight(bool b);
  void transpose();
  QSizePolicy transposed() const;
  QSizePolicy::Policy verticalPolicy() const;
  int verticalStretch() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QSizePolicy::QSizePolicy()
QtDartBindings_EXPORT void *c_QSizePolicy__constructor();
// QSizePolicy::QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy
// vertical, QSizePolicy::ControlType type)
QtDartBindings_EXPORT void *
c_QSizePolicy__constructor_Policy_Policy_ControlType(int horizontal,
                                                     int vertical, int type);
// QSizePolicy::controlType() const
QtDartBindings_EXPORT int c_QSizePolicy__controlType(void *thisObj);
// QSizePolicy::expandingDirections() const
QtDartBindings_EXPORT int c_QSizePolicy__expandingDirections(void *thisObj);
// QSizePolicy::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QSizePolicy__hasHeightForWidth(void *thisObj);
// QSizePolicy::hasWidthForHeight() const
QtDartBindings_EXPORT bool c_QSizePolicy__hasWidthForHeight(void *thisObj);
// QSizePolicy::horizontalPolicy() const
QtDartBindings_EXPORT int c_QSizePolicy__horizontalPolicy(void *thisObj);
// QSizePolicy::horizontalStretch() const
QtDartBindings_EXPORT int c_QSizePolicy__horizontalStretch(void *thisObj);
// QSizePolicy::retainSizeWhenHidden() const
QtDartBindings_EXPORT bool c_QSizePolicy__retainSizeWhenHidden(void *thisObj);
// QSizePolicy::setControlType(QSizePolicy::ControlType type)
QtDartBindings_EXPORT void
c_QSizePolicy__setControlType_ControlType(void *thisObj, int type);
// QSizePolicy::setHeightForWidth(bool b)
QtDartBindings_EXPORT void c_QSizePolicy__setHeightForWidth_bool(void *thisObj,
                                                                 bool b);
// QSizePolicy::setHorizontalPolicy(QSizePolicy::Policy d)
QtDartBindings_EXPORT void
c_QSizePolicy__setHorizontalPolicy_Policy(void *thisObj, int d);
// QSizePolicy::setHorizontalStretch(int stretchFactor)
QtDartBindings_EXPORT void
c_QSizePolicy__setHorizontalStretch_int(void *thisObj, int stretchFactor);
// QSizePolicy::setRetainSizeWhenHidden(bool retainSize)
QtDartBindings_EXPORT void
c_QSizePolicy__setRetainSizeWhenHidden_bool(void *thisObj, bool retainSize);
// QSizePolicy::setVerticalPolicy(QSizePolicy::Policy d)
QtDartBindings_EXPORT void
c_QSizePolicy__setVerticalPolicy_Policy(void *thisObj, int d);
// QSizePolicy::setVerticalStretch(int stretchFactor)
QtDartBindings_EXPORT void
c_QSizePolicy__setVerticalStretch_int(void *thisObj, int stretchFactor);
// QSizePolicy::setWidthForHeight(bool b)
QtDartBindings_EXPORT void c_QSizePolicy__setWidthForHeight_bool(void *thisObj,
                                                                 bool b);
// QSizePolicy::transpose()
QtDartBindings_EXPORT void c_QSizePolicy__transpose(void *thisObj);
// QSizePolicy::transposed() const
QtDartBindings_EXPORT void *c_QSizePolicy__transposed(void *thisObj);
// QSizePolicy::verticalPolicy() const
QtDartBindings_EXPORT int c_QSizePolicy__verticalPolicy(void *thisObj);
// QSizePolicy::verticalStretch() const
QtDartBindings_EXPORT int c_QSizePolicy__verticalStretch(void *thisObj);
QtDartBindings_EXPORT void c_QSizePolicy__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QSizePolicy_Finalizer(void *cppObj);
}

/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qstyleoption.h>

namespace QtDartBindings_wrappersNS {
class QStyleHintReturn_wrapper : public ::QStyleHintReturn {
public:
  ~QStyleHintReturn_wrapper();
  QStyleHintReturn_wrapper(
      int version = QStyleOption::Version,
      int type = QStyleHintReturn::HintReturnType::SH_Default);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QStyleHintReturn::QStyleHintReturn(int version, int type)
QtDartBindings_EXPORT void *c_QStyleHintReturn__constructor_int_int(int version,
                                                                    int type);
QtDartBindings_EXPORT void c_QStyleHintReturn__destructor(void *thisObj);
QtDartBindings_EXPORT int c_QStyleHintReturn___get_version(void *thisObj);
QtDartBindings_EXPORT int c_QStyleHintReturn___get_type(void *thisObj);
QtDartBindings_EXPORT void c_QStyleHintReturn___set_version_int(void *thisObj,
                                                                int version_);
QtDartBindings_EXPORT void c_QStyleHintReturn___set_type_int(void *thisObj,
                                                             int type_);
QtDartBindings_EXPORT void c_QStyleHintReturn_Finalizer(void *cppObj);
}

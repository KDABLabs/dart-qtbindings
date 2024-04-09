/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qstyleoption.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QStyleOption_wrapper : public ::QStyleOption {
public:
  ~QStyleOption_wrapper();
  QStyleOption_wrapper(int version = QStyleOption::StyleOptionVersion::Version,
                       int type = QStyleOption::OptionType::SO_Default);
  void initFrom(const QWidget *w);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QStyleOption::QStyleOption(int version, int type)
QtDartBindings_EXPORT void *c_QStyleOption__constructor_int_int(int version,
                                                                int type);
// QStyleOption::initFrom(const QWidget * w)
QtDartBindings_EXPORT void c_QStyleOption__initFrom_QWidget(void *thisObj,
                                                            void *w_);
QtDartBindings_EXPORT void c_QStyleOption__destructor(void *thisObj);
QtDartBindings_EXPORT int c_QStyleOption___get_version(void *thisObj);
QtDartBindings_EXPORT int c_QStyleOption___get_type(void *thisObj);
QtDartBindings_EXPORT void c_QStyleOption___set_version_int(void *thisObj,
                                                            int version_);
QtDartBindings_EXPORT void c_QStyleOption___set_type_int(void *thisObj,
                                                         int type_);
QtDartBindings_EXPORT void c_QStyleOption_Finalizer(void *cppObj);
}

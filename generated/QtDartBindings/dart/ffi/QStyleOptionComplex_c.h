/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qstyleoption.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QStyleOptionComplex_wrapper : public ::QStyleOptionComplex {
public:
  ~QStyleOptionComplex_wrapper();
  QStyleOptionComplex_wrapper(
      int version = QStyleOptionComplex::StyleOptionVersion::Version,
      int type = QStyleOption::OptionType::SO_Complex);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QStyleOptionComplex::QStyleOptionComplex(int version, int type)
QtDartBindings_EXPORT void *
c_QStyleOptionComplex__constructor_int_int(int version, int type);
QtDartBindings_EXPORT void c_QStyleOptionComplex__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QStyleOptionComplex_Finalizer(void *cppObj);
}

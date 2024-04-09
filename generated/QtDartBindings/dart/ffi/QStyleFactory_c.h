/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qlist.h>
#include <qstring.h>
#include <qstyle.h>
#include <qstylefactory.h>

namespace QtDartBindings_wrappersNS {
class QStyleFactory_wrapper : public ::QStyleFactory {
public:
  ~QStyleFactory_wrapper();
  QStyleFactory_wrapper();
  static QStyle *create(const QString &arg__1);
  static QList<QString> keys();
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QStyleFactory::QStyleFactory()
QtDartBindings_EXPORT void *c_QStyleFactory__constructor();
// QStyleFactory::create(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QStyleFactory__create_QString(const char *arg__1_);
// QStyleFactory::keys()
QtDartBindings_EXPORT void *c_static_QStyleFactory__keys();
QtDartBindings_EXPORT void c_QStyleFactory__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QStyleFactory_Finalizer(void *cppObj);
}

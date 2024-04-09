/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qkeysequence.h>
#include <qlist.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QKeySequence_wrapper : public ::QKeySequence {
public:
  ~QKeySequence_wrapper();
  QKeySequence_wrapper();
  QKeySequence_wrapper(QKeySequence::StandardKey key);
  QKeySequence_wrapper(const QString &key);
  QKeySequence_wrapper(int k1, int k2 = 0, int k3 = 0, int k4 = 0);
  int count() const;
  static QKeySequence fromString(const QString &str);
  bool isDetached() const;
  bool isEmpty() const;
  static QList<QKeySequence> keyBindings(QKeySequence::StandardKey key);
  static QList<QKeySequence> listFromString(const QString &str);
  static QString listToString(const QList<QKeySequence> &list);
  static QKeySequence mnemonic(const QString &text);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QKeySequence::QKeySequence()
QtDartBindings_EXPORT void *c_QKeySequence__constructor();
// QKeySequence::QKeySequence(QKeySequence::StandardKey key)
QtDartBindings_EXPORT void *c_QKeySequence__constructor_StandardKey(int key);
// QKeySequence::QKeySequence(const QString & key)
QtDartBindings_EXPORT void *
c_QKeySequence__constructor_QString(const char *key_);
// QKeySequence::QKeySequence(int k1, int k2, int k3, int k4)
QtDartBindings_EXPORT void *
c_QKeySequence__constructor_int_int_int_int(int k1, int k2, int k3, int k4);
// QKeySequence::count() const
QtDartBindings_EXPORT int c_QKeySequence__count(void *thisObj);
// QKeySequence::fromString(const QString & str)
QtDartBindings_EXPORT void *
c_static_QKeySequence__fromString_QString(const char *str_);
// QKeySequence::isDetached() const
QtDartBindings_EXPORT bool c_QKeySequence__isDetached(void *thisObj);
// QKeySequence::isEmpty() const
QtDartBindings_EXPORT bool c_QKeySequence__isEmpty(void *thisObj);
// QKeySequence::keyBindings(QKeySequence::StandardKey key)
QtDartBindings_EXPORT void *
c_static_QKeySequence__keyBindings_StandardKey(int key);
// QKeySequence::listFromString(const QString & str)
QtDartBindings_EXPORT void *
c_static_QKeySequence__listFromString_QString(const char *str_);
// QKeySequence::listToString(const QList<QKeySequence > & list)
QtDartBindings_EXPORT void *
c_static_QKeySequence__listToString_QList_QKeySequence(void *list_);
// QKeySequence::mnemonic(const QString & text)
QtDartBindings_EXPORT void *
c_static_QKeySequence__mnemonic_QString(const char *text_);
QtDartBindings_EXPORT void c_QKeySequence__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QKeySequence_Finalizer(void *cppObj);
}

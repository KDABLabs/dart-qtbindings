
// tag=1040
#include "QtDartBindings_exports.h"
#include <qkeysequence.h>
#include <qlist.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QKeySequence_wrapper : public ::QKeySequence {
public:
  ~QKeySequence_wrapper();
  // tag=1041
  QKeySequence_wrapper();
  // tag=1041
  QKeySequence_wrapper(QKeySequence::StandardKey key);
  // tag=1041
  QKeySequence_wrapper(const QString &key);
  // tag=1041
  QKeySequence_wrapper(int k1, int k2 = 0, int k3 = 0, int k4 = 0);
  // tag=1041
  int count() const;
  // tag=1041
  static QKeySequence fromString(const QString &str);
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  static QList<QKeySequence> keyBindings(QKeySequence::StandardKey key);
  // tag=1041
  static QList<QKeySequence> listFromString(const QString &str);
  // tag=1041
  static QString listToString(const QList<QKeySequence> &list);
  // tag=1041
  static QKeySequence mnemonic(const QString &text);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QKeySequence::QKeySequence()
QtDartBindings_EXPORT void *c_QKeySequence__constructor();

// tag=1067
//  QKeySequence::QKeySequence(QKeySequence::StandardKey key)
QtDartBindings_EXPORT void *c_QKeySequence__constructor_StandardKey(int key);

// tag=1067
//  QKeySequence::QKeySequence(const QString & key)
QtDartBindings_EXPORT void *
c_QKeySequence__constructor_QString(const char *key_);

// tag=1067
//  QKeySequence::QKeySequence(int k1, int k2, int k3, int k4)
QtDartBindings_EXPORT void *
c_QKeySequence__constructor_int_int_int_int(int k1, int k2, int k3, int k4);

// tag=1067
//  QKeySequence::count() const
QtDartBindings_EXPORT int c_QKeySequence__count(void *thisObj);

// tag=1067
//  QKeySequence::fromString(const QString & str)
QtDartBindings_EXPORT void *
c_static_QKeySequence__fromString_QString(const char *str_);

// tag=1067
//  QKeySequence::isDetached() const
QtDartBindings_EXPORT bool c_QKeySequence__isDetached(void *thisObj);

// tag=1067
//  QKeySequence::isEmpty() const
QtDartBindings_EXPORT bool c_QKeySequence__isEmpty(void *thisObj);

// tag=1067
//  QKeySequence::keyBindings(QKeySequence::StandardKey key)
QtDartBindings_EXPORT void *
c_static_QKeySequence__keyBindings_StandardKey(int key);

// tag=1067
//  QKeySequence::listFromString(const QString & str)
QtDartBindings_EXPORT void *
c_static_QKeySequence__listFromString_QString(const char *str_);

// tag=1067
//  QKeySequence::listToString(const QList<QKeySequence > & list)
QtDartBindings_EXPORT void *
c_static_QKeySequence__listToString_QList_QKeySequence(void *list_);

// tag=1067
//  QKeySequence::mnemonic(const QString & text)
QtDartBindings_EXPORT void *
c_static_QKeySequence__mnemonic_QString(const char *text_);

// tag=1066
QtDartBindings_EXPORT void c_QKeySequence__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QKeySequence_Finalizer(void *, void *cppObj,
                                                    void *);
}

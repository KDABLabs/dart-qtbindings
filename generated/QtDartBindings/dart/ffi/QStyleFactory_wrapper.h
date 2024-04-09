
// tag=1040
#include "QtDartBindings_exports.h"
#include <qlist.h>
#include <qstring.h>
#include <qstyle.h>
#include <qstylefactory.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QStyleFactory_wrapper : public ::QStyleFactory {
public:
  ~QStyleFactory_wrapper();
  // tag=1041
  QStyleFactory_wrapper();
  // tag=1041
  static QStyle *create(const QString &arg__1);
  // tag=1041
  static QList<QString> keys();
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QStyleFactory::QStyleFactory()
QtDartBindings_EXPORT void *c_QStyleFactory__constructor();

// tag=1067
//  QStyleFactory::create(const QString & arg__1)
QtDartBindings_EXPORT void *
c_static_QStyleFactory__create_QString(const char *arg__1_);

// tag=1067
//  QStyleFactory::keys()
QtDartBindings_EXPORT void *c_static_QStyleFactory__keys();

// tag=1066
QtDartBindings_EXPORT void c_QStyleFactory__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QStyleFactory_Finalizer(void *, void *cppObj,
                                                     void *);
}

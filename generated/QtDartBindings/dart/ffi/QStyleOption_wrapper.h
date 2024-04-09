
// tag=1040
#include "QtDartBindings_exports.h"
#include <qstyleoption.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QStyleOption_wrapper : public ::QStyleOption {
public:
  ~QStyleOption_wrapper();
  // tag=1041
  QStyleOption_wrapper(int version = QStyleOption::StyleOptionVersion::Version,
                       int type = QStyleOption::OptionType::SO_Default);
  // tag=1041
  void initFrom(const QWidget *w);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QStyleOption::QStyleOption(int version, int type)
QtDartBindings_EXPORT void *c_QStyleOption__constructor_int_int(int version,
                                                                int type);

// tag=1067
//  QStyleOption::initFrom(const QWidget * w)
QtDartBindings_EXPORT void c_QStyleOption__initFrom_QWidget(void *thisObj,
                                                            void *w_);

// tag=1066
QtDartBindings_EXPORT void c_QStyleOption__destructor(void *thisObj);

// tag=1044
QtDartBindings_EXPORT int c_QStyleOption___get_version(void *thisObj);

// tag=1044
QtDartBindings_EXPORT int c_QStyleOption___get_type(void *thisObj);

// tag=1045
QtDartBindings_EXPORT void c_QStyleOption___set_version_int(void *thisObj,
                                                            int version_);

// tag=1045
QtDartBindings_EXPORT void c_QStyleOption___set_type_int(void *thisObj,
                                                         int type_);

// tag=1047
QtDartBindings_EXPORT void c_QStyleOption_Finalizer(void *, void *cppObj,
                                                    void *);
}

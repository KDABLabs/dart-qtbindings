
// tag=1040
#include "QtDartBindings_exports.h"
#include <qstyleoption.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QStyleHintReturn_wrapper : public ::QStyleHintReturn {
public:
  ~QStyleHintReturn_wrapper();
  // tag=1041
  QStyleHintReturn_wrapper(
      int version = QStyleOption::Version,
      int type = QStyleHintReturn::HintReturnType::SH_Default);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QStyleHintReturn::QStyleHintReturn(int version, int type)
QtDartBindings_EXPORT void *c_QStyleHintReturn__constructor_int_int(int version,
                                                                    int type);

// tag=1066
QtDartBindings_EXPORT void c_QStyleHintReturn__destructor(void *thisObj);

// tag=1044
QtDartBindings_EXPORT int c_QStyleHintReturn___get_version(void *thisObj);

// tag=1044
QtDartBindings_EXPORT int c_QStyleHintReturn___get_type(void *thisObj);

// tag=1045
QtDartBindings_EXPORT void c_QStyleHintReturn___set_version_int(void *thisObj,
                                                                int version_);

// tag=1045
QtDartBindings_EXPORT void c_QStyleHintReturn___set_type_int(void *thisObj,
                                                             int type_);

// tag=1047
QtDartBindings_EXPORT void c_QStyleHintReturn_Finalizer(void *, void *cppObj,
                                                        void *);
}

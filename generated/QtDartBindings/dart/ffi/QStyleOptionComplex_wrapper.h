
// tag=1040
#include "QtDartBindings_exports.h"
#include <qstyleoption.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QStyleOptionComplex_wrapper : public ::QStyleOptionComplex {
public:
  ~QStyleOptionComplex_wrapper();
  // tag=1041
  QStyleOptionComplex_wrapper(
      int version = QStyleOptionComplex::StyleOptionVersion::Version,
      int type = QStyleOption::OptionType::SO_Complex);
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QStyleOptionComplex::QStyleOptionComplex(int version, int type)
QtDartBindings_EXPORT void *
c_QStyleOptionComplex__constructor_int_int(int version, int type);

// tag=1066
QtDartBindings_EXPORT void c_QStyleOptionComplex__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QStyleOptionComplex_Finalizer(void *, void *cppObj,
                                                           void *);
}

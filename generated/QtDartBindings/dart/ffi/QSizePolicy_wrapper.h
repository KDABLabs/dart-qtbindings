
// tag=1040
#include "QtDartBindings_exports.h"
#include <qsizepolicy.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QSizePolicy_wrapper : public ::QSizePolicy {
public:
  ~QSizePolicy_wrapper();
  // tag=1041
  QSizePolicy_wrapper();
  // tag=1041
  QSizePolicy_wrapper(
      QSizePolicy::Policy horizontal, QSizePolicy::Policy vertical,
      QSizePolicy::ControlType type = QSizePolicy::ControlType::DefaultType);
  // tag=1041
  QSizePolicy::ControlType controlType() const;
  // tag=1041
  QFlags<Qt::Orientation> expandingDirections() const;
  // tag=1041
  bool hasHeightForWidth() const;
  // tag=1041
  bool hasWidthForHeight() const;
  // tag=1041
  QSizePolicy::Policy horizontalPolicy() const;
  // tag=1041
  int horizontalStretch() const;
  // tag=1041
  bool retainSizeWhenHidden() const;
  // tag=1041
  void setControlType(QSizePolicy::ControlType type);
  // tag=1041
  void setHeightForWidth(bool b);
  // tag=1041
  void setHorizontalPolicy(QSizePolicy::Policy d);
  // tag=1041
  void setHorizontalStretch(int stretchFactor);
  // tag=1041
  void setRetainSizeWhenHidden(bool retainSize);
  // tag=1041
  void setVerticalPolicy(QSizePolicy::Policy d);
  // tag=1041
  void setVerticalStretch(int stretchFactor);
  // tag=1041
  void setWidthForHeight(bool b);
  // tag=1041
  void transpose();
  // tag=1041
  QSizePolicy transposed() const;
  // tag=1041
  QSizePolicy::Policy verticalPolicy() const;
  // tag=1041
  int verticalStretch() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QSizePolicy::QSizePolicy()
QtDartBindings_EXPORT void *c_QSizePolicy__constructor();

// tag=1067
//  QSizePolicy::QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy
//  vertical, QSizePolicy::ControlType type)
QtDartBindings_EXPORT void *
c_QSizePolicy__constructor_Policy_Policy_ControlType(int horizontal,
                                                     int vertical, int type);

// tag=1067
//  QSizePolicy::controlType() const
QtDartBindings_EXPORT int c_QSizePolicy__controlType(void *thisObj);

// tag=1067
//  QSizePolicy::expandingDirections() const
QtDartBindings_EXPORT int c_QSizePolicy__expandingDirections(void *thisObj);

// tag=1067
//  QSizePolicy::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QSizePolicy__hasHeightForWidth(void *thisObj);

// tag=1067
//  QSizePolicy::hasWidthForHeight() const
QtDartBindings_EXPORT bool c_QSizePolicy__hasWidthForHeight(void *thisObj);

// tag=1067
//  QSizePolicy::horizontalPolicy() const
QtDartBindings_EXPORT int c_QSizePolicy__horizontalPolicy(void *thisObj);

// tag=1067
//  QSizePolicy::horizontalStretch() const
QtDartBindings_EXPORT int c_QSizePolicy__horizontalStretch(void *thisObj);

// tag=1067
//  QSizePolicy::retainSizeWhenHidden() const
QtDartBindings_EXPORT bool c_QSizePolicy__retainSizeWhenHidden(void *thisObj);

// tag=1067
//  QSizePolicy::setControlType(QSizePolicy::ControlType type)
QtDartBindings_EXPORT void
c_QSizePolicy__setControlType_ControlType(void *thisObj, int type);

// tag=1067
//  QSizePolicy::setHeightForWidth(bool b)
QtDartBindings_EXPORT void c_QSizePolicy__setHeightForWidth_bool(void *thisObj,
                                                                 bool b);

// tag=1067
//  QSizePolicy::setHorizontalPolicy(QSizePolicy::Policy d)
QtDartBindings_EXPORT void
c_QSizePolicy__setHorizontalPolicy_Policy(void *thisObj, int d);

// tag=1067
//  QSizePolicy::setHorizontalStretch(int stretchFactor)
QtDartBindings_EXPORT void
c_QSizePolicy__setHorizontalStretch_int(void *thisObj, int stretchFactor);

// tag=1067
//  QSizePolicy::setRetainSizeWhenHidden(bool retainSize)
QtDartBindings_EXPORT void
c_QSizePolicy__setRetainSizeWhenHidden_bool(void *thisObj, bool retainSize);

// tag=1067
//  QSizePolicy::setVerticalPolicy(QSizePolicy::Policy d)
QtDartBindings_EXPORT void
c_QSizePolicy__setVerticalPolicy_Policy(void *thisObj, int d);

// tag=1067
//  QSizePolicy::setVerticalStretch(int stretchFactor)
QtDartBindings_EXPORT void
c_QSizePolicy__setVerticalStretch_int(void *thisObj, int stretchFactor);

// tag=1067
//  QSizePolicy::setWidthForHeight(bool b)
QtDartBindings_EXPORT void c_QSizePolicy__setWidthForHeight_bool(void *thisObj,
                                                                 bool b);

// tag=1067
//  QSizePolicy::transpose()
QtDartBindings_EXPORT void c_QSizePolicy__transpose(void *thisObj);

// tag=1067
//  QSizePolicy::transposed() const
QtDartBindings_EXPORT void *c_QSizePolicy__transposed(void *thisObj);

// tag=1067
//  QSizePolicy::verticalPolicy() const
QtDartBindings_EXPORT int c_QSizePolicy__verticalPolicy(void *thisObj);

// tag=1067
//  QSizePolicy::verticalStretch() const
QtDartBindings_EXPORT int c_QSizePolicy__verticalStretch(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QSizePolicy__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QSizePolicy_Finalizer(void *, void *cppObj,
                                                   void *);
}

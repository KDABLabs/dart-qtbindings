
// tag=1040
#include "QtDartBindings_exports.h"
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QPoint_wrapper : public ::QPoint {
public:
  ~QPoint_wrapper();
  // tag=1041
  QPoint_wrapper();
  // tag=1041
  QPoint_wrapper(int xpos, int ypos);
  // tag=1041
  static int dotProduct(const QPoint &p1, const QPoint &p2);
  // tag=1041
  bool isNull() const;
  // tag=1041
  int manhattanLength() const;
  // tag=1041
  void setX(int x);
  // tag=1041
  void setY(int y);
  // tag=1041
  QPoint transposed() const;
  // tag=1041
  int x() const;
  // tag=1041
  int y() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPoint::QPoint()
QtDartBindings_EXPORT void *c_QPoint__constructor();

// tag=1067
//  QPoint::QPoint(int xpos, int ypos)
QtDartBindings_EXPORT void *c_QPoint__constructor_int_int(int xpos, int ypos);

// tag=1067
//  QPoint::dotProduct(const QPoint & p1, const QPoint & p2)
QtDartBindings_EXPORT int c_static_QPoint__dotProduct_QPoint_QPoint(void *p1_,
                                                                    void *p2_);

// tag=1067
//  QPoint::isNull() const
QtDartBindings_EXPORT bool c_QPoint__isNull(void *thisObj);

// tag=1067
//  QPoint::manhattanLength() const
QtDartBindings_EXPORT int c_QPoint__manhattanLength(void *thisObj);

// tag=1067
//  QPoint::setX(int x)
QtDartBindings_EXPORT void c_QPoint__setX_int(void *thisObj, int x);

// tag=1067
//  QPoint::setY(int y)
QtDartBindings_EXPORT void c_QPoint__setY_int(void *thisObj, int y);

// tag=1067
//  QPoint::transposed() const
QtDartBindings_EXPORT void *c_QPoint__transposed(void *thisObj);

// tag=1067
//  QPoint::x() const
QtDartBindings_EXPORT int c_QPoint__x(void *thisObj);

// tag=1067
//  QPoint::y() const
QtDartBindings_EXPORT int c_QPoint__y(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QPoint__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QPoint_Finalizer(void *, void *cppObj, void *);
}

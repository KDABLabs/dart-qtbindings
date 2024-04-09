
// tag=1040
#include "QtDartBindings_exports.h"
#include <qline.h>
#include <qpoint.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QLine_wrapper : public ::QLine {
public:
  ~QLine_wrapper();
  // tag=1041
  QLine_wrapper();
  // tag=1041
  QLine_wrapper(const QPoint &pt1, const QPoint &pt2);
  // tag=1041
  QLine_wrapper(int x1, int y1, int x2, int y2);
  // tag=1041
  QPoint center() const;
  // tag=1041
  int dx() const;
  // tag=1041
  int dy() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  QPoint p1() const;
  // tag=1041
  QPoint p2() const;
  // tag=1041
  void setLine(int x1, int y1, int x2, int y2);
  // tag=1041
  void setP1(const QPoint &p1);
  // tag=1041
  void setP2(const QPoint &p2);
  // tag=1041
  void setPoints(const QPoint &p1, const QPoint &p2);
  // tag=1041
  void translate(const QPoint &p);
  // tag=1041
  void translate(int dx, int dy);
  // tag=1041
  QLine translated(const QPoint &p) const;
  // tag=1041
  QLine translated(int dx, int dy) const;
  // tag=1041
  int x1() const;
  // tag=1041
  int x2() const;
  // tag=1041
  int y1() const;
  // tag=1041
  int y2() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QLine::QLine()
QtDartBindings_EXPORT void *c_QLine__constructor();

// tag=1067
//  QLine::QLine(const QPoint & pt1, const QPoint & pt2)
QtDartBindings_EXPORT void *c_QLine__constructor_QPoint_QPoint(void *pt1_,
                                                               void *pt2_);

// tag=1067
//  QLine::QLine(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void *
c_QLine__constructor_int_int_int_int(int x1, int y1, int x2, int y2);

// tag=1067
//  QLine::center() const
QtDartBindings_EXPORT void *c_QLine__center(void *thisObj);

// tag=1067
//  QLine::dx() const
QtDartBindings_EXPORT int c_QLine__dx(void *thisObj);

// tag=1067
//  QLine::dy() const
QtDartBindings_EXPORT int c_QLine__dy(void *thisObj);

// tag=1067
//  QLine::isNull() const
QtDartBindings_EXPORT bool c_QLine__isNull(void *thisObj);

// tag=1067
//  QLine::p1() const
QtDartBindings_EXPORT void *c_QLine__p1(void *thisObj);

// tag=1067
//  QLine::p2() const
QtDartBindings_EXPORT void *c_QLine__p2(void *thisObj);

// tag=1067
//  QLine::setLine(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void
c_QLine__setLine_int_int_int_int(void *thisObj, int x1, int y1, int x2, int y2);

// tag=1067
//  QLine::setP1(const QPoint & p1)
QtDartBindings_EXPORT void c_QLine__setP1_QPoint(void *thisObj, void *p1_);

// tag=1067
//  QLine::setP2(const QPoint & p2)
QtDartBindings_EXPORT void c_QLine__setP2_QPoint(void *thisObj, void *p2_);

// tag=1067
//  QLine::setPoints(const QPoint & p1, const QPoint & p2)
QtDartBindings_EXPORT void
c_QLine__setPoints_QPoint_QPoint(void *thisObj, void *p1_, void *p2_);

// tag=1067
//  QLine::translate(const QPoint & p)
QtDartBindings_EXPORT void c_QLine__translate_QPoint(void *thisObj, void *p_);

// tag=1067
//  QLine::translate(int dx, int dy)
QtDartBindings_EXPORT void c_QLine__translate_int_int(void *thisObj, int dx,
                                                      int dy);

// tag=1067
//  QLine::translated(const QPoint & p) const
QtDartBindings_EXPORT void *c_QLine__translated_QPoint(void *thisObj, void *p_);

// tag=1067
//  QLine::translated(int dx, int dy) const
QtDartBindings_EXPORT void *c_QLine__translated_int_int(void *thisObj, int dx,
                                                        int dy);

// tag=1067
//  QLine::x1() const
QtDartBindings_EXPORT int c_QLine__x1(void *thisObj);

// tag=1067
//  QLine::x2() const
QtDartBindings_EXPORT int c_QLine__x2(void *thisObj);

// tag=1067
//  QLine::y1() const
QtDartBindings_EXPORT int c_QLine__y1(void *thisObj);

// tag=1067
//  QLine::y2() const
QtDartBindings_EXPORT int c_QLine__y2(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QLine__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QLine_Finalizer(void *, void *cppObj, void *);
}

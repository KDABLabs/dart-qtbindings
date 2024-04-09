
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QRegion_wrapper : public ::QRegion {
public:
  ~QRegion_wrapper();
  // tag=1041
  QRegion_wrapper();
  // tag=1041
  QRegion_wrapper(const QRect &r);
  // tag=1041
  QRegion_wrapper(int x, int y, int w, int h);
  // tag=1041
  const QRect *begin() const;
  // tag=1041
  QRect boundingRect() const;
  // tag=1041
  const QRect *cbegin() const;
  // tag=1041
  const QRect *cend() const;
  // tag=1041
  bool contains(const QPoint &p) const;
  // tag=1041
  bool contains(const QRect &r) const;
  // tag=1041
  const QRect *end() const;
  // tag=1041
  QRegion intersected(const QRect &r) const;
  // tag=1041
  QRegion intersected(const QRegion &r) const;
  // tag=1041
  bool intersects(const QRect &r) const;
  // tag=1041
  bool intersects(const QRegion &r) const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  int rectCount() const;
  // tag=1041
  void setRects(const QRect *rect, int num);
  // tag=1041
  QRegion subtracted(const QRegion &r) const;
  // tag=1041
  void translate(const QPoint &p);
  // tag=1041
  void translate(int dx, int dy);
  // tag=1041
  QRegion translated(const QPoint &p) const;
  // tag=1041
  QRegion translated(int dx, int dy) const;
  // tag=1041
  QRegion united(const QRect &r) const;
  // tag=1041
  QRegion united(const QRegion &r) const;
  // tag=1041
  QRegion xored(const QRegion &r) const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QRegion::QRegion()
QtDartBindings_EXPORT void *c_QRegion__constructor();

// tag=1067
//  QRegion::QRegion(const QRect & r)
QtDartBindings_EXPORT void *c_QRegion__constructor_QRect(void *r_);

// tag=1067
//  QRegion::QRegion(int x, int y, int w, int h)
QtDartBindings_EXPORT void *
c_QRegion__constructor_int_int_int_int(int x, int y, int w, int h);

// tag=1067
//  QRegion::begin() const
QtDartBindings_EXPORT void *c_QRegion__begin(void *thisObj);

// tag=1067
//  QRegion::boundingRect() const
QtDartBindings_EXPORT void *c_QRegion__boundingRect(void *thisObj);

// tag=1067
//  QRegion::cbegin() const
QtDartBindings_EXPORT void *c_QRegion__cbegin(void *thisObj);

// tag=1067
//  QRegion::cend() const
QtDartBindings_EXPORT void *c_QRegion__cend(void *thisObj);

// tag=1067
//  QRegion::contains(const QPoint & p) const
QtDartBindings_EXPORT bool c_QRegion__contains_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRegion::contains(const QRect & r) const
QtDartBindings_EXPORT bool c_QRegion__contains_QRect(void *thisObj, void *r_);

// tag=1067
//  QRegion::end() const
QtDartBindings_EXPORT void *c_QRegion__end(void *thisObj);

// tag=1067
//  QRegion::intersected(const QRect & r) const
QtDartBindings_EXPORT void *c_QRegion__intersected_QRect(void *thisObj,
                                                         void *r_);

// tag=1067
//  QRegion::intersected(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__intersected_QRegion(void *thisObj,
                                                           void *r_);

// tag=1067
//  QRegion::intersects(const QRect & r) const
QtDartBindings_EXPORT bool c_QRegion__intersects_QRect(void *thisObj, void *r_);

// tag=1067
//  QRegion::intersects(const QRegion & r) const
QtDartBindings_EXPORT bool c_QRegion__intersects_QRegion(void *thisObj,
                                                         void *r_);

// tag=1067
//  QRegion::isEmpty() const
QtDartBindings_EXPORT bool c_QRegion__isEmpty(void *thisObj);

// tag=1067
//  QRegion::isNull() const
QtDartBindings_EXPORT bool c_QRegion__isNull(void *thisObj);

// tag=1067
//  QRegion::rectCount() const
QtDartBindings_EXPORT int c_QRegion__rectCount(void *thisObj);

// tag=1067
//  QRegion::setRects(const QRect * rect, int num)
QtDartBindings_EXPORT void c_QRegion__setRects_QRect_int(void *thisObj,
                                                         void *rect_, int num);

// tag=1067
//  QRegion::subtracted(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__subtracted_QRegion(void *thisObj,
                                                          void *r_);

// tag=1067
//  QRegion::translate(const QPoint & p)
QtDartBindings_EXPORT void c_QRegion__translate_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRegion::translate(int dx, int dy)
QtDartBindings_EXPORT void c_QRegion__translate_int_int(void *thisObj, int dx,
                                                        int dy);

// tag=1067
//  QRegion::translated(const QPoint & p) const
QtDartBindings_EXPORT void *c_QRegion__translated_QPoint(void *thisObj,
                                                         void *p_);

// tag=1067
//  QRegion::translated(int dx, int dy) const
QtDartBindings_EXPORT void *c_QRegion__translated_int_int(void *thisObj, int dx,
                                                          int dy);

// tag=1067
//  QRegion::united(const QRect & r) const
QtDartBindings_EXPORT void *c_QRegion__united_QRect(void *thisObj, void *r_);

// tag=1067
//  QRegion::united(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__united_QRegion(void *thisObj, void *r_);

// tag=1067
//  QRegion::xored(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__xored_QRegion(void *thisObj, void *r_);

// tag=1066
QtDartBindings_EXPORT void c_QRegion__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QRegion_Finalizer(void *, void *cppObj, void *);
}

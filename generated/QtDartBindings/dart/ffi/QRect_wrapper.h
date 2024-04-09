
// tag=1040
#include "QtDartBindings_exports.h"
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QRect_wrapper : public ::QRect {
public:
  ~QRect_wrapper();
  // tag=1041
  QRect_wrapper();
  // tag=1041
  QRect_wrapper(const QPoint &topleft, const QPoint &bottomright);
  // tag=1041
  QRect_wrapper(const QPoint &topleft, const QSize &size);
  // tag=1041
  QRect_wrapper(int left, int top, int width, int height);
  // tag=1041
  void adjust(int x1, int y1, int x2, int y2);
  // tag=1041
  QRect adjusted(int x1, int y1, int x2, int y2) const;
  // tag=1041
  int bottom() const;
  // tag=1041
  QPoint bottomLeft() const;
  // tag=1041
  QPoint bottomRight() const;
  // tag=1041
  QPoint center() const;
  // tag=1041
  bool contains(const QPoint &p, bool proper = false) const;
  // tag=1041
  bool contains(const QRect &r, bool proper = false) const;
  // tag=1041
  bool contains(int x, int y) const;
  // tag=1041
  bool contains(int x, int y, bool proper) const;
  // tag=1041
  int height() const;
  // tag=1041
  QRect intersected(const QRect &other) const;
  // tag=1041
  bool intersects(const QRect &r) const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  bool isValid() const;
  // tag=1041
  int left() const;
  // tag=1041
  void moveBottom(int pos);
  // tag=1041
  void moveBottomLeft(const QPoint &p);
  // tag=1041
  void moveBottomRight(const QPoint &p);
  // tag=1041
  void moveCenter(const QPoint &p);
  // tag=1041
  void moveLeft(int pos);
  // tag=1041
  void moveRight(int pos);
  // tag=1041
  void moveTo(const QPoint &p);
  // tag=1041
  void moveTo(int x, int t);
  // tag=1041
  void moveTop(int pos);
  // tag=1041
  void moveTopLeft(const QPoint &p);
  // tag=1041
  void moveTopRight(const QPoint &p);
  // tag=1041
  QRect normalized() const;
  // tag=1041
  int right() const;
  // tag=1041
  void setBottom(int pos);
  // tag=1041
  void setBottomLeft(const QPoint &p);
  // tag=1041
  void setBottomRight(const QPoint &p);
  // tag=1041
  void setCoords(int x1, int y1, int x2, int y2);
  // tag=1041
  void setHeight(int h);
  // tag=1041
  void setLeft(int pos);
  // tag=1041
  void setRect(int x, int y, int w, int h);
  // tag=1041
  void setRight(int pos);
  // tag=1041
  void setSize(const QSize &s);
  // tag=1041
  void setTop(int pos);
  // tag=1041
  void setTopLeft(const QPoint &p);
  // tag=1041
  void setTopRight(const QPoint &p);
  // tag=1041
  void setWidth(int w);
  // tag=1041
  void setX(int x);
  // tag=1041
  void setY(int y);
  // tag=1041
  QSize size() const;
  // tag=1041
  static QRect span(const QPoint &p1, const QPoint &p2);
  // tag=1041
  int top() const;
  // tag=1041
  QPoint topLeft() const;
  // tag=1041
  QPoint topRight() const;
  // tag=1041
  void translate(const QPoint &p);
  // tag=1041
  void translate(int dx, int dy);
  // tag=1041
  QRect translated(const QPoint &p) const;
  // tag=1041
  QRect translated(int dx, int dy) const;
  // tag=1041
  QRect transposed() const;
  // tag=1041
  QRect united(const QRect &other) const;
  // tag=1041
  int width() const;
  // tag=1041
  int x() const;
  // tag=1041
  int y() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QRect::QRect()
QtDartBindings_EXPORT void *c_QRect__constructor();

// tag=1067
//  QRect::QRect(const QPoint & topleft, const QPoint & bottomright)
QtDartBindings_EXPORT void *
c_QRect__constructor_QPoint_QPoint(void *topleft_, void *bottomright_);

// tag=1067
//  QRect::QRect(const QPoint & topleft, const QSize & size)
QtDartBindings_EXPORT void *c_QRect__constructor_QPoint_QSize(void *topleft_,
                                                              void *size_);

// tag=1067
//  QRect::QRect(int left, int top, int width, int height)
QtDartBindings_EXPORT void *
c_QRect__constructor_int_int_int_int(int left, int top, int width, int height);

// tag=1067
//  QRect::adjust(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void
c_QRect__adjust_int_int_int_int(void *thisObj, int x1, int y1, int x2, int y2);

// tag=1067
//  QRect::adjusted(int x1, int y1, int x2, int y2) const
QtDartBindings_EXPORT void *c_QRect__adjusted_int_int_int_int(void *thisObj,
                                                              int x1, int y1,
                                                              int x2, int y2);

// tag=1067
//  QRect::bottom() const
QtDartBindings_EXPORT int c_QRect__bottom(void *thisObj);

// tag=1067
//  QRect::bottomLeft() const
QtDartBindings_EXPORT void *c_QRect__bottomLeft(void *thisObj);

// tag=1067
//  QRect::bottomRight() const
QtDartBindings_EXPORT void *c_QRect__bottomRight(void *thisObj);

// tag=1067
//  QRect::center() const
QtDartBindings_EXPORT void *c_QRect__center(void *thisObj);

// tag=1067
//  QRect::contains(const QPoint & p, bool proper) const
QtDartBindings_EXPORT bool c_QRect__contains_QPoint_bool(void *thisObj,
                                                         void *p_, bool proper);

// tag=1067
//  QRect::contains(const QRect & r, bool proper) const
QtDartBindings_EXPORT bool c_QRect__contains_QRect_bool(void *thisObj, void *r_,
                                                        bool proper);

// tag=1067
//  QRect::contains(int x, int y) const
QtDartBindings_EXPORT bool c_QRect__contains_int_int(void *thisObj, int x,
                                                     int y);

// tag=1067
//  QRect::contains(int x, int y, bool proper) const
QtDartBindings_EXPORT bool c_QRect__contains_int_int_bool(void *thisObj, int x,
                                                          int y, bool proper);

// tag=1067
//  QRect::height() const
QtDartBindings_EXPORT int c_QRect__height(void *thisObj);

// tag=1067
//  QRect::intersected(const QRect & other) const
QtDartBindings_EXPORT void *c_QRect__intersected_QRect(void *thisObj,
                                                       void *other_);

// tag=1067
//  QRect::intersects(const QRect & r) const
QtDartBindings_EXPORT bool c_QRect__intersects_QRect(void *thisObj, void *r_);

// tag=1067
//  QRect::isEmpty() const
QtDartBindings_EXPORT bool c_QRect__isEmpty(void *thisObj);

// tag=1067
//  QRect::isNull() const
QtDartBindings_EXPORT bool c_QRect__isNull(void *thisObj);

// tag=1067
//  QRect::isValid() const
QtDartBindings_EXPORT bool c_QRect__isValid(void *thisObj);

// tag=1067
//  QRect::left() const
QtDartBindings_EXPORT int c_QRect__left(void *thisObj);

// tag=1067
//  QRect::moveBottom(int pos)
QtDartBindings_EXPORT void c_QRect__moveBottom_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveBottomLeft(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__moveBottomLeft_QPoint(void *thisObj,
                                                          void *p_);

// tag=1067
//  QRect::moveBottomRight(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__moveBottomRight_QPoint(void *thisObj,
                                                           void *p_);

// tag=1067
//  QRect::moveCenter(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__moveCenter_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveLeft(int pos)
QtDartBindings_EXPORT void c_QRect__moveLeft_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveRight(int pos)
QtDartBindings_EXPORT void c_QRect__moveRight_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveTo(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__moveTo_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveTo(int x, int t)
QtDartBindings_EXPORT void c_QRect__moveTo_int_int(void *thisObj, int x, int t);

// tag=1067
//  QRect::moveTop(int pos)
QtDartBindings_EXPORT void c_QRect__moveTop_int(void *thisObj, int pos);

// tag=1067
//  QRect::moveTopLeft(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__moveTopLeft_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::moveTopRight(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__moveTopRight_QPoint(void *thisObj,
                                                        void *p_);

// tag=1067
//  QRect::normalized() const
QtDartBindings_EXPORT void *c_QRect__normalized(void *thisObj);

// tag=1067
//  QRect::right() const
QtDartBindings_EXPORT int c_QRect__right(void *thisObj);

// tag=1067
//  QRect::setBottom(int pos)
QtDartBindings_EXPORT void c_QRect__setBottom_int(void *thisObj, int pos);

// tag=1067
//  QRect::setBottomLeft(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__setBottomLeft_QPoint(void *thisObj,
                                                         void *p_);

// tag=1067
//  QRect::setBottomRight(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__setBottomRight_QPoint(void *thisObj,
                                                          void *p_);

// tag=1067
//  QRect::setCoords(int x1, int y1, int x2, int y2)
QtDartBindings_EXPORT void c_QRect__setCoords_int_int_int_int(void *thisObj,
                                                              int x1, int y1,
                                                              int x2, int y2);

// tag=1067
//  QRect::setHeight(int h)
QtDartBindings_EXPORT void c_QRect__setHeight_int(void *thisObj, int h);

// tag=1067
//  QRect::setLeft(int pos)
QtDartBindings_EXPORT void c_QRect__setLeft_int(void *thisObj, int pos);

// tag=1067
//  QRect::setRect(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QRect__setRect_int_int_int_int(void *thisObj, int x, int y, int w, int h);

// tag=1067
//  QRect::setRight(int pos)
QtDartBindings_EXPORT void c_QRect__setRight_int(void *thisObj, int pos);

// tag=1067
//  QRect::setSize(const QSize & s)
QtDartBindings_EXPORT void c_QRect__setSize_QSize(void *thisObj, void *s_);

// tag=1067
//  QRect::setTop(int pos)
QtDartBindings_EXPORT void c_QRect__setTop_int(void *thisObj, int pos);

// tag=1067
//  QRect::setTopLeft(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__setTopLeft_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::setTopRight(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__setTopRight_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::setWidth(int w)
QtDartBindings_EXPORT void c_QRect__setWidth_int(void *thisObj, int w);

// tag=1067
//  QRect::setX(int x)
QtDartBindings_EXPORT void c_QRect__setX_int(void *thisObj, int x);

// tag=1067
//  QRect::setY(int y)
QtDartBindings_EXPORT void c_QRect__setY_int(void *thisObj, int y);

// tag=1067
//  QRect::size() const
QtDartBindings_EXPORT void *c_QRect__size(void *thisObj);

// tag=1067
//  QRect::span(const QPoint & p1, const QPoint & p2)
QtDartBindings_EXPORT void *c_static_QRect__span_QPoint_QPoint(void *p1_,
                                                               void *p2_);

// tag=1067
//  QRect::top() const
QtDartBindings_EXPORT int c_QRect__top(void *thisObj);

// tag=1067
//  QRect::topLeft() const
QtDartBindings_EXPORT void *c_QRect__topLeft(void *thisObj);

// tag=1067
//  QRect::topRight() const
QtDartBindings_EXPORT void *c_QRect__topRight(void *thisObj);

// tag=1067
//  QRect::translate(const QPoint & p)
QtDartBindings_EXPORT void c_QRect__translate_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::translate(int dx, int dy)
QtDartBindings_EXPORT void c_QRect__translate_int_int(void *thisObj, int dx,
                                                      int dy);

// tag=1067
//  QRect::translated(const QPoint & p) const
QtDartBindings_EXPORT void *c_QRect__translated_QPoint(void *thisObj, void *p_);

// tag=1067
//  QRect::translated(int dx, int dy) const
QtDartBindings_EXPORT void *c_QRect__translated_int_int(void *thisObj, int dx,
                                                        int dy);

// tag=1067
//  QRect::transposed() const
QtDartBindings_EXPORT void *c_QRect__transposed(void *thisObj);

// tag=1067
//  QRect::united(const QRect & other) const
QtDartBindings_EXPORT void *c_QRect__united_QRect(void *thisObj, void *other_);

// tag=1067
//  QRect::width() const
QtDartBindings_EXPORT int c_QRect__width(void *thisObj);

// tag=1067
//  QRect::x() const
QtDartBindings_EXPORT int c_QRect__x(void *thisObj);

// tag=1067
//  QRect::y() const
QtDartBindings_EXPORT int c_QRect__y(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QRect__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QRect_Finalizer(void *, void *cppObj, void *);
}


// tag=1040
#include "QtDartBindings_exports.h"
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QRectF_wrapper : public ::QRectF {
public:
  ~QRectF_wrapper();
  // tag=1041
  QRectF_wrapper();
  // tag=1041
  QRectF_wrapper(const QPointF &topleft, const QPointF &bottomRight);
  // tag=1041
  QRectF_wrapper(const QPointF &topleft, const QSizeF &size);
  // tag=1041
  QRectF_wrapper(const QRect &rect);
  // tag=1041
  QRectF_wrapper(qreal left, qreal top, qreal width, qreal height);
  // tag=1041
  void adjust(qreal x1, qreal y1, qreal x2, qreal y2);
  // tag=1041
  QRectF adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const;
  // tag=1041
  qreal bottom() const;
  // tag=1041
  QPointF bottomLeft() const;
  // tag=1041
  QPointF bottomRight() const;
  // tag=1041
  QPointF center() const;
  // tag=1041
  bool contains(const QPointF &p) const;
  // tag=1041
  bool contains(const QRectF &r) const;
  // tag=1041
  bool contains(qreal x, qreal y) const;
  // tag=1041
  qreal height() const;
  // tag=1041
  QRectF intersected(const QRectF &other) const;
  // tag=1041
  bool intersects(const QRectF &r) const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  bool isValid() const;
  // tag=1041
  qreal left() const;
  // tag=1041
  void moveBottom(qreal pos);
  // tag=1041
  void moveBottomLeft(const QPointF &p);
  // tag=1041
  void moveBottomRight(const QPointF &p);
  // tag=1041
  void moveCenter(const QPointF &p);
  // tag=1041
  void moveLeft(qreal pos);
  // tag=1041
  void moveRight(qreal pos);
  // tag=1041
  void moveTo(const QPointF &p);
  // tag=1041
  void moveTo(qreal x, qreal y);
  // tag=1041
  void moveTop(qreal pos);
  // tag=1041
  void moveTopLeft(const QPointF &p);
  // tag=1041
  void moveTopRight(const QPointF &p);
  // tag=1041
  QRectF normalized() const;
  // tag=1041
  qreal right() const;
  // tag=1041
  void setBottom(qreal pos);
  // tag=1041
  void setBottomLeft(const QPointF &p);
  // tag=1041
  void setBottomRight(const QPointF &p);
  // tag=1041
  void setCoords(qreal x1, qreal y1, qreal x2, qreal y2);
  // tag=1041
  void setHeight(qreal h);
  // tag=1041
  void setLeft(qreal pos);
  // tag=1041
  void setRect(qreal x, qreal y, qreal w, qreal h);
  // tag=1041
  void setRight(qreal pos);
  // tag=1041
  void setSize(const QSizeF &s);
  // tag=1041
  void setTop(qreal pos);
  // tag=1041
  void setTopLeft(const QPointF &p);
  // tag=1041
  void setTopRight(const QPointF &p);
  // tag=1041
  void setWidth(qreal w);
  // tag=1041
  void setX(qreal pos);
  // tag=1041
  void setY(qreal pos);
  // tag=1041
  QSizeF size() const;
  // tag=1041
  QRect toAlignedRect() const;
  // tag=1041
  QRect toRect() const;
  // tag=1041
  qreal top() const;
  // tag=1041
  QPointF topLeft() const;
  // tag=1041
  QPointF topRight() const;
  // tag=1041
  void translate(const QPointF &p);
  // tag=1041
  void translate(qreal dx, qreal dy);
  // tag=1041
  QRectF translated(const QPointF &p) const;
  // tag=1041
  QRectF translated(qreal dx, qreal dy) const;
  // tag=1041
  QRectF transposed() const;
  // tag=1041
  QRectF united(const QRectF &other) const;
  // tag=1041
  qreal width() const;
  // tag=1041
  qreal x() const;
  // tag=1041
  qreal y() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QRectF::QRectF()
QtDartBindings_EXPORT void *c_QRectF__constructor();

// tag=1067
//  QRectF::QRectF(const QPointF & topleft, const QPointF & bottomRight)
QtDartBindings_EXPORT void *
c_QRectF__constructor_QPointF_QPointF(void *topleft_, void *bottomRight_);

// tag=1067
//  QRectF::QRectF(const QPointF & topleft, const QSizeF & size)
QtDartBindings_EXPORT void *c_QRectF__constructor_QPointF_QSizeF(void *topleft_,
                                                                 void *size_);

// tag=1067
//  QRectF::QRectF(const QRect & rect)
QtDartBindings_EXPORT void *c_QRectF__constructor_QRect(void *rect_);

// tag=1067
//  QRectF::QRectF(qreal left, qreal top, qreal width, qreal height)
QtDartBindings_EXPORT void *
c_QRectF__constructor_qreal_qreal_qreal_qreal(qreal left, qreal top,
                                              qreal width, qreal height);

// tag=1067
//  QRectF::adjust(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void
c_QRectF__adjust_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                         qreal x2, qreal y2);

// tag=1067
//  QRectF::adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const
QtDartBindings_EXPORT void *
c_QRectF__adjusted_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                           qreal x2, qreal y2);

// tag=1067
//  QRectF::bottom() const
QtDartBindings_EXPORT qreal c_QRectF__bottom(void *thisObj);

// tag=1067
//  QRectF::bottomLeft() const
QtDartBindings_EXPORT void *c_QRectF__bottomLeft(void *thisObj);

// tag=1067
//  QRectF::bottomRight() const
QtDartBindings_EXPORT void *c_QRectF__bottomRight(void *thisObj);

// tag=1067
//  QRectF::center() const
QtDartBindings_EXPORT void *c_QRectF__center(void *thisObj);

// tag=1067
//  QRectF::contains(const QPointF & p) const
QtDartBindings_EXPORT bool c_QRectF__contains_QPointF(void *thisObj, void *p_);

// tag=1067
//  QRectF::contains(const QRectF & r) const
QtDartBindings_EXPORT bool c_QRectF__contains_QRectF(void *thisObj, void *r_);

// tag=1067
//  QRectF::contains(qreal x, qreal y) const
QtDartBindings_EXPORT bool c_QRectF__contains_qreal_qreal(void *thisObj,
                                                          qreal x, qreal y);

// tag=1067
//  QRectF::height() const
QtDartBindings_EXPORT qreal c_QRectF__height(void *thisObj);

// tag=1067
//  QRectF::intersected(const QRectF & other) const
QtDartBindings_EXPORT void *c_QRectF__intersected_QRectF(void *thisObj,
                                                         void *other_);

// tag=1067
//  QRectF::intersects(const QRectF & r) const
QtDartBindings_EXPORT bool c_QRectF__intersects_QRectF(void *thisObj, void *r_);

// tag=1067
//  QRectF::isEmpty() const
QtDartBindings_EXPORT bool c_QRectF__isEmpty(void *thisObj);

// tag=1067
//  QRectF::isNull() const
QtDartBindings_EXPORT bool c_QRectF__isNull(void *thisObj);

// tag=1067
//  QRectF::isValid() const
QtDartBindings_EXPORT bool c_QRectF__isValid(void *thisObj);

// tag=1067
//  QRectF::left() const
QtDartBindings_EXPORT qreal c_QRectF__left(void *thisObj);

// tag=1067
//  QRectF::moveBottom(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveBottom_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::moveBottomLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveBottomLeft_QPointF(void *thisObj,
                                                            void *p_);

// tag=1067
//  QRectF::moveBottomRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveBottomRight_QPointF(void *thisObj,
                                                             void *p_);

// tag=1067
//  QRectF::moveCenter(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveCenter_QPointF(void *thisObj,
                                                        void *p_);

// tag=1067
//  QRectF::moveLeft(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveLeft_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::moveRight(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveRight_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::moveTo(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveTo_QPointF(void *thisObj, void *p_);

// tag=1067
//  QRectF::moveTo(qreal x, qreal y)
QtDartBindings_EXPORT void c_QRectF__moveTo_qreal_qreal(void *thisObj, qreal x,
                                                        qreal y);

// tag=1067
//  QRectF::moveTop(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveTop_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::moveTopLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveTopLeft_QPointF(void *thisObj,
                                                         void *p_);

// tag=1067
//  QRectF::moveTopRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveTopRight_QPointF(void *thisObj,
                                                          void *p_);

// tag=1067
//  QRectF::normalized() const
QtDartBindings_EXPORT void *c_QRectF__normalized(void *thisObj);

// tag=1067
//  QRectF::right() const
QtDartBindings_EXPORT qreal c_QRectF__right(void *thisObj);

// tag=1067
//  QRectF::setBottom(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setBottom_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::setBottomLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setBottomLeft_QPointF(void *thisObj,
                                                           void *p_);

// tag=1067
//  QRectF::setBottomRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setBottomRight_QPointF(void *thisObj,
                                                            void *p_);

// tag=1067
//  QRectF::setCoords(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void
c_QRectF__setCoords_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                            qreal x2, qreal y2);

// tag=1067
//  QRectF::setHeight(qreal h)
QtDartBindings_EXPORT void c_QRectF__setHeight_qreal(void *thisObj, qreal h);

// tag=1067
//  QRectF::setLeft(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setLeft_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::setRect(qreal x, qreal y, qreal w, qreal h)
QtDartBindings_EXPORT void
c_QRectF__setRect_qreal_qreal_qreal_qreal(void *thisObj, qreal x, qreal y,
                                          qreal w, qreal h);

// tag=1067
//  QRectF::setRight(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setRight_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::setSize(const QSizeF & s)
QtDartBindings_EXPORT void c_QRectF__setSize_QSizeF(void *thisObj, void *s_);

// tag=1067
//  QRectF::setTop(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setTop_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::setTopLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setTopLeft_QPointF(void *thisObj,
                                                        void *p_);

// tag=1067
//  QRectF::setTopRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setTopRight_QPointF(void *thisObj,
                                                         void *p_);

// tag=1067
//  QRectF::setWidth(qreal w)
QtDartBindings_EXPORT void c_QRectF__setWidth_qreal(void *thisObj, qreal w);

// tag=1067
//  QRectF::setX(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setX_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::setY(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setY_qreal(void *thisObj, qreal pos);

// tag=1067
//  QRectF::size() const
QtDartBindings_EXPORT void *c_QRectF__size(void *thisObj);

// tag=1067
//  QRectF::toAlignedRect() const
QtDartBindings_EXPORT void *c_QRectF__toAlignedRect(void *thisObj);

// tag=1067
//  QRectF::toRect() const
QtDartBindings_EXPORT void *c_QRectF__toRect(void *thisObj);

// tag=1067
//  QRectF::top() const
QtDartBindings_EXPORT qreal c_QRectF__top(void *thisObj);

// tag=1067
//  QRectF::topLeft() const
QtDartBindings_EXPORT void *c_QRectF__topLeft(void *thisObj);

// tag=1067
//  QRectF::topRight() const
QtDartBindings_EXPORT void *c_QRectF__topRight(void *thisObj);

// tag=1067
//  QRectF::translate(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__translate_QPointF(void *thisObj, void *p_);

// tag=1067
//  QRectF::translate(qreal dx, qreal dy)
QtDartBindings_EXPORT void c_QRectF__translate_qreal_qreal(void *thisObj,
                                                           qreal dx, qreal dy);

// tag=1067
//  QRectF::translated(const QPointF & p) const
QtDartBindings_EXPORT void *c_QRectF__translated_QPointF(void *thisObj,
                                                         void *p_);

// tag=1067
//  QRectF::translated(qreal dx, qreal dy) const
QtDartBindings_EXPORT void *
c_QRectF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy);

// tag=1067
//  QRectF::transposed() const
QtDartBindings_EXPORT void *c_QRectF__transposed(void *thisObj);

// tag=1067
//  QRectF::united(const QRectF & other) const
QtDartBindings_EXPORT void *c_QRectF__united_QRectF(void *thisObj,
                                                    void *other_);

// tag=1067
//  QRectF::width() const
QtDartBindings_EXPORT qreal c_QRectF__width(void *thisObj);

// tag=1067
//  QRectF::x() const
QtDartBindings_EXPORT qreal c_QRectF__x(void *thisObj);

// tag=1067
//  QRectF::y() const
QtDartBindings_EXPORT qreal c_QRectF__y(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QRectF__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QRectF_Finalizer(void *, void *cppObj, void *);
}

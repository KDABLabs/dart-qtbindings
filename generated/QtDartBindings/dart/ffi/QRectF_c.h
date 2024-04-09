/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>

namespace QtDartBindings_wrappersNS {
class QRectF_wrapper : public ::QRectF {
public:
  ~QRectF_wrapper();
  QRectF_wrapper();
  QRectF_wrapper(const QPointF &topleft, const QPointF &bottomRight);
  QRectF_wrapper(const QPointF &topleft, const QSizeF &size);
  QRectF_wrapper(const QRect &rect);
  QRectF_wrapper(qreal left, qreal top, qreal width, qreal height);
  void adjust(qreal x1, qreal y1, qreal x2, qreal y2);
  QRectF adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const;
  qreal bottom() const;
  QPointF bottomLeft() const;
  QPointF bottomRight() const;
  QPointF center() const;
  bool contains(const QPointF &p) const;
  bool contains(const QRectF &r) const;
  bool contains(qreal x, qreal y) const;
  qreal height() const;
  QRectF intersected(const QRectF &other) const;
  bool intersects(const QRectF &r) const;
  bool isEmpty() const;
  bool isNull() const;
  bool isValid() const;
  qreal left() const;
  void moveBottom(qreal pos);
  void moveBottomLeft(const QPointF &p);
  void moveBottomRight(const QPointF &p);
  void moveCenter(const QPointF &p);
  void moveLeft(qreal pos);
  void moveRight(qreal pos);
  void moveTo(const QPointF &p);
  void moveTo(qreal x, qreal y);
  void moveTop(qreal pos);
  void moveTopLeft(const QPointF &p);
  void moveTopRight(const QPointF &p);
  QRectF normalized() const;
  qreal right() const;
  void setBottom(qreal pos);
  void setBottomLeft(const QPointF &p);
  void setBottomRight(const QPointF &p);
  void setCoords(qreal x1, qreal y1, qreal x2, qreal y2);
  void setHeight(qreal h);
  void setLeft(qreal pos);
  void setRect(qreal x, qreal y, qreal w, qreal h);
  void setRight(qreal pos);
  void setSize(const QSizeF &s);
  void setTop(qreal pos);
  void setTopLeft(const QPointF &p);
  void setTopRight(const QPointF &p);
  void setWidth(qreal w);
  void setX(qreal pos);
  void setY(qreal pos);
  QSizeF size() const;
  QRect toAlignedRect() const;
  QRect toRect() const;
  qreal top() const;
  QPointF topLeft() const;
  QPointF topRight() const;
  void translate(const QPointF &p);
  void translate(qreal dx, qreal dy);
  QRectF translated(const QPointF &p) const;
  QRectF translated(qreal dx, qreal dy) const;
  QRectF transposed() const;
  QRectF united(const QRectF &other) const;
  qreal width() const;
  qreal x() const;
  qreal y() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QRectF::QRectF()
QtDartBindings_EXPORT void *c_QRectF__constructor();
// QRectF::QRectF(const QPointF & topleft, const QPointF & bottomRight)
QtDartBindings_EXPORT void *
c_QRectF__constructor_QPointF_QPointF(void *topleft_, void *bottomRight_);
// QRectF::QRectF(const QPointF & topleft, const QSizeF & size)
QtDartBindings_EXPORT void *c_QRectF__constructor_QPointF_QSizeF(void *topleft_,
                                                                 void *size_);
// QRectF::QRectF(const QRect & rect)
QtDartBindings_EXPORT void *c_QRectF__constructor_QRect(void *rect_);
// QRectF::QRectF(qreal left, qreal top, qreal width, qreal height)
QtDartBindings_EXPORT void *
c_QRectF__constructor_qreal_qreal_qreal_qreal(qreal left, qreal top,
                                              qreal width, qreal height);
// QRectF::adjust(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void
c_QRectF__adjust_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                         qreal x2, qreal y2);
// QRectF::adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const
QtDartBindings_EXPORT void *
c_QRectF__adjusted_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                           qreal x2, qreal y2);
// QRectF::bottom() const
QtDartBindings_EXPORT qreal c_QRectF__bottom(void *thisObj);
// QRectF::bottomLeft() const
QtDartBindings_EXPORT void *c_QRectF__bottomLeft(void *thisObj);
// QRectF::bottomRight() const
QtDartBindings_EXPORT void *c_QRectF__bottomRight(void *thisObj);
// QRectF::center() const
QtDartBindings_EXPORT void *c_QRectF__center(void *thisObj);
// QRectF::contains(const QPointF & p) const
QtDartBindings_EXPORT bool c_QRectF__contains_QPointF(void *thisObj, void *p_);
// QRectF::contains(const QRectF & r) const
QtDartBindings_EXPORT bool c_QRectF__contains_QRectF(void *thisObj, void *r_);
// QRectF::contains(qreal x, qreal y) const
QtDartBindings_EXPORT bool c_QRectF__contains_qreal_qreal(void *thisObj,
                                                          qreal x, qreal y);
// QRectF::height() const
QtDartBindings_EXPORT qreal c_QRectF__height(void *thisObj);
// QRectF::intersected(const QRectF & other) const
QtDartBindings_EXPORT void *c_QRectF__intersected_QRectF(void *thisObj,
                                                         void *other_);
// QRectF::intersects(const QRectF & r) const
QtDartBindings_EXPORT bool c_QRectF__intersects_QRectF(void *thisObj, void *r_);
// QRectF::isEmpty() const
QtDartBindings_EXPORT bool c_QRectF__isEmpty(void *thisObj);
// QRectF::isNull() const
QtDartBindings_EXPORT bool c_QRectF__isNull(void *thisObj);
// QRectF::isValid() const
QtDartBindings_EXPORT bool c_QRectF__isValid(void *thisObj);
// QRectF::left() const
QtDartBindings_EXPORT qreal c_QRectF__left(void *thisObj);
// QRectF::moveBottom(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveBottom_qreal(void *thisObj, qreal pos);
// QRectF::moveBottomLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveBottomLeft_QPointF(void *thisObj,
                                                            void *p_);
// QRectF::moveBottomRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveBottomRight_QPointF(void *thisObj,
                                                             void *p_);
// QRectF::moveCenter(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveCenter_QPointF(void *thisObj,
                                                        void *p_);
// QRectF::moveLeft(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveLeft_qreal(void *thisObj, qreal pos);
// QRectF::moveRight(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveRight_qreal(void *thisObj, qreal pos);
// QRectF::moveTo(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveTo_QPointF(void *thisObj, void *p_);
// QRectF::moveTo(qreal x, qreal y)
QtDartBindings_EXPORT void c_QRectF__moveTo_qreal_qreal(void *thisObj, qreal x,
                                                        qreal y);
// QRectF::moveTop(qreal pos)
QtDartBindings_EXPORT void c_QRectF__moveTop_qreal(void *thisObj, qreal pos);
// QRectF::moveTopLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveTopLeft_QPointF(void *thisObj,
                                                         void *p_);
// QRectF::moveTopRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__moveTopRight_QPointF(void *thisObj,
                                                          void *p_);
// QRectF::normalized() const
QtDartBindings_EXPORT void *c_QRectF__normalized(void *thisObj);
// QRectF::right() const
QtDartBindings_EXPORT qreal c_QRectF__right(void *thisObj);
// QRectF::setBottom(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setBottom_qreal(void *thisObj, qreal pos);
// QRectF::setBottomLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setBottomLeft_QPointF(void *thisObj,
                                                           void *p_);
// QRectF::setBottomRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setBottomRight_QPointF(void *thisObj,
                                                            void *p_);
// QRectF::setCoords(qreal x1, qreal y1, qreal x2, qreal y2)
QtDartBindings_EXPORT void
c_QRectF__setCoords_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                            qreal x2, qreal y2);
// QRectF::setHeight(qreal h)
QtDartBindings_EXPORT void c_QRectF__setHeight_qreal(void *thisObj, qreal h);
// QRectF::setLeft(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setLeft_qreal(void *thisObj, qreal pos);
// QRectF::setRect(qreal x, qreal y, qreal w, qreal h)
QtDartBindings_EXPORT void
c_QRectF__setRect_qreal_qreal_qreal_qreal(void *thisObj, qreal x, qreal y,
                                          qreal w, qreal h);
// QRectF::setRight(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setRight_qreal(void *thisObj, qreal pos);
// QRectF::setSize(const QSizeF & s)
QtDartBindings_EXPORT void c_QRectF__setSize_QSizeF(void *thisObj, void *s_);
// QRectF::setTop(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setTop_qreal(void *thisObj, qreal pos);
// QRectF::setTopLeft(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setTopLeft_QPointF(void *thisObj,
                                                        void *p_);
// QRectF::setTopRight(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__setTopRight_QPointF(void *thisObj,
                                                         void *p_);
// QRectF::setWidth(qreal w)
QtDartBindings_EXPORT void c_QRectF__setWidth_qreal(void *thisObj, qreal w);
// QRectF::setX(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setX_qreal(void *thisObj, qreal pos);
// QRectF::setY(qreal pos)
QtDartBindings_EXPORT void c_QRectF__setY_qreal(void *thisObj, qreal pos);
// QRectF::size() const
QtDartBindings_EXPORT void *c_QRectF__size(void *thisObj);
// QRectF::toAlignedRect() const
QtDartBindings_EXPORT void *c_QRectF__toAlignedRect(void *thisObj);
// QRectF::toRect() const
QtDartBindings_EXPORT void *c_QRectF__toRect(void *thisObj);
// QRectF::top() const
QtDartBindings_EXPORT qreal c_QRectF__top(void *thisObj);
// QRectF::topLeft() const
QtDartBindings_EXPORT void *c_QRectF__topLeft(void *thisObj);
// QRectF::topRight() const
QtDartBindings_EXPORT void *c_QRectF__topRight(void *thisObj);
// QRectF::translate(const QPointF & p)
QtDartBindings_EXPORT void c_QRectF__translate_QPointF(void *thisObj, void *p_);
// QRectF::translate(qreal dx, qreal dy)
QtDartBindings_EXPORT void c_QRectF__translate_qreal_qreal(void *thisObj,
                                                           qreal dx, qreal dy);
// QRectF::translated(const QPointF & p) const
QtDartBindings_EXPORT void *c_QRectF__translated_QPointF(void *thisObj,
                                                         void *p_);
// QRectF::translated(qreal dx, qreal dy) const
QtDartBindings_EXPORT void *
c_QRectF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QRectF::transposed() const
QtDartBindings_EXPORT void *c_QRectF__transposed(void *thisObj);
// QRectF::united(const QRectF & other) const
QtDartBindings_EXPORT void *c_QRectF__united_QRectF(void *thisObj,
                                                    void *other_);
// QRectF::width() const
QtDartBindings_EXPORT qreal c_QRectF__width(void *thisObj);
// QRectF::x() const
QtDartBindings_EXPORT qreal c_QRectF__x(void *thisObj);
// QRectF::y() const
QtDartBindings_EXPORT qreal c_QRectF__y(void *thisObj);
QtDartBindings_EXPORT void c_QRectF__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QRectF_Finalizer(void *cppObj);
}

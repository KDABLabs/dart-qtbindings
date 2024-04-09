/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QRectF_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QRectF_wrapper::QRectF_wrapper() : ::QRectF() {}
QRectF_wrapper::QRectF_wrapper(const QPointF &topleft,
                               const QPointF &bottomRight)
    : ::QRectF(topleft, bottomRight) {}
QRectF_wrapper::QRectF_wrapper(const QPointF &topleft, const QSizeF &size)
    : ::QRectF(topleft, size) {}
QRectF_wrapper::QRectF_wrapper(const QRect &rect) : ::QRectF(rect) {}
QRectF_wrapper::QRectF_wrapper(qreal left, qreal top, qreal width, qreal height)
    : ::QRectF(left, top, width, height) {}
void QRectF_wrapper::adjust(qreal x1, qreal y1, qreal x2, qreal y2) {
  ::QRectF::adjust(x1, y1, x2, y2);
}
QRectF QRectF_wrapper::adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const {
  return ::QRectF::adjusted(x1, y1, x2, y2);
}
qreal QRectF_wrapper::bottom() const { return ::QRectF::bottom(); }
QPointF QRectF_wrapper::bottomLeft() const { return ::QRectF::bottomLeft(); }
QPointF QRectF_wrapper::bottomRight() const { return ::QRectF::bottomRight(); }
QPointF QRectF_wrapper::center() const { return ::QRectF::center(); }
bool QRectF_wrapper::contains(const QPointF &p) const {
  return ::QRectF::contains(p);
}
bool QRectF_wrapper::contains(const QRectF &r) const {
  return ::QRectF::contains(r);
}
bool QRectF_wrapper::contains(qreal x, qreal y) const {
  return ::QRectF::contains(x, y);
}
qreal QRectF_wrapper::height() const { return ::QRectF::height(); }
QRectF QRectF_wrapper::intersected(const QRectF &other) const {
  return ::QRectF::intersected(other);
}
bool QRectF_wrapper::intersects(const QRectF &r) const {
  return ::QRectF::intersects(r);
}
bool QRectF_wrapper::isEmpty() const { return ::QRectF::isEmpty(); }
bool QRectF_wrapper::isNull() const { return ::QRectF::isNull(); }
bool QRectF_wrapper::isValid() const { return ::QRectF::isValid(); }
qreal QRectF_wrapper::left() const { return ::QRectF::left(); }
void QRectF_wrapper::moveBottom(qreal pos) { ::QRectF::moveBottom(pos); }
void QRectF_wrapper::moveBottomLeft(const QPointF &p) {
  ::QRectF::moveBottomLeft(p);
}
void QRectF_wrapper::moveBottomRight(const QPointF &p) {
  ::QRectF::moveBottomRight(p);
}
void QRectF_wrapper::moveCenter(const QPointF &p) { ::QRectF::moveCenter(p); }
void QRectF_wrapper::moveLeft(qreal pos) { ::QRectF::moveLeft(pos); }
void QRectF_wrapper::moveRight(qreal pos) { ::QRectF::moveRight(pos); }
void QRectF_wrapper::moveTo(const QPointF &p) { ::QRectF::moveTo(p); }
void QRectF_wrapper::moveTo(qreal x, qreal y) { ::QRectF::moveTo(x, y); }
void QRectF_wrapper::moveTop(qreal pos) { ::QRectF::moveTop(pos); }
void QRectF_wrapper::moveTopLeft(const QPointF &p) { ::QRectF::moveTopLeft(p); }
void QRectF_wrapper::moveTopRight(const QPointF &p) {
  ::QRectF::moveTopRight(p);
}
QRectF QRectF_wrapper::normalized() const { return ::QRectF::normalized(); }
qreal QRectF_wrapper::right() const { return ::QRectF::right(); }
void QRectF_wrapper::setBottom(qreal pos) { ::QRectF::setBottom(pos); }
void QRectF_wrapper::setBottomLeft(const QPointF &p) {
  ::QRectF::setBottomLeft(p);
}
void QRectF_wrapper::setBottomRight(const QPointF &p) {
  ::QRectF::setBottomRight(p);
}
void QRectF_wrapper::setCoords(qreal x1, qreal y1, qreal x2, qreal y2) {
  ::QRectF::setCoords(x1, y1, x2, y2);
}
void QRectF_wrapper::setHeight(qreal h) { ::QRectF::setHeight(h); }
void QRectF_wrapper::setLeft(qreal pos) { ::QRectF::setLeft(pos); }
void QRectF_wrapper::setRect(qreal x, qreal y, qreal w, qreal h) {
  ::QRectF::setRect(x, y, w, h);
}
void QRectF_wrapper::setRight(qreal pos) { ::QRectF::setRight(pos); }
void QRectF_wrapper::setSize(const QSizeF &s) { ::QRectF::setSize(s); }
void QRectF_wrapper::setTop(qreal pos) { ::QRectF::setTop(pos); }
void QRectF_wrapper::setTopLeft(const QPointF &p) { ::QRectF::setTopLeft(p); }
void QRectF_wrapper::setTopRight(const QPointF &p) { ::QRectF::setTopRight(p); }
void QRectF_wrapper::setWidth(qreal w) { ::QRectF::setWidth(w); }
void QRectF_wrapper::setX(qreal pos) { ::QRectF::setX(pos); }
void QRectF_wrapper::setY(qreal pos) { ::QRectF::setY(pos); }
QSizeF QRectF_wrapper::size() const { return ::QRectF::size(); }
QRect QRectF_wrapper::toAlignedRect() const {
  return ::QRectF::toAlignedRect();
}
QRect QRectF_wrapper::toRect() const { return ::QRectF::toRect(); }
qreal QRectF_wrapper::top() const { return ::QRectF::top(); }
QPointF QRectF_wrapper::topLeft() const { return ::QRectF::topLeft(); }
QPointF QRectF_wrapper::topRight() const { return ::QRectF::topRight(); }
void QRectF_wrapper::translate(const QPointF &p) { ::QRectF::translate(p); }
void QRectF_wrapper::translate(qreal dx, qreal dy) {
  ::QRectF::translate(dx, dy);
}
QRectF QRectF_wrapper::translated(const QPointF &p) const {
  return ::QRectF::translated(p);
}
QRectF QRectF_wrapper::translated(qreal dx, qreal dy) const {
  return ::QRectF::translated(dx, dy);
}
QRectF QRectF_wrapper::transposed() const { return ::QRectF::transposed(); }
QRectF QRectF_wrapper::united(const QRectF &other) const {
  return ::QRectF::united(other);
}
qreal QRectF_wrapper::width() const { return ::QRectF::width(); }
qreal QRectF_wrapper::x() const { return ::QRectF::x(); }
qreal QRectF_wrapper::y() const { return ::QRectF::y(); }
QRectF_wrapper::~QRectF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QRectF *fromPtr(void *ptr) { return reinterpret_cast<QRectF *>(ptr); }
static QtDartBindings_wrappersNS::QRectF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QRectF_wrapper *>(ptr);
}
extern "C" {
void c_QRectF_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QRectF_wrapper *>(cppObj);
}
void *c_QRectF__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QRectF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_QPointF_QPointF(void *topleft_,
                                            void *bottomRight_) {
  assert(topleft_);
  auto &topleft = *reinterpret_cast<QPointF *>(topleft_);
  assert(bottomRight_);
  auto &bottomRight = *reinterpret_cast<QPointF *>(bottomRight_);
  auto ptr =
      new QtDartBindings_wrappersNS::QRectF_wrapper(topleft, bottomRight);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_QPointF_QSizeF(void *topleft_, void *size_) {
  assert(topleft_);
  auto &topleft = *reinterpret_cast<QPointF *>(topleft_);
  assert(size_);
  auto &size = *reinterpret_cast<QSizeF *>(size_);
  auto ptr = new QtDartBindings_wrappersNS::QRectF_wrapper(topleft, size);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_QRect(void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto ptr = new QtDartBindings_wrappersNS::QRectF_wrapper(rect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_qreal_qreal_qreal_qreal(qreal left, qreal top,
                                                    qreal width, qreal height) {
  auto ptr =
      new QtDartBindings_wrappersNS::QRectF_wrapper(left, top, width, height);
  return reinterpret_cast<void *>(ptr);
}
// adjust(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QRectF__adjust_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                              qreal x2, qreal y2) {
  fromPtr(thisObj)->adjust(x1, y1, x2, y2);
}
// adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const
void *c_QRectF__adjusted_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                                 qreal y1, qreal x2, qreal y2) {
  const auto &result = new Dartagnan::ValueWrapper<QRectF>{
      fromPtr(thisObj)->adjusted(x1, y1, x2, y2)};
  return result;
}
// bottom() const
qreal c_QRectF__bottom(void *thisObj) {
  const auto &result = fromPtr(thisObj)->bottom();
  return result;
}
// bottomLeft() const
void *c_QRectF__bottomLeft(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->bottomLeft()};
  return result;
}
// bottomRight() const
void *c_QRectF__bottomRight(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->bottomRight()};
  return result;
}
// center() const
void *c_QRectF__center(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->center()};
  return result;
}
// contains(const QPointF & p) const
bool c_QRectF__contains_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  const auto &result = fromPtr(thisObj)->contains(p);
  return result;
}
// contains(const QRectF & r) const
bool c_QRectF__contains_QRectF(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRectF *>(r_);
  const auto &result = fromPtr(thisObj)->contains(r);
  return result;
}
// contains(qreal x, qreal y) const
bool c_QRectF__contains_qreal_qreal(void *thisObj, qreal x, qreal y) {
  const auto &result = fromPtr(thisObj)->contains(x, y);
  return result;
}
// height() const
qreal c_QRectF__height(void *thisObj) {
  const auto &result = fromPtr(thisObj)->height();
  return result;
}
// intersected(const QRectF & other) const
void *c_QRectF__intersected_QRectF(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QRectF *>(other_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->intersected(other)};
  return result;
}
// intersects(const QRectF & r) const
bool c_QRectF__intersects_QRectF(void *thisObj, void *r_) {
  assert(r_);
  auto &r = *reinterpret_cast<QRectF *>(r_);
  const auto &result = fromPtr(thisObj)->intersects(r);
  return result;
}
// isEmpty() const
bool c_QRectF__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isNull() const
bool c_QRectF__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// isValid() const
bool c_QRectF__isValid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValid();
  return result;
}
// left() const
qreal c_QRectF__left(void *thisObj) {
  const auto &result = fromPtr(thisObj)->left();
  return result;
}
// moveBottom(qreal pos)
void c_QRectF__moveBottom_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->moveBottom(pos);
}
// moveBottomLeft(const QPointF & p)
void c_QRectF__moveBottomLeft_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->moveBottomLeft(p);
}
// moveBottomRight(const QPointF & p)
void c_QRectF__moveBottomRight_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->moveBottomRight(p);
}
// moveCenter(const QPointF & p)
void c_QRectF__moveCenter_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->moveCenter(p);
}
// moveLeft(qreal pos)
void c_QRectF__moveLeft_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->moveLeft(pos);
}
// moveRight(qreal pos)
void c_QRectF__moveRight_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->moveRight(pos);
}
// moveTo(const QPointF & p)
void c_QRectF__moveTo_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->moveTo(p);
}
// moveTo(qreal x, qreal y)
void c_QRectF__moveTo_qreal_qreal(void *thisObj, qreal x, qreal y) {
  fromPtr(thisObj)->moveTo(x, y);
}
// moveTop(qreal pos)
void c_QRectF__moveTop_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->moveTop(pos);
}
// moveTopLeft(const QPointF & p)
void c_QRectF__moveTopLeft_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->moveTopLeft(p);
}
// moveTopRight(const QPointF & p)
void c_QRectF__moveTopRight_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->moveTopRight(p);
}
// normalized() const
void *c_QRectF__normalized(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->normalized()};
  return result;
}
// right() const
qreal c_QRectF__right(void *thisObj) {
  const auto &result = fromPtr(thisObj)->right();
  return result;
}
// setBottom(qreal pos)
void c_QRectF__setBottom_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->setBottom(pos);
}
// setBottomLeft(const QPointF & p)
void c_QRectF__setBottomLeft_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->setBottomLeft(p);
}
// setBottomRight(const QPointF & p)
void c_QRectF__setBottomRight_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->setBottomRight(p);
}
// setCoords(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QRectF__setCoords_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                                 qreal y1, qreal x2, qreal y2) {
  fromPtr(thisObj)->setCoords(x1, y1, x2, y2);
}
// setHeight(qreal h)
void c_QRectF__setHeight_qreal(void *thisObj, qreal h) {
  fromPtr(thisObj)->setHeight(h);
}
// setLeft(qreal pos)
void c_QRectF__setLeft_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->setLeft(pos);
}
// setRect(qreal x, qreal y, qreal w, qreal h)
void c_QRectF__setRect_qreal_qreal_qreal_qreal(void *thisObj, qreal x, qreal y,
                                               qreal w, qreal h) {
  fromPtr(thisObj)->setRect(x, y, w, h);
}
// setRight(qreal pos)
void c_QRectF__setRight_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->setRight(pos);
}
// setSize(const QSizeF & s)
void c_QRectF__setSize_QSizeF(void *thisObj, void *s_) {
  assert(s_);
  auto &s = *reinterpret_cast<QSizeF *>(s_);
  fromPtr(thisObj)->setSize(s);
}
// setTop(qreal pos)
void c_QRectF__setTop_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->setTop(pos);
}
// setTopLeft(const QPointF & p)
void c_QRectF__setTopLeft_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->setTopLeft(p);
}
// setTopRight(const QPointF & p)
void c_QRectF__setTopRight_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->setTopRight(p);
}
// setWidth(qreal w)
void c_QRectF__setWidth_qreal(void *thisObj, qreal w) {
  fromPtr(thisObj)->setWidth(w);
}
// setX(qreal pos)
void c_QRectF__setX_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->setX(pos);
}
// setY(qreal pos)
void c_QRectF__setY_qreal(void *thisObj, qreal pos) {
  fromPtr(thisObj)->setY(pos);
}
// size() const
void *c_QRectF__size(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->size()};
  return result;
}
// toAlignedRect() const
void *c_QRectF__toAlignedRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->toAlignedRect()};
  return result;
}
// toRect() const
void *c_QRectF__toRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->toRect()};
  return result;
}
// top() const
qreal c_QRectF__top(void *thisObj) {
  const auto &result = fromPtr(thisObj)->top();
  return result;
}
// topLeft() const
void *c_QRectF__topLeft(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->topLeft()};
  return result;
}
// topRight() const
void *c_QRectF__topRight(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->topRight()};
  return result;
}
// translate(const QPointF & p)
void c_QRectF__translate_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  fromPtr(thisObj)->translate(p);
}
// translate(qreal dx, qreal dy)
void c_QRectF__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  fromPtr(thisObj)->translate(dx, dy);
}
// translated(const QPointF & p) const
void *c_QRectF__translated_QPointF(void *thisObj, void *p_) {
  assert(p_);
  auto &p = *reinterpret_cast<QPointF *>(p_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->translated(p)};
  return result;
}
// translated(qreal dx, qreal dy) const
void *c_QRectF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->translated(dx, dy)};
  return result;
}
// transposed() const
void *c_QRectF__transposed(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->transposed()};
  return result;
}
// united(const QRectF & other) const
void *c_QRectF__united_QRectF(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QRectF *>(other_);
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->united(other)};
  return result;
}
// width() const
qreal c_QRectF__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
// x() const
qreal c_QRectF__x(void *thisObj) {
  const auto &result = fromPtr(thisObj)->x();
  return result;
}
// y() const
qreal c_QRectF__y(void *thisObj) {
  const auto &result = fromPtr(thisObj)->y();
  return result;
}
void c_QRectF__destructor(void *thisObj) { delete fromPtr(thisObj); }
}

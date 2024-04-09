#include "QRectF_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QRectF_wrapper::QRectF_wrapper() : ::QRectF() {}

// tag=1006
QRectF_wrapper::QRectF_wrapper(const QPointF &topleft,
                               const QPointF &bottomRight)
    : ::QRectF(topleft, bottomRight) {}

// tag=1006
QRectF_wrapper::QRectF_wrapper(const QPointF &topleft, const QSizeF &size)
    : ::QRectF(topleft, size) {}

// tag=1006
QRectF_wrapper::QRectF_wrapper(const QRect &rect) : ::QRectF(rect) {}

// tag=1006
QRectF_wrapper::QRectF_wrapper(qreal left, qreal top, qreal width, qreal height)
    : ::QRectF(left, top, width, height) {}
void QRectF_wrapper::adjust(qreal x1, qreal y1, qreal x2, qreal y2) {
  // tag=1000

  // tag=1004
  ::QRectF::adjust(x1, y1, x2, y2);
}
QRectF QRectF_wrapper::adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const {
  // tag=1000

  // tag=1004
  return ::QRectF::adjusted(x1, y1, x2, y2);
}
qreal QRectF_wrapper::bottom() const {
  // tag=1000

  // tag=1004
  return ::QRectF::bottom();
}
QPointF QRectF_wrapper::bottomLeft() const {
  // tag=1000

  // tag=1004
  return ::QRectF::bottomLeft();
}
QPointF QRectF_wrapper::bottomRight() const {
  // tag=1000

  // tag=1004
  return ::QRectF::bottomRight();
}
QPointF QRectF_wrapper::center() const {
  // tag=1000

  // tag=1004
  return ::QRectF::center();
}
bool QRectF_wrapper::contains(const QPointF &p) const {
  // tag=1000

  // tag=1004
  return ::QRectF::contains(p);
}
bool QRectF_wrapper::contains(const QRectF &r) const {
  // tag=1000

  // tag=1004
  return ::QRectF::contains(r);
}
bool QRectF_wrapper::contains(qreal x, qreal y) const {
  // tag=1000

  // tag=1004
  return ::QRectF::contains(x, y);
}
qreal QRectF_wrapper::height() const {
  // tag=1000

  // tag=1004
  return ::QRectF::height();
}
QRectF QRectF_wrapper::intersected(const QRectF &other) const {
  // tag=1000

  // tag=1004
  return ::QRectF::intersected(other);
}
bool QRectF_wrapper::intersects(const QRectF &r) const {
  // tag=1000

  // tag=1004
  return ::QRectF::intersects(r);
}
bool QRectF_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QRectF::isEmpty();
}
bool QRectF_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QRectF::isNull();
}
bool QRectF_wrapper::isValid() const {
  // tag=1000

  // tag=1004
  return ::QRectF::isValid();
}
qreal QRectF_wrapper::left() const {
  // tag=1000

  // tag=1004
  return ::QRectF::left();
}
void QRectF_wrapper::moveBottom(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::moveBottom(pos);
}
void QRectF_wrapper::moveBottomLeft(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::moveBottomLeft(p);
}
void QRectF_wrapper::moveBottomRight(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::moveBottomRight(p);
}
void QRectF_wrapper::moveCenter(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::moveCenter(p);
}
void QRectF_wrapper::moveLeft(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::moveLeft(pos);
}
void QRectF_wrapper::moveRight(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::moveRight(pos);
}
void QRectF_wrapper::moveTo(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::moveTo(p);
}
void QRectF_wrapper::moveTo(qreal x, qreal y) {
  // tag=1000

  // tag=1004
  ::QRectF::moveTo(x, y);
}
void QRectF_wrapper::moveTop(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::moveTop(pos);
}
void QRectF_wrapper::moveTopLeft(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::moveTopLeft(p);
}
void QRectF_wrapper::moveTopRight(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::moveTopRight(p);
}
QRectF QRectF_wrapper::normalized() const {
  // tag=1000

  // tag=1004
  return ::QRectF::normalized();
}
qreal QRectF_wrapper::right() const {
  // tag=1000

  // tag=1004
  return ::QRectF::right();
}
void QRectF_wrapper::setBottom(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::setBottom(pos);
}
void QRectF_wrapper::setBottomLeft(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::setBottomLeft(p);
}
void QRectF_wrapper::setBottomRight(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::setBottomRight(p);
}
void QRectF_wrapper::setCoords(qreal x1, qreal y1, qreal x2, qreal y2) {
  // tag=1000

  // tag=1004
  ::QRectF::setCoords(x1, y1, x2, y2);
}
void QRectF_wrapper::setHeight(qreal h) {
  // tag=1000

  // tag=1004
  ::QRectF::setHeight(h);
}
void QRectF_wrapper::setLeft(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::setLeft(pos);
}
void QRectF_wrapper::setRect(qreal x, qreal y, qreal w, qreal h) {
  // tag=1000

  // tag=1004
  ::QRectF::setRect(x, y, w, h);
}
void QRectF_wrapper::setRight(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::setRight(pos);
}
void QRectF_wrapper::setSize(const QSizeF &s) {
  // tag=1000

  // tag=1004
  ::QRectF::setSize(s);
}
void QRectF_wrapper::setTop(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::setTop(pos);
}
void QRectF_wrapper::setTopLeft(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::setTopLeft(p);
}
void QRectF_wrapper::setTopRight(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::setTopRight(p);
}
void QRectF_wrapper::setWidth(qreal w) {
  // tag=1000

  // tag=1004
  ::QRectF::setWidth(w);
}
void QRectF_wrapper::setX(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::setX(pos);
}
void QRectF_wrapper::setY(qreal pos) {
  // tag=1000

  // tag=1004
  ::QRectF::setY(pos);
}
QSizeF QRectF_wrapper::size() const {
  // tag=1000

  // tag=1004
  return ::QRectF::size();
}
QRect QRectF_wrapper::toAlignedRect() const {
  // tag=1000

  // tag=1004
  return ::QRectF::toAlignedRect();
}
QRect QRectF_wrapper::toRect() const {
  // tag=1000

  // tag=1004
  return ::QRectF::toRect();
}
qreal QRectF_wrapper::top() const {
  // tag=1000

  // tag=1004
  return ::QRectF::top();
}
QPointF QRectF_wrapper::topLeft() const {
  // tag=1000

  // tag=1004
  return ::QRectF::topLeft();
}
QPointF QRectF_wrapper::topRight() const {
  // tag=1000

  // tag=1004
  return ::QRectF::topRight();
}
void QRectF_wrapper::translate(const QPointF &p) {
  // tag=1000

  // tag=1004
  ::QRectF::translate(p);
}
void QRectF_wrapper::translate(qreal dx, qreal dy) {
  // tag=1000

  // tag=1004
  ::QRectF::translate(dx, dy);
}
QRectF QRectF_wrapper::translated(const QPointF &p) const {
  // tag=1000

  // tag=1004
  return ::QRectF::translated(p);
}
QRectF QRectF_wrapper::translated(qreal dx, qreal dy) const {
  // tag=1000

  // tag=1004
  return ::QRectF::translated(dx, dy);
}
QRectF QRectF_wrapper::transposed() const {
  // tag=1000

  // tag=1004
  return ::QRectF::transposed();
}
QRectF QRectF_wrapper::united(const QRectF &other) const {
  // tag=1000

  // tag=1004
  return ::QRectF::united(other);
}
qreal QRectF_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QRectF::width();
}
qreal QRectF_wrapper::x() const {
  // tag=1000

  // tag=1004
  return ::QRectF::x();
}
qreal QRectF_wrapper::y() const {
  // tag=1000

  // tag=1004
  return ::QRectF::y();
}

// tag=1005
QRectF_wrapper::~QRectF_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QRectF *fromPtr(void *ptr) { return reinterpret_cast<QRectF *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QRectF_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QRectF_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QRectF_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QRectF_wrapper *>(cppObj);
}
void *c_QRectF__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QRectF_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_QPointF_QPointF(void *topleft_,
                                            void *bottomRight_) {
  auto &topleft = *reinterpret_cast<QPointF *>(topleft_);
  auto &bottomRight = *reinterpret_cast<QPointF *>(bottomRight_);
  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QRectF_wrapper(topleft, bottomRight);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_QPointF_QSizeF(void *topleft_, void *size_) {
  auto &topleft = *reinterpret_cast<QPointF *>(topleft_);
  auto &size = *reinterpret_cast<QSizeF *>(size_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QRectF_wrapper(topleft, size);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_QRect(void *rect_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QRectF_wrapper(rect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QRectF__constructor_qreal_qreal_qreal_qreal(qreal left, qreal top,
                                                    qreal width, qreal height) {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QRectF_wrapper(left, top, width, height);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// adjust(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QRectF__adjust_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                              qreal x2, qreal y2) {
  // tag=1010
  fromPtr(thisObj)->adjust(x1, y1, x2, y2);
}

// tag=1050
// adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const
void *c_QRectF__adjusted_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                                 qreal y1, qreal x2, qreal y2) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{
          fromPtr(thisObj)->adjusted(x1, y1, x2, y2)};
}

// tag=1050
// bottom() const
qreal c_QRectF__bottom(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->bottom();
}

// tag=1050
// bottomLeft() const
void *c_QRectF__bottomLeft(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->bottomLeft()};
}

// tag=1050
// bottomRight() const
void *c_QRectF__bottomRight(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->bottomRight()};
}

// tag=1050
// center() const
void *c_QRectF__center(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->center()};
}

// tag=1050
// contains(const QPointF & p) const
bool c_QRectF__contains_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  return
      // tag=1010
      fromPtr(thisObj)->contains(p);
}

// tag=1050
// contains(const QRectF & r) const
bool c_QRectF__contains_QRectF(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRectF *>(r_);
  return
      // tag=1010
      fromPtr(thisObj)->contains(r);
}

// tag=1050
// contains(qreal x, qreal y) const
bool c_QRectF__contains_qreal_qreal(void *thisObj, qreal x, qreal y) {
  return
      // tag=1010
      fromPtr(thisObj)->contains(x, y);
}

// tag=1050
// height() const
qreal c_QRectF__height(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->height();
}

// tag=1050
// intersected(const QRectF & other) const
void *c_QRectF__intersected_QRectF(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QRectF *>(other_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->intersected(other)};
}

// tag=1050
// intersects(const QRectF & r) const
bool c_QRectF__intersects_QRectF(void *thisObj, void *r_) {
  auto &r = *reinterpret_cast<QRectF *>(r_);
  return
      // tag=1010
      fromPtr(thisObj)->intersects(r);
}

// tag=1050
// isEmpty() const
bool c_QRectF__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// isNull() const
bool c_QRectF__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// isValid() const
bool c_QRectF__isValid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isValid();
}

// tag=1050
// left() const
qreal c_QRectF__left(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->left();
}

// tag=1050
// moveBottom(qreal pos)
void c_QRectF__moveBottom_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->moveBottom(pos);
}

// tag=1050
// moveBottomLeft(const QPointF & p)
void c_QRectF__moveBottomLeft_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->moveBottomLeft(p);
}

// tag=1050
// moveBottomRight(const QPointF & p)
void c_QRectF__moveBottomRight_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->moveBottomRight(p);
}

// tag=1050
// moveCenter(const QPointF & p)
void c_QRectF__moveCenter_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->moveCenter(p);
}

// tag=1050
// moveLeft(qreal pos)
void c_QRectF__moveLeft_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->moveLeft(pos);
}

// tag=1050
// moveRight(qreal pos)
void c_QRectF__moveRight_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->moveRight(pos);
}

// tag=1050
// moveTo(const QPointF & p)
void c_QRectF__moveTo_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->moveTo(p);
}

// tag=1050
// moveTo(qreal x, qreal y)
void c_QRectF__moveTo_qreal_qreal(void *thisObj, qreal x, qreal y) {
  // tag=1010
  fromPtr(thisObj)->moveTo(x, y);
}

// tag=1050
// moveTop(qreal pos)
void c_QRectF__moveTop_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->moveTop(pos);
}

// tag=1050
// moveTopLeft(const QPointF & p)
void c_QRectF__moveTopLeft_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->moveTopLeft(p);
}

// tag=1050
// moveTopRight(const QPointF & p)
void c_QRectF__moveTopRight_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->moveTopRight(p);
}

// tag=1050
// normalized() const
void *c_QRectF__normalized(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->normalized()};
}

// tag=1050
// right() const
qreal c_QRectF__right(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->right();
}

// tag=1050
// setBottom(qreal pos)
void c_QRectF__setBottom_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->setBottom(pos);
}

// tag=1050
// setBottomLeft(const QPointF & p)
void c_QRectF__setBottomLeft_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->setBottomLeft(p);
}

// tag=1050
// setBottomRight(const QPointF & p)
void c_QRectF__setBottomRight_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->setBottomRight(p);
}

// tag=1050
// setCoords(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QRectF__setCoords_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                                 qreal y1, qreal x2, qreal y2) {
  // tag=1010
  fromPtr(thisObj)->setCoords(x1, y1, x2, y2);
}

// tag=1050
// setHeight(qreal h)
void c_QRectF__setHeight_qreal(void *thisObj, qreal h) {
  // tag=1010
  fromPtr(thisObj)->setHeight(h);
}

// tag=1050
// setLeft(qreal pos)
void c_QRectF__setLeft_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->setLeft(pos);
}

// tag=1050
// setRect(qreal x, qreal y, qreal w, qreal h)
void c_QRectF__setRect_qreal_qreal_qreal_qreal(void *thisObj, qreal x, qreal y,
                                               qreal w, qreal h) {
  // tag=1010
  fromPtr(thisObj)->setRect(x, y, w, h);
}

// tag=1050
// setRight(qreal pos)
void c_QRectF__setRight_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->setRight(pos);
}

// tag=1050
// setSize(const QSizeF & s)
void c_QRectF__setSize_QSizeF(void *thisObj, void *s_) {
  auto &s = *reinterpret_cast<QSizeF *>(s_);
  // tag=1010
  fromPtr(thisObj)->setSize(s);
}

// tag=1050
// setTop(qreal pos)
void c_QRectF__setTop_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->setTop(pos);
}

// tag=1050
// setTopLeft(const QPointF & p)
void c_QRectF__setTopLeft_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->setTopLeft(p);
}

// tag=1050
// setTopRight(const QPointF & p)
void c_QRectF__setTopRight_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->setTopRight(p);
}

// tag=1050
// setWidth(qreal w)
void c_QRectF__setWidth_qreal(void *thisObj, qreal w) {
  // tag=1010
  fromPtr(thisObj)->setWidth(w);
}

// tag=1050
// setX(qreal pos)
void c_QRectF__setX_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->setX(pos);
}

// tag=1050
// setY(qreal pos)
void c_QRectF__setY_qreal(void *thisObj, qreal pos) {
  // tag=1010
  fromPtr(thisObj)->setY(pos);
}

// tag=1050
// size() const
void *c_QRectF__size(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->size()};
}

// tag=1050
// toAlignedRect() const
void *c_QRectF__toAlignedRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->toAlignedRect()};
}

// tag=1050
// toRect() const
void *c_QRectF__toRect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->toRect()};
}

// tag=1050
// top() const
qreal c_QRectF__top(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->top();
}

// tag=1050
// topLeft() const
void *c_QRectF__topLeft(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->topLeft()};
}

// tag=1050
// topRight() const
void *c_QRectF__topRight(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->topRight()};
}

// tag=1050
// translate(const QPointF & p)
void c_QRectF__translate_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  // tag=1010
  fromPtr(thisObj)->translate(p);
}

// tag=1050
// translate(qreal dx, qreal dy)
void c_QRectF__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  // tag=1010
  fromPtr(thisObj)->translate(dx, dy);
}

// tag=1050
// translated(const QPointF & p) const
void *c_QRectF__translated_QPointF(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPointF *>(p_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->translated(p)};
}

// tag=1050
// translated(qreal dx, qreal dy) const
void *c_QRectF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->translated(dx, dy)};
}

// tag=1050
// transposed() const
void *c_QRectF__transposed(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->transposed()};
}

// tag=1050
// united(const QRectF & other) const
void *c_QRectF__united_QRectF(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QRectF *>(other_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->united(other)};
}

// tag=1050
// width() const
qreal c_QRectF__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}

// tag=1050
// x() const
qreal c_QRectF__x(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->x();
}

// tag=1050
// y() const
qreal c_QRectF__y(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->y();
}
void c_QRectF__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}

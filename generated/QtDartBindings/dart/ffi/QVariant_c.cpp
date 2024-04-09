/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QVariant_c.h"

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
QVariant_wrapper::QVariant_wrapper() : ::QVariant() {}
QVariant_wrapper::QVariant_wrapper(bool b) : ::QVariant(b) {}
QVariant_wrapper::QVariant_wrapper(const QByteArray &bytearray)
    : ::QVariant(bytearray) {}
QVariant_wrapper::QVariant_wrapper(const QLine &line) : ::QVariant(line) {}
QVariant_wrapper::QVariant_wrapper(const QLineF &line) : ::QVariant(line) {}
QVariant_wrapper::QVariant_wrapper(const QList<QString> &stringlist)
    : ::QVariant(stringlist) {}
QVariant_wrapper::QVariant_wrapper(const QList<QVariant> &list)
    : ::QVariant(list) {}
QVariant_wrapper::QVariant_wrapper(const QModelIndex &modelIndex)
    : ::QVariant(modelIndex) {}
QVariant_wrapper::QVariant_wrapper(const QPoint &pt) : ::QVariant(pt) {}
QVariant_wrapper::QVariant_wrapper(const QPointF &pt) : ::QVariant(pt) {}
QVariant_wrapper::QVariant_wrapper(const QRect &rect) : ::QVariant(rect) {}
QVariant_wrapper::QVariant_wrapper(const QRectF &rect) : ::QVariant(rect) {}
QVariant_wrapper::QVariant_wrapper(const QSize &size) : ::QVariant(size) {}
QVariant_wrapper::QVariant_wrapper(const QSizeF &size) : ::QVariant(size) {}
QVariant_wrapper::QVariant_wrapper(const QString &string)
    : ::QVariant(string) {}
QVariant_wrapper::QVariant_wrapper(const char *str) : ::QVariant(str) {}
QVariant_wrapper::QVariant_wrapper(double d) : ::QVariant(d) {}
QVariant_wrapper::QVariant_wrapper(float f) : ::QVariant(f) {}
QVariant_wrapper::QVariant_wrapper(int i) : ::QVariant(i) {}
QVariant_wrapper::QVariant_wrapper(qint64 ll) : ::QVariant(ll) {}
void QVariant_wrapper::clear() { ::QVariant::clear(); }
void QVariant_wrapper::detach() { ::QVariant::detach(); }
bool QVariant_wrapper::equals(const QVariant &other) const {
  return ::QVariant::equals(other);
}

// ========================================================================
// START of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-fromObject)]

/** static*/
QVariant QVariant_wrapper::fromObject(QObject *obj) {
  return QVariant::fromValue<QObject *>(obj);
}
// END of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-fromObject)]
// ========================================================================

bool QVariant_wrapper::isDetached() const { return ::QVariant::isDetached(); }
bool QVariant_wrapper::isNull() const { return ::QVariant::isNull(); }
bool QVariant_wrapper::isValid() const { return ::QVariant::isValid(); }
void QVariant_wrapper::setValue(const QVariant &avalue) {
  ::QVariant::setValue(avalue);
}
bool QVariant_wrapper::toBool() const { return ::QVariant::toBool(); }
QByteArray QVariant_wrapper::toByteArray() const {
  return ::QVariant::toByteArray();
}
QLine QVariant_wrapper::toLine() const { return ::QVariant::toLine(); }
QLineF QVariant_wrapper::toLineF() const { return ::QVariant::toLineF(); }
QList<QVariant> QVariant_wrapper::toList() const {
  return ::QVariant::toList();
}
QModelIndex QVariant_wrapper::toModelIndex() const {
  return ::QVariant::toModelIndex();
}

// ========================================================================
// START of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-toObject)]
/** static */
QObject *QVariant_wrapper::toObject(
    QVariant v) // apparently shiboken isn't honouring adding const-&
{
  return v.value<QObject *>();
}
// END of custom code block [file: shiboken_snippets/qvariant.cpp
// (qvariant-toObject)]
// ========================================================================

QPoint QVariant_wrapper::toPoint() const { return ::QVariant::toPoint(); }
QPointF QVariant_wrapper::toPointF() const { return ::QVariant::toPointF(); }
QRect QVariant_wrapper::toRect() const { return ::QVariant::toRect(); }
QRectF QVariant_wrapper::toRectF() const { return ::QVariant::toRectF(); }
QSize QVariant_wrapper::toSize() const { return ::QVariant::toSize(); }
QSizeF QVariant_wrapper::toSizeF() const { return ::QVariant::toSizeF(); }
QList<QString> QVariant_wrapper::toStringList() const {
  return ::QVariant::toStringList();
}
int QVariant_wrapper::typeId() const { return ::QVariant::typeId(); }
const char *QVariant_wrapper::typeName() const {
  return ::QVariant::typeName();
}
int QVariant_wrapper::userType() const { return ::QVariant::userType(); }
QVariant_wrapper::~QVariant_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QVariant *fromPtr(void *ptr) {
  return reinterpret_cast<QVariant *>(ptr);
}
static QtDartBindings_wrappersNS::QVariant_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QVariant_wrapper *>(ptr);
}
extern "C" {
void c_QVariant_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QVariant_wrapper *>(
      cppObj);
}
void *c_QVariant__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_bool(bool b) {
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(b);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QByteArray(void *bytearray_) {
  assert(bytearray_);
  auto &bytearray = *reinterpret_cast<QByteArray *>(bytearray_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(bytearray);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QLine(void *line_) {
  assert(line_);
  auto &line = *reinterpret_cast<QLine *>(line_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(line);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QLineF(void *line_) {
  assert(line_);
  auto &line = *reinterpret_cast<QLineF *>(line_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(line);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QList_QString(void *stringlist_) {
  assert(stringlist_);
  auto &stringlist = *reinterpret_cast<QList<QString> *>(stringlist_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(stringlist);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QList_QVariant(void *list_) {
  assert(list_);
  auto &list = *reinterpret_cast<QList<QVariant> *>(list_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(list);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QModelIndex(void *modelIndex_) {
  assert(modelIndex_);
  auto &modelIndex = *reinterpret_cast<QModelIndex *>(modelIndex_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(modelIndex);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QPoint(void *pt_) {
  assert(pt_);
  auto &pt = *reinterpret_cast<QPoint *>(pt_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(pt);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QPointF(void *pt_) {
  assert(pt_);
  auto &pt = *reinterpret_cast<QPointF *>(pt_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(pt);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QRect(void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(rect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QRectF(void *rect_) {
  assert(rect_);
  auto &rect = *reinterpret_cast<QRectF *>(rect_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(rect);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QSize(void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(size);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QSizeF(void *size_) {
  assert(size_);
  auto &size = *reinterpret_cast<QSizeF *>(size_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(size);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_QString(const char *string_) {
  const auto string = QString::fromUtf8(string_);
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(string);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_char(const char *str) {
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(str);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_double(double d) {
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(d);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_float(float f) {
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(f);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_int(int i) {
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(i);
  return reinterpret_cast<void *>(ptr);
}
void *c_QVariant__constructor_qint64(qint64 ll) {
  auto ptr = new QtDartBindings_wrappersNS::QVariant_wrapper(ll);
  return reinterpret_cast<void *>(ptr);
}
// clear()
void c_QVariant__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// detach()
void c_QVariant__detach(void *thisObj) { fromPtr(thisObj)->detach(); }
// equals(const QVariant & other) const
bool c_QVariant__equals_QVariant(void *thisObj, void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QVariant *>(other_);
  const auto &result = fromWrapperPtr(thisObj)->equals(other);
  return result;
}
// fromObject(QObject * arg__1)
void *c_static_QVariant__fromObject_QObject(void *arg__1_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{
      QtDartBindings_wrappersNS::QVariant_wrapper::fromObject(arg__1)};
  return result;
}
// isDetached() const
bool c_QVariant__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isNull() const
bool c_QVariant__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// isValid() const
bool c_QVariant__isValid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValid();
  return result;
}
// setValue(const QVariant & avalue)
void c_QVariant__setValue_QVariant(void *thisObj, void *avalue_) {
  assert(avalue_);
  auto &avalue = *reinterpret_cast<QVariant *>(avalue_);
  fromPtr(thisObj)->setValue(avalue);
}
// toBool() const
bool c_QVariant__toBool(void *thisObj) {
  const auto &result = fromPtr(thisObj)->toBool();
  return result;
}
// toByteArray() const
void *c_QVariant__toByteArray(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->toByteArray()};
  return result;
}
// toLine() const
void *c_QVariant__toLine(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLine>{fromPtr(thisObj)->toLine()};
  return result;
}
// toLineF() const
void *c_QVariant__toLineF(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QLineF>{fromPtr(thisObj)->toLineF()};
  return result;
}
// toList() const
void *c_QVariant__toList(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QList<QVariant>>{fromPtr(thisObj)->toList()};
  return result;
}
// toModelIndex() const
void *c_QVariant__toModelIndex(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->toModelIndex()};
  return result;
}
// toObject(QVariant arg__1)
void *c_static_QVariant__toObject_QVariant(void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QVariant *>(arg__1_);
  const auto &result =
      QtDartBindings_wrappersNS::QVariant_wrapper::toObject(arg__1);
  return result;
}
// toPoint() const
void *c_QVariant__toPoint(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPoint>{fromPtr(thisObj)->toPoint()};
  return result;
}
// toPointF() const
void *c_QVariant__toPointF(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QPointF>{fromPtr(thisObj)->toPointF()};
  return result;
}
// toRect() const
void *c_QVariant__toRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->toRect()};
  return result;
}
// toRectF() const
void *c_QVariant__toRectF(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRectF>{fromPtr(thisObj)->toRectF()};
  return result;
}
// toSize() const
void *c_QVariant__toSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->toSize()};
  return result;
}
// toSizeF() const
void *c_QVariant__toSizeF(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSizeF>{fromPtr(thisObj)->toSizeF()};
  return result;
}
// toStringList() const
void *c_QVariant__toStringList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr(thisObj)->toStringList()};
  return result;
}
// typeId() const
int c_QVariant__typeId(void *thisObj) {
  const auto &result = fromPtr(thisObj)->typeId();
  return result;
}
// typeName() const
const char *c_QVariant__typeName(void *thisObj) {
  const auto &result = fromPtr(thisObj)->typeName();
  return result;
}
// userType() const
int c_QVariant__userType(void *thisObj) {
  const auto &result = fromPtr(thisObj)->userType();
  return result;
}
void c_QVariant__destructor(void *thisObj) { delete fromPtr(thisObj); }
}

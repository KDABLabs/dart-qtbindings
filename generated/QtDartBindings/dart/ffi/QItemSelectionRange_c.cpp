/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QItemSelectionRange_c.h"

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
QItemSelectionRange_wrapper::QItemSelectionRange_wrapper()
    : ::QItemSelectionRange() {}
QItemSelectionRange_wrapper::QItemSelectionRange_wrapper(
    const QModelIndex &index)
    : ::QItemSelectionRange(index) {}
QItemSelectionRange_wrapper::QItemSelectionRange_wrapper(
    const QModelIndex &topL, const QModelIndex &bottomR)
    : ::QItemSelectionRange(topL, bottomR) {}
int QItemSelectionRange_wrapper::bottom() const {
  return ::QItemSelectionRange::bottom();
}
bool QItemSelectionRange_wrapper::contains(const QModelIndex &index) const {
  return ::QItemSelectionRange::contains(index);
}
bool QItemSelectionRange_wrapper::contains(
    int row, int column, const QModelIndex &parentIndex) const {
  return ::QItemSelectionRange::contains(row, column, parentIndex);
}
int QItemSelectionRange_wrapper::height() const {
  return ::QItemSelectionRange::height();
}
QList<QModelIndex> QItemSelectionRange_wrapper::indexes() const {
  return ::QItemSelectionRange::indexes();
}
QItemSelectionRange QItemSelectionRange_wrapper::intersected(
    const QItemSelectionRange &other) const {
  return ::QItemSelectionRange::intersected(other);
}
bool QItemSelectionRange_wrapper::intersects(
    const QItemSelectionRange &other) const {
  return ::QItemSelectionRange::intersects(other);
}
bool QItemSelectionRange_wrapper::isEmpty() const {
  return ::QItemSelectionRange::isEmpty();
}
bool QItemSelectionRange_wrapper::isValid() const {
  return ::QItemSelectionRange::isValid();
}
int QItemSelectionRange_wrapper::left() const {
  return ::QItemSelectionRange::left();
}
const QAbstractItemModel *QItemSelectionRange_wrapper::model() const {
  return ::QItemSelectionRange::model();
}
QModelIndex QItemSelectionRange_wrapper::parent() const {
  return ::QItemSelectionRange::parent();
}
int QItemSelectionRange_wrapper::right() const {
  return ::QItemSelectionRange::right();
}
int QItemSelectionRange_wrapper::top() const {
  return ::QItemSelectionRange::top();
}
int QItemSelectionRange_wrapper::width() const {
  return ::QItemSelectionRange::width();
}
QItemSelectionRange_wrapper::~QItemSelectionRange_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QItemSelectionRange *fromPtr(void *ptr) {
  return reinterpret_cast<QItemSelectionRange *>(ptr);
}
static QtDartBindings_wrappersNS::QItemSelectionRange_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionRange_wrapper *>(ptr);
}
extern "C" {
void c_QItemSelectionRange_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionRange_wrapper *>(cppObj);
}
void *c_QItemSelectionRange__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QItemSelectionRange_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QItemSelectionRange__constructor_QModelIndex(void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  auto ptr = new QtDartBindings_wrappersNS::QItemSelectionRange_wrapper(index);
  return reinterpret_cast<void *>(ptr);
}
void *
c_QItemSelectionRange__constructor_QModelIndex_QModelIndex(void *topL_,
                                                           void *bottomR_) {
  assert(topL_);
  auto &topL = *reinterpret_cast<QModelIndex *>(topL_);
  assert(bottomR_);
  auto &bottomR = *reinterpret_cast<QModelIndex *>(bottomR_);
  auto ptr =
      new QtDartBindings_wrappersNS::QItemSelectionRange_wrapper(topL, bottomR);
  return reinterpret_cast<void *>(ptr);
}
// bottom() const
int c_QItemSelectionRange__bottom(void *thisObj) {
  const auto &result = fromPtr(thisObj)->bottom();
  return result;
}
// contains(const QModelIndex & index) const
bool c_QItemSelectionRange__contains_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->contains(index);
  return result;
}
// contains(int row, int column, const QModelIndex & parentIndex) const
bool c_QItemSelectionRange__contains_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *parentIndex_) {
  assert(parentIndex_);
  auto &parentIndex = *reinterpret_cast<QModelIndex *>(parentIndex_);
  const auto &result = fromPtr(thisObj)->contains(row, column, parentIndex);
  return result;
}
// height() const
int c_QItemSelectionRange__height(void *thisObj) {
  const auto &result = fromPtr(thisObj)->height();
  return result;
}
// indexes() const
void *c_QItemSelectionRange__indexes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr(thisObj)->indexes()};
  return result;
}
// intersected(const QItemSelectionRange & other) const
void *c_QItemSelectionRange__intersected_QItemSelectionRange(void *thisObj,
                                                             void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QItemSelectionRange *>(other_);
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr(thisObj)->intersected(other)};
  return result;
}
// intersects(const QItemSelectionRange & other) const
bool c_QItemSelectionRange__intersects_QItemSelectionRange(void *thisObj,
                                                           void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QItemSelectionRange *>(other_);
  const auto &result = fromPtr(thisObj)->intersects(other);
  return result;
}
// isEmpty() const
bool c_QItemSelectionRange__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isValid() const
bool c_QItemSelectionRange__isValid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValid();
  return result;
}
// left() const
int c_QItemSelectionRange__left(void *thisObj) {
  const auto &result = fromPtr(thisObj)->left();
  return result;
}
// model() const
void *c_QItemSelectionRange__model(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->model()));
  return result;
}
// parent() const
void *c_QItemSelectionRange__parent(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->parent()};
  return result;
}
// right() const
int c_QItemSelectionRange__right(void *thisObj) {
  const auto &result = fromPtr(thisObj)->right();
  return result;
}
// top() const
int c_QItemSelectionRange__top(void *thisObj) {
  const auto &result = fromPtr(thisObj)->top();
  return result;
}
// width() const
int c_QItemSelectionRange__width(void *thisObj) {
  const auto &result = fromPtr(thisObj)->width();
  return result;
}
void c_QItemSelectionRange__destructor(void *thisObj) {
  delete fromPtr(thisObj);
}
}

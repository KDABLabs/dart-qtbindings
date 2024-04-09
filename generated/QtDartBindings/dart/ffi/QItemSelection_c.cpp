/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QItemSelection_c.h"

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
QItemSelection_wrapper::QItemSelection_wrapper(const QModelIndex &topLeft,
                                               const QModelIndex &bottomRight)
    : ::QItemSelection(topLeft, bottomRight) {}
void QItemSelection_wrapper::append(const QList<QItemSelectionRange> &l) {
  ::QItemSelection::append(l);
}
const QItemSelectionRange &QItemSelection_wrapper::at(qsizetype i) const {
  return ::QItemSelection::at(i);
}
QItemSelectionRange &QItemSelection_wrapper::back() {
  return ::QItemSelection::back();
}
qsizetype QItemSelection_wrapper::capacity() const {
  return ::QItemSelection::capacity();
}
void QItemSelection_wrapper::clear() { ::QItemSelection::clear(); }
const QItemSelectionRange *QItemSelection_wrapper::constData() const {
  return ::QItemSelection::constData();
}
const QItemSelectionRange &QItemSelection_wrapper::constFirst() const {
  return ::QItemSelection::constFirst();
}
const QItemSelectionRange &QItemSelection_wrapper::constLast() const {
  return ::QItemSelection::constLast();
}
bool QItemSelection_wrapper::contains(const QModelIndex &index) const {
  return ::QItemSelection::contains(index);
}
qsizetype QItemSelection_wrapper::count() const {
  return ::QItemSelection::count();
}
QItemSelectionRange *QItemSelection_wrapper::data() {
  return ::QItemSelection::data();
}
void QItemSelection_wrapper::detach() { ::QItemSelection::detach(); }
bool QItemSelection_wrapper::empty() const { return ::QItemSelection::empty(); }
QItemSelectionRange &QItemSelection_wrapper::first() {
  return ::QItemSelection::first();
}
QList<QItemSelectionRange> QItemSelection_wrapper::first(qsizetype n) const {
  return ::QItemSelection::first(n);
}
QList<QItemSelectionRange>
QItemSelection_wrapper::fromList(const QList<QItemSelectionRange> &list) {
  return ::QItemSelection::fromList(list);
}
QList<QItemSelectionRange>
QItemSelection_wrapper::fromVector(const QList<QItemSelectionRange> &vector) {
  return ::QItemSelection::fromVector(vector);
}
QItemSelectionRange &QItemSelection_wrapper::front() {
  return ::QItemSelection::front();
}
QList<QModelIndex> QItemSelection_wrapper::indexes() const {
  return ::QItemSelection::indexes();
}
bool QItemSelection_wrapper::isDetached() const {
  return ::QItemSelection::isDetached();
}
bool QItemSelection_wrapper::isEmpty() const {
  return ::QItemSelection::isEmpty();
}
bool QItemSelection_wrapper::isSharedWith(
    const QList<QItemSelectionRange> &other) const {
  return ::QItemSelection::isSharedWith(other);
}
QItemSelectionRange &QItemSelection_wrapper::last() {
  return ::QItemSelection::last();
}
QList<QItemSelectionRange> QItemSelection_wrapper::last(qsizetype n) const {
  return ::QItemSelection::last(n);
}
qsizetype QItemSelection_wrapper::length() const {
  return ::QItemSelection::length();
}
void QItemSelection_wrapper::merge(
    const QItemSelection &other,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  ::QItemSelection::merge(other, command);
}
QList<QItemSelectionRange> QItemSelection_wrapper::mid(qsizetype pos,
                                                       qsizetype len) const {
  return ::QItemSelection::mid(pos, len);
}
void QItemSelection_wrapper::move(qsizetype from, qsizetype to) {
  ::QItemSelection::move(from, to);
}
void QItemSelection_wrapper::pop_back() { ::QItemSelection::pop_back(); }
void QItemSelection_wrapper::pop_front() { ::QItemSelection::pop_front(); }
void QItemSelection_wrapper::remove(qsizetype i, qsizetype n) {
  ::QItemSelection::remove(i, n);
}
void QItemSelection_wrapper::removeAt(qsizetype i) {
  ::QItemSelection::removeAt(i);
}
void QItemSelection_wrapper::removeFirst() { ::QItemSelection::removeFirst(); }
void QItemSelection_wrapper::removeLast() { ::QItemSelection::removeLast(); }
void QItemSelection_wrapper::reserve(qsizetype size) {
  ::QItemSelection::reserve(size);
}
void QItemSelection_wrapper::resize(qsizetype size) {
  ::QItemSelection::resize(size);
}
void QItemSelection_wrapper::select(const QModelIndex &topLeft,
                                    const QModelIndex &bottomRight) {
  ::QItemSelection::select(topLeft, bottomRight);
}
void QItemSelection_wrapper::shrink_to_fit() {
  ::QItemSelection::shrink_to_fit();
}
qsizetype QItemSelection_wrapper::size() const {
  return ::QItemSelection::size();
}
QList<QItemSelectionRange> QItemSelection_wrapper::sliced(qsizetype pos) const {
  return ::QItemSelection::sliced(pos);
}
QList<QItemSelectionRange> QItemSelection_wrapper::sliced(qsizetype pos,
                                                          qsizetype n) const {
  return ::QItemSelection::sliced(pos, n);
}
void QItemSelection_wrapper::split(const QItemSelectionRange &range,
                                   const QItemSelectionRange &other,
                                   QItemSelection *result) {
  ::QItemSelection::split(range, other, result);
}
void QItemSelection_wrapper::squeeze() { ::QItemSelection::squeeze(); }
void QItemSelection_wrapper::swapItemsAt(qsizetype i, qsizetype j) {
  ::QItemSelection::swapItemsAt(i, j);
}
QItemSelectionRange QItemSelection_wrapper::takeAt(qsizetype i) {
  return ::QItemSelection::takeAt(i);
}
QList<QItemSelectionRange> QItemSelection_wrapper::toList() const {
  return ::QItemSelection::toList();
}
QList<QItemSelectionRange> QItemSelection_wrapper::toVector() const {
  return ::QItemSelection::toVector();
}
QItemSelectionRange QItemSelection_wrapper::value(qsizetype i) const {
  return ::QItemSelection::value(i);
}
QItemSelection_wrapper::~QItemSelection_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QItemSelection *fromPtr(void *ptr) {
  return reinterpret_cast<QItemSelection *>(ptr);
}
static QtDartBindings_wrappersNS::QItemSelection_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QItemSelection_wrapper *>(
      ptr);
}
extern "C" {
void c_QItemSelection_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QItemSelection_wrapper *>(
      cppObj);
}
void *
c_QItemSelection__constructor_QModelIndex_QModelIndex(void *topLeft_,
                                                      void *bottomRight_) {
  assert(topLeft_);
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  assert(bottomRight_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  auto ptr = new QtDartBindings_wrappersNS::QItemSelection_wrapper(topLeft,
                                                                   bottomRight);
  return reinterpret_cast<void *>(ptr);
}
// append(const QList<QItemSelectionRange > & l)
void c_QItemSelection__append_QList_QItemSelectionRange(void *thisObj,
                                                        void *l_) {
  assert(l_);
  auto &l = *reinterpret_cast<QList<QItemSelectionRange> *>(l_);
  fromPtr(thisObj)->append(l);
}
// at(qsizetype i) const
void *c_QItemSelection__at_qsizetype(void *thisObj, qsizetype i) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->at(i)));
  return result;
}
// back()
void *c_QItemSelection__back(void *thisObj) {
  const auto &result = &fromPtr(thisObj)->back();
  return result;
}
// capacity() const
qsizetype c_QItemSelection__capacity(void *thisObj) {
  const auto &result = fromPtr(thisObj)->capacity();
  return result;
}
// clear()
void c_QItemSelection__clear(void *thisObj) { fromPtr(thisObj)->clear(); }
// constData() const
void *c_QItemSelection__constData(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(fromPtr(thisObj)->constData()));
  return result;
}
// constFirst() const
void *c_QItemSelection__constFirst(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->constFirst()));
  return result;
}
// constLast() const
void *c_QItemSelection__constLast(void *thisObj) {
  const auto &result = const_cast<void *>(
      static_cast<const void *>(&fromPtr(thisObj)->constLast()));
  return result;
}
// contains(const QModelIndex & index) const
bool c_QItemSelection__contains_QModelIndex(void *thisObj, void *index_) {
  assert(index_);
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  const auto &result = fromPtr(thisObj)->contains(index);
  return result;
}
// count() const
qsizetype c_QItemSelection__count(void *thisObj) {
  const auto &result = fromPtr(thisObj)->count();
  return result;
}
// data()
void *c_QItemSelection__data(void *thisObj) {
  const auto &result = fromPtr(thisObj)->data();
  return result;
}
// detach()
void c_QItemSelection__detach(void *thisObj) { fromPtr(thisObj)->detach(); }
// empty() const
bool c_QItemSelection__empty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->empty();
  return result;
}
// first()
void *c_QItemSelection__first(void *thisObj) {
  const auto &result = &fromPtr(thisObj)->first();
  return result;
}
// first(qsizetype n) const
void *c_QItemSelection__first_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr(thisObj)->first(n)};
  return result;
}
// fromList(const QList<QItemSelectionRange > & list)
void *c_static_QItemSelection__fromList_QList_QItemSelectionRange(void *list_) {
  assert(list_);
  auto &list = *reinterpret_cast<QList<QItemSelectionRange> *>(list_);
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      QtDartBindings_wrappersNS::QItemSelection_wrapper::fromList(list)};
  return result;
}
// fromVector(const QList<QItemSelectionRange > & vector)
void *
c_static_QItemSelection__fromVector_QList_QItemSelectionRange(void *vector_) {
  assert(vector_);
  auto &vector = *reinterpret_cast<QList<QItemSelectionRange> *>(vector_);
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      QtDartBindings_wrappersNS::QItemSelection_wrapper::fromVector(vector)};
  return result;
}
// front()
void *c_QItemSelection__front(void *thisObj) {
  const auto &result = &fromPtr(thisObj)->front();
  return result;
}
// indexes() const
void *c_QItemSelection__indexes(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QModelIndex>>{
      fromPtr(thisObj)->indexes()};
  return result;
}
// isDetached() const
bool c_QItemSelection__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isEmpty() const
bool c_QItemSelection__isEmpty(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEmpty();
  return result;
}
// isSharedWith(const QList<QItemSelectionRange > & other) const
bool c_QItemSelection__isSharedWith_QList_QItemSelectionRange(void *thisObj,
                                                              void *other_) {
  assert(other_);
  auto &other = *reinterpret_cast<QList<QItemSelectionRange> *>(other_);
  const auto &result = fromPtr(thisObj)->isSharedWith(other);
  return result;
}
// last()
void *c_QItemSelection__last(void *thisObj) {
  const auto &result = &fromPtr(thisObj)->last();
  return result;
}
// last(qsizetype n) const
void *c_QItemSelection__last_qsizetype(void *thisObj, qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr(thisObj)->last(n)};
  return result;
}
// length() const
qsizetype c_QItemSelection__length(void *thisObj) {
  const auto &result = fromPtr(thisObj)->length();
  return result;
}
// merge(const QItemSelection & other,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelection__merge_QItemSelection_SelectionFlags(void *thisObj,
                                                           void *other_,
                                                           int command_) {
  assert(other_);
  auto &other = *reinterpret_cast<QItemSelection *>(other_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  fromPtr(thisObj)->merge(other, command);
}
// mid(qsizetype pos, qsizetype len) const
void *c_QItemSelection__mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                qsizetype len) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr(thisObj)->mid(pos, len)};
  return result;
}
// move(qsizetype from, qsizetype to)
void c_QItemSelection__move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                qsizetype to) {
  fromPtr(thisObj)->move(from, to);
}
// pop_back()
void c_QItemSelection__pop_back(void *thisObj) { fromPtr(thisObj)->pop_back(); }
// pop_front()
void c_QItemSelection__pop_front(void *thisObj) {
  fromPtr(thisObj)->pop_front();
}
// remove(qsizetype i, qsizetype n)
void c_QItemSelection__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype n) {
  fromPtr(thisObj)->remove(i, n);
}
// removeAt(qsizetype i)
void c_QItemSelection__removeAt_qsizetype(void *thisObj, qsizetype i) {
  fromPtr(thisObj)->removeAt(i);
}
// removeFirst()
void c_QItemSelection__removeFirst(void *thisObj) {
  fromPtr(thisObj)->removeFirst();
}
// removeLast()
void c_QItemSelection__removeLast(void *thisObj) {
  fromPtr(thisObj)->removeLast();
}
// reserve(qsizetype size)
void c_QItemSelection__reserve_qsizetype(void *thisObj, qsizetype size) {
  fromPtr(thisObj)->reserve(size);
}
// resize(qsizetype size)
void c_QItemSelection__resize_qsizetype(void *thisObj, qsizetype size) {
  fromPtr(thisObj)->resize(size);
}
// select(const QModelIndex & topLeft, const QModelIndex & bottomRight)
void c_QItemSelection__select_QModelIndex_QModelIndex(void *thisObj,
                                                      void *topLeft_,
                                                      void *bottomRight_) {
  assert(topLeft_);
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  assert(bottomRight_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  fromPtr(thisObj)->select(topLeft, bottomRight);
}
// shrink_to_fit()
void c_QItemSelection__shrink_to_fit(void *thisObj) {
  fromPtr(thisObj)->shrink_to_fit();
}
// size() const
qsizetype c_QItemSelection__size(void *thisObj) {
  const auto &result = fromPtr(thisObj)->size();
  return result;
}
// sliced(qsizetype pos) const
void *c_QItemSelection__sliced_qsizetype(void *thisObj, qsizetype pos) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr(thisObj)->sliced(pos)};
  return result;
}
// sliced(qsizetype pos, qsizetype n) const
void *c_QItemSelection__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype n) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr(thisObj)->sliced(pos, n)};
  return result;
}
// split(const QItemSelectionRange & range, const QItemSelectionRange & other,
// QItemSelection * result)
void c_static_QItemSelection__split_QItemSelectionRange_QItemSelectionRange_QItemSelection(
    void *range_, void *other_, void *result_) {
  assert(range_);
  auto &range = *reinterpret_cast<QItemSelectionRange *>(range_);
  assert(other_);
  auto &other = *reinterpret_cast<QItemSelectionRange *>(other_);
  auto result = reinterpret_cast<QItemSelection *>(result_);
  QtDartBindings_wrappersNS::QItemSelection_wrapper::split(range, other,
                                                           result);
}
// squeeze()
void c_QItemSelection__squeeze(void *thisObj) { fromPtr(thisObj)->squeeze(); }
// swapItemsAt(qsizetype i, qsizetype j)
void c_QItemSelection__swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype j) {
  fromPtr(thisObj)->swapItemsAt(i, j);
}
// takeAt(qsizetype i)
void *c_QItemSelection__takeAt_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr(thisObj)->takeAt(i)};
  return result;
}
// toList() const
void *c_QItemSelection__toList(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr(thisObj)->toList()};
  return result;
}
// toVector() const
void *c_QItemSelection__toVector(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
      fromPtr(thisObj)->toVector()};
  return result;
}
// value(qsizetype i) const
void *c_QItemSelection__value_qsizetype(void *thisObj, qsizetype i) {
  const auto &result = new Dartagnan::ValueWrapper<QItemSelectionRange>{
      fromPtr(thisObj)->value(i)};
  return result;
}
void c_QItemSelection__destructor(void *thisObj) { delete fromPtr(thisObj); }
}

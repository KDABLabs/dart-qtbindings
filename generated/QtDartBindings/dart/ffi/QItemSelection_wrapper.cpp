#include "QItemSelection_wrapper.h"

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
QItemSelection_wrapper::QItemSelection_wrapper(const QModelIndex &topLeft,
                                               const QModelIndex &bottomRight)
    : ::QItemSelection(topLeft, bottomRight) {}
void QItemSelection_wrapper::append(const QList<QItemSelectionRange> &l) {
  // tag=1000

  // tag=1004
  ::QItemSelection::append(l);
}
const QItemSelectionRange &QItemSelection_wrapper::at(qsizetype i) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::at(i);
}
QItemSelectionRange &QItemSelection_wrapper::back() {
  // tag=1000

  // tag=1004
  return ::QItemSelection::back();
}
qsizetype QItemSelection_wrapper::capacity() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::capacity();
}
void QItemSelection_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QItemSelection::clear();
}
const QItemSelectionRange *QItemSelection_wrapper::constData() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::constData();
}
const QItemSelectionRange &QItemSelection_wrapper::constFirst() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::constFirst();
}
const QItemSelectionRange &QItemSelection_wrapper::constLast() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::constLast();
}
bool QItemSelection_wrapper::contains(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::contains(index);
}
qsizetype QItemSelection_wrapper::count() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::count();
}
QItemSelectionRange *QItemSelection_wrapper::data() {
  // tag=1000

  // tag=1004
  return ::QItemSelection::data();
}
void QItemSelection_wrapper::detach() {
  // tag=1000

  // tag=1004
  ::QItemSelection::detach();
}
bool QItemSelection_wrapper::empty() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::empty();
}
QItemSelectionRange &QItemSelection_wrapper::first() {
  // tag=1000

  // tag=1004
  return ::QItemSelection::first();
}
QList<QItemSelectionRange> QItemSelection_wrapper::first(qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::first(n);
}
QList<QItemSelectionRange>
QItemSelection_wrapper::fromList(const QList<QItemSelectionRange> &list) {
  // tag=1000

  // tag=1004
  return ::QItemSelection::fromList(list);
}
QList<QItemSelectionRange>
QItemSelection_wrapper::fromVector(const QList<QItemSelectionRange> &vector) {
  // tag=1000

  // tag=1004
  return ::QItemSelection::fromVector(vector);
}
QItemSelectionRange &QItemSelection_wrapper::front() {
  // tag=1000

  // tag=1004
  return ::QItemSelection::front();
}
QList<QModelIndex> QItemSelection_wrapper::indexes() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::indexes();
}
bool QItemSelection_wrapper::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::isDetached();
}
bool QItemSelection_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::isEmpty();
}
bool QItemSelection_wrapper::isSharedWith(
    const QList<QItemSelectionRange> &other) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::isSharedWith(other);
}
QItemSelectionRange &QItemSelection_wrapper::last() {
  // tag=1000

  // tag=1004
  return ::QItemSelection::last();
}
QList<QItemSelectionRange> QItemSelection_wrapper::last(qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::last(n);
}
qsizetype QItemSelection_wrapper::length() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::length();
}
void QItemSelection_wrapper::merge(
    const QItemSelection &other,
    QFlags<QItemSelectionModel::SelectionFlag> command) {
  // tag=1000

  // tag=1004
  ::QItemSelection::merge(other, command);
}
QList<QItemSelectionRange> QItemSelection_wrapper::mid(qsizetype pos,
                                                       qsizetype len) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::mid(pos, len);
}
void QItemSelection_wrapper::move(qsizetype from, qsizetype to) {
  // tag=1000

  // tag=1004
  ::QItemSelection::move(from, to);
}
void QItemSelection_wrapper::pop_back() {
  // tag=1000

  // tag=1004
  ::QItemSelection::pop_back();
}
void QItemSelection_wrapper::pop_front() {
  // tag=1000

  // tag=1004
  ::QItemSelection::pop_front();
}
void QItemSelection_wrapper::remove(qsizetype i, qsizetype n) {
  // tag=1000

  // tag=1004
  ::QItemSelection::remove(i, n);
}
void QItemSelection_wrapper::removeAt(qsizetype i) {
  // tag=1000

  // tag=1004
  ::QItemSelection::removeAt(i);
}
void QItemSelection_wrapper::removeFirst() {
  // tag=1000

  // tag=1004
  ::QItemSelection::removeFirst();
}
void QItemSelection_wrapper::removeLast() {
  // tag=1000

  // tag=1004
  ::QItemSelection::removeLast();
}
void QItemSelection_wrapper::reserve(qsizetype size) {
  // tag=1000

  // tag=1004
  ::QItemSelection::reserve(size);
}
void QItemSelection_wrapper::resize(qsizetype size) {
  // tag=1000

  // tag=1004
  ::QItemSelection::resize(size);
}
void QItemSelection_wrapper::select(const QModelIndex &topLeft,
                                    const QModelIndex &bottomRight) {
  // tag=1000

  // tag=1004
  ::QItemSelection::select(topLeft, bottomRight);
}
void QItemSelection_wrapper::shrink_to_fit() {
  // tag=1000

  // tag=1004
  ::QItemSelection::shrink_to_fit();
}
qsizetype QItemSelection_wrapper::size() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::size();
}
QList<QItemSelectionRange> QItemSelection_wrapper::sliced(qsizetype pos) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::sliced(pos);
}
QList<QItemSelectionRange> QItemSelection_wrapper::sliced(qsizetype pos,
                                                          qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::sliced(pos, n);
}
void QItemSelection_wrapper::split(const QItemSelectionRange &range,
                                   const QItemSelectionRange &other,
                                   QItemSelection *result) {
  // tag=1000

  // tag=1004
  ::QItemSelection::split(range, other, result);
}
void QItemSelection_wrapper::squeeze() {
  // tag=1000

  // tag=1004
  ::QItemSelection::squeeze();
}
void QItemSelection_wrapper::swapItemsAt(qsizetype i, qsizetype j) {
  // tag=1000

  // tag=1004
  ::QItemSelection::swapItemsAt(i, j);
}
QItemSelectionRange QItemSelection_wrapper::takeAt(qsizetype i) {
  // tag=1000

  // tag=1004
  return ::QItemSelection::takeAt(i);
}
QList<QItemSelectionRange> QItemSelection_wrapper::toList() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::toList();
}
QList<QItemSelectionRange> QItemSelection_wrapper::toVector() const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::toVector();
}
QItemSelectionRange QItemSelection_wrapper::value(qsizetype i) const {
  // tag=1000

  // tag=1004
  return ::QItemSelection::value(i);
}

// tag=1005
QItemSelection_wrapper::~QItemSelection_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QItemSelection *fromPtr(void *ptr) {
  return reinterpret_cast<QItemSelection *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QItemSelection_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QItemSelection_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QItemSelection_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QItemSelection_wrapper *>(
      cppObj);
}
void *
c_QItemSelection__constructor_QModelIndex_QModelIndex(void *topLeft_,
                                                      void *bottomRight_) {
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QItemSelection_wrapper(topLeft,
                                                                   bottomRight);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<QItemSelectionRange > & l)
void c_QItemSelection__append_QList_QItemSelectionRange(void *thisObj,
                                                        void *l_) {
  auto &l = *reinterpret_cast<QList<QItemSelectionRange> *>(l_);
  // tag=1010
  fromPtr(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
void *c_QItemSelection__at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(static_cast<const void *>(&fromPtr(thisObj)->at(i)));
}

// tag=1050
// back()
void *c_QItemSelection__back(void *thisObj) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QItemSelection__capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QItemSelection__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// constData() const
void *c_QItemSelection__constData(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(
          static_cast<const void *>(fromPtr(thisObj)->constData()));
}

// tag=1050
// constFirst() const
void *c_QItemSelection__constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->constFirst()));
}

// tag=1050
// constLast() const
void *c_QItemSelection__constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1071
      const_cast<void *>(
          static_cast<const void *>(&fromPtr(thisObj)->constLast()));
}

// tag=1050
// contains(const QModelIndex & index) const
bool c_QItemSelection__contains_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->contains(index);
}

// tag=1050
// count() const
qsizetype c_QItemSelection__count(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->count();
}

// tag=1050
// data()
void *c_QItemSelection__data(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->data();
}

// tag=1050
// detach()
void c_QItemSelection__detach(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QItemSelection__empty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->empty();
}

// tag=1050
// first()
void *c_QItemSelection__first(void *thisObj) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QItemSelection__first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr(thisObj)->first(n)};
}

// tag=1050
// fromList(const QList<QItemSelectionRange > & list)
void *c_static_QItemSelection__fromList_QList_QItemSelectionRange(void *list_) {
  auto &list = *reinterpret_cast<QList<QItemSelectionRange> *>(list_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          QtDartBindings_wrappersNS::QItemSelection_wrapper::fromList(list)};
}

// tag=1050
// fromVector(const QList<QItemSelectionRange > & vector)
void *
c_static_QItemSelection__fromVector_QList_QItemSelectionRange(void *vector_) {
  auto &vector = *reinterpret_cast<QList<QItemSelectionRange> *>(vector_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          QtDartBindings_wrappersNS::QItemSelection_wrapper::fromVector(
              vector)};
}

// tag=1050
// front()
void *c_QItemSelection__front(void *thisObj) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->front();
}

// tag=1050
// indexes() const
void *c_QItemSelection__indexes(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr(thisObj)->indexes()};
}

// tag=1050
// isDetached() const
bool c_QItemSelection__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QItemSelection__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<QItemSelectionRange > & other) const
bool c_QItemSelection__isSharedWith_QList_QItemSelectionRange(void *thisObj,
                                                              void *other_) {
  auto &other = *reinterpret_cast<QList<QItemSelectionRange> *>(other_);
  return
      // tag=1010
      fromPtr(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QItemSelection__last(void *thisObj) {
  return
      // tag=1010

      // tag=1070
      &fromPtr(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QItemSelection__last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QItemSelection__length(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->length();
}

// tag=1050
// merge(const QItemSelection & other,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelection__merge_QItemSelection_SelectionFlags(void *thisObj,
                                                           void *other_,
                                                           int command_) {
  auto &other = *reinterpret_cast<QItemSelection *>(other_);
  auto command =
      static_cast<QFlags<QItemSelectionModel::SelectionFlag>>(command_);
  // tag=1010
  fromPtr(thisObj)->merge(other, command);
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QItemSelection__mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QItemSelection__move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                qsizetype to) {
  // tag=1010
  fromPtr(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QItemSelection__pop_back(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QItemSelection__pop_front(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QItemSelection__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype n) {
  // tag=1010
  fromPtr(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QItemSelection__removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QItemSelection__removeFirst(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QItemSelection__removeLast(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QItemSelection__reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QItemSelection__resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr(thisObj)->resize(size);
}

// tag=1050
// select(const QModelIndex & topLeft, const QModelIndex & bottomRight)
void c_QItemSelection__select_QModelIndex_QModelIndex(void *thisObj,
                                                      void *topLeft_,
                                                      void *bottomRight_) {
  auto &topLeft = *reinterpret_cast<QModelIndex *>(topLeft_);
  auto &bottomRight = *reinterpret_cast<QModelIndex *>(bottomRight_);
  // tag=1010
  fromPtr(thisObj)->select(topLeft, bottomRight);
}

// tag=1050
// shrink_to_fit()
void c_QItemSelection__shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QItemSelection__size(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QItemSelection__sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QItemSelection__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr(thisObj)->sliced(pos, n)};
}

// tag=1050
// split(const QItemSelectionRange & range, const QItemSelectionRange & other,
// QItemSelection * result)
void c_static_QItemSelection__split_QItemSelectionRange_QItemSelectionRange_QItemSelection(
    void *range_, void *other_, void *result_) {
  auto &range = *reinterpret_cast<QItemSelectionRange *>(range_);
  auto &other = *reinterpret_cast<QItemSelectionRange *>(other_);
  auto result = reinterpret_cast<QItemSelection *>(result_);
  // tag=1068
  QtDartBindings_wrappersNS::QItemSelection_wrapper::split(range, other,
                                                           result);
}

// tag=1050
// squeeze()
void c_QItemSelection__squeeze(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QItemSelection__swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype j) {
  // tag=1010
  fromPtr(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QItemSelection__takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QItemSelection__toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QItemSelection__toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QItemSelection__value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr(thisObj)->value(i)};
}
void c_QItemSelection__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}

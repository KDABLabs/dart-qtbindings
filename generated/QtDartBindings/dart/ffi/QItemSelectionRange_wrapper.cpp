#include "QItemSelectionRange_wrapper.h"

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
QItemSelectionRange_wrapper::QItemSelectionRange_wrapper()
    : ::QItemSelectionRange() {}

// tag=1006
QItemSelectionRange_wrapper::QItemSelectionRange_wrapper(
    const QModelIndex &index)
    : ::QItemSelectionRange(index) {}

// tag=1006
QItemSelectionRange_wrapper::QItemSelectionRange_wrapper(
    const QModelIndex &topL, const QModelIndex &bottomR)
    : ::QItemSelectionRange(topL, bottomR) {}
int QItemSelectionRange_wrapper::bottom() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::bottom();
}
bool QItemSelectionRange_wrapper::contains(const QModelIndex &index) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::contains(index);
}
bool QItemSelectionRange_wrapper::contains(
    int row, int column, const QModelIndex &parentIndex) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::contains(row, column, parentIndex);
}
int QItemSelectionRange_wrapper::height() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::height();
}
QList<QModelIndex> QItemSelectionRange_wrapper::indexes() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::indexes();
}
QItemSelectionRange QItemSelectionRange_wrapper::intersected(
    const QItemSelectionRange &other) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::intersected(other);
}
bool QItemSelectionRange_wrapper::intersects(
    const QItemSelectionRange &other) const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::intersects(other);
}
bool QItemSelectionRange_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::isEmpty();
}
bool QItemSelectionRange_wrapper::isValid() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::isValid();
}
int QItemSelectionRange_wrapper::left() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::left();
}
const QAbstractItemModel *QItemSelectionRange_wrapper::model() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::model();
}
QModelIndex QItemSelectionRange_wrapper::parent() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::parent();
}
int QItemSelectionRange_wrapper::right() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::right();
}
int QItemSelectionRange_wrapper::top() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::top();
}
int QItemSelectionRange_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QItemSelectionRange::width();
}

// tag=1005
QItemSelectionRange_wrapper::~QItemSelectionRange_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QItemSelectionRange *fromPtr(void *ptr) {
  return reinterpret_cast<QItemSelectionRange *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QItemSelectionRange_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionRange_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QItemSelectionRange_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QItemSelectionRange_wrapper *>(cppObj);
}
void *c_QItemSelectionRange__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QItemSelectionRange_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QItemSelectionRange__constructor_QModelIndex(void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QItemSelectionRange_wrapper(index);
  return reinterpret_cast<void *>(ptr);
}
void *
c_QItemSelectionRange__constructor_QModelIndex_QModelIndex(void *topL_,
                                                           void *bottomR_) {
  auto &topL = *reinterpret_cast<QModelIndex *>(topL_);
  auto &bottomR = *reinterpret_cast<QModelIndex *>(bottomR_);
  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QItemSelectionRange_wrapper(topL, bottomR);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// bottom() const
int c_QItemSelectionRange__bottom(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->bottom();
}

// tag=1050
// contains(const QModelIndex & index) const
bool c_QItemSelectionRange__contains_QModelIndex(void *thisObj, void *index_) {
  auto &index = *reinterpret_cast<QModelIndex *>(index_);
  return
      // tag=1010
      fromPtr(thisObj)->contains(index);
}

// tag=1050
// contains(int row, int column, const QModelIndex & parentIndex) const
bool c_QItemSelectionRange__contains_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *parentIndex_) {
  auto &parentIndex = *reinterpret_cast<QModelIndex *>(parentIndex_);
  return
      // tag=1010
      fromPtr(thisObj)->contains(row, column, parentIndex);
}

// tag=1050
// height() const
int c_QItemSelectionRange__height(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->height();
}

// tag=1050
// indexes() const
void *c_QItemSelectionRange__indexes(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr(thisObj)->indexes()};
}

// tag=1050
// intersected(const QItemSelectionRange & other) const
void *c_QItemSelectionRange__intersected_QItemSelectionRange(void *thisObj,
                                                             void *other_) {
  auto &other = *reinterpret_cast<QItemSelectionRange *>(other_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr(thisObj)->intersected(other)};
}

// tag=1050
// intersects(const QItemSelectionRange & other) const
bool c_QItemSelectionRange__intersects_QItemSelectionRange(void *thisObj,
                                                           void *other_) {
  auto &other = *reinterpret_cast<QItemSelectionRange *>(other_);
  return
      // tag=1010
      fromPtr(thisObj)->intersects(other);
}

// tag=1050
// isEmpty() const
bool c_QItemSelectionRange__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// isValid() const
bool c_QItemSelectionRange__isValid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isValid();
}

// tag=1050
// left() const
int c_QItemSelectionRange__left(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->left();
}

// tag=1050
// model() const
void *c_QItemSelectionRange__model(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->model()));
}

// tag=1050
// parent() const
void *c_QItemSelectionRange__parent(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->parent()};
}

// tag=1050
// right() const
int c_QItemSelectionRange__right(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->right();
}

// tag=1050
// top() const
int c_QItemSelectionRange__top(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->top();
}

// tag=1050
// width() const
int c_QItemSelectionRange__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}
void c_QItemSelectionRange__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}

#include "QModelIndex_wrapper.h"

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
QModelIndex_wrapper::QModelIndex_wrapper() : ::QModelIndex() {}
int QModelIndex_wrapper::column() const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::column();
}
QVariant QModelIndex_wrapper::data(int role) const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::data(role);
}
bool QModelIndex_wrapper::isValid() const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::isValid();
}
const QAbstractItemModel *QModelIndex_wrapper::model() const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::model();
}
QModelIndex QModelIndex_wrapper::parent() const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::parent();
}
int QModelIndex_wrapper::row() const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::row();
}
QModelIndex QModelIndex_wrapper::sibling(int row, int column) const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::sibling(row, column);
}
QModelIndex QModelIndex_wrapper::siblingAtColumn(int column) const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::siblingAtColumn(column);
}
QModelIndex QModelIndex_wrapper::siblingAtRow(int row) const {
  // tag=1000

  // tag=1004
  return ::QModelIndex::siblingAtRow(row);
}

// tag=1005
QModelIndex_wrapper::~QModelIndex_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QModelIndex *fromPtr(void *ptr) {
  return reinterpret_cast<QModelIndex *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QModelIndex_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QModelIndex_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QModelIndex_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QModelIndex_wrapper *>(
      cppObj);
}
void *c_QModelIndex__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QModelIndex_wrapper();
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// column() const
int c_QModelIndex__column(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->column();
}

// tag=1050
// data(int role) const
void *c_QModelIndex__data_int(void *thisObj, int role) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{fromPtr(thisObj)->data(role)};
}

// tag=1050
// isValid() const
bool c_QModelIndex__isValid(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isValid();
}

// tag=1050
// model() const
void *c_QModelIndex__model(void *thisObj) {
  return
      // tag=1010

      // tag=1069
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->model()));
}

// tag=1050
// parent() const
void *c_QModelIndex__parent(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->parent()};
}

// tag=1050
// row() const
int c_QModelIndex__row(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->row();
}

// tag=1050
// sibling(int row, int column) const
void *c_QModelIndex__sibling_int_int(void *thisObj, int row, int column) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->sibling(row, column)};
}

// tag=1050
// siblingAtColumn(int column) const
void *c_QModelIndex__siblingAtColumn_int(void *thisObj, int column) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->siblingAtColumn(column)};
}

// tag=1050
// siblingAtRow(int row) const
void *c_QModelIndex__siblingAtRow_int(void *thisObj, int row) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr(thisObj)->siblingAtRow(row)};
}
void c_QModelIndex__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}

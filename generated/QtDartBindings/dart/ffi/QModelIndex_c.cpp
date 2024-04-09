/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QModelIndex_c.h"

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
QModelIndex_wrapper::QModelIndex_wrapper() : ::QModelIndex() {}
int QModelIndex_wrapper::column() const { return ::QModelIndex::column(); }
QVariant QModelIndex_wrapper::data(int role) const {
  return ::QModelIndex::data(role);
}
bool QModelIndex_wrapper::isValid() const { return ::QModelIndex::isValid(); }
const QAbstractItemModel *QModelIndex_wrapper::model() const {
  return ::QModelIndex::model();
}
QModelIndex QModelIndex_wrapper::parent() const {
  return ::QModelIndex::parent();
}
int QModelIndex_wrapper::row() const { return ::QModelIndex::row(); }
QModelIndex QModelIndex_wrapper::sibling(int row, int column) const {
  return ::QModelIndex::sibling(row, column);
}
QModelIndex QModelIndex_wrapper::siblingAtColumn(int column) const {
  return ::QModelIndex::siblingAtColumn(column);
}
QModelIndex QModelIndex_wrapper::siblingAtRow(int row) const {
  return ::QModelIndex::siblingAtRow(row);
}
QModelIndex_wrapper::~QModelIndex_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QModelIndex *fromPtr(void *ptr) {
  return reinterpret_cast<QModelIndex *>(ptr);
}
static QtDartBindings_wrappersNS::QModelIndex_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QModelIndex_wrapper *>(
      ptr);
}
extern "C" {
void c_QModelIndex_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QModelIndex_wrapper *>(
      cppObj);
}
void *c_QModelIndex__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QModelIndex_wrapper();
  return reinterpret_cast<void *>(ptr);
}
// column() const
int c_QModelIndex__column(void *thisObj) {
  const auto &result = fromPtr(thisObj)->column();
  return result;
}
// data(int role) const
void *c_QModelIndex__data_int(void *thisObj, int role) {
  const auto &result =
      new Dartagnan::ValueWrapper<QVariant>{fromPtr(thisObj)->data(role)};
  return result;
}
// isValid() const
bool c_QModelIndex__isValid(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isValid();
  return result;
}
// model() const
void *c_QModelIndex__model(void *thisObj) {
  const auto &result =
      const_cast<void *>(static_cast<const void *>(fromPtr(thisObj)->model()));
  return result;
}
// parent() const
void *c_QModelIndex__parent(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->parent()};
  return result;
}
// row() const
int c_QModelIndex__row(void *thisObj) {
  const auto &result = fromPtr(thisObj)->row();
  return result;
}
// sibling(int row, int column) const
void *c_QModelIndex__sibling_int_int(void *thisObj, int row, int column) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->sibling(row, column)};
  return result;
}
// siblingAtColumn(int column) const
void *c_QModelIndex__siblingAtColumn_int(void *thisObj, int column) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->siblingAtColumn(column)};
  return result;
}
// siblingAtRow(int row) const
void *c_QModelIndex__siblingAtRow_int(void *thisObj, int row) {
  const auto &result = new Dartagnan::ValueWrapper<QModelIndex>{
      fromPtr(thisObj)->siblingAtRow(row)};
  return result;
}
void c_QModelIndex__destructor(void *thisObj) { delete fromPtr(thisObj); }
}

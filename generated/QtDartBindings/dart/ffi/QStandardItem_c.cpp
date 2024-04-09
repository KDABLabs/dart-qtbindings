/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QStandardItem_c.h"

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
QStandardItem_wrapper::QStandardItem_wrapper() : ::QStandardItem() {}
QStandardItem_wrapper::QStandardItem_wrapper(const QIcon &icon,
                                             const QString &text)
    : ::QStandardItem(icon, text) {}
QStandardItem_wrapper::QStandardItem_wrapper(const QString &text)
    : ::QStandardItem(text) {}
QStandardItem_wrapper::QStandardItem_wrapper(int rows, int columns)
    : ::QStandardItem(rows, columns) {}
QString QStandardItem_wrapper::accessibleDescription() const {
  return ::QStandardItem::accessibleDescription();
}
QString QStandardItem_wrapper::accessibleText() const {
  return ::QStandardItem::accessibleText();
}
void QStandardItem_wrapper::appendColumn(const QList<QStandardItem *> &items) {
  ::QStandardItem::appendColumn(items);
}
void QStandardItem_wrapper::appendRow(QStandardItem *item) {
  ::QStandardItem::appendRow(item);
}
void QStandardItem_wrapper::appendRow(const QList<QStandardItem *> &items) {
  ::QStandardItem::appendRow(items);
}
void QStandardItem_wrapper::appendRows(const QList<QStandardItem *> &items) {
  ::QStandardItem::appendRows(items);
}
QBrush QStandardItem_wrapper::background() const {
  return ::QStandardItem::background();
}
QStandardItem *QStandardItem_wrapper::child(int row, int column) const {
  return ::QStandardItem::child(row, column);
}
void QStandardItem_wrapper::clearData() { ::QStandardItem::clearData(); }
QStandardItem *QStandardItem_wrapper::clone() const {
  if (m_cloneCallback) {
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStandardItem::clone();
  }
}
QStandardItem *QStandardItem_wrapper::clone_nocallback() const {
  return ::QStandardItem::clone();
}
int QStandardItem_wrapper::column() const { return ::QStandardItem::column(); }
int QStandardItem_wrapper::columnCount() const {
  return ::QStandardItem::columnCount();
}
QVariant QStandardItem_wrapper::data(int role) const {
  if (m_dataCallback) {
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), role);
  } else {
    return ::QStandardItem::data(role);
  }
}
QVariant QStandardItem_wrapper::data_nocallback(int role) const {
  return ::QStandardItem::data(role);
}
void QStandardItem_wrapper::emitDataChanged() {
  ::QStandardItem::emitDataChanged();
}
QFont QStandardItem_wrapper::font() const { return ::QStandardItem::font(); }
QBrush QStandardItem_wrapper::foreground() const {
  return ::QStandardItem::foreground();
}
bool QStandardItem_wrapper::hasChildren() const {
  return ::QStandardItem::hasChildren();
}
QIcon QStandardItem_wrapper::icon() const { return ::QStandardItem::icon(); }
QModelIndex QStandardItem_wrapper::index() const {
  return ::QStandardItem::index();
}
void QStandardItem_wrapper::insertColumn(int column,
                                         const QList<QStandardItem *> &items) {
  ::QStandardItem::insertColumn(column, items);
}
void QStandardItem_wrapper::insertColumns(int column, int count) {
  ::QStandardItem::insertColumns(column, count);
}
void QStandardItem_wrapper::insertRow(int row, QStandardItem *item) {
  ::QStandardItem::insertRow(row, item);
}
void QStandardItem_wrapper::insertRow(int row,
                                      const QList<QStandardItem *> &items) {
  ::QStandardItem::insertRow(row, items);
}
void QStandardItem_wrapper::insertRows(int row,
                                       const QList<QStandardItem *> &items) {
  ::QStandardItem::insertRows(row, items);
}
void QStandardItem_wrapper::insertRows(int row, int count) {
  ::QStandardItem::insertRows(row, count);
}
bool QStandardItem_wrapper::isAutoTristate() const {
  return ::QStandardItem::isAutoTristate();
}
bool QStandardItem_wrapper::isCheckable() const {
  return ::QStandardItem::isCheckable();
}
bool QStandardItem_wrapper::isDragEnabled() const {
  return ::QStandardItem::isDragEnabled();
}
bool QStandardItem_wrapper::isDropEnabled() const {
  return ::QStandardItem::isDropEnabled();
}
bool QStandardItem_wrapper::isEditable() const {
  return ::QStandardItem::isEditable();
}
bool QStandardItem_wrapper::isEnabled() const {
  return ::QStandardItem::isEnabled();
}
bool QStandardItem_wrapper::isSelectable() const {
  return ::QStandardItem::isSelectable();
}
bool QStandardItem_wrapper::isUserTristate() const {
  return ::QStandardItem::isUserTristate();
}
QStandardItemModel *QStandardItem_wrapper::model() const {
  return ::QStandardItem::model();
}
QStandardItem *QStandardItem_wrapper::parent() const {
  return ::QStandardItem::parent();
}
void QStandardItem_wrapper::removeColumn(int column) {
  ::QStandardItem::removeColumn(column);
}
void QStandardItem_wrapper::removeColumns(int column, int count) {
  ::QStandardItem::removeColumns(column, count);
}
void QStandardItem_wrapper::removeRow(int row) {
  ::QStandardItem::removeRow(row);
}
void QStandardItem_wrapper::removeRows(int row, int count) {
  ::QStandardItem::removeRows(row, count);
}
int QStandardItem_wrapper::row() const { return ::QStandardItem::row(); }
int QStandardItem_wrapper::rowCount() const {
  return ::QStandardItem::rowCount();
}
void QStandardItem_wrapper::setAccessibleDescription(
    const QString &accessibleDescription) {
  ::QStandardItem::setAccessibleDescription(accessibleDescription);
}
void QStandardItem_wrapper::setAccessibleText(const QString &accessibleText) {
  ::QStandardItem::setAccessibleText(accessibleText);
}
void QStandardItem_wrapper::setAutoTristate(bool tristate) {
  ::QStandardItem::setAutoTristate(tristate);
}
void QStandardItem_wrapper::setBackground(const QBrush &brush) {
  ::QStandardItem::setBackground(brush);
}
void QStandardItem_wrapper::setCheckable(bool checkable) {
  ::QStandardItem::setCheckable(checkable);
}
void QStandardItem_wrapper::setChild(int row, QStandardItem *item) {
  ::QStandardItem::setChild(row, item);
}
void QStandardItem_wrapper::setChild(int row, int column, QStandardItem *item) {
  ::QStandardItem::setChild(row, column, item);
}
void QStandardItem_wrapper::setColumnCount(int columns) {
  ::QStandardItem::setColumnCount(columns);
}
void QStandardItem_wrapper::setData(const QVariant &value, int role) {
  if (m_setDataCallback) {
    const void *thisPtr = this;
    m_setDataCallback(const_cast<void *>(thisPtr), value, role);
  } else {
    ::QStandardItem::setData(value, role);
  }
}
void QStandardItem_wrapper::setData_nocallback(const QVariant &value,
                                               int role) {
  ::QStandardItem::setData(value, role);
}
void QStandardItem_wrapper::setDragEnabled(bool dragEnabled) {
  ::QStandardItem::setDragEnabled(dragEnabled);
}
void QStandardItem_wrapper::setDropEnabled(bool dropEnabled) {
  ::QStandardItem::setDropEnabled(dropEnabled);
}
void QStandardItem_wrapper::setEditable(bool editable) {
  ::QStandardItem::setEditable(editable);
}
void QStandardItem_wrapper::setEnabled(bool enabled) {
  ::QStandardItem::setEnabled(enabled);
}
void QStandardItem_wrapper::setFont(const QFont &font) {
  ::QStandardItem::setFont(font);
}
void QStandardItem_wrapper::setForeground(const QBrush &brush) {
  ::QStandardItem::setForeground(brush);
}
void QStandardItem_wrapper::setIcon(const QIcon &icon) {
  ::QStandardItem::setIcon(icon);
}
void QStandardItem_wrapper::setRowCount(int rows) {
  ::QStandardItem::setRowCount(rows);
}
void QStandardItem_wrapper::setSelectable(bool selectable) {
  ::QStandardItem::setSelectable(selectable);
}
void QStandardItem_wrapper::setSizeHint(const QSize &sizeHint) {
  ::QStandardItem::setSizeHint(sizeHint);
}
void QStandardItem_wrapper::setStatusTip(const QString &statusTip) {
  ::QStandardItem::setStatusTip(statusTip);
}
void QStandardItem_wrapper::setText(const QString &text) {
  ::QStandardItem::setText(text);
}
void QStandardItem_wrapper::setToolTip(const QString &toolTip) {
  ::QStandardItem::setToolTip(toolTip);
}
void QStandardItem_wrapper::setUserTristate(bool tristate) {
  ::QStandardItem::setUserTristate(tristate);
}
void QStandardItem_wrapper::setWhatsThis(const QString &whatsThis) {
  ::QStandardItem::setWhatsThis(whatsThis);
}
QSize QStandardItem_wrapper::sizeHint() const {
  return ::QStandardItem::sizeHint();
}
void QStandardItem_wrapper::sortChildren(int column, Qt::SortOrder order) {
  ::QStandardItem::sortChildren(column, order);
}
QString QStandardItem_wrapper::statusTip() const {
  return ::QStandardItem::statusTip();
}
QStandardItem *QStandardItem_wrapper::takeChild(int row, int column) {
  return ::QStandardItem::takeChild(row, column);
}
QList<QStandardItem *> QStandardItem_wrapper::takeColumn(int column) {
  return ::QStandardItem::takeColumn(column);
}
QList<QStandardItem *> QStandardItem_wrapper::takeRow(int row) {
  return ::QStandardItem::takeRow(row);
}
QString QStandardItem_wrapper::text() const { return ::QStandardItem::text(); }
QString QStandardItem_wrapper::toolTip() const {
  return ::QStandardItem::toolTip();
}
int QStandardItem_wrapper::type() const {
  if (m_typeCallback) {
    const void *thisPtr = this;
    return m_typeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QStandardItem::type();
  }
}
int QStandardItem_wrapper::type_nocallback() const {
  return ::QStandardItem::type();
}
QString QStandardItem_wrapper::whatsThis() const {
  return ::QStandardItem::whatsThis();
}
QStandardItem_wrapper::~QStandardItem_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QStandardItem *fromPtr(void *ptr) {
  return reinterpret_cast<QStandardItem *>(ptr);
}
static QtDartBindings_wrappersNS::QStandardItem_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
      ptr);
}
extern "C" {
void c_QStandardItem_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
      cppObj);
}
void *c_QStandardItem__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QStandardItem_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItem__constructor_QIcon_QString(void *icon_,
                                                 const char *text_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto ptr = new QtDartBindings_wrappersNS::QStandardItem_wrapper(icon, text);
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItem__constructor_QString(const char *text_) {
  const auto text = QString::fromUtf8(text_);
  auto ptr = new QtDartBindings_wrappersNS::QStandardItem_wrapper(text);
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItem__constructor_int_int(int rows, int columns) {
  auto ptr =
      new QtDartBindings_wrappersNS::QStandardItem_wrapper(rows, columns);
  return reinterpret_cast<void *>(ptr);
}
// accessibleDescription() const
void *c_QStandardItem__accessibleDescription(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->accessibleDescription()};
  return result;
}
// accessibleText() const
void *c_QStandardItem__accessibleText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->accessibleText()};
  return result;
}
// appendColumn(const QList<QStandardItem* > & items)
void c_QStandardItem__appendColumn_QList_QStandardItem(void *thisObj,
                                                       void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->appendColumn(items);
}
// appendRow(QStandardItem * item)
void c_QStandardItem__appendRow_QStandardItem(void *thisObj, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->appendRow(item);
}
// appendRow(const QList<QStandardItem* > & items)
void c_QStandardItem__appendRow_QList_QStandardItem(void *thisObj,
                                                    void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->appendRow(items);
}
// appendRows(const QList<QStandardItem* > & items)
void c_QStandardItem__appendRows_QList_QStandardItem(void *thisObj,
                                                     void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->appendRows(items);
}
// background() const
void *c_QStandardItem__background(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QBrush>{fromPtr(thisObj)->background()};
  return result;
}
// child(int row, int column) const
void *c_QStandardItem__child_int_int(void *thisObj, int row, int column) {
  const auto &result = fromPtr(thisObj)->child(row, column);
  return result;
}
// clearData()
void c_QStandardItem__clearData(void *thisObj) {
  fromPtr(thisObj)->clearData();
}
// clone() const
void *c_QStandardItem__clone(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->clone_nocallback();
    } else {
      return targetPtr->clone();
    }
  }();
  return result;
}
// column() const
int c_QStandardItem__column(void *thisObj) {
  const auto &result = fromPtr(thisObj)->column();
  return result;
}
// columnCount() const
int c_QStandardItem__columnCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->columnCount();
  return result;
}
// data(int role) const
void *c_QStandardItem__data_int(void *thisObj, int role) {
  const auto &result = new Dartagnan::ValueWrapper<QVariant>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->data_nocallback(role);
    } else {
      return targetPtr->data(role);
    }
  }()};
  return result;
}
// emitDataChanged()
void c_QStandardItem__emitDataChanged(void *thisObj) {
  fromWrapperPtr(thisObj)->emitDataChanged();
}
// font() const
void *c_QStandardItem__font(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->font()};
  return result;
}
// foreground() const
void *c_QStandardItem__foreground(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QBrush>{fromPtr(thisObj)->foreground()};
  return result;
}
// hasChildren() const
bool c_QStandardItem__hasChildren(void *thisObj) {
  const auto &result = fromPtr(thisObj)->hasChildren();
  return result;
}
// icon() const
void *c_QStandardItem__icon(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
  return result;
}
// index() const
void *c_QStandardItem__index(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->index()};
  return result;
}
// insertColumn(int column, const QList<QStandardItem* > & items)
void c_QStandardItem__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                           int column,
                                                           void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->insertColumn(column, items);
}
// insertColumns(int column, int count)
void c_QStandardItem__insertColumns_int_int(void *thisObj, int column,
                                            int count) {
  fromPtr(thisObj)->insertColumns(column, count);
}
// insertRow(int row, QStandardItem * item)
void c_QStandardItem__insertRow_int_QStandardItem(void *thisObj, int row,
                                                  void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->insertRow(row, item);
}
// insertRow(int row, const QList<QStandardItem* > & items)
void c_QStandardItem__insertRow_int_QList_QStandardItem(void *thisObj, int row,
                                                        void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->insertRow(row, items);
}
// insertRows(int row, const QList<QStandardItem* > & items)
void c_QStandardItem__insertRows_int_QList_QStandardItem(void *thisObj, int row,
                                                         void *items_) {
  assert(items_);
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  fromPtr(thisObj)->insertRows(row, items);
}
// insertRows(int row, int count)
void c_QStandardItem__insertRows_int_int(void *thisObj, int row, int count) {
  fromPtr(thisObj)->insertRows(row, count);
}
// isAutoTristate() const
bool c_QStandardItem__isAutoTristate(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isAutoTristate();
  return result;
}
// isCheckable() const
bool c_QStandardItem__isCheckable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isCheckable();
  return result;
}
// isDragEnabled() const
bool c_QStandardItem__isDragEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDragEnabled();
  return result;
}
// isDropEnabled() const
bool c_QStandardItem__isDropEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDropEnabled();
  return result;
}
// isEditable() const
bool c_QStandardItem__isEditable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEditable();
  return result;
}
// isEnabled() const
bool c_QStandardItem__isEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEnabled();
  return result;
}
// isSelectable() const
bool c_QStandardItem__isSelectable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSelectable();
  return result;
}
// isUserTristate() const
bool c_QStandardItem__isUserTristate(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isUserTristate();
  return result;
}
// model() const
void *c_QStandardItem__model(void *thisObj) {
  const auto &result = fromPtr(thisObj)->model();
  return result;
}
// parent() const
void *c_QStandardItem__parent(void *thisObj) {
  const auto &result = fromPtr(thisObj)->parent();
  return result;
}
// removeColumn(int column)
void c_QStandardItem__removeColumn_int(void *thisObj, int column) {
  fromPtr(thisObj)->removeColumn(column);
}
// removeColumns(int column, int count)
void c_QStandardItem__removeColumns_int_int(void *thisObj, int column,
                                            int count) {
  fromPtr(thisObj)->removeColumns(column, count);
}
// removeRow(int row)
void c_QStandardItem__removeRow_int(void *thisObj, int row) {
  fromPtr(thisObj)->removeRow(row);
}
// removeRows(int row, int count)
void c_QStandardItem__removeRows_int_int(void *thisObj, int row, int count) {
  fromPtr(thisObj)->removeRows(row, count);
}
// row() const
int c_QStandardItem__row(void *thisObj) {
  const auto &result = fromPtr(thisObj)->row();
  return result;
}
// rowCount() const
int c_QStandardItem__rowCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->rowCount();
  return result;
}
// setAccessibleDescription(const QString & accessibleDescription)
void c_QStandardItem__setAccessibleDescription_QString(
    void *thisObj, const char *accessibleDescription_) {
  const auto accessibleDescription = QString::fromUtf8(accessibleDescription_);
  fromPtr(thisObj)->setAccessibleDescription(accessibleDescription);
  free((char *)accessibleDescription_);
}
// setAccessibleText(const QString & accessibleText)
void c_QStandardItem__setAccessibleText_QString(void *thisObj,
                                                const char *accessibleText_) {
  const auto accessibleText = QString::fromUtf8(accessibleText_);
  fromPtr(thisObj)->setAccessibleText(accessibleText);
  free((char *)accessibleText_);
}
// setAutoTristate(bool tristate)
void c_QStandardItem__setAutoTristate_bool(void *thisObj, bool tristate) {
  fromPtr(thisObj)->setAutoTristate(tristate);
}
// setBackground(const QBrush & brush)
void c_QStandardItem__setBackground_QBrush(void *thisObj, void *brush_) {
  assert(brush_);
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  fromPtr(thisObj)->setBackground(brush);
}
// setCheckable(bool checkable)
void c_QStandardItem__setCheckable_bool(void *thisObj, bool checkable) {
  fromPtr(thisObj)->setCheckable(checkable);
}
// setChild(int row, QStandardItem * item)
void c_QStandardItem__setChild_int_QStandardItem(void *thisObj, int row,
                                                 void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->setChild(row, item);
}
// setChild(int row, int column, QStandardItem * item)
void c_QStandardItem__setChild_int_int_QStandardItem(void *thisObj, int row,
                                                     int column, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  fromPtr(thisObj)->setChild(row, column, item);
}
// setColumnCount(int columns)
void c_QStandardItem__setColumnCount_int(void *thisObj, int columns) {
  fromPtr(thisObj)->setColumnCount(columns);
}
// setData(const QVariant & value, int role)
void c_QStandardItem__setData_QVariant_int(void *thisObj, void *value_,
                                           int role) {
  assert(value_);
  auto &value = *reinterpret_cast<QVariant *>(value_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setData_nocallback(value, role);
    } else {
      return targetPtr->setData(value, role);
    }
  }();
}
// setDragEnabled(bool dragEnabled)
void c_QStandardItem__setDragEnabled_bool(void *thisObj, bool dragEnabled) {
  fromPtr(thisObj)->setDragEnabled(dragEnabled);
}
// setDropEnabled(bool dropEnabled)
void c_QStandardItem__setDropEnabled_bool(void *thisObj, bool dropEnabled) {
  fromPtr(thisObj)->setDropEnabled(dropEnabled);
}
// setEditable(bool editable)
void c_QStandardItem__setEditable_bool(void *thisObj, bool editable) {
  fromPtr(thisObj)->setEditable(editable);
}
// setEnabled(bool enabled)
void c_QStandardItem__setEnabled_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setEnabled(enabled);
}
// setFont(const QFont & font)
void c_QStandardItem__setFont_QFont(void *thisObj, void *font_) {
  assert(font_);
  auto &font = *reinterpret_cast<QFont *>(font_);
  fromPtr(thisObj)->setFont(font);
}
// setForeground(const QBrush & brush)
void c_QStandardItem__setForeground_QBrush(void *thisObj, void *brush_) {
  assert(brush_);
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  fromPtr(thisObj)->setForeground(brush);
}
// setIcon(const QIcon & icon)
void c_QStandardItem__setIcon_QIcon(void *thisObj, void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  fromPtr(thisObj)->setIcon(icon);
}
// setRowCount(int rows)
void c_QStandardItem__setRowCount_int(void *thisObj, int rows) {
  fromPtr(thisObj)->setRowCount(rows);
}
// setSelectable(bool selectable)
void c_QStandardItem__setSelectable_bool(void *thisObj, bool selectable) {
  fromPtr(thisObj)->setSelectable(selectable);
}
// setSizeHint(const QSize & sizeHint)
void c_QStandardItem__setSizeHint_QSize(void *thisObj, void *sizeHint_) {
  assert(sizeHint_);
  auto &sizeHint = *reinterpret_cast<QSize *>(sizeHint_);
  fromPtr(thisObj)->setSizeHint(sizeHint);
}
// setStatusTip(const QString & statusTip)
void c_QStandardItem__setStatusTip_QString(void *thisObj,
                                           const char *statusTip_) {
  const auto statusTip = QString::fromUtf8(statusTip_);
  fromPtr(thisObj)->setStatusTip(statusTip);
  free((char *)statusTip_);
}
// setText(const QString & text)
void c_QStandardItem__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setText(text);
  free((char *)text_);
}
// setToolTip(const QString & toolTip)
void c_QStandardItem__setToolTip_QString(void *thisObj, const char *toolTip_) {
  const auto toolTip = QString::fromUtf8(toolTip_);
  fromPtr(thisObj)->setToolTip(toolTip);
  free((char *)toolTip_);
}
// setUserTristate(bool tristate)
void c_QStandardItem__setUserTristate_bool(void *thisObj, bool tristate) {
  fromPtr(thisObj)->setUserTristate(tristate);
}
// setWhatsThis(const QString & whatsThis)
void c_QStandardItem__setWhatsThis_QString(void *thisObj,
                                           const char *whatsThis_) {
  const auto whatsThis = QString::fromUtf8(whatsThis_);
  fromPtr(thisObj)->setWhatsThis(whatsThis);
  free((char *)whatsThis_);
}
// sizeHint() const
void *c_QStandardItem__sizeHint(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->sizeHint()};
  return result;
}
// sortChildren(int column, Qt::SortOrder order)
void c_QStandardItem__sortChildren_int_SortOrder(void *thisObj, int column,
                                                 int order) {
  fromPtr(thisObj)->sortChildren(column, static_cast<Qt::SortOrder>(order));
}
// statusTip() const
void *c_QStandardItem__statusTip(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->statusTip()};
  return result;
}
// takeChild(int row, int column)
void *c_QStandardItem__takeChild_int_int(void *thisObj, int row, int column) {
  const auto &result = fromPtr(thisObj)->takeChild(row, column);
  return result;
}
// takeColumn(int column)
void *c_QStandardItem__takeColumn_int(void *thisObj, int column) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr(thisObj)->takeColumn(column)};
  return result;
}
// takeRow(int row)
void *c_QStandardItem__takeRow_int(void *thisObj, int row) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
      fromPtr(thisObj)->takeRow(row)};
  return result;
}
// text() const
void *c_QStandardItem__text(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
  return result;
}
// toolTip() const
void *c_QStandardItem__toolTip(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toolTip()};
  return result;
}
// type() const
int c_QStandardItem__type(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->type_nocallback();
    } else {
      return targetPtr->type();
    }
  }();
  return result;
}
// whatsThis() const
void *c_QStandardItem__whatsThis(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
  return result;
}
void c_QStandardItem__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QStandardItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 280:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_clone>(
        callback);
    break;
  case 283:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_data>(
        callback);
    break;
  case 322:
    wrapper->m_setDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_setData>(
        callback);
    break;
  case 346:
    wrapper->m_typeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_type>(
        callback);
    break;
  }
}
}

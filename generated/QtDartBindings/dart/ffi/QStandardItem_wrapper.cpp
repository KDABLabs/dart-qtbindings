#include "QStandardItem_wrapper.h"

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
QStandardItem_wrapper::QStandardItem_wrapper() : ::QStandardItem() {}

// tag=1006
QStandardItem_wrapper::QStandardItem_wrapper(const QIcon &icon,
                                             const QString &text)
    : ::QStandardItem(icon, text) {}

// tag=1006
QStandardItem_wrapper::QStandardItem_wrapper(const QString &text)
    : ::QStandardItem(text) {}

// tag=1006
QStandardItem_wrapper::QStandardItem_wrapper(int rows, int columns)
    : ::QStandardItem(rows, columns) {}
QString QStandardItem_wrapper::accessibleDescription() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::accessibleDescription();
}
QString QStandardItem_wrapper::accessibleText() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::accessibleText();
}
void QStandardItem_wrapper::appendColumn(const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItem::appendColumn(items);
}
void QStandardItem_wrapper::appendRow(QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItem::appendRow(item);
}
void QStandardItem_wrapper::appendRow(const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItem::appendRow(items);
}
void QStandardItem_wrapper::appendRows(const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItem::appendRows(items);
}
QBrush QStandardItem_wrapper::background() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::background();
}
QStandardItem *QStandardItem_wrapper::child(int row, int column) const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::child(row, column);
}
void QStandardItem_wrapper::clearData() {
  // tag=1000

  // tag=1004
  ::QStandardItem::clearData();
}
QStandardItem *QStandardItem_wrapper::clone() const {
  // tag=1000
  if (m_cloneCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_cloneCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStandardItem::clone();
  }
}
// tag=1009
QStandardItem *QStandardItem_wrapper::clone_nocallback() const {
  // tag=1003
  return ::QStandardItem::clone();
}
int QStandardItem_wrapper::column() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::column();
}
int QStandardItem_wrapper::columnCount() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::columnCount();
}
QVariant QStandardItem_wrapper::data(int role) const {
  // tag=1000
  if (m_dataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_dataCallback(const_cast<void *>(thisPtr), role);
  } else {
    // tag=1002
    return ::QStandardItem::data(role);
  }
}
// tag=1009
QVariant QStandardItem_wrapper::data_nocallback(int role) const {
  // tag=1003
  return ::QStandardItem::data(role);
}
void QStandardItem_wrapper::emitDataChanged() {
  // tag=1000

  // tag=1004
  ::QStandardItem::emitDataChanged();
}
QFont QStandardItem_wrapper::font() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::font();
}
QBrush QStandardItem_wrapper::foreground() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::foreground();
}
bool QStandardItem_wrapper::hasChildren() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::hasChildren();
}
QIcon QStandardItem_wrapper::icon() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::icon();
}
QModelIndex QStandardItem_wrapper::index() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::index();
}
void QStandardItem_wrapper::insertColumn(int column,
                                         const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItem::insertColumn(column, items);
}
void QStandardItem_wrapper::insertColumns(int column, int count) {
  // tag=1000

  // tag=1004
  ::QStandardItem::insertColumns(column, count);
}
void QStandardItem_wrapper::insertRow(int row, QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItem::insertRow(row, item);
}
void QStandardItem_wrapper::insertRow(int row,
                                      const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItem::insertRow(row, items);
}
void QStandardItem_wrapper::insertRows(int row,
                                       const QList<QStandardItem *> &items) {
  // tag=1000

  // tag=1004
  ::QStandardItem::insertRows(row, items);
}
void QStandardItem_wrapper::insertRows(int row, int count) {
  // tag=1000

  // tag=1004
  ::QStandardItem::insertRows(row, count);
}
bool QStandardItem_wrapper::isAutoTristate() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isAutoTristate();
}
bool QStandardItem_wrapper::isCheckable() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isCheckable();
}
bool QStandardItem_wrapper::isDragEnabled() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isDragEnabled();
}
bool QStandardItem_wrapper::isDropEnabled() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isDropEnabled();
}
bool QStandardItem_wrapper::isEditable() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isEditable();
}
bool QStandardItem_wrapper::isEnabled() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isEnabled();
}
bool QStandardItem_wrapper::isSelectable() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isSelectable();
}
bool QStandardItem_wrapper::isUserTristate() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::isUserTristate();
}
QStandardItemModel *QStandardItem_wrapper::model() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::model();
}
QStandardItem *QStandardItem_wrapper::parent() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::parent();
}
void QStandardItem_wrapper::removeColumn(int column) {
  // tag=1000

  // tag=1004
  ::QStandardItem::removeColumn(column);
}
void QStandardItem_wrapper::removeColumns(int column, int count) {
  // tag=1000

  // tag=1004
  ::QStandardItem::removeColumns(column, count);
}
void QStandardItem_wrapper::removeRow(int row) {
  // tag=1000

  // tag=1004
  ::QStandardItem::removeRow(row);
}
void QStandardItem_wrapper::removeRows(int row, int count) {
  // tag=1000

  // tag=1004
  ::QStandardItem::removeRows(row, count);
}
int QStandardItem_wrapper::row() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::row();
}
int QStandardItem_wrapper::rowCount() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::rowCount();
}
void QStandardItem_wrapper::setAccessibleDescription(
    const QString &accessibleDescription) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setAccessibleDescription(accessibleDescription);
}
void QStandardItem_wrapper::setAccessibleText(const QString &accessibleText) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setAccessibleText(accessibleText);
}
void QStandardItem_wrapper::setAutoTristate(bool tristate) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setAutoTristate(tristate);
}
void QStandardItem_wrapper::setBackground(const QBrush &brush) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setBackground(brush);
}
void QStandardItem_wrapper::setCheckable(bool checkable) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setCheckable(checkable);
}
void QStandardItem_wrapper::setChild(int row, QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setChild(row, item);
}
void QStandardItem_wrapper::setChild(int row, int column, QStandardItem *item) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setChild(row, column, item);
}
void QStandardItem_wrapper::setColumnCount(int columns) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setColumnCount(columns);
}
void QStandardItem_wrapper::setData(const QVariant &value, int role) {
  // tag=1000
  if (m_setDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setDataCallback(const_cast<void *>(thisPtr), value, role);
  } else {
    // tag=1002
    ::QStandardItem::setData(value, role);
  }
}
// tag=1009
void QStandardItem_wrapper::setData_nocallback(const QVariant &value,
                                               int role) {
  // tag=1003
  ::QStandardItem::setData(value, role);
}
void QStandardItem_wrapper::setDragEnabled(bool dragEnabled) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setDragEnabled(dragEnabled);
}
void QStandardItem_wrapper::setDropEnabled(bool dropEnabled) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setDropEnabled(dropEnabled);
}
void QStandardItem_wrapper::setEditable(bool editable) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setEditable(editable);
}
void QStandardItem_wrapper::setEnabled(bool enabled) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setEnabled(enabled);
}
void QStandardItem_wrapper::setFont(const QFont &font) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setFont(font);
}
void QStandardItem_wrapper::setForeground(const QBrush &brush) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setForeground(brush);
}
void QStandardItem_wrapper::setIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setIcon(icon);
}
void QStandardItem_wrapper::setRowCount(int rows) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setRowCount(rows);
}
void QStandardItem_wrapper::setSelectable(bool selectable) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setSelectable(selectable);
}
void QStandardItem_wrapper::setSizeHint(const QSize &sizeHint) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setSizeHint(sizeHint);
}
void QStandardItem_wrapper::setStatusTip(const QString &statusTip) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setStatusTip(statusTip);
}
void QStandardItem_wrapper::setText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setText(text);
}
void QStandardItem_wrapper::setToolTip(const QString &toolTip) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setToolTip(toolTip);
}
void QStandardItem_wrapper::setUserTristate(bool tristate) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setUserTristate(tristate);
}
void QStandardItem_wrapper::setWhatsThis(const QString &whatsThis) {
  // tag=1000

  // tag=1004
  ::QStandardItem::setWhatsThis(whatsThis);
}
QSize QStandardItem_wrapper::sizeHint() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::sizeHint();
}
void QStandardItem_wrapper::sortChildren(int column, Qt::SortOrder order) {
  // tag=1000

  // tag=1004
  ::QStandardItem::sortChildren(column, order);
}
QString QStandardItem_wrapper::statusTip() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::statusTip();
}
QStandardItem *QStandardItem_wrapper::takeChild(int row, int column) {
  // tag=1000

  // tag=1004
  return ::QStandardItem::takeChild(row, column);
}
QList<QStandardItem *> QStandardItem_wrapper::takeColumn(int column) {
  // tag=1000

  // tag=1004
  return ::QStandardItem::takeColumn(column);
}
QList<QStandardItem *> QStandardItem_wrapper::takeRow(int row) {
  // tag=1000

  // tag=1004
  return ::QStandardItem::takeRow(row);
}
QString QStandardItem_wrapper::text() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::text();
}
QString QStandardItem_wrapper::toolTip() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::toolTip();
}
int QStandardItem_wrapper::type() const {
  // tag=1000
  if (m_typeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_typeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QStandardItem::type();
  }
}
// tag=1009
int QStandardItem_wrapper::type_nocallback() const {
  // tag=1003
  return ::QStandardItem::type();
}
QString QStandardItem_wrapper::whatsThis() const {
  // tag=1000

  // tag=1004
  return ::QStandardItem::whatsThis();
}

// tag=1005
QStandardItem_wrapper::~QStandardItem_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QStandardItem *fromPtr(void *ptr) {
  return reinterpret_cast<QStandardItem *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QStandardItem_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QStandardItem_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QStandardItem_wrapper *>(
      cppObj);
}
void *c_QStandardItem__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStandardItem_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItem__constructor_QIcon_QString(void *icon_,
                                                 const char *text_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStandardItem_wrapper(icon, text);
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItem__constructor_QString(const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QStandardItem_wrapper(text);
  return reinterpret_cast<void *>(ptr);
}
void *c_QStandardItem__constructor_int_int(int rows, int columns) {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QStandardItem_wrapper(rows, columns);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// accessibleDescription() const
void *c_QStandardItem__accessibleDescription(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->accessibleDescription()};
}

// tag=1050
// accessibleText() const
void *c_QStandardItem__accessibleText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->accessibleText()};
}

// tag=1050
// appendColumn(const QList<QStandardItem* > & items)
void c_QStandardItem__appendColumn_QList_QStandardItem(void *thisObj,
                                                       void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->appendColumn(items);
}

// tag=1050
// appendRow(QStandardItem * item)
void c_QStandardItem__appendRow_QStandardItem(void *thisObj, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->appendRow(item);
}

// tag=1050
// appendRow(const QList<QStandardItem* > & items)
void c_QStandardItem__appendRow_QList_QStandardItem(void *thisObj,
                                                    void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->appendRow(items);
}

// tag=1050
// appendRows(const QList<QStandardItem* > & items)
void c_QStandardItem__appendRows_QList_QStandardItem(void *thisObj,
                                                     void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->appendRows(items);
}

// tag=1050
// background() const
void *c_QStandardItem__background(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QBrush>{fromPtr(thisObj)->background()};
}

// tag=1050
// child(int row, int column) const
void *c_QStandardItem__child_int_int(void *thisObj, int row, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->child(row, column);
}

// tag=1050
// clearData()
void c_QStandardItem__clearData(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clearData();
}

// tag=1050
// clone() const
void *c_QStandardItem__clone(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// column() const
int c_QStandardItem__column(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->column();
}

// tag=1050
// columnCount() const
int c_QStandardItem__columnCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->columnCount();
}

// tag=1050
// data(int role) const
void *c_QStandardItem__data_int(void *thisObj, int role) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{[&] {
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
}

// tag=1050
// emitDataChanged()
void c_QStandardItem__emitDataChanged(void *thisObj) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->emitDataChanged();
}

// tag=1050
// font() const
void *c_QStandardItem__font(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->font()};
}

// tag=1050
// foreground() const
void *c_QStandardItem__foreground(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QBrush>{fromPtr(thisObj)->foreground()};
}

// tag=1050
// hasChildren() const
bool c_QStandardItem__hasChildren(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasChildren();
}

// tag=1050
// icon() const
void *c_QStandardItem__icon(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
}

// tag=1050
// index() const
void *c_QStandardItem__index(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{fromPtr(thisObj)->index()};
}

// tag=1050
// insertColumn(int column, const QList<QStandardItem* > & items)
void c_QStandardItem__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                           int column,
                                                           void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->insertColumn(column, items);
}

// tag=1050
// insertColumns(int column, int count)
void c_QStandardItem__insertColumns_int_int(void *thisObj, int column,
                                            int count) {
  // tag=1010
  fromPtr(thisObj)->insertColumns(column, count);
}

// tag=1050
// insertRow(int row, QStandardItem * item)
void c_QStandardItem__insertRow_int_QStandardItem(void *thisObj, int row,
                                                  void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, item);
}

// tag=1050
// insertRow(int row, const QList<QStandardItem* > & items)
void c_QStandardItem__insertRow_int_QList_QStandardItem(void *thisObj, int row,
                                                        void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->insertRow(row, items);
}

// tag=1050
// insertRows(int row, const QList<QStandardItem* > & items)
void c_QStandardItem__insertRows_int_QList_QStandardItem(void *thisObj, int row,
                                                         void *items_) {
  auto &items = *reinterpret_cast<QList<QStandardItem *> *>(items_);
  // tag=1010
  fromPtr(thisObj)->insertRows(row, items);
}

// tag=1050
// insertRows(int row, int count)
void c_QStandardItem__insertRows_int_int(void *thisObj, int row, int count) {
  // tag=1010
  fromPtr(thisObj)->insertRows(row, count);
}

// tag=1050
// isAutoTristate() const
bool c_QStandardItem__isAutoTristate(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isAutoTristate();
}

// tag=1050
// isCheckable() const
bool c_QStandardItem__isCheckable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isCheckable();
}

// tag=1050
// isDragEnabled() const
bool c_QStandardItem__isDragEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDragEnabled();
}

// tag=1050
// isDropEnabled() const
bool c_QStandardItem__isDropEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDropEnabled();
}

// tag=1050
// isEditable() const
bool c_QStandardItem__isEditable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEditable();
}

// tag=1050
// isEnabled() const
bool c_QStandardItem__isEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEnabled();
}

// tag=1050
// isSelectable() const
bool c_QStandardItem__isSelectable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSelectable();
}

// tag=1050
// isUserTristate() const
bool c_QStandardItem__isUserTristate(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isUserTristate();
}

// tag=1050
// model() const
void *c_QStandardItem__model(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->model();
}

// tag=1050
// parent() const
void *c_QStandardItem__parent(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->parent();
}

// tag=1050
// removeColumn(int column)
void c_QStandardItem__removeColumn_int(void *thisObj, int column) {
  // tag=1010
  fromPtr(thisObj)->removeColumn(column);
}

// tag=1050
// removeColumns(int column, int count)
void c_QStandardItem__removeColumns_int_int(void *thisObj, int column,
                                            int count) {
  // tag=1010
  fromPtr(thisObj)->removeColumns(column, count);
}

// tag=1050
// removeRow(int row)
void c_QStandardItem__removeRow_int(void *thisObj, int row) {
  // tag=1010
  fromPtr(thisObj)->removeRow(row);
}

// tag=1050
// removeRows(int row, int count)
void c_QStandardItem__removeRows_int_int(void *thisObj, int row, int count) {
  // tag=1010
  fromPtr(thisObj)->removeRows(row, count);
}

// tag=1050
// row() const
int c_QStandardItem__row(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->row();
}

// tag=1050
// rowCount() const
int c_QStandardItem__rowCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->rowCount();
}

// tag=1050
// setAccessibleDescription(const QString & accessibleDescription)
void c_QStandardItem__setAccessibleDescription_QString(
    void *thisObj, const char *accessibleDescription_) {
  const auto accessibleDescription = QString::fromUtf8(accessibleDescription_);
  // tag=1010
  fromPtr(thisObj)->setAccessibleDescription(accessibleDescription);
}

// tag=1050
// setAccessibleText(const QString & accessibleText)
void c_QStandardItem__setAccessibleText_QString(void *thisObj,
                                                const char *accessibleText_) {
  const auto accessibleText = QString::fromUtf8(accessibleText_);
  // tag=1010
  fromPtr(thisObj)->setAccessibleText(accessibleText);
}

// tag=1050
// setAutoTristate(bool tristate)
void c_QStandardItem__setAutoTristate_bool(void *thisObj, bool tristate) {
  // tag=1010
  fromPtr(thisObj)->setAutoTristate(tristate);
}

// tag=1050
// setBackground(const QBrush & brush)
void c_QStandardItem__setBackground_QBrush(void *thisObj, void *brush_) {
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  // tag=1010
  fromPtr(thisObj)->setBackground(brush);
}

// tag=1050
// setCheckable(bool checkable)
void c_QStandardItem__setCheckable_bool(void *thisObj, bool checkable) {
  // tag=1010
  fromPtr(thisObj)->setCheckable(checkable);
}

// tag=1050
// setChild(int row, QStandardItem * item)
void c_QStandardItem__setChild_int_QStandardItem(void *thisObj, int row,
                                                 void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->setChild(row, item);
}

// tag=1050
// setChild(int row, int column, QStandardItem * item)
void c_QStandardItem__setChild_int_int_QStandardItem(void *thisObj, int row,
                                                     int column, void *item_) {
  auto item = reinterpret_cast<QStandardItem *>(item_);
  // tag=1010
  fromPtr(thisObj)->setChild(row, column, item);
}

// tag=1050
// setColumnCount(int columns)
void c_QStandardItem__setColumnCount_int(void *thisObj, int columns) {
  // tag=1010
  fromPtr(thisObj)->setColumnCount(columns);
}

// tag=1050
// setData(const QVariant & value, int role)
void c_QStandardItem__setData_QVariant_int(void *thisObj, void *value_,
                                           int role) {
  auto &value = *reinterpret_cast<QVariant *>(value_);
  // tag=1016
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

// tag=1050
// setDragEnabled(bool dragEnabled)
void c_QStandardItem__setDragEnabled_bool(void *thisObj, bool dragEnabled) {
  // tag=1010
  fromPtr(thisObj)->setDragEnabled(dragEnabled);
}

// tag=1050
// setDropEnabled(bool dropEnabled)
void c_QStandardItem__setDropEnabled_bool(void *thisObj, bool dropEnabled) {
  // tag=1010
  fromPtr(thisObj)->setDropEnabled(dropEnabled);
}

// tag=1050
// setEditable(bool editable)
void c_QStandardItem__setEditable_bool(void *thisObj, bool editable) {
  // tag=1010
  fromPtr(thisObj)->setEditable(editable);
}

// tag=1050
// setEnabled(bool enabled)
void c_QStandardItem__setEnabled_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setEnabled(enabled);
}

// tag=1050
// setFont(const QFont & font)
void c_QStandardItem__setFont_QFont(void *thisObj, void *font_) {
  auto &font = *reinterpret_cast<QFont *>(font_);
  // tag=1010
  fromPtr(thisObj)->setFont(font);
}

// tag=1050
// setForeground(const QBrush & brush)
void c_QStandardItem__setForeground_QBrush(void *thisObj, void *brush_) {
  auto &brush = *reinterpret_cast<QBrush *>(brush_);
  // tag=1010
  fromPtr(thisObj)->setForeground(brush);
}

// tag=1050
// setIcon(const QIcon & icon)
void c_QStandardItem__setIcon_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1010
  fromPtr(thisObj)->setIcon(icon);
}

// tag=1050
// setRowCount(int rows)
void c_QStandardItem__setRowCount_int(void *thisObj, int rows) {
  // tag=1010
  fromPtr(thisObj)->setRowCount(rows);
}

// tag=1050
// setSelectable(bool selectable)
void c_QStandardItem__setSelectable_bool(void *thisObj, bool selectable) {
  // tag=1010
  fromPtr(thisObj)->setSelectable(selectable);
}

// tag=1050
// setSizeHint(const QSize & sizeHint)
void c_QStandardItem__setSizeHint_QSize(void *thisObj, void *sizeHint_) {
  auto &sizeHint = *reinterpret_cast<QSize *>(sizeHint_);
  // tag=1010
  fromPtr(thisObj)->setSizeHint(sizeHint);
}

// tag=1050
// setStatusTip(const QString & statusTip)
void c_QStandardItem__setStatusTip_QString(void *thisObj,
                                           const char *statusTip_) {
  const auto statusTip = QString::fromUtf8(statusTip_);
  // tag=1010
  fromPtr(thisObj)->setStatusTip(statusTip);
}

// tag=1050
// setText(const QString & text)
void c_QStandardItem__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setText(text);
}

// tag=1050
// setToolTip(const QString & toolTip)
void c_QStandardItem__setToolTip_QString(void *thisObj, const char *toolTip_) {
  const auto toolTip = QString::fromUtf8(toolTip_);
  // tag=1010
  fromPtr(thisObj)->setToolTip(toolTip);
}

// tag=1050
// setUserTristate(bool tristate)
void c_QStandardItem__setUserTristate_bool(void *thisObj, bool tristate) {
  // tag=1010
  fromPtr(thisObj)->setUserTristate(tristate);
}

// tag=1050
// setWhatsThis(const QString & whatsThis)
void c_QStandardItem__setWhatsThis_QString(void *thisObj,
                                           const char *whatsThis_) {
  const auto whatsThis = QString::fromUtf8(whatsThis_);
  // tag=1010
  fromPtr(thisObj)->setWhatsThis(whatsThis);
}

// tag=1050
// sizeHint() const
void *c_QStandardItem__sizeHint(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->sizeHint()};
}

// tag=1050
// sortChildren(int column, Qt::SortOrder order)
void c_QStandardItem__sortChildren_int_SortOrder(void *thisObj, int column,
                                                 int order) {
  // tag=1010
  fromPtr(thisObj)->sortChildren(column, static_cast<Qt::SortOrder>(order));
}

// tag=1050
// statusTip() const
void *c_QStandardItem__statusTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->statusTip()};
}

// tag=1050
// takeChild(int row, int column)
void *c_QStandardItem__takeChild_int_int(void *thisObj, int row, int column) {
  return
      // tag=1010
      fromPtr(thisObj)->takeChild(row, column);
}

// tag=1050
// takeColumn(int column)
void *c_QStandardItem__takeColumn_int(void *thisObj, int column) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr(thisObj)->takeColumn(column)};
}

// tag=1050
// takeRow(int row)
void *c_QStandardItem__takeRow_int(void *thisObj, int row) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr(thisObj)->takeRow(row)};
}

// tag=1050
// text() const
void *c_QStandardItem__text(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
}

// tag=1050
// toolTip() const
void *c_QStandardItem__toolTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toolTip()};
}

// tag=1050
// type() const
int c_QStandardItem__type(void *thisObj) {
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// whatsThis() const
void *c_QStandardItem__whatsThis(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
}
void c_QStandardItem__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QStandardItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 281:
    wrapper->m_cloneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_clone>(
        callback);
    break;
  case 284:
    wrapper->m_dataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_data>(
        callback);
    break;
  case 323:
    wrapper->m_setDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_setData>(
        callback);
    break;
  case 347:
    wrapper->m_typeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QStandardItem_wrapper::Callback_type>(
        callback);
    break;
  }
}
}

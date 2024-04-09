/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qbrush.h>
#include <qfont.h>
#include <qicon.h>
#include <qlist.h>
#include <qsize.h>
#include <qstandarditemmodel.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QStandardItem_wrapper : public ::QStandardItem {
public:
  ~QStandardItem_wrapper();
  QStandardItem_wrapper();
  QStandardItem_wrapper(const QIcon &icon, const QString &text);
  QStandardItem_wrapper(const QString &text);
  QStandardItem_wrapper(int rows, int columns = 1);
  QString accessibleDescription() const;
  QString accessibleText() const;
  void appendColumn(const QList<QStandardItem *> &items);
  void appendRow(QStandardItem *item);
  void appendRow(const QList<QStandardItem *> &items);
  void appendRows(const QList<QStandardItem *> &items);
  QBrush background() const;
  QStandardItem *child(int row, int column = 0) const;
  void clearData();
  virtual QStandardItem *clone() const;
  virtual QStandardItem *clone_nocallback() const;
  int column() const;
  int columnCount() const;
  virtual QVariant data(int role = Qt::UserRole + 1) const;
  virtual QVariant data_nocallback(int role = Qt::UserRole + 1) const;
  void emitDataChanged();
  QFont font() const;
  QBrush foreground() const;
  bool hasChildren() const;
  QIcon icon() const;
  QModelIndex index() const;
  void insertColumn(int column, const QList<QStandardItem *> &items);
  void insertColumns(int column, int count);
  void insertRow(int row, QStandardItem *item);
  void insertRow(int row, const QList<QStandardItem *> &items);
  void insertRows(int row, const QList<QStandardItem *> &items);
  void insertRows(int row, int count);
  bool isAutoTristate() const;
  bool isCheckable() const;
  bool isDragEnabled() const;
  bool isDropEnabled() const;
  bool isEditable() const;
  bool isEnabled() const;
  bool isSelectable() const;
  bool isUserTristate() const;
  QStandardItemModel *model() const;
  QStandardItem *parent() const;
  void removeColumn(int column);
  void removeColumns(int column, int count);
  void removeRow(int row);
  void removeRows(int row, int count);
  int row() const;
  int rowCount() const;
  void setAccessibleDescription(const QString &accessibleDescription);
  void setAccessibleText(const QString &accessibleText);
  void setAutoTristate(bool tristate);
  void setBackground(const QBrush &brush);
  void setCheckable(bool checkable);
  void setChild(int row, QStandardItem *item);
  void setChild(int row, int column, QStandardItem *item);
  void setColumnCount(int columns);
  virtual void setData(const QVariant &value, int role = Qt::UserRole + 1);
  virtual void setData_nocallback(const QVariant &value,
                                  int role = Qt::UserRole + 1);
  void setDragEnabled(bool dragEnabled);
  void setDropEnabled(bool dropEnabled);
  void setEditable(bool editable);
  void setEnabled(bool enabled);
  void setFont(const QFont &font);
  void setForeground(const QBrush &brush);
  void setIcon(const QIcon &icon);
  void setRowCount(int rows);
  void setSelectable(bool selectable);
  void setSizeHint(const QSize &sizeHint);
  void setStatusTip(const QString &statusTip);
  void setText(const QString &text);
  void setToolTip(const QString &toolTip);
  void setUserTristate(bool tristate);
  void setWhatsThis(const QString &whatsThis);
  QSize sizeHint() const;
  void sortChildren(int column, Qt::SortOrder order = Qt::AscendingOrder);
  QString statusTip() const;
  QStandardItem *takeChild(int row, int column = 0);
  QList<QStandardItem *> takeColumn(int column);
  QList<QStandardItem *> takeRow(int row);
  QString text() const;
  QString toolTip() const;
  virtual int type() const;
  virtual int type_nocallback() const;
  QString whatsThis() const;
  typedef QStandardItem *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  typedef QVariant *(*Callback_data)(void *, int role);
  Callback_data m_dataCallback = nullptr;
  typedef void (*Callback_setData)(void *, const QVariant &value, int role);
  Callback_setData m_setDataCallback = nullptr;
  typedef int (*Callback_type)(void *);
  Callback_type m_typeCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QStandardItem::QStandardItem()
QtDartBindings_EXPORT void *c_QStandardItem__constructor();
// QStandardItem::QStandardItem(const QIcon & icon, const QString & text)
QtDartBindings_EXPORT void *
c_QStandardItem__constructor_QIcon_QString(void *icon_, const char *text_);
// QStandardItem::QStandardItem(const QString & text)
QtDartBindings_EXPORT void *
c_QStandardItem__constructor_QString(const char *text_);
// QStandardItem::QStandardItem(int rows, int columns)
QtDartBindings_EXPORT void *c_QStandardItem__constructor_int_int(int rows,
                                                                 int columns);
// QStandardItem::accessibleDescription() const
QtDartBindings_EXPORT void *
c_QStandardItem__accessibleDescription(void *thisObj);
// QStandardItem::accessibleText() const
QtDartBindings_EXPORT void *c_QStandardItem__accessibleText(void *thisObj);
// QStandardItem::appendColumn(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__appendColumn_QList_QStandardItem(void *thisObj, void *items_);
// QStandardItem::appendRow(QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__appendRow_QStandardItem(void *thisObj, void *item_);
// QStandardItem::appendRow(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__appendRow_QList_QStandardItem(void *thisObj, void *items_);
// QStandardItem::appendRows(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__appendRows_QList_QStandardItem(void *thisObj, void *items_);
// QStandardItem::background() const
QtDartBindings_EXPORT void *c_QStandardItem__background(void *thisObj);
// QStandardItem::child(int row, int column) const
QtDartBindings_EXPORT void *c_QStandardItem__child_int_int(void *thisObj,
                                                           int row, int column);
// QStandardItem::clearData()
QtDartBindings_EXPORT void c_QStandardItem__clearData(void *thisObj);
// QStandardItem::clone() const
QtDartBindings_EXPORT void *c_QStandardItem__clone(void *thisObj);
// QStandardItem::column() const
QtDartBindings_EXPORT int c_QStandardItem__column(void *thisObj);
// QStandardItem::columnCount() const
QtDartBindings_EXPORT int c_QStandardItem__columnCount(void *thisObj);
// QStandardItem::data(int role) const
QtDartBindings_EXPORT void *c_QStandardItem__data_int(void *thisObj, int role);
// QStandardItem::emitDataChanged()
QtDartBindings_EXPORT void c_QStandardItem__emitDataChanged(void *thisObj);
// QStandardItem::font() const
QtDartBindings_EXPORT void *c_QStandardItem__font(void *thisObj);
// QStandardItem::foreground() const
QtDartBindings_EXPORT void *c_QStandardItem__foreground(void *thisObj);
// QStandardItem::hasChildren() const
QtDartBindings_EXPORT bool c_QStandardItem__hasChildren(void *thisObj);
// QStandardItem::icon() const
QtDartBindings_EXPORT void *c_QStandardItem__icon(void *thisObj);
// QStandardItem::index() const
QtDartBindings_EXPORT void *c_QStandardItem__index(void *thisObj);
// QStandardItem::insertColumn(int column, const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__insertColumn_int_QList_QStandardItem(void *thisObj, int column,
                                                      void *items_);
// QStandardItem::insertColumns(int column, int count)
QtDartBindings_EXPORT void
c_QStandardItem__insertColumns_int_int(void *thisObj, int column, int count);
// QStandardItem::insertRow(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__insertRow_int_QStandardItem(void *thisObj, int row,
                                             void *item_);
// QStandardItem::insertRow(int row, const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__insertRow_int_QList_QStandardItem(void *thisObj, int row,
                                                   void *items_);
// QStandardItem::insertRows(int row, const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__insertRows_int_QList_QStandardItem(void *thisObj, int row,
                                                    void *items_);
// QStandardItem::insertRows(int row, int count)
QtDartBindings_EXPORT void
c_QStandardItem__insertRows_int_int(void *thisObj, int row, int count);
// QStandardItem::isAutoTristate() const
QtDartBindings_EXPORT bool c_QStandardItem__isAutoTristate(void *thisObj);
// QStandardItem::isCheckable() const
QtDartBindings_EXPORT bool c_QStandardItem__isCheckable(void *thisObj);
// QStandardItem::isDragEnabled() const
QtDartBindings_EXPORT bool c_QStandardItem__isDragEnabled(void *thisObj);
// QStandardItem::isDropEnabled() const
QtDartBindings_EXPORT bool c_QStandardItem__isDropEnabled(void *thisObj);
// QStandardItem::isEditable() const
QtDartBindings_EXPORT bool c_QStandardItem__isEditable(void *thisObj);
// QStandardItem::isEnabled() const
QtDartBindings_EXPORT bool c_QStandardItem__isEnabled(void *thisObj);
// QStandardItem::isSelectable() const
QtDartBindings_EXPORT bool c_QStandardItem__isSelectable(void *thisObj);
// QStandardItem::isUserTristate() const
QtDartBindings_EXPORT bool c_QStandardItem__isUserTristate(void *thisObj);
// QStandardItem::model() const
QtDartBindings_EXPORT void *c_QStandardItem__model(void *thisObj);
// QStandardItem::parent() const
QtDartBindings_EXPORT void *c_QStandardItem__parent(void *thisObj);
// QStandardItem::removeColumn(int column)
QtDartBindings_EXPORT void c_QStandardItem__removeColumn_int(void *thisObj,
                                                             int column);
// QStandardItem::removeColumns(int column, int count)
QtDartBindings_EXPORT void
c_QStandardItem__removeColumns_int_int(void *thisObj, int column, int count);
// QStandardItem::removeRow(int row)
QtDartBindings_EXPORT void c_QStandardItem__removeRow_int(void *thisObj,
                                                          int row);
// QStandardItem::removeRows(int row, int count)
QtDartBindings_EXPORT void
c_QStandardItem__removeRows_int_int(void *thisObj, int row, int count);
// QStandardItem::row() const
QtDartBindings_EXPORT int c_QStandardItem__row(void *thisObj);
// QStandardItem::rowCount() const
QtDartBindings_EXPORT int c_QStandardItem__rowCount(void *thisObj);
// QStandardItem::setAccessibleDescription(const QString &
// accessibleDescription)
QtDartBindings_EXPORT void c_QStandardItem__setAccessibleDescription_QString(
    void *thisObj, const char *accessibleDescription_);
// QStandardItem::setAccessibleText(const QString & accessibleText)
QtDartBindings_EXPORT void
c_QStandardItem__setAccessibleText_QString(void *thisObj,
                                           const char *accessibleText_);
// QStandardItem::setAutoTristate(bool tristate)
QtDartBindings_EXPORT void c_QStandardItem__setAutoTristate_bool(void *thisObj,
                                                                 bool tristate);
// QStandardItem::setBackground(const QBrush & brush)
QtDartBindings_EXPORT void c_QStandardItem__setBackground_QBrush(void *thisObj,
                                                                 void *brush_);
// QStandardItem::setCheckable(bool checkable)
QtDartBindings_EXPORT void c_QStandardItem__setCheckable_bool(void *thisObj,
                                                              bool checkable);
// QStandardItem::setChild(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__setChild_int_QStandardItem(void *thisObj, int row,
                                            void *item_);
// QStandardItem::setChild(int row, int column, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__setChild_int_int_QStandardItem(void *thisObj, int row,
                                                int column, void *item_);
// QStandardItem::setColumnCount(int columns)
QtDartBindings_EXPORT void c_QStandardItem__setColumnCount_int(void *thisObj,
                                                               int columns);
// QStandardItem::setData(const QVariant & value, int role)
QtDartBindings_EXPORT void
c_QStandardItem__setData_QVariant_int(void *thisObj, void *value_, int role);
// QStandardItem::setDragEnabled(bool dragEnabled)
QtDartBindings_EXPORT void
c_QStandardItem__setDragEnabled_bool(void *thisObj, bool dragEnabled);
// QStandardItem::setDropEnabled(bool dropEnabled)
QtDartBindings_EXPORT void
c_QStandardItem__setDropEnabled_bool(void *thisObj, bool dropEnabled);
// QStandardItem::setEditable(bool editable)
QtDartBindings_EXPORT void c_QStandardItem__setEditable_bool(void *thisObj,
                                                             bool editable);
// QStandardItem::setEnabled(bool enabled)
QtDartBindings_EXPORT void c_QStandardItem__setEnabled_bool(void *thisObj,
                                                            bool enabled);
// QStandardItem::setFont(const QFont & font)
QtDartBindings_EXPORT void c_QStandardItem__setFont_QFont(void *thisObj,
                                                          void *font_);
// QStandardItem::setForeground(const QBrush & brush)
QtDartBindings_EXPORT void c_QStandardItem__setForeground_QBrush(void *thisObj,
                                                                 void *brush_);
// QStandardItem::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QStandardItem__setIcon_QIcon(void *thisObj,
                                                          void *icon_);
// QStandardItem::setRowCount(int rows)
QtDartBindings_EXPORT void c_QStandardItem__setRowCount_int(void *thisObj,
                                                            int rows);
// QStandardItem::setSelectable(bool selectable)
QtDartBindings_EXPORT void c_QStandardItem__setSelectable_bool(void *thisObj,
                                                               bool selectable);
// QStandardItem::setSizeHint(const QSize & sizeHint)
QtDartBindings_EXPORT void c_QStandardItem__setSizeHint_QSize(void *thisObj,
                                                              void *sizeHint_);
// QStandardItem::setStatusTip(const QString & statusTip)
QtDartBindings_EXPORT void
c_QStandardItem__setStatusTip_QString(void *thisObj, const char *statusTip_);
// QStandardItem::setText(const QString & text)
QtDartBindings_EXPORT void c_QStandardItem__setText_QString(void *thisObj,
                                                            const char *text_);
// QStandardItem::setToolTip(const QString & toolTip)
QtDartBindings_EXPORT void
c_QStandardItem__setToolTip_QString(void *thisObj, const char *toolTip_);
// QStandardItem::setUserTristate(bool tristate)
QtDartBindings_EXPORT void c_QStandardItem__setUserTristate_bool(void *thisObj,
                                                                 bool tristate);
// QStandardItem::setWhatsThis(const QString & whatsThis)
QtDartBindings_EXPORT void
c_QStandardItem__setWhatsThis_QString(void *thisObj, const char *whatsThis_);
// QStandardItem::sizeHint() const
QtDartBindings_EXPORT void *c_QStandardItem__sizeHint(void *thisObj);
// QStandardItem::sortChildren(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QStandardItem__sortChildren_int_SortOrder(void *thisObj, int column,
                                            int order);
// QStandardItem::statusTip() const
QtDartBindings_EXPORT void *c_QStandardItem__statusTip(void *thisObj);
// QStandardItem::takeChild(int row, int column)
QtDartBindings_EXPORT void *
c_QStandardItem__takeChild_int_int(void *thisObj, int row, int column);
// QStandardItem::takeColumn(int column)
QtDartBindings_EXPORT void *c_QStandardItem__takeColumn_int(void *thisObj,
                                                            int column);
// QStandardItem::takeRow(int row)
QtDartBindings_EXPORT void *c_QStandardItem__takeRow_int(void *thisObj,
                                                         int row);
// QStandardItem::text() const
QtDartBindings_EXPORT void *c_QStandardItem__text(void *thisObj);
// QStandardItem::toolTip() const
QtDartBindings_EXPORT void *c_QStandardItem__toolTip(void *thisObj);
// QStandardItem::type() const
QtDartBindings_EXPORT int c_QStandardItem__type(void *thisObj);
// QStandardItem::whatsThis() const
QtDartBindings_EXPORT void *c_QStandardItem__whatsThis(void *thisObj);
QtDartBindings_EXPORT void c_QStandardItem__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QStandardItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId);
QtDartBindings_EXPORT void c_QStandardItem_Finalizer(void *cppObj);
}

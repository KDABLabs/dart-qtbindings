
// tag=1040
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
// tag=1017
class QStandardItem_wrapper : public ::QStandardItem {
public:
  ~QStandardItem_wrapper();
  // tag=1041
  QStandardItem_wrapper();
  // tag=1041
  QStandardItem_wrapper(const QIcon &icon, const QString &text);
  // tag=1041
  QStandardItem_wrapper(const QString &text);
  // tag=1041
  QStandardItem_wrapper(int rows, int columns = 1);
  // tag=1041
  QString accessibleDescription() const;
  // tag=1041
  QString accessibleText() const;
  // tag=1041
  void appendColumn(const QList<QStandardItem *> &items);
  // tag=1041
  void appendRow(QStandardItem *item);
  // tag=1041
  void appendRow(const QList<QStandardItem *> &items);
  // tag=1041
  void appendRows(const QList<QStandardItem *> &items);
  // tag=1041
  QBrush background() const;
  // tag=1041
  QStandardItem *child(int row, int column = 0) const;
  // tag=1041
  void clearData();
  // tag=1041
  virtual QStandardItem *clone() const;
  // tag=1008
  virtual QStandardItem *clone_nocallback() const;
  // tag=1041
  int column() const;
  // tag=1041
  int columnCount() const;
  // tag=1041
  virtual QVariant data(int role = Qt::UserRole + 1) const;
  // tag=1008
  virtual QVariant data_nocallback(int role = Qt::UserRole + 1) const;
  // tag=1041
  void emitDataChanged();
  // tag=1041
  QFont font() const;
  // tag=1041
  QBrush foreground() const;
  // tag=1041
  bool hasChildren() const;
  // tag=1041
  QIcon icon() const;
  // tag=1041
  QModelIndex index() const;
  // tag=1041
  void insertColumn(int column, const QList<QStandardItem *> &items);
  // tag=1041
  void insertColumns(int column, int count);
  // tag=1041
  void insertRow(int row, QStandardItem *item);
  // tag=1041
  void insertRow(int row, const QList<QStandardItem *> &items);
  // tag=1041
  void insertRows(int row, const QList<QStandardItem *> &items);
  // tag=1041
  void insertRows(int row, int count);
  // tag=1041
  bool isAutoTristate() const;
  // tag=1041
  bool isCheckable() const;
  // tag=1041
  bool isDragEnabled() const;
  // tag=1041
  bool isDropEnabled() const;
  // tag=1041
  bool isEditable() const;
  // tag=1041
  bool isEnabled() const;
  // tag=1041
  bool isSelectable() const;
  // tag=1041
  bool isUserTristate() const;
  // tag=1041
  QStandardItemModel *model() const;
  // tag=1041
  QStandardItem *parent() const;
  // tag=1041
  void removeColumn(int column);
  // tag=1041
  void removeColumns(int column, int count);
  // tag=1041
  void removeRow(int row);
  // tag=1041
  void removeRows(int row, int count);
  // tag=1041
  int row() const;
  // tag=1041
  int rowCount() const;
  // tag=1041
  void setAccessibleDescription(const QString &accessibleDescription);
  // tag=1041
  void setAccessibleText(const QString &accessibleText);
  // tag=1041
  void setAutoTristate(bool tristate);
  // tag=1041
  void setBackground(const QBrush &brush);
  // tag=1041
  void setCheckable(bool checkable);
  // tag=1041
  void setChild(int row, QStandardItem *item);
  // tag=1041
  void setChild(int row, int column, QStandardItem *item);
  // tag=1041
  void setColumnCount(int columns);
  // tag=1041
  virtual void setData(const QVariant &value, int role = Qt::UserRole + 1);
  // tag=1008
  virtual void setData_nocallback(const QVariant &value,
                                  int role = Qt::UserRole + 1);
  // tag=1041
  void setDragEnabled(bool dragEnabled);
  // tag=1041
  void setDropEnabled(bool dropEnabled);
  // tag=1041
  void setEditable(bool editable);
  // tag=1041
  void setEnabled(bool enabled);
  // tag=1041
  void setFont(const QFont &font);
  // tag=1041
  void setForeground(const QBrush &brush);
  // tag=1041
  void setIcon(const QIcon &icon);
  // tag=1041
  void setRowCount(int rows);
  // tag=1041
  void setSelectable(bool selectable);
  // tag=1041
  void setSizeHint(const QSize &sizeHint);
  // tag=1041
  void setStatusTip(const QString &statusTip);
  // tag=1041
  void setText(const QString &text);
  // tag=1041
  void setToolTip(const QString &toolTip);
  // tag=1041
  void setUserTristate(bool tristate);
  // tag=1041
  void setWhatsThis(const QString &whatsThis);
  // tag=1041
  QSize sizeHint() const;
  // tag=1041
  void sortChildren(int column, Qt::SortOrder order = Qt::AscendingOrder);
  // tag=1041
  QString statusTip() const;
  // tag=1041
  QStandardItem *takeChild(int row, int column = 0);
  // tag=1041
  QList<QStandardItem *> takeColumn(int column);
  // tag=1041
  QList<QStandardItem *> takeRow(int row);
  // tag=1041
  QString text() const;
  // tag=1041
  QString toolTip() const;
  // tag=1041
  virtual int type() const;
  // tag=1008
  virtual int type_nocallback() const;
  // tag=1041
  QString whatsThis() const;
  // tag=1042
  typedef QStandardItem *(*Callback_clone)(void *);
  Callback_clone m_cloneCallback = nullptr;
  // tag=1042
  typedef QVariant *(*Callback_data)(void *, int role);
  Callback_data m_dataCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setData)(void *, const QVariant &value, int role);
  Callback_setData m_setDataCallback = nullptr;
  // tag=1042
  typedef int (*Callback_type)(void *);
  Callback_type m_typeCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QStandardItem::QStandardItem()
QtDartBindings_EXPORT void *c_QStandardItem__constructor();

// tag=1067
//  QStandardItem::QStandardItem(const QIcon & icon, const QString & text)
QtDartBindings_EXPORT void *
c_QStandardItem__constructor_QIcon_QString(void *icon_, const char *text_);

// tag=1067
//  QStandardItem::QStandardItem(const QString & text)
QtDartBindings_EXPORT void *
c_QStandardItem__constructor_QString(const char *text_);

// tag=1067
//  QStandardItem::QStandardItem(int rows, int columns)
QtDartBindings_EXPORT void *c_QStandardItem__constructor_int_int(int rows,
                                                                 int columns);

// tag=1067
//  QStandardItem::accessibleDescription() const
QtDartBindings_EXPORT void *
c_QStandardItem__accessibleDescription(void *thisObj);

// tag=1067
//  QStandardItem::accessibleText() const
QtDartBindings_EXPORT void *c_QStandardItem__accessibleText(void *thisObj);

// tag=1067
//  QStandardItem::appendColumn(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__appendColumn_QList_QStandardItem(void *thisObj, void *items_);

// tag=1067
//  QStandardItem::appendRow(QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__appendRow_QStandardItem(void *thisObj, void *item_);

// tag=1067
//  QStandardItem::appendRow(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__appendRow_QList_QStandardItem(void *thisObj, void *items_);

// tag=1067
//  QStandardItem::appendRows(const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__appendRows_QList_QStandardItem(void *thisObj, void *items_);

// tag=1067
//  QStandardItem::background() const
QtDartBindings_EXPORT void *c_QStandardItem__background(void *thisObj);

// tag=1067
//  QStandardItem::child(int row, int column) const
QtDartBindings_EXPORT void *c_QStandardItem__child_int_int(void *thisObj,
                                                           int row, int column);

// tag=1067
//  QStandardItem::clearData()
QtDartBindings_EXPORT void c_QStandardItem__clearData(void *thisObj);

// tag=1067
//  QStandardItem::clone() const
QtDartBindings_EXPORT void *c_QStandardItem__clone(void *thisObj);

// tag=1067
//  QStandardItem::column() const
QtDartBindings_EXPORT int c_QStandardItem__column(void *thisObj);

// tag=1067
//  QStandardItem::columnCount() const
QtDartBindings_EXPORT int c_QStandardItem__columnCount(void *thisObj);

// tag=1067
//  QStandardItem::data(int role) const
QtDartBindings_EXPORT void *c_QStandardItem__data_int(void *thisObj, int role);

// tag=1067
//  QStandardItem::emitDataChanged()
QtDartBindings_EXPORT void c_QStandardItem__emitDataChanged(void *thisObj);

// tag=1067
//  QStandardItem::font() const
QtDartBindings_EXPORT void *c_QStandardItem__font(void *thisObj);

// tag=1067
//  QStandardItem::foreground() const
QtDartBindings_EXPORT void *c_QStandardItem__foreground(void *thisObj);

// tag=1067
//  QStandardItem::hasChildren() const
QtDartBindings_EXPORT bool c_QStandardItem__hasChildren(void *thisObj);

// tag=1067
//  QStandardItem::icon() const
QtDartBindings_EXPORT void *c_QStandardItem__icon(void *thisObj);

// tag=1067
//  QStandardItem::index() const
QtDartBindings_EXPORT void *c_QStandardItem__index(void *thisObj);

// tag=1067
//  QStandardItem::insertColumn(int column, const QList<QStandardItem* > &
//  items)
QtDartBindings_EXPORT void
c_QStandardItem__insertColumn_int_QList_QStandardItem(void *thisObj, int column,
                                                      void *items_);

// tag=1067
//  QStandardItem::insertColumns(int column, int count)
QtDartBindings_EXPORT void
c_QStandardItem__insertColumns_int_int(void *thisObj, int column, int count);

// tag=1067
//  QStandardItem::insertRow(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__insertRow_int_QStandardItem(void *thisObj, int row,
                                             void *item_);

// tag=1067
//  QStandardItem::insertRow(int row, const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__insertRow_int_QList_QStandardItem(void *thisObj, int row,
                                                   void *items_);

// tag=1067
//  QStandardItem::insertRows(int row, const QList<QStandardItem* > & items)
QtDartBindings_EXPORT void
c_QStandardItem__insertRows_int_QList_QStandardItem(void *thisObj, int row,
                                                    void *items_);

// tag=1067
//  QStandardItem::insertRows(int row, int count)
QtDartBindings_EXPORT void
c_QStandardItem__insertRows_int_int(void *thisObj, int row, int count);

// tag=1067
//  QStandardItem::isAutoTristate() const
QtDartBindings_EXPORT bool c_QStandardItem__isAutoTristate(void *thisObj);

// tag=1067
//  QStandardItem::isCheckable() const
QtDartBindings_EXPORT bool c_QStandardItem__isCheckable(void *thisObj);

// tag=1067
//  QStandardItem::isDragEnabled() const
QtDartBindings_EXPORT bool c_QStandardItem__isDragEnabled(void *thisObj);

// tag=1067
//  QStandardItem::isDropEnabled() const
QtDartBindings_EXPORT bool c_QStandardItem__isDropEnabled(void *thisObj);

// tag=1067
//  QStandardItem::isEditable() const
QtDartBindings_EXPORT bool c_QStandardItem__isEditable(void *thisObj);

// tag=1067
//  QStandardItem::isEnabled() const
QtDartBindings_EXPORT bool c_QStandardItem__isEnabled(void *thisObj);

// tag=1067
//  QStandardItem::isSelectable() const
QtDartBindings_EXPORT bool c_QStandardItem__isSelectable(void *thisObj);

// tag=1067
//  QStandardItem::isUserTristate() const
QtDartBindings_EXPORT bool c_QStandardItem__isUserTristate(void *thisObj);

// tag=1067
//  QStandardItem::model() const
QtDartBindings_EXPORT void *c_QStandardItem__model(void *thisObj);

// tag=1067
//  QStandardItem::parent() const
QtDartBindings_EXPORT void *c_QStandardItem__parent(void *thisObj);

// tag=1067
//  QStandardItem::removeColumn(int column)
QtDartBindings_EXPORT void c_QStandardItem__removeColumn_int(void *thisObj,
                                                             int column);

// tag=1067
//  QStandardItem::removeColumns(int column, int count)
QtDartBindings_EXPORT void
c_QStandardItem__removeColumns_int_int(void *thisObj, int column, int count);

// tag=1067
//  QStandardItem::removeRow(int row)
QtDartBindings_EXPORT void c_QStandardItem__removeRow_int(void *thisObj,
                                                          int row);

// tag=1067
//  QStandardItem::removeRows(int row, int count)
QtDartBindings_EXPORT void
c_QStandardItem__removeRows_int_int(void *thisObj, int row, int count);

// tag=1067
//  QStandardItem::row() const
QtDartBindings_EXPORT int c_QStandardItem__row(void *thisObj);

// tag=1067
//  QStandardItem::rowCount() const
QtDartBindings_EXPORT int c_QStandardItem__rowCount(void *thisObj);

// tag=1067
//  QStandardItem::setAccessibleDescription(const QString &
//  accessibleDescription)
QtDartBindings_EXPORT void c_QStandardItem__setAccessibleDescription_QString(
    void *thisObj, const char *accessibleDescription_);

// tag=1067
//  QStandardItem::setAccessibleText(const QString & accessibleText)
QtDartBindings_EXPORT void
c_QStandardItem__setAccessibleText_QString(void *thisObj,
                                           const char *accessibleText_);

// tag=1067
//  QStandardItem::setAutoTristate(bool tristate)
QtDartBindings_EXPORT void c_QStandardItem__setAutoTristate_bool(void *thisObj,
                                                                 bool tristate);

// tag=1067
//  QStandardItem::setBackground(const QBrush & brush)
QtDartBindings_EXPORT void c_QStandardItem__setBackground_QBrush(void *thisObj,
                                                                 void *brush_);

// tag=1067
//  QStandardItem::setCheckable(bool checkable)
QtDartBindings_EXPORT void c_QStandardItem__setCheckable_bool(void *thisObj,
                                                              bool checkable);

// tag=1067
//  QStandardItem::setChild(int row, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__setChild_int_QStandardItem(void *thisObj, int row,
                                            void *item_);

// tag=1067
//  QStandardItem::setChild(int row, int column, QStandardItem * item)
QtDartBindings_EXPORT void
c_QStandardItem__setChild_int_int_QStandardItem(void *thisObj, int row,
                                                int column, void *item_);

// tag=1067
//  QStandardItem::setColumnCount(int columns)
QtDartBindings_EXPORT void c_QStandardItem__setColumnCount_int(void *thisObj,
                                                               int columns);

// tag=1067
//  QStandardItem::setData(const QVariant & value, int role)
QtDartBindings_EXPORT void
c_QStandardItem__setData_QVariant_int(void *thisObj, void *value_, int role);

// tag=1067
//  QStandardItem::setDragEnabled(bool dragEnabled)
QtDartBindings_EXPORT void
c_QStandardItem__setDragEnabled_bool(void *thisObj, bool dragEnabled);

// tag=1067
//  QStandardItem::setDropEnabled(bool dropEnabled)
QtDartBindings_EXPORT void
c_QStandardItem__setDropEnabled_bool(void *thisObj, bool dropEnabled);

// tag=1067
//  QStandardItem::setEditable(bool editable)
QtDartBindings_EXPORT void c_QStandardItem__setEditable_bool(void *thisObj,
                                                             bool editable);

// tag=1067
//  QStandardItem::setEnabled(bool enabled)
QtDartBindings_EXPORT void c_QStandardItem__setEnabled_bool(void *thisObj,
                                                            bool enabled);

// tag=1067
//  QStandardItem::setFont(const QFont & font)
QtDartBindings_EXPORT void c_QStandardItem__setFont_QFont(void *thisObj,
                                                          void *font_);

// tag=1067
//  QStandardItem::setForeground(const QBrush & brush)
QtDartBindings_EXPORT void c_QStandardItem__setForeground_QBrush(void *thisObj,
                                                                 void *brush_);

// tag=1067
//  QStandardItem::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QStandardItem__setIcon_QIcon(void *thisObj,
                                                          void *icon_);

// tag=1067
//  QStandardItem::setRowCount(int rows)
QtDartBindings_EXPORT void c_QStandardItem__setRowCount_int(void *thisObj,
                                                            int rows);

// tag=1067
//  QStandardItem::setSelectable(bool selectable)
QtDartBindings_EXPORT void c_QStandardItem__setSelectable_bool(void *thisObj,
                                                               bool selectable);

// tag=1067
//  QStandardItem::setSizeHint(const QSize & sizeHint)
QtDartBindings_EXPORT void c_QStandardItem__setSizeHint_QSize(void *thisObj,
                                                              void *sizeHint_);

// tag=1067
//  QStandardItem::setStatusTip(const QString & statusTip)
QtDartBindings_EXPORT void
c_QStandardItem__setStatusTip_QString(void *thisObj, const char *statusTip_);

// tag=1067
//  QStandardItem::setText(const QString & text)
QtDartBindings_EXPORT void c_QStandardItem__setText_QString(void *thisObj,
                                                            const char *text_);

// tag=1067
//  QStandardItem::setToolTip(const QString & toolTip)
QtDartBindings_EXPORT void
c_QStandardItem__setToolTip_QString(void *thisObj, const char *toolTip_);

// tag=1067
//  QStandardItem::setUserTristate(bool tristate)
QtDartBindings_EXPORT void c_QStandardItem__setUserTristate_bool(void *thisObj,
                                                                 bool tristate);

// tag=1067
//  QStandardItem::setWhatsThis(const QString & whatsThis)
QtDartBindings_EXPORT void
c_QStandardItem__setWhatsThis_QString(void *thisObj, const char *whatsThis_);

// tag=1067
//  QStandardItem::sizeHint() const
QtDartBindings_EXPORT void *c_QStandardItem__sizeHint(void *thisObj);

// tag=1067
//  QStandardItem::sortChildren(int column, Qt::SortOrder order)
QtDartBindings_EXPORT void
c_QStandardItem__sortChildren_int_SortOrder(void *thisObj, int column,
                                            int order);

// tag=1067
//  QStandardItem::statusTip() const
QtDartBindings_EXPORT void *c_QStandardItem__statusTip(void *thisObj);

// tag=1067
//  QStandardItem::takeChild(int row, int column)
QtDartBindings_EXPORT void *
c_QStandardItem__takeChild_int_int(void *thisObj, int row, int column);

// tag=1067
//  QStandardItem::takeColumn(int column)
QtDartBindings_EXPORT void *c_QStandardItem__takeColumn_int(void *thisObj,
                                                            int column);

// tag=1067
//  QStandardItem::takeRow(int row)
QtDartBindings_EXPORT void *c_QStandardItem__takeRow_int(void *thisObj,
                                                         int row);

// tag=1067
//  QStandardItem::text() const
QtDartBindings_EXPORT void *c_QStandardItem__text(void *thisObj);

// tag=1067
//  QStandardItem::toolTip() const
QtDartBindings_EXPORT void *c_QStandardItem__toolTip(void *thisObj);

// tag=1067
//  QStandardItem::type() const
QtDartBindings_EXPORT int c_QStandardItem__type(void *thisObj);

// tag=1067
//  QStandardItem::whatsThis() const
QtDartBindings_EXPORT void *c_QStandardItem__whatsThis(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QStandardItem__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QStandardItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QStandardItem_Finalizer(void *, void *cppObj,
                                                     void *);
}

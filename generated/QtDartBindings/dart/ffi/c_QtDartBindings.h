/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include <stdbool.h>

void c_Qt_Finalizer(void *cppObj); // QVariant::QVariant()
void *c_QVariant__constructor();
// QVariant::QVariant(bool b)
void *c_QVariant__constructor_bool(bool b);
// QVariant::QVariant(const QByteArray & bytearray)
void *c_QVariant__constructor_QByteArray(void *bytearray_);
// QVariant::QVariant(const QLine & line)
void *c_QVariant__constructor_QLine(void *line_);
// QVariant::QVariant(const QLineF & line)
void *c_QVariant__constructor_QLineF(void *line_);
// QVariant::QVariant(const QList<QString > & stringlist)
void *c_QVariant__constructor_QList_QString(void *stringlist_);
// QVariant::QVariant(const QList<QVariant > & list)
void *c_QVariant__constructor_QList_QVariant(void *list_);
// QVariant::QVariant(const QModelIndex & modelIndex)
void *c_QVariant__constructor_QModelIndex(void *modelIndex_);
// QVariant::QVariant(const QPoint & pt)
void *c_QVariant__constructor_QPoint(void *pt_);
// QVariant::QVariant(const QPointF & pt)
void *c_QVariant__constructor_QPointF(void *pt_);
// QVariant::QVariant(const QRect & rect)
void *c_QVariant__constructor_QRect(void *rect_);
// QVariant::QVariant(const QRectF & rect)
void *c_QVariant__constructor_QRectF(void *rect_);
// QVariant::QVariant(const QSize & size)
void *c_QVariant__constructor_QSize(void *size_);
// QVariant::QVariant(const QSizeF & size)
void *c_QVariant__constructor_QSizeF(void *size_);
// QVariant::QVariant(const QString & string)
void *c_QVariant__constructor_QString(const char *string_);
// QVariant::QVariant(const char * str)
void *c_QVariant__constructor_char(const char *str);
// QVariant::QVariant(double d)
void *c_QVariant__constructor_double(double d);
// QVariant::QVariant(float f)
void *c_QVariant__constructor_float(float f);
// QVariant::QVariant(int i)
void *c_QVariant__constructor_int(int i);
// QVariant::QVariant(qint64 ll)
void *c_QVariant__constructor_qint64(qint64 ll);
// QVariant::clear()
void c_QVariant__clear(void *thisObj);
// QVariant::detach()
void c_QVariant__detach(void *thisObj);
// QVariant::equals(const QVariant & other) const
bool c_QVariant__equals_QVariant(void *thisObj, void *other_);
// QVariant::fromObject(QObject * arg__1)
void *c_static_QVariant__fromObject_QObject(void *arg__1_);
// QVariant::isDetached() const
bool c_QVariant__isDetached(void *thisObj);
// QVariant::isNull() const
bool c_QVariant__isNull(void *thisObj);
// QVariant::isValid() const
bool c_QVariant__isValid(void *thisObj);
// QVariant::setValue(const QVariant & avalue)
void c_QVariant__setValue_QVariant(void *thisObj, void *avalue_);
// QVariant::toBool() const
bool c_QVariant__toBool(void *thisObj);
// QVariant::toByteArray() const
void *c_QVariant__toByteArray(void *thisObj);
// QVariant::toLine() const
void *c_QVariant__toLine(void *thisObj);
// QVariant::toLineF() const
void *c_QVariant__toLineF(void *thisObj);
// QVariant::toList() const
void *c_QVariant__toList(void *thisObj);
// QVariant::toModelIndex() const
void *c_QVariant__toModelIndex(void *thisObj);
// QVariant::toObject(QVariant arg__1)
void *c_static_QVariant__toObject_QVariant(void *arg__1_);
// QVariant::toPoint() const
void *c_QVariant__toPoint(void *thisObj);
// QVariant::toPointF() const
void *c_QVariant__toPointF(void *thisObj);
// QVariant::toRect() const
void *c_QVariant__toRect(void *thisObj);
// QVariant::toRectF() const
void *c_QVariant__toRectF(void *thisObj);
// QVariant::toSize() const
void *c_QVariant__toSize(void *thisObj);
// QVariant::toSizeF() const
void *c_QVariant__toSizeF(void *thisObj);
// QVariant::toStringList() const
void *c_QVariant__toStringList(void *thisObj);
// QVariant::typeId() const
int c_QVariant__typeId(void *thisObj);
// QVariant::typeName() const
const char *c_QVariant__typeName(void *thisObj);
// QVariant::userType() const
int c_QVariant__userType(void *thisObj);
void c_QVariant__destructor(void *thisObj);
void c_QVariant_Finalizer(
    void *cppObj); // QStyleHintReturn::QStyleHintReturn(int version, int type)
void *c_QStyleHintReturn__constructor_int_int(int version, int type);
void c_QStyleHintReturn__destructor(void *thisObj);
int c_QStyleHintReturn___get_version(void *thisObj);
int c_QStyleHintReturn___get_type(void *thisObj);
void c_QStyleHintReturn___set_version_int(void *thisObj, int version_);
void c_QStyleHintReturn___set_type_int(void *thisObj, int type_);
void c_QStyleHintReturn_Finalizer(
    void *cppObj); // QStyleFactory::QStyleFactory()
void *c_QStyleFactory__constructor();
// QStyleFactory::create(const QString & arg__1)
void *c_static_QStyleFactory__create_QString(const char *arg__1_);
// QStyleFactory::keys()
void *c_static_QStyleFactory__keys();
void c_QStyleFactory__destructor(void *thisObj);
void c_QStyleFactory_Finalizer(void *cppObj); // QString::QString()
void *c_QString__constructor();
// QString::QString(const QByteArray & a)
void *c_QString__constructor_QByteArray(void *a_);
// QString::QString(const char * ch)
void *c_QString__constructor_char(const char *ch);
// QString::append(const QByteArray & s)
void *c_QString__append_QByteArray(void *thisObj, void *s_);
// QString::append(const QString & s)
void *c_QString__append_QString(void *thisObj, const char *s_);
// QString::append(const char * s)
void *c_QString__append_char(void *thisObj, const char *s);
// QString::arg(const QString & a, int fieldWidth) const
void *c_QString__arg_QString_int(void *thisObj, const char *a_, int fieldWidth);
// QString::arg(int a, int fieldWidth, int base) const
void *c_QString__arg_int_int_int(void *thisObj, int a, int fieldWidth,
                                 int base);
// QString::arg(long a, int fieldwidth, int base) const
void *c_QString__arg_long_int_int(void *thisObj, long a, int fieldwidth,
                                  int base);
// QString::arg(qint64 a, int fieldwidth, int base) const
void *c_QString__arg_qint64_int_int(void *thisObj, qint64 a, int fieldwidth,
                                    int base);
// QString::arg(short a, int fieldWidth, int base) const
void *c_QString__arg_short_int_int(void *thisObj, short a, int fieldWidth,
                                   int base);
// QString::asprintf(const char * format)
void *c_static_QString__asprintf_char(const char *format);
// QString::capacity() const
qsizetype c_QString__capacity(void *thisObj);
// QString::chop(qsizetype n)
void c_QString__chop_qsizetype(void *thisObj, qsizetype n);
// QString::chopped(qsizetype n) const
void *c_QString__chopped_qsizetype(void *thisObj, qsizetype n);
// QString::clear()
void c_QString__clear(void *thisObj);
// QString::compare(const QString & s) const
int c_QString__compare_QString(void *thisObj, const char *s_);
// QString::compare(const QString & s1, const QString & s2)
int c_static_QString__compare_QString_QString(const char *s1_, const char *s2_);
// QString::contains(const QString & s) const
bool c_QString__contains_QString(void *thisObj, const char *s_);
// QString::count(const QString & s) const
qsizetype c_QString__count_QString(void *thisObj, const char *s_);
// QString::detach()
void c_QString__detach(void *thisObj);
// QString::endsWith(const QString & s) const
bool c_QString__endsWith_QString(void *thisObj, const char *s_);
// QString::first(qsizetype n) const
void *c_QString__first_qsizetype(void *thisObj, qsizetype n);
// QString::fromLatin1(const char * str, qsizetype size)
void *c_static_QString__fromLatin1_char_qsizetype(const char *str,
                                                  qsizetype size);
// QString::fromLocal8Bit(const char * str, qsizetype size)
void *c_static_QString__fromLocal8Bit_char_qsizetype(const char *str,
                                                     qsizetype size);
// QString::fromUtf8(const char * utf8, qsizetype size)
void *c_static_QString__fromUtf8_char_qsizetype(const char *utf8,
                                                qsizetype size);
// QString::indexOf(const QString & s, qsizetype from) const
qsizetype c_QString__indexOf_QString_qsizetype(void *thisObj, const char *s_,
                                               qsizetype from);
// QString::insert(qsizetype i, const QByteArray & s)
void *c_QString__insert_qsizetype_QByteArray(void *thisObj, qsizetype i,
                                             void *s_);
// QString::insert(qsizetype i, const QString & s)
void *c_QString__insert_qsizetype_QString(void *thisObj, qsizetype i,
                                          const char *s_);
// QString::insert(qsizetype i, const char * s)
void *c_QString__insert_qsizetype_char(void *thisObj, qsizetype i,
                                       const char *s);
// QString::isDetached() const
bool c_QString__isDetached(void *thisObj);
// QString::isEmpty() const
bool c_QString__isEmpty(void *thisObj);
// QString::isLower() const
bool c_QString__isLower(void *thisObj);
// QString::isNull() const
bool c_QString__isNull(void *thisObj);
// QString::isRightToLeft() const
bool c_QString__isRightToLeft(void *thisObj);
// QString::isSharedWith(const QString & other) const
bool c_QString__isSharedWith_QString(void *thisObj, const char *other_);
// QString::isSimpleText() const
bool c_QString__isSimpleText(void *thisObj);
// QString::isUpper() const
bool c_QString__isUpper(void *thisObj);
// QString::isValidUtf16() const
bool c_QString__isValidUtf16(void *thisObj);
// QString::last(qsizetype n) const
void *c_QString__last_qsizetype(void *thisObj, qsizetype n);
// QString::lastIndexOf(const QString & s) const
qsizetype c_QString__lastIndexOf_QString(void *thisObj, const char *s_);
// QString::lastIndexOf(const QString & s, qsizetype from) const
qsizetype c_QString__lastIndexOf_QString_qsizetype(void *thisObj,
                                                   const char *s_,
                                                   qsizetype from);
// QString::left(qsizetype n) const
void *c_QString__left_qsizetype(void *thisObj, qsizetype n);
// QString::leftJustified(qsizetype width) const
void *c_QString__leftJustified_qsizetype(void *thisObj, qsizetype width);
// QString::length() const
qsizetype c_QString__length(void *thisObj);
// QString::localeAwareCompare(const QString & s) const
int c_QString__localeAwareCompare_QString(void *thisObj, const char *s_);
// QString::localeAwareCompare(const QString & s1, const QString & s2)
int c_static_QString__localeAwareCompare_QString_QString(const char *s1_,
                                                         const char *s2_);
// QString::mid(qsizetype position, qsizetype n) const
void *c_QString__mid_qsizetype_qsizetype(void *thisObj, qsizetype position,
                                         qsizetype n);
// QString::number(int arg__1, int base)
void *c_static_QString__number_int_int(int arg__1, int base);
// QString::number(long arg__1, int base)
void *c_static_QString__number_long_int(long arg__1, int base);
// QString::number(qint64 arg__1, int base)
void *c_static_QString__number_qint64_int(qint64 arg__1, int base);
// QString::prepend(const QByteArray & s)
void *c_QString__prepend_QByteArray(void *thisObj, void *s_);
// QString::prepend(const QString & s)
void *c_QString__prepend_QString(void *thisObj, const char *s_);
// QString::prepend(const char * s)
void *c_QString__prepend_char(void *thisObj, const char *s);
// QString::push_back(const QString & s)
void c_QString__push_back_QString(void *thisObj, const char *s_);
// QString::push_front(const QString & s)
void c_QString__push_front_QString(void *thisObj, const char *s_);
// QString::remove(const QString & s)
void *c_QString__remove_QString(void *thisObj, const char *s_);
// QString::remove(qsizetype i, qsizetype len)
void *c_QString__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                            qsizetype len);
// QString::repeated(qsizetype times) const
void *c_QString__repeated_qsizetype(void *thisObj, qsizetype times);
// QString::replace(const QString & before, const QString & after)
void *c_QString__replace_QString_QString(void *thisObj, const char *before_,
                                         const char *after_);
// QString::replace(qsizetype i, qsizetype len, const QString & after)
void *c_QString__replace_qsizetype_qsizetype_QString(void *thisObj, qsizetype i,
                                                     qsizetype len,
                                                     const char *after_);
// QString::reserve(qsizetype size)
void c_QString__reserve_qsizetype(void *thisObj, qsizetype size);
// QString::resize(qsizetype size)
void c_QString__resize_qsizetype(void *thisObj, qsizetype size);
// QString::right(qsizetype n) const
void *c_QString__right_qsizetype(void *thisObj, qsizetype n);
// QString::rightJustified(qsizetype width) const
void *c_QString__rightJustified_qsizetype(void *thisObj, qsizetype width);
// QString::section(const QString & in_sep, qsizetype start, qsizetype end)
// const
void *c_QString__section_QString_qsizetype_qsizetype(void *thisObj,
                                                     const char *in_sep_,
                                                     qsizetype start,
                                                     qsizetype end);
// QString::setNum(int arg__1, int base)
void *c_QString__setNum_int_int(void *thisObj, int arg__1, int base);
// QString::setNum(long arg__1, int base)
void *c_QString__setNum_long_int(void *thisObj, long arg__1, int base);
// QString::setNum(qint64 arg__1, int base)
void *c_QString__setNum_qint64_int(void *thisObj, qint64 arg__1, int base);
// QString::setNum(short arg__1, int base)
void *c_QString__setNum_short_int(void *thisObj, short arg__1, int base);
// QString::shrink_to_fit()
void c_QString__shrink_to_fit(void *thisObj);
// QString::simplified()
void *c_QString__simplified(void *thisObj);
// QString::size() const
qsizetype c_QString__size(void *thisObj);
// QString::sliced(qsizetype pos) const
void *c_QString__sliced_qsizetype(void *thisObj, qsizetype pos);
// QString::sliced(qsizetype pos, qsizetype n) const
void *c_QString__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                            qsizetype n);
// QString::split(const QString & sep) const
void *c_QString__split_QString(void *thisObj, const char *sep_);
// QString::squeeze()
void c_QString__squeeze(void *thisObj);
// QString::startsWith(const QString & s) const
bool c_QString__startsWith_QString(void *thisObj, const char *s_);
// QString::toCaseFolded()
void *c_QString__toCaseFolded(void *thisObj);
// QString::toHtmlEscaped() const
void *c_QString__toHtmlEscaped(void *thisObj);
// QString::toLatin1()
void *c_QString__toLatin1(void *thisObj);
// QString::toLocal8Bit()
void *c_QString__toLocal8Bit(void *thisObj);
// QString::toLower()
void *c_QString__toLower(void *thisObj);
// QString::toUcs4() const
void *c_QString__toUcs4(void *thisObj);
// QString::toUpper()
void *c_QString__toUpper(void *thisObj);
// QString::toUtf8()
void *c_QString__toUtf8(void *thisObj);
// QString::trimmed()
void *c_QString__trimmed(void *thisObj);
// QString::truncate(qsizetype pos)
void c_QString__truncate_qsizetype(void *thisObj, qsizetype pos);
void c_QString__destructor(void *thisObj);
void c_QString_Finalizer(void *cppObj); // QStandardItem::QStandardItem()
void *c_QStandardItem__constructor();
// QStandardItem::QStandardItem(const QIcon & icon, const QString & text)
void *c_QStandardItem__constructor_QIcon_QString(void *icon_,
                                                 const char *text_);
// QStandardItem::QStandardItem(const QString & text)
void *c_QStandardItem__constructor_QString(const char *text_);
// QStandardItem::QStandardItem(int rows, int columns)
void *c_QStandardItem__constructor_int_int(int rows, int columns);
// QStandardItem::accessibleDescription() const
void *c_QStandardItem__accessibleDescription(void *thisObj);
// QStandardItem::accessibleText() const
void *c_QStandardItem__accessibleText(void *thisObj);
// QStandardItem::appendColumn(const QList<QStandardItem* > & items)
void c_QStandardItem__appendColumn_QList_QStandardItem(void *thisObj,
                                                       void *items_);
// QStandardItem::appendRow(QStandardItem * item)
void c_QStandardItem__appendRow_QStandardItem(void *thisObj, void *item_);
// QStandardItem::appendRow(const QList<QStandardItem* > & items)
void c_QStandardItem__appendRow_QList_QStandardItem(void *thisObj,
                                                    void *items_);
// QStandardItem::appendRows(const QList<QStandardItem* > & items)
void c_QStandardItem__appendRows_QList_QStandardItem(void *thisObj,
                                                     void *items_);
// QStandardItem::background() const
void *c_QStandardItem__background(void *thisObj);
// QStandardItem::child(int row, int column) const
void *c_QStandardItem__child_int_int(void *thisObj, int row, int column);
// QStandardItem::clearData()
void c_QStandardItem__clearData(void *thisObj);
// QStandardItem::clone() const
void *c_QStandardItem__clone(void *thisObj);
// QStandardItem::column() const
int c_QStandardItem__column(void *thisObj);
// QStandardItem::columnCount() const
int c_QStandardItem__columnCount(void *thisObj);
// QStandardItem::data(int role) const
void *c_QStandardItem__data_int(void *thisObj, int role);
// QStandardItem::emitDataChanged()
void c_QStandardItem__emitDataChanged(void *thisObj);
// QStandardItem::font() const
void *c_QStandardItem__font(void *thisObj);
// QStandardItem::foreground() const
void *c_QStandardItem__foreground(void *thisObj);
// QStandardItem::hasChildren() const
bool c_QStandardItem__hasChildren(void *thisObj);
// QStandardItem::icon() const
void *c_QStandardItem__icon(void *thisObj);
// QStandardItem::index() const
void *c_QStandardItem__index(void *thisObj);
// QStandardItem::insertColumn(int column, const QList<QStandardItem* > & items)
void c_QStandardItem__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                           int column,
                                                           void *items_);
// QStandardItem::insertColumns(int column, int count)
void c_QStandardItem__insertColumns_int_int(void *thisObj, int column,
                                            int count);
// QStandardItem::insertRow(int row, QStandardItem * item)
void c_QStandardItem__insertRow_int_QStandardItem(void *thisObj, int row,
                                                  void *item_);
// QStandardItem::insertRow(int row, const QList<QStandardItem* > & items)
void c_QStandardItem__insertRow_int_QList_QStandardItem(void *thisObj, int row,
                                                        void *items_);
// QStandardItem::insertRows(int row, const QList<QStandardItem* > & items)
void c_QStandardItem__insertRows_int_QList_QStandardItem(void *thisObj, int row,
                                                         void *items_);
// QStandardItem::insertRows(int row, int count)
void c_QStandardItem__insertRows_int_int(void *thisObj, int row, int count);
// QStandardItem::isAutoTristate() const
bool c_QStandardItem__isAutoTristate(void *thisObj);
// QStandardItem::isCheckable() const
bool c_QStandardItem__isCheckable(void *thisObj);
// QStandardItem::isDragEnabled() const
bool c_QStandardItem__isDragEnabled(void *thisObj);
// QStandardItem::isDropEnabled() const
bool c_QStandardItem__isDropEnabled(void *thisObj);
// QStandardItem::isEditable() const
bool c_QStandardItem__isEditable(void *thisObj);
// QStandardItem::isEnabled() const
bool c_QStandardItem__isEnabled(void *thisObj);
// QStandardItem::isSelectable() const
bool c_QStandardItem__isSelectable(void *thisObj);
// QStandardItem::isUserTristate() const
bool c_QStandardItem__isUserTristate(void *thisObj);
// QStandardItem::model() const
void *c_QStandardItem__model(void *thisObj);
// QStandardItem::parent() const
void *c_QStandardItem__parent(void *thisObj);
// QStandardItem::removeColumn(int column)
void c_QStandardItem__removeColumn_int(void *thisObj, int column);
// QStandardItem::removeColumns(int column, int count)
void c_QStandardItem__removeColumns_int_int(void *thisObj, int column,
                                            int count);
// QStandardItem::removeRow(int row)
void c_QStandardItem__removeRow_int(void *thisObj, int row);
// QStandardItem::removeRows(int row, int count)
void c_QStandardItem__removeRows_int_int(void *thisObj, int row, int count);
// QStandardItem::row() const
int c_QStandardItem__row(void *thisObj);
// QStandardItem::rowCount() const
int c_QStandardItem__rowCount(void *thisObj);
// QStandardItem::setAccessibleDescription(const QString &
// accessibleDescription)
void c_QStandardItem__setAccessibleDescription_QString(
    void *thisObj, const char *accessibleDescription_);
// QStandardItem::setAccessibleText(const QString & accessibleText)
void c_QStandardItem__setAccessibleText_QString(void *thisObj,
                                                const char *accessibleText_);
// QStandardItem::setAutoTristate(bool tristate)
void c_QStandardItem__setAutoTristate_bool(void *thisObj, bool tristate);
// QStandardItem::setBackground(const QBrush & brush)
void c_QStandardItem__setBackground_QBrush(void *thisObj, void *brush_);
// QStandardItem::setCheckable(bool checkable)
void c_QStandardItem__setCheckable_bool(void *thisObj, bool checkable);
// QStandardItem::setChild(int row, QStandardItem * item)
void c_QStandardItem__setChild_int_QStandardItem(void *thisObj, int row,
                                                 void *item_);
// QStandardItem::setChild(int row, int column, QStandardItem * item)
void c_QStandardItem__setChild_int_int_QStandardItem(void *thisObj, int row,
                                                     int column, void *item_);
// QStandardItem::setColumnCount(int columns)
void c_QStandardItem__setColumnCount_int(void *thisObj, int columns);
// QStandardItem::setData(const QVariant & value, int role)
void c_QStandardItem__setData_QVariant_int(void *thisObj, void *value_,
                                           int role);
// QStandardItem::setDragEnabled(bool dragEnabled)
void c_QStandardItem__setDragEnabled_bool(void *thisObj, bool dragEnabled);
// QStandardItem::setDropEnabled(bool dropEnabled)
void c_QStandardItem__setDropEnabled_bool(void *thisObj, bool dropEnabled);
// QStandardItem::setEditable(bool editable)
void c_QStandardItem__setEditable_bool(void *thisObj, bool editable);
// QStandardItem::setEnabled(bool enabled)
void c_QStandardItem__setEnabled_bool(void *thisObj, bool enabled);
// QStandardItem::setFont(const QFont & font)
void c_QStandardItem__setFont_QFont(void *thisObj, void *font_);
// QStandardItem::setForeground(const QBrush & brush)
void c_QStandardItem__setForeground_QBrush(void *thisObj, void *brush_);
// QStandardItem::setIcon(const QIcon & icon)
void c_QStandardItem__setIcon_QIcon(void *thisObj, void *icon_);
// QStandardItem::setRowCount(int rows)
void c_QStandardItem__setRowCount_int(void *thisObj, int rows);
// QStandardItem::setSelectable(bool selectable)
void c_QStandardItem__setSelectable_bool(void *thisObj, bool selectable);
// QStandardItem::setSizeHint(const QSize & sizeHint)
void c_QStandardItem__setSizeHint_QSize(void *thisObj, void *sizeHint_);
// QStandardItem::setStatusTip(const QString & statusTip)
void c_QStandardItem__setStatusTip_QString(void *thisObj,
                                           const char *statusTip_);
// QStandardItem::setText(const QString & text)
void c_QStandardItem__setText_QString(void *thisObj, const char *text_);
// QStandardItem::setToolTip(const QString & toolTip)
void c_QStandardItem__setToolTip_QString(void *thisObj, const char *toolTip_);
// QStandardItem::setUserTristate(bool tristate)
void c_QStandardItem__setUserTristate_bool(void *thisObj, bool tristate);
// QStandardItem::setWhatsThis(const QString & whatsThis)
void c_QStandardItem__setWhatsThis_QString(void *thisObj,
                                           const char *whatsThis_);
// QStandardItem::sizeHint() const
void *c_QStandardItem__sizeHint(void *thisObj);
// QStandardItem::sortChildren(int column, Qt::SortOrder order)
void c_QStandardItem__sortChildren_int_SortOrder(void *thisObj, int column,
                                                 int order);
// QStandardItem::statusTip() const
void *c_QStandardItem__statusTip(void *thisObj);
// QStandardItem::takeChild(int row, int column)
void *c_QStandardItem__takeChild_int_int(void *thisObj, int row, int column);
// QStandardItem::takeColumn(int column)
void *c_QStandardItem__takeColumn_int(void *thisObj, int column);
// QStandardItem::takeRow(int row)
void *c_QStandardItem__takeRow_int(void *thisObj, int row);
// QStandardItem::text() const
void *c_QStandardItem__text(void *thisObj);
// QStandardItem::toolTip() const
void *c_QStandardItem__toolTip(void *thisObj);
// QStandardItem::type() const
int c_QStandardItem__type(void *thisObj);
// QStandardItem::whatsThis() const
void *c_QStandardItem__whatsThis(void *thisObj);
void c_QStandardItem__destructor(void *thisObj);
void c_QStandardItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
void c_QStandardItem_Finalizer(void *cppObj); // QSizePolicy::QSizePolicy()
void *c_QSizePolicy__constructor();
// QSizePolicy::QSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy
// vertical, QSizePolicy::ControlType type)
void *c_QSizePolicy__constructor_Policy_Policy_ControlType(int horizontal,
                                                           int vertical,
                                                           int type);
// QSizePolicy::controlType() const
int c_QSizePolicy__controlType(void *thisObj);
// QSizePolicy::expandingDirections() const
int c_QSizePolicy__expandingDirections(void *thisObj);
// QSizePolicy::hasHeightForWidth() const
bool c_QSizePolicy__hasHeightForWidth(void *thisObj);
// QSizePolicy::hasWidthForHeight() const
bool c_QSizePolicy__hasWidthForHeight(void *thisObj);
// QSizePolicy::horizontalPolicy() const
int c_QSizePolicy__horizontalPolicy(void *thisObj);
// QSizePolicy::horizontalStretch() const
int c_QSizePolicy__horizontalStretch(void *thisObj);
// QSizePolicy::retainSizeWhenHidden() const
bool c_QSizePolicy__retainSizeWhenHidden(void *thisObj);
// QSizePolicy::setControlType(QSizePolicy::ControlType type)
void c_QSizePolicy__setControlType_ControlType(void *thisObj, int type);
// QSizePolicy::setHeightForWidth(bool b)
void c_QSizePolicy__setHeightForWidth_bool(void *thisObj, bool b);
// QSizePolicy::setHorizontalPolicy(QSizePolicy::Policy d)
void c_QSizePolicy__setHorizontalPolicy_Policy(void *thisObj, int d);
// QSizePolicy::setHorizontalStretch(int stretchFactor)
void c_QSizePolicy__setHorizontalStretch_int(void *thisObj, int stretchFactor);
// QSizePolicy::setRetainSizeWhenHidden(bool retainSize)
void c_QSizePolicy__setRetainSizeWhenHidden_bool(void *thisObj,
                                                 bool retainSize);
// QSizePolicy::setVerticalPolicy(QSizePolicy::Policy d)
void c_QSizePolicy__setVerticalPolicy_Policy(void *thisObj, int d);
// QSizePolicy::setVerticalStretch(int stretchFactor)
void c_QSizePolicy__setVerticalStretch_int(void *thisObj, int stretchFactor);
// QSizePolicy::setWidthForHeight(bool b)
void c_QSizePolicy__setWidthForHeight_bool(void *thisObj, bool b);
// QSizePolicy::transpose()
void c_QSizePolicy__transpose(void *thisObj);
// QSizePolicy::transposed() const
void *c_QSizePolicy__transposed(void *thisObj);
// QSizePolicy::verticalPolicy() const
int c_QSizePolicy__verticalPolicy(void *thisObj);
// QSizePolicy::verticalStretch() const
int c_QSizePolicy__verticalStretch(void *thisObj);
void c_QSizePolicy__destructor(void *thisObj);
void c_QSizePolicy_Finalizer(void *cppObj); // QSizeF::QSizeF()
void *c_QSizeF__constructor();
// QSizeF::QSizeF(const QSize & sz)
void *c_QSizeF__constructor_QSize(void *sz_);
// QSizeF::QSizeF(qreal w, qreal h)
void *c_QSizeF__constructor_qreal_qreal(qreal w, qreal h);
// QSizeF::boundedTo(const QSizeF & arg__1) const
void *c_QSizeF__boundedTo_QSizeF(void *thisObj, void *arg__1_);
// QSizeF::expandedTo(const QSizeF & arg__1) const
void *c_QSizeF__expandedTo_QSizeF(void *thisObj, void *arg__1_);
// QSizeF::height() const
qreal c_QSizeF__height(void *thisObj);
// QSizeF::isEmpty() const
bool c_QSizeF__isEmpty(void *thisObj);
// QSizeF::isNull() const
bool c_QSizeF__isNull(void *thisObj);
// QSizeF::isValid() const
bool c_QSizeF__isValid(void *thisObj);
// QSizeF::setHeight(qreal h)
void c_QSizeF__setHeight_qreal(void *thisObj, qreal h);
// QSizeF::setWidth(qreal w)
void c_QSizeF__setWidth_qreal(void *thisObj, qreal w);
// QSizeF::toSize() const
void *c_QSizeF__toSize(void *thisObj);
// QSizeF::transpose()
void c_QSizeF__transpose(void *thisObj);
// QSizeF::transposed() const
void *c_QSizeF__transposed(void *thisObj);
// QSizeF::width() const
qreal c_QSizeF__width(void *thisObj);
void c_QSizeF__destructor(void *thisObj);
void c_QSizeF_Finalizer(void *cppObj); // QSize::QSize()
void *c_QSize__constructor();
// QSize::QSize(int w, int h)
void *c_QSize__constructor_int_int(int w, int h);
// QSize::boundedTo(const QSize & arg__1) const
void *c_QSize__boundedTo_QSize(void *thisObj, void *arg__1_);
// QSize::expandedTo(const QSize & arg__1) const
void *c_QSize__expandedTo_QSize(void *thisObj, void *arg__1_);
// QSize::height() const
int c_QSize__height(void *thisObj);
// QSize::isEmpty() const
bool c_QSize__isEmpty(void *thisObj);
// QSize::isNull() const
bool c_QSize__isNull(void *thisObj);
// QSize::isValid() const
bool c_QSize__isValid(void *thisObj);
// QSize::setHeight(int h)
void c_QSize__setHeight_int(void *thisObj, int h);
// QSize::setWidth(int w)
void c_QSize__setWidth_int(void *thisObj, int w);
// QSize::toSizeF() const
void *c_QSize__toSizeF(void *thisObj);
// QSize::transpose()
void c_QSize__transpose(void *thisObj);
// QSize::transposed() const
void *c_QSize__transposed(void *thisObj);
// QSize::width() const
int c_QSize__width(void *thisObj);
void c_QSize__destructor(void *thisObj);
void c_QSize_Finalizer(void *cppObj); // QRegion::QRegion()
void *c_QRegion__constructor();
// QRegion::QRegion(const QRect & r)
void *c_QRegion__constructor_QRect(void *r_);
// QRegion::QRegion(int x, int y, int w, int h)
void *c_QRegion__constructor_int_int_int_int(int x, int y, int w, int h);
// QRegion::begin() const
void *c_QRegion__begin(void *thisObj);
// QRegion::boundingRect() const
void *c_QRegion__boundingRect(void *thisObj);
// QRegion::cbegin() const
void *c_QRegion__cbegin(void *thisObj);
// QRegion::cend() const
void *c_QRegion__cend(void *thisObj);
// QRegion::contains(const QPoint & p) const
bool c_QRegion__contains_QPoint(void *thisObj, void *p_);
// QRegion::contains(const QRect & r) const
bool c_QRegion__contains_QRect(void *thisObj, void *r_);
// QRegion::end() const
void *c_QRegion__end(void *thisObj);
// QRegion::intersected(const QRect & r) const
void *c_QRegion__intersected_QRect(void *thisObj, void *r_);
// QRegion::intersected(const QRegion & r) const
void *c_QRegion__intersected_QRegion(void *thisObj, void *r_);
// QRegion::intersects(const QRect & r) const
bool c_QRegion__intersects_QRect(void *thisObj, void *r_);
// QRegion::intersects(const QRegion & r) const
bool c_QRegion__intersects_QRegion(void *thisObj, void *r_);
// QRegion::isEmpty() const
bool c_QRegion__isEmpty(void *thisObj);
// QRegion::isNull() const
bool c_QRegion__isNull(void *thisObj);
// QRegion::rectCount() const
int c_QRegion__rectCount(void *thisObj);
// QRegion::setRects(const QRect * rect, int num)
void c_QRegion__setRects_QRect_int(void *thisObj, void *rect_, int num);
// QRegion::subtracted(const QRegion & r) const
void *c_QRegion__subtracted_QRegion(void *thisObj, void *r_);
// QRegion::translate(const QPoint & p)
void c_QRegion__translate_QPoint(void *thisObj, void *p_);
// QRegion::translate(int dx, int dy)
void c_QRegion__translate_int_int(void *thisObj, int dx, int dy);
// QRegion::translated(const QPoint & p) const
void *c_QRegion__translated_QPoint(void *thisObj, void *p_);
// QRegion::translated(int dx, int dy) const
void *c_QRegion__translated_int_int(void *thisObj, int dx, int dy);
// QRegion::united(const QRect & r) const
void *c_QRegion__united_QRect(void *thisObj, void *r_);
// QRegion::united(const QRegion & r) const
void *c_QRegion__united_QRegion(void *thisObj, void *r_);
// QRegion::xored(const QRegion & r) const
void *c_QRegion__xored_QRegion(void *thisObj, void *r_);
void c_QRegion__destructor(void *thisObj);
void c_QRegion_Finalizer(void *cppObj); // QRectF::QRectF()
void *c_QRectF__constructor();
// QRectF::QRectF(const QPointF & topleft, const QPointF & bottomRight)
void *c_QRectF__constructor_QPointF_QPointF(void *topleft_, void *bottomRight_);
// QRectF::QRectF(const QPointF & topleft, const QSizeF & size)
void *c_QRectF__constructor_QPointF_QSizeF(void *topleft_, void *size_);
// QRectF::QRectF(const QRect & rect)
void *c_QRectF__constructor_QRect(void *rect_);
// QRectF::QRectF(qreal left, qreal top, qreal width, qreal height)
void *c_QRectF__constructor_qreal_qreal_qreal_qreal(qreal left, qreal top,
                                                    qreal width, qreal height);
// QRectF::adjust(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QRectF__adjust_qreal_qreal_qreal_qreal(void *thisObj, qreal x1, qreal y1,
                                              qreal x2, qreal y2);
// QRectF::adjusted(qreal x1, qreal y1, qreal x2, qreal y2) const
void *c_QRectF__adjusted_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                                 qreal y1, qreal x2, qreal y2);
// QRectF::bottom() const
qreal c_QRectF__bottom(void *thisObj);
// QRectF::bottomLeft() const
void *c_QRectF__bottomLeft(void *thisObj);
// QRectF::bottomRight() const
void *c_QRectF__bottomRight(void *thisObj);
// QRectF::center() const
void *c_QRectF__center(void *thisObj);
// QRectF::contains(const QPointF & p) const
bool c_QRectF__contains_QPointF(void *thisObj, void *p_);
// QRectF::contains(const QRectF & r) const
bool c_QRectF__contains_QRectF(void *thisObj, void *r_);
// QRectF::contains(qreal x, qreal y) const
bool c_QRectF__contains_qreal_qreal(void *thisObj, qreal x, qreal y);
// QRectF::height() const
qreal c_QRectF__height(void *thisObj);
// QRectF::intersected(const QRectF & other) const
void *c_QRectF__intersected_QRectF(void *thisObj, void *other_);
// QRectF::intersects(const QRectF & r) const
bool c_QRectF__intersects_QRectF(void *thisObj, void *r_);
// QRectF::isEmpty() const
bool c_QRectF__isEmpty(void *thisObj);
// QRectF::isNull() const
bool c_QRectF__isNull(void *thisObj);
// QRectF::isValid() const
bool c_QRectF__isValid(void *thisObj);
// QRectF::left() const
qreal c_QRectF__left(void *thisObj);
// QRectF::moveBottom(qreal pos)
void c_QRectF__moveBottom_qreal(void *thisObj, qreal pos);
// QRectF::moveBottomLeft(const QPointF & p)
void c_QRectF__moveBottomLeft_QPointF(void *thisObj, void *p_);
// QRectF::moveBottomRight(const QPointF & p)
void c_QRectF__moveBottomRight_QPointF(void *thisObj, void *p_);
// QRectF::moveCenter(const QPointF & p)
void c_QRectF__moveCenter_QPointF(void *thisObj, void *p_);
// QRectF::moveLeft(qreal pos)
void c_QRectF__moveLeft_qreal(void *thisObj, qreal pos);
// QRectF::moveRight(qreal pos)
void c_QRectF__moveRight_qreal(void *thisObj, qreal pos);
// QRectF::moveTo(const QPointF & p)
void c_QRectF__moveTo_QPointF(void *thisObj, void *p_);
// QRectF::moveTo(qreal x, qreal y)
void c_QRectF__moveTo_qreal_qreal(void *thisObj, qreal x, qreal y);
// QRectF::moveTop(qreal pos)
void c_QRectF__moveTop_qreal(void *thisObj, qreal pos);
// QRectF::moveTopLeft(const QPointF & p)
void c_QRectF__moveTopLeft_QPointF(void *thisObj, void *p_);
// QRectF::moveTopRight(const QPointF & p)
void c_QRectF__moveTopRight_QPointF(void *thisObj, void *p_);
// QRectF::normalized() const
void *c_QRectF__normalized(void *thisObj);
// QRectF::right() const
qreal c_QRectF__right(void *thisObj);
// QRectF::setBottom(qreal pos)
void c_QRectF__setBottom_qreal(void *thisObj, qreal pos);
// QRectF::setBottomLeft(const QPointF & p)
void c_QRectF__setBottomLeft_QPointF(void *thisObj, void *p_);
// QRectF::setBottomRight(const QPointF & p)
void c_QRectF__setBottomRight_QPointF(void *thisObj, void *p_);
// QRectF::setCoords(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QRectF__setCoords_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                                 qreal y1, qreal x2, qreal y2);
// QRectF::setHeight(qreal h)
void c_QRectF__setHeight_qreal(void *thisObj, qreal h);
// QRectF::setLeft(qreal pos)
void c_QRectF__setLeft_qreal(void *thisObj, qreal pos);
// QRectF::setRect(qreal x, qreal y, qreal w, qreal h)
void c_QRectF__setRect_qreal_qreal_qreal_qreal(void *thisObj, qreal x, qreal y,
                                               qreal w, qreal h);
// QRectF::setRight(qreal pos)
void c_QRectF__setRight_qreal(void *thisObj, qreal pos);
// QRectF::setSize(const QSizeF & s)
void c_QRectF__setSize_QSizeF(void *thisObj, void *s_);
// QRectF::setTop(qreal pos)
void c_QRectF__setTop_qreal(void *thisObj, qreal pos);
// QRectF::setTopLeft(const QPointF & p)
void c_QRectF__setTopLeft_QPointF(void *thisObj, void *p_);
// QRectF::setTopRight(const QPointF & p)
void c_QRectF__setTopRight_QPointF(void *thisObj, void *p_);
// QRectF::setWidth(qreal w)
void c_QRectF__setWidth_qreal(void *thisObj, qreal w);
// QRectF::setX(qreal pos)
void c_QRectF__setX_qreal(void *thisObj, qreal pos);
// QRectF::setY(qreal pos)
void c_QRectF__setY_qreal(void *thisObj, qreal pos);
// QRectF::size() const
void *c_QRectF__size(void *thisObj);
// QRectF::toAlignedRect() const
void *c_QRectF__toAlignedRect(void *thisObj);
// QRectF::toRect() const
void *c_QRectF__toRect(void *thisObj);
// QRectF::top() const
qreal c_QRectF__top(void *thisObj);
// QRectF::topLeft() const
void *c_QRectF__topLeft(void *thisObj);
// QRectF::topRight() const
void *c_QRectF__topRight(void *thisObj);
// QRectF::translate(const QPointF & p)
void c_QRectF__translate_QPointF(void *thisObj, void *p_);
// QRectF::translate(qreal dx, qreal dy)
void c_QRectF__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QRectF::translated(const QPointF & p) const
void *c_QRectF__translated_QPointF(void *thisObj, void *p_);
// QRectF::translated(qreal dx, qreal dy) const
void *c_QRectF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QRectF::transposed() const
void *c_QRectF__transposed(void *thisObj);
// QRectF::united(const QRectF & other) const
void *c_QRectF__united_QRectF(void *thisObj, void *other_);
// QRectF::width() const
qreal c_QRectF__width(void *thisObj);
// QRectF::x() const
qreal c_QRectF__x(void *thisObj);
// QRectF::y() const
qreal c_QRectF__y(void *thisObj);
void c_QRectF__destructor(void *thisObj);
void c_QRectF_Finalizer(void *cppObj); // QRect::QRect()
void *c_QRect__constructor();
// QRect::QRect(const QPoint & topleft, const QPoint & bottomright)
void *c_QRect__constructor_QPoint_QPoint(void *topleft_, void *bottomright_);
// QRect::QRect(const QPoint & topleft, const QSize & size)
void *c_QRect__constructor_QPoint_QSize(void *topleft_, void *size_);
// QRect::QRect(int left, int top, int width, int height)
void *c_QRect__constructor_int_int_int_int(int left, int top, int width,
                                           int height);
// QRect::adjust(int x1, int y1, int x2, int y2)
void c_QRect__adjust_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                     int y2);
// QRect::adjusted(int x1, int y1, int x2, int y2) const
void *c_QRect__adjusted_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                        int y2);
// QRect::bottom() const
int c_QRect__bottom(void *thisObj);
// QRect::bottomLeft() const
void *c_QRect__bottomLeft(void *thisObj);
// QRect::bottomRight() const
void *c_QRect__bottomRight(void *thisObj);
// QRect::center() const
void *c_QRect__center(void *thisObj);
// QRect::contains(const QPoint & p, bool proper) const
bool c_QRect__contains_QPoint_bool(void *thisObj, void *p_, bool proper);
// QRect::contains(const QRect & r, bool proper) const
bool c_QRect__contains_QRect_bool(void *thisObj, void *r_, bool proper);
// QRect::contains(int x, int y) const
bool c_QRect__contains_int_int(void *thisObj, int x, int y);
// QRect::contains(int x, int y, bool proper) const
bool c_QRect__contains_int_int_bool(void *thisObj, int x, int y, bool proper);
// QRect::height() const
int c_QRect__height(void *thisObj);
// QRect::intersected(const QRect & other) const
void *c_QRect__intersected_QRect(void *thisObj, void *other_);
// QRect::intersects(const QRect & r) const
bool c_QRect__intersects_QRect(void *thisObj, void *r_);
// QRect::isEmpty() const
bool c_QRect__isEmpty(void *thisObj);
// QRect::isNull() const
bool c_QRect__isNull(void *thisObj);
// QRect::isValid() const
bool c_QRect__isValid(void *thisObj);
// QRect::left() const
int c_QRect__left(void *thisObj);
// QRect::moveBottom(int pos)
void c_QRect__moveBottom_int(void *thisObj, int pos);
// QRect::moveBottomLeft(const QPoint & p)
void c_QRect__moveBottomLeft_QPoint(void *thisObj, void *p_);
// QRect::moveBottomRight(const QPoint & p)
void c_QRect__moveBottomRight_QPoint(void *thisObj, void *p_);
// QRect::moveCenter(const QPoint & p)
void c_QRect__moveCenter_QPoint(void *thisObj, void *p_);
// QRect::moveLeft(int pos)
void c_QRect__moveLeft_int(void *thisObj, int pos);
// QRect::moveRight(int pos)
void c_QRect__moveRight_int(void *thisObj, int pos);
// QRect::moveTo(const QPoint & p)
void c_QRect__moveTo_QPoint(void *thisObj, void *p_);
// QRect::moveTo(int x, int t)
void c_QRect__moveTo_int_int(void *thisObj, int x, int t);
// QRect::moveTop(int pos)
void c_QRect__moveTop_int(void *thisObj, int pos);
// QRect::moveTopLeft(const QPoint & p)
void c_QRect__moveTopLeft_QPoint(void *thisObj, void *p_);
// QRect::moveTopRight(const QPoint & p)
void c_QRect__moveTopRight_QPoint(void *thisObj, void *p_);
// QRect::normalized() const
void *c_QRect__normalized(void *thisObj);
// QRect::right() const
int c_QRect__right(void *thisObj);
// QRect::setBottom(int pos)
void c_QRect__setBottom_int(void *thisObj, int pos);
// QRect::setBottomLeft(const QPoint & p)
void c_QRect__setBottomLeft_QPoint(void *thisObj, void *p_);
// QRect::setBottomRight(const QPoint & p)
void c_QRect__setBottomRight_QPoint(void *thisObj, void *p_);
// QRect::setCoords(int x1, int y1, int x2, int y2)
void c_QRect__setCoords_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                        int y2);
// QRect::setHeight(int h)
void c_QRect__setHeight_int(void *thisObj, int h);
// QRect::setLeft(int pos)
void c_QRect__setLeft_int(void *thisObj, int pos);
// QRect::setRect(int x, int y, int w, int h)
void c_QRect__setRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                      int h);
// QRect::setRight(int pos)
void c_QRect__setRight_int(void *thisObj, int pos);
// QRect::setSize(const QSize & s)
void c_QRect__setSize_QSize(void *thisObj, void *s_);
// QRect::setTop(int pos)
void c_QRect__setTop_int(void *thisObj, int pos);
// QRect::setTopLeft(const QPoint & p)
void c_QRect__setTopLeft_QPoint(void *thisObj, void *p_);
// QRect::setTopRight(const QPoint & p)
void c_QRect__setTopRight_QPoint(void *thisObj, void *p_);
// QRect::setWidth(int w)
void c_QRect__setWidth_int(void *thisObj, int w);
// QRect::setX(int x)
void c_QRect__setX_int(void *thisObj, int x);
// QRect::setY(int y)
void c_QRect__setY_int(void *thisObj, int y);
// QRect::size() const
void *c_QRect__size(void *thisObj);
// QRect::span(const QPoint & p1, const QPoint & p2)
void *c_static_QRect__span_QPoint_QPoint(void *p1_, void *p2_);
// QRect::toRectF() const
void *c_QRect__toRectF(void *thisObj);
// QRect::top() const
int c_QRect__top(void *thisObj);
// QRect::topLeft() const
void *c_QRect__topLeft(void *thisObj);
// QRect::topRight() const
void *c_QRect__topRight(void *thisObj);
// QRect::translate(const QPoint & p)
void c_QRect__translate_QPoint(void *thisObj, void *p_);
// QRect::translate(int dx, int dy)
void c_QRect__translate_int_int(void *thisObj, int dx, int dy);
// QRect::translated(const QPoint & p) const
void *c_QRect__translated_QPoint(void *thisObj, void *p_);
// QRect::translated(int dx, int dy) const
void *c_QRect__translated_int_int(void *thisObj, int dx, int dy);
// QRect::transposed() const
void *c_QRect__transposed(void *thisObj);
// QRect::united(const QRect & other) const
void *c_QRect__united_QRect(void *thisObj, void *other_);
// QRect::width() const
int c_QRect__width(void *thisObj);
// QRect::x() const
int c_QRect__x(void *thisObj);
// QRect::y() const
int c_QRect__y(void *thisObj);
void c_QRect__destructor(void *thisObj);
void c_QRect_Finalizer(void *cppObj); // QPointF::QPointF()
void *c_QPointF__constructor();
// QPointF::QPointF(const QPoint & p)
void *c_QPointF__constructor_QPoint(void *p_);
// QPointF::QPointF(qreal xpos, qreal ypos)
void *c_QPointF__constructor_qreal_qreal(qreal xpos, qreal ypos);
// QPointF::dotProduct(const QPointF & p1, const QPointF & p2)
qreal c_static_QPointF__dotProduct_QPointF_QPointF(void *p1_, void *p2_);
// QPointF::isNull() const
bool c_QPointF__isNull(void *thisObj);
// QPointF::manhattanLength() const
qreal c_QPointF__manhattanLength(void *thisObj);
// QPointF::setX(qreal x)
void c_QPointF__setX_qreal(void *thisObj, qreal x);
// QPointF::setY(qreal y)
void c_QPointF__setY_qreal(void *thisObj, qreal y);
// QPointF::toPoint() const
void *c_QPointF__toPoint(void *thisObj);
// QPointF::transposed() const
void *c_QPointF__transposed(void *thisObj);
// QPointF::x() const
qreal c_QPointF__x(void *thisObj);
// QPointF::y() const
qreal c_QPointF__y(void *thisObj);
void c_QPointF__destructor(void *thisObj);
void c_QPointF_Finalizer(void *cppObj); // QPoint::QPoint()
void *c_QPoint__constructor();
// QPoint::QPoint(int xpos, int ypos)
void *c_QPoint__constructor_int_int(int xpos, int ypos);
// QPoint::dotProduct(const QPoint & p1, const QPoint & p2)
int c_static_QPoint__dotProduct_QPoint_QPoint(void *p1_, void *p2_);
// QPoint::isNull() const
bool c_QPoint__isNull(void *thisObj);
// QPoint::manhattanLength() const
int c_QPoint__manhattanLength(void *thisObj);
// QPoint::setX(int x)
void c_QPoint__setX_int(void *thisObj, int x);
// QPoint::setY(int y)
void c_QPoint__setY_int(void *thisObj, int y);
// QPoint::toPointF() const
void *c_QPoint__toPointF(void *thisObj);
// QPoint::transposed() const
void *c_QPoint__transposed(void *thisObj);
// QPoint::x() const
int c_QPoint__x(void *thisObj);
// QPoint::y() const
int c_QPoint__y(void *thisObj);
void c_QPoint__destructor(void *thisObj);
void c_QPoint_Finalizer(void *cppObj); // QPixmap::QPixmap()
void *c_QPixmap__constructor();
// QPixmap::QPixmap(const QSize & arg__1)
void *c_QPixmap__constructor_QSize(void *arg__1_);
// QPixmap::QPixmap(const QString & fileName, const char * format)
void *c_QPixmap__constructor_QString_char(const char *fileName_,
                                          const char *format);
// QPixmap::QPixmap(int w, int h)
void *c_QPixmap__constructor_int_int(int w, int h);
// QPixmap::cacheKey() const
qint64 c_QPixmap__cacheKey(void *thisObj);
// QPixmap::copy(const QRect & rect) const
void *c_QPixmap__copy_QRect(void *thisObj, void *rect_);
// QPixmap::copy(int x, int y, int width, int height) const
void *c_QPixmap__copy_int_int_int_int(void *thisObj, int x, int y, int width,
                                      int height);
// QPixmap::defaultDepth()
int c_static_QPixmap__defaultDepth();
// QPixmap::depth() const
int c_QPixmap__depth(void *thisObj);
// QPixmap::detach()
void c_QPixmap__detach(void *thisObj);
// QPixmap::devType() const
int c_QPixmap__devType(void *thisObj);
// QPixmap::deviceIndependentSize() const
void *c_QPixmap__deviceIndependentSize(void *thisObj);
// QPixmap::devicePixelRatio() const
qreal c_QPixmap__devicePixelRatio(void *thisObj);
// QPixmap::fill(const QColor & fillColor)
void c_QPixmap__fill_QColor(void *thisObj, void *fillColor_);
// QPixmap::hasAlpha() const
bool c_QPixmap__hasAlpha(void *thisObj);
// QPixmap::hasAlphaChannel() const
bool c_QPixmap__hasAlphaChannel(void *thisObj);
// QPixmap::height() const
int c_QPixmap__height(void *thisObj);
// QPixmap::isDetached() const
bool c_QPixmap__isDetached(void *thisObj);
// QPixmap::isNull() const
bool c_QPixmap__isNull(void *thisObj);
// QPixmap::isQBitmap() const
bool c_QPixmap__isQBitmap(void *thisObj);
// QPixmap::load(const QString & fileName, const char * format)
bool c_QPixmap__load_QString_char(void *thisObj, const char *fileName_,
                                  const char *format);
// QPixmap::loadFromData(const QByteArray & data, const char * format)
bool c_QPixmap__loadFromData_QByteArray_char(void *thisObj, void *data_,
                                             const char *format);
// QPixmap::rect() const
void *c_QPixmap__rect(void *thisObj);
// QPixmap::save(QIODevice * device, const char * format, int quality) const
bool c_QPixmap__save_QIODevice_char_int(void *thisObj, void *device_,
                                        const char *format, int quality);
// QPixmap::save(const QString & fileName, const char * format, int quality)
// const
bool c_QPixmap__save_QString_char_int(void *thisObj, const char *fileName_,
                                      const char *format, int quality);
// QPixmap::scaled(const QSize & s) const
void *c_QPixmap__scaled_QSize(void *thisObj, void *s_);
// QPixmap::scaled(int w, int h) const
void *c_QPixmap__scaled_int_int(void *thisObj, int w, int h);
// QPixmap::scaledToHeight(int h) const
void *c_QPixmap__scaledToHeight_int(void *thisObj, int h);
// QPixmap::scaledToWidth(int w) const
void *c_QPixmap__scaledToWidth_int(void *thisObj, int w);
// QPixmap::scroll(int dx, int dy, const QRect & rect, QRegion * exposed)
void c_QPixmap__scroll_int_int_QRect_QRegion(void *thisObj, int dx, int dy,
                                             void *rect_, void *exposed_);
// QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion
// * exposed)
void c_QPixmap__scroll_int_int_int_int_int_int_QRegion(void *thisObj, int dx,
                                                       int dy, int x, int y,
                                                       int width, int height,
                                                       void *exposed_);
// QPixmap::setDevicePixelRatio(qreal scaleFactor)
void c_QPixmap__setDevicePixelRatio_qreal(void *thisObj, qreal scaleFactor);
// QPixmap::size() const
void *c_QPixmap__size(void *thisObj);
// QPixmap::width() const
int c_QPixmap__width(void *thisObj);
void c_QPixmap__destructor(void *thisObj);
void c_QPixmap__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
void c_QPixmap_Finalizer(void *cppObj); // QPen::QPen()
void *c_QPen__constructor();
// QPen::QPen(const QBrush & brush, qreal width)
void *c_QPen__constructor_QBrush_qreal(void *brush_, qreal width);
// QPen::QPen(const QColor & color)
void *c_QPen__constructor_QColor(void *color_);
// QPen::brush() const
void *c_QPen__brush(void *thisObj);
// QPen::color() const
void *c_QPen__color(void *thisObj);
// QPen::dashOffset() const
qreal c_QPen__dashOffset(void *thisObj);
// QPen::dashPattern() const
void *c_QPen__dashPattern(void *thisObj);
// QPen::isCosmetic() const
bool c_QPen__isCosmetic(void *thisObj);
// QPen::isDetached()
bool c_QPen__isDetached(void *thisObj);
// QPen::isSolid() const
bool c_QPen__isSolid(void *thisObj);
// QPen::miterLimit() const
qreal c_QPen__miterLimit(void *thisObj);
// QPen::setBrush(const QBrush & brush)
void c_QPen__setBrush_QBrush(void *thisObj, void *brush_);
// QPen::setColor(const QColor & color)
void c_QPen__setColor_QColor(void *thisObj, void *color_);
// QPen::setCosmetic(bool cosmetic)
void c_QPen__setCosmetic_bool(void *thisObj, bool cosmetic);
// QPen::setDashOffset(qreal doffset)
void c_QPen__setDashOffset_qreal(void *thisObj, qreal doffset);
// QPen::setDashPattern(const QList<qreal > & pattern)
void c_QPen__setDashPattern_QList_qreal(void *thisObj, void *pattern_);
// QPen::setMiterLimit(qreal limit)
void c_QPen__setMiterLimit_qreal(void *thisObj, qreal limit);
// QPen::setWidth(int width)
void c_QPen__setWidth_int(void *thisObj, int width);
// QPen::setWidthF(qreal width)
void c_QPen__setWidthF_qreal(void *thisObj, qreal width);
// QPen::width() const
int c_QPen__width(void *thisObj);
// QPen::widthF() const
qreal c_QPen__widthF(void *thisObj);
void c_QPen__destructor(void *thisObj);
void c_QPen_Finalizer(void *cppObj); // QPalette::QPalette()
void *c_QPalette__constructor();
// QPalette::QPalette(const QBrush & windowText, const QBrush & button, const
// QBrush & light, const QBrush & dark, const QBrush & mid, const QBrush & text,
// const QBrush & bright_text, const QBrush & base, const QBrush & window)
void *
c_QPalette__constructor_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *windowText_, void *button_, void *light_, void *dark_, void *mid_,
    void *text_, void *bright_text_, void *base_, void *window_);
// QPalette::QPalette(const QColor & button)
void *c_QPalette__constructor_QColor(void *button_);
// QPalette::QPalette(const QColor & button, const QColor & window)
void *c_QPalette__constructor_QColor_QColor(void *button_, void *window_);
// QPalette::QPalette(const QColor & windowText, const QColor & window, const
// QColor & light, const QColor & dark, const QColor & mid, const QColor & text,
// const QColor & base)
void *c_QPalette__constructor_QColor_QColor_QColor_QColor_QColor_QColor_QColor(
    void *windowText_, void *window_, void *light_, void *dark_, void *mid_,
    void *text_, void *base_);
// QPalette::alternateBase() const
void *c_QPalette__alternateBase(void *thisObj);
// QPalette::base() const
void *c_QPalette__base(void *thisObj);
// QPalette::brightText() const
void *c_QPalette__brightText(void *thisObj);
// QPalette::brush(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
void *c_QPalette__brush_ColorGroup_ColorRole(void *thisObj, int cg, int cr);
// QPalette::brush(QPalette::ColorRole cr) const
void *c_QPalette__brush_ColorRole(void *thisObj, int cr);
// QPalette::button() const
void *c_QPalette__button(void *thisObj);
// QPalette::buttonText() const
void *c_QPalette__buttonText(void *thisObj);
// QPalette::cacheKey() const
qint64 c_QPalette__cacheKey(void *thisObj);
// QPalette::color(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
void *c_QPalette__color_ColorGroup_ColorRole(void *thisObj, int cg, int cr);
// QPalette::color(QPalette::ColorRole cr) const
void *c_QPalette__color_ColorRole(void *thisObj, int cr);
// QPalette::currentColorGroup() const
int c_QPalette__currentColorGroup(void *thisObj);
// QPalette::dark() const
void *c_QPalette__dark(void *thisObj);
// QPalette::highlight() const
void *c_QPalette__highlight(void *thisObj);
// QPalette::highlightedText() const
void *c_QPalette__highlightedText(void *thisObj);
// QPalette::isBrushSet(QPalette::ColorGroup cg, QPalette::ColorRole cr) const
bool c_QPalette__isBrushSet_ColorGroup_ColorRole(void *thisObj, int cg, int cr);
// QPalette::isCopyOf(const QPalette & p) const
bool c_QPalette__isCopyOf_QPalette(void *thisObj, void *p_);
// QPalette::isEqual(QPalette::ColorGroup cr1, QPalette::ColorGroup cr2) const
bool c_QPalette__isEqual_ColorGroup_ColorGroup(void *thisObj, int cr1, int cr2);
// QPalette::light() const
void *c_QPalette__light(void *thisObj);
// QPalette::link() const
void *c_QPalette__link(void *thisObj);
// QPalette::linkVisited() const
void *c_QPalette__linkVisited(void *thisObj);
// QPalette::mid() const
void *c_QPalette__mid(void *thisObj);
// QPalette::midlight() const
void *c_QPalette__midlight(void *thisObj);
// QPalette::placeholderText() const
void *c_QPalette__placeholderText(void *thisObj);
// QPalette::resolve(const QPalette & other) const
void *c_QPalette__resolve_QPalette(void *thisObj, void *other_);
// QPalette::setBrush(QPalette::ColorGroup cg, QPalette::ColorRole cr, const
// QBrush & brush)
void c_QPalette__setBrush_ColorGroup_ColorRole_QBrush(void *thisObj, int cg,
                                                      int cr, void *brush_);
// QPalette::setBrush(QPalette::ColorRole cr, const QBrush & brush)
void c_QPalette__setBrush_ColorRole_QBrush(void *thisObj, int cr, void *brush_);
// QPalette::setColor(QPalette::ColorGroup cg, QPalette::ColorRole cr, const
// QColor & color)
void c_QPalette__setColor_ColorGroup_ColorRole_QColor(void *thisObj, int cg,
                                                      int cr, void *color_);
// QPalette::setColor(QPalette::ColorRole cr, const QColor & color)
void c_QPalette__setColor_ColorRole_QColor(void *thisObj, int cr, void *color_);
// QPalette::setColorGroup(QPalette::ColorGroup cr, const QBrush & windowText,
// const QBrush & button, const QBrush & light, const QBrush & dark, const
// QBrush & mid, const QBrush & text, const QBrush & bright_text, const QBrush &
// base, const QBrush & window)
void c_QPalette__setColorGroup_ColorGroup_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush_QBrush(
    void *thisObj, int cr, void *windowText_, void *button_, void *light_,
    void *dark_, void *mid_, void *text_, void *bright_text_, void *base_,
    void *window_);
// QPalette::setCurrentColorGroup(QPalette::ColorGroup cg)
void c_QPalette__setCurrentColorGroup_ColorGroup(void *thisObj, int cg);
// QPalette::shadow() const
void *c_QPalette__shadow(void *thisObj);
// QPalette::text() const
void *c_QPalette__text(void *thisObj);
// QPalette::toolTipBase() const
void *c_QPalette__toolTipBase(void *thisObj);
// QPalette::toolTipText() const
void *c_QPalette__toolTipText(void *thisObj);
// QPalette::window() const
void *c_QPalette__window(void *thisObj);
// QPalette::windowText() const
void *c_QPalette__windowText(void *thisObj);
void c_QPalette__destructor(void *thisObj);
void c_QPalette_Finalizer(void *cppObj); // QPainter::QPainter()
void *c_QPainter__constructor();
// QPainter::background() const
void *c_QPainter__background(void *thisObj);
// QPainter::beginNativePainting()
void c_QPainter__beginNativePainting(void *thisObj);
// QPainter::boundingRect(const QRect & rect, int flags, const QString & text)
void *c_QPainter__boundingRect_QRect_int_QString(void *thisObj, void *rect_,
                                                 int flags, const char *text_);
// QPainter::boundingRect(const QRectF & rect, const QString & text)
void *c_QPainter__boundingRect_QRectF_QString(void *thisObj, void *rect_,
                                              const char *text_);
// QPainter::boundingRect(const QRectF & rect, int flags, const QString & text)
void *c_QPainter__boundingRect_QRectF_int_QString(void *thisObj, void *rect_,
                                                  int flags, const char *text_);
// QPainter::boundingRect(int x, int y, int w, int h, int flags, const QString &
// text)
void *c_QPainter__boundingRect_int_int_int_int_int_QString(void *thisObj, int x,
                                                           int y, int w, int h,
                                                           int flags,
                                                           const char *text_);
// QPainter::brush() const
void *c_QPainter__brush(void *thisObj);
// QPainter::brushOrigin() const
void *c_QPainter__brushOrigin(void *thisObj);
// QPainter::clipBoundingRect() const
void *c_QPainter__clipBoundingRect(void *thisObj);
// QPainter::clipRegion() const
void *c_QPainter__clipRegion(void *thisObj);
// QPainter::drawArc(const QRect & arg__1, int a, int alen)
void c_QPainter__drawArc_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                       int alen);
// QPainter::drawArc(const QRectF & rect, int a, int alen)
void c_QPainter__drawArc_QRectF_int_int(void *thisObj, void *rect_, int a,
                                        int alen);
// QPainter::drawArc(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawArc_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                 int w, int h, int a, int alen);
// QPainter::drawChord(const QRect & arg__1, int a, int alen)
void c_QPainter__drawChord_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                         int alen);
// QPainter::drawChord(const QRectF & rect, int a, int alen)
void c_QPainter__drawChord_QRectF_int_int(void *thisObj, void *rect_, int a,
                                          int alen);
// QPainter::drawChord(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawChord_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                   int w, int h, int a,
                                                   int alen);
// QPainter::drawConvexPolygon(const QPoint * points, int pointCount)
void c_QPainter__drawConvexPolygon_QPoint_int(void *thisObj, void *points_,
                                              int pointCount);
// QPainter::drawConvexPolygon(const QPointF * points, int pointCount)
void c_QPainter__drawConvexPolygon_QPointF_int(void *thisObj, void *points_,
                                               int pointCount);
// QPainter::drawEllipse(const QPoint & center, int rx, int ry)
void c_QPainter__drawEllipse_QPoint_int_int(void *thisObj, void *center_,
                                            int rx, int ry);
// QPainter::drawEllipse(const QPointF & center, qreal rx, qreal ry)
void c_QPainter__drawEllipse_QPointF_qreal_qreal(void *thisObj, void *center_,
                                                 qreal rx, qreal ry);
// QPainter::drawEllipse(const QRect & r)
void c_QPainter__drawEllipse_QRect(void *thisObj, void *r_);
// QPainter::drawEllipse(const QRectF & r)
void c_QPainter__drawEllipse_QRectF(void *thisObj, void *r_);
// QPainter::drawEllipse(int x, int y, int w, int h)
void c_QPainter__drawEllipse_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h);
// QPainter::drawLine(const QLine & line)
void c_QPainter__drawLine_QLine(void *thisObj, void *line_);
// QPainter::drawLine(const QLineF & line)
void c_QPainter__drawLine_QLineF(void *thisObj, void *line_);
// QPainter::drawLine(const QPoint & p1, const QPoint & p2)
void c_QPainter__drawLine_QPoint_QPoint(void *thisObj, void *p1_, void *p2_);
// QPainter::drawLine(const QPointF & p1, const QPointF & p2)
void c_QPainter__drawLine_QPointF_QPointF(void *thisObj, void *p1_, void *p2_);
// QPainter::drawLine(int x1, int y1, int x2, int y2)
void c_QPainter__drawLine_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                          int y2);
// QPainter::drawLines(const QLine * lines, int lineCount)
void c_QPainter__drawLines_QLine_int(void *thisObj, void *lines_,
                                     int lineCount);
// QPainter::drawLines(const QLineF * lines, int lineCount)
void c_QPainter__drawLines_QLineF_int(void *thisObj, void *lines_,
                                      int lineCount);
// QPainter::drawLines(const QList<QLine > & lines)
void c_QPainter__drawLines_QList_QLine(void *thisObj, void *lines_);
// QPainter::drawLines(const QList<QLineF > & lines)
void c_QPainter__drawLines_QList_QLineF(void *thisObj, void *lines_);
// QPainter::drawLines(const QList<QPoint > & pointPairs)
void c_QPainter__drawLines_QList_QPoint(void *thisObj, void *pointPairs_);
// QPainter::drawLines(const QList<QPointF > & pointPairs)
void c_QPainter__drawLines_QList_QPointF(void *thisObj, void *pointPairs_);
// QPainter::drawLines(const QPoint * pointPairs, int lineCount)
void c_QPainter__drawLines_QPoint_int(void *thisObj, void *pointPairs_,
                                      int lineCount);
// QPainter::drawLines(const QPointF * pointPairs, int lineCount)
void c_QPainter__drawLines_QPointF_int(void *thisObj, void *pointPairs_,
                                       int lineCount);
// QPainter::drawPie(const QRect & arg__1, int a, int alen)
void c_QPainter__drawPie_QRect_int_int(void *thisObj, void *arg__1_, int a,
                                       int alen);
// QPainter::drawPie(const QRectF & rect, int a, int alen)
void c_QPainter__drawPie_QRectF_int_int(void *thisObj, void *rect_, int a,
                                        int alen);
// QPainter::drawPie(int x, int y, int w, int h, int a, int alen)
void c_QPainter__drawPie_int_int_int_int_int_int(void *thisObj, int x, int y,
                                                 int w, int h, int a, int alen);
// QPainter::drawPixmap(const QPoint & p, const QPixmap & pm)
void c_QPainter__drawPixmap_QPoint_QPixmap(void *thisObj, void *p_, void *pm_);
// QPainter::drawPixmap(const QPoint & p, const QPixmap & pm, const QRect & sr)
void c_QPainter__drawPixmap_QPoint_QPixmap_QRect(void *thisObj, void *p_,
                                                 void *pm_, void *sr_);
// QPainter::drawPixmap(const QPointF & p, const QPixmap & pm)
void c_QPainter__drawPixmap_QPointF_QPixmap(void *thisObj, void *p_, void *pm_);
// QPainter::drawPixmap(const QPointF & p, const QPixmap & pm, const QRectF &
// sr)
void c_QPainter__drawPixmap_QPointF_QPixmap_QRectF(void *thisObj, void *p_,
                                                   void *pm_, void *sr_);
// QPainter::drawPixmap(const QRect & r, const QPixmap & pm)
void c_QPainter__drawPixmap_QRect_QPixmap(void *thisObj, void *r_, void *pm_);
// QPainter::drawPixmap(const QRect & targetRect, const QPixmap & pixmap, const
// QRect & sourceRect)
void c_QPainter__drawPixmap_QRect_QPixmap_QRect(void *thisObj,
                                                void *targetRect_,
                                                void *pixmap_,
                                                void *sourceRect_);
// QPainter::drawPixmap(const QRectF & targetRect, const QPixmap & pixmap, const
// QRectF & sourceRect)
void c_QPainter__drawPixmap_QRectF_QPixmap_QRectF(void *thisObj,
                                                  void *targetRect_,
                                                  void *pixmap_,
                                                  void *sourceRect_);
// QPainter::drawPixmap(int x, int y, const QPixmap & pm)
void c_QPainter__drawPixmap_int_int_QPixmap(void *thisObj, int x, int y,
                                            void *pm_);
// QPainter::drawPixmap(int x, int y, const QPixmap & pm, int sx, int sy, int
// sw, int sh)
void c_QPainter__drawPixmap_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, void *pm_, int sx, int sy, int sw, int sh);
// QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm)
void c_QPainter__drawPixmap_int_int_int_int_QPixmap(void *thisObj, int x, int y,
                                                    int w, int h, void *pm_);
// QPainter::drawPixmap(int x, int y, int w, int h, const QPixmap & pm, int sx,
// int sy, int sw, int sh)
void c_QPainter__drawPixmap_int_int_int_int_QPixmap_int_int_int_int(
    void *thisObj, int x, int y, int w, int h, void *pm_, int sx, int sy,
    int sw, int sh);
// QPainter::drawPoint(const QPoint & p)
void c_QPainter__drawPoint_QPoint(void *thisObj, void *p_);
// QPainter::drawPoint(const QPointF & pt)
void c_QPainter__drawPoint_QPointF(void *thisObj, void *pt_);
// QPainter::drawPoint(int x, int y)
void c_QPainter__drawPoint_int_int(void *thisObj, int x, int y);
// QPainter::drawPoints(const QPoint * points, int pointCount)
void c_QPainter__drawPoints_QPoint_int(void *thisObj, void *points_,
                                       int pointCount);
// QPainter::drawPoints(const QPointF * points, int pointCount)
void c_QPainter__drawPoints_QPointF_int(void *thisObj, void *points_,
                                        int pointCount);
// QPainter::drawPolygon(const QPoint * points, int pointCount)
void c_QPainter__drawPolygon_QPoint_int(void *thisObj, void *points_,
                                        int pointCount);
// QPainter::drawPolygon(const QPointF * points, int pointCount)
void c_QPainter__drawPolygon_QPointF_int(void *thisObj, void *points_,
                                         int pointCount);
// QPainter::drawPolyline(const QPoint * points, int pointCount)
void c_QPainter__drawPolyline_QPoint_int(void *thisObj, void *points_,
                                         int pointCount);
// QPainter::drawPolyline(const QPointF * points, int pointCount)
void c_QPainter__drawPolyline_QPointF_int(void *thisObj, void *points_,
                                          int pointCount);
// QPainter::drawRect(const QRect & rect)
void c_QPainter__drawRect_QRect(void *thisObj, void *rect_);
// QPainter::drawRect(const QRectF & rect)
void c_QPainter__drawRect_QRectF(void *thisObj, void *rect_);
// QPainter::drawRect(int x1, int y1, int w, int h)
void c_QPainter__drawRect_int_int_int_int(void *thisObj, int x1, int y1, int w,
                                          int h);
// QPainter::drawRects(const QList<QRect > & rectangles)
void c_QPainter__drawRects_QList_QRect(void *thisObj, void *rectangles_);
// QPainter::drawRects(const QList<QRectF > & rectangles)
void c_QPainter__drawRects_QList_QRectF(void *thisObj, void *rectangles_);
// QPainter::drawRects(const QRect * rects, int rectCount)
void c_QPainter__drawRects_QRect_int(void *thisObj, void *rects_,
                                     int rectCount);
// QPainter::drawRects(const QRectF * rects, int rectCount)
void c_QPainter__drawRects_QRectF_int(void *thisObj, void *rects_,
                                      int rectCount);
// QPainter::drawRoundedRect(const QRect & rect, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_QRect_qreal_qreal(void *thisObj, void *rect_,
                                                   qreal xRadius,
                                                   qreal yRadius);
// QPainter::drawRoundedRect(const QRectF & rect, qreal xRadius, qreal yRadius)
void c_QPainter__drawRoundedRect_QRectF_qreal_qreal(void *thisObj, void *rect_,
                                                    qreal xRadius,
                                                    qreal yRadius);
// QPainter::drawRoundedRect(int x, int y, int w, int h, qreal xRadius, qreal
// yRadius)
void c_QPainter__drawRoundedRect_int_int_int_int_qreal_qreal(
    void *thisObj, int x, int y, int w, int h, qreal xRadius, qreal yRadius);
// QPainter::drawText(const QPoint & p, const QString & s)
void c_QPainter__drawText_QPoint_QString(void *thisObj, void *p_,
                                         const char *s_);
// QPainter::drawText(const QPointF & p, const QString & s)
void c_QPainter__drawText_QPointF_QString(void *thisObj, void *p_,
                                          const char *s_);
// QPainter::drawText(const QPointF & p, const QString & str, int tf, int
// justificationPadding)
void c_QPainter__drawText_QPointF_QString_int_int(void *thisObj, void *p_,
                                                  const char *str_, int tf,
                                                  int justificationPadding);
// QPainter::drawText(const QRect & r, int flags, const QString & text, QRect *
// br)
void c_QPainter__drawText_QRect_int_QString_QRect(void *thisObj, void *r_,
                                                  int flags, const char *text_,
                                                  void *br_);
// QPainter::drawText(const QRectF & r, const QString & text)
void c_QPainter__drawText_QRectF_QString(void *thisObj, void *r_,
                                         const char *text_);
// QPainter::drawText(const QRectF & r, int flags, const QString & text, QRectF
// * br)
void c_QPainter__drawText_QRectF_int_QString_QRectF(void *thisObj, void *r_,
                                                    int flags,
                                                    const char *text_,
                                                    void *br_);
// QPainter::drawText(int x, int y, const QString & s)
void c_QPainter__drawText_int_int_QString(void *thisObj, int x, int y,
                                          const char *s_);
// QPainter::drawText(int x, int y, int w, int h, int flags, const QString &
// text, QRect * br)
void c_QPainter__drawText_int_int_int_int_int_QString_QRect(void *thisObj,
                                                            int x, int y, int w,
                                                            int h, int flags,
                                                            const char *text_,
                                                            void *br_);
// QPainter::drawTiledPixmap(const QRect & arg__1, const QPixmap & arg__2, const
// QPoint & arg__3)
void c_QPainter__drawTiledPixmap_QRect_QPixmap_QPoint(void *thisObj,
                                                      void *arg__1_,
                                                      void *arg__2_,
                                                      void *arg__3_);
// QPainter::drawTiledPixmap(const QRectF & rect, const QPixmap & pm, const
// QPointF & offset)
void c_QPainter__drawTiledPixmap_QRectF_QPixmap_QPointF(void *thisObj,
                                                        void *rect_, void *pm_,
                                                        void *offset_);
// QPainter::drawTiledPixmap(int x, int y, int w, int h, const QPixmap & arg__5,
// int sx, int sy)
void c_QPainter__drawTiledPixmap_int_int_int_int_QPixmap_int_int(
    void *thisObj, int x, int y, int w, int h, void *arg__5_, int sx, int sy);
// QPainter::end()
bool c_QPainter__end(void *thisObj);
// QPainter::endNativePainting()
void c_QPainter__endNativePainting(void *thisObj);
// QPainter::eraseRect(const QRect & arg__1)
void c_QPainter__eraseRect_QRect(void *thisObj, void *arg__1_);
// QPainter::eraseRect(const QRectF & arg__1)
void c_QPainter__eraseRect_QRectF(void *thisObj, void *arg__1_);
// QPainter::eraseRect(int x, int y, int w, int h)
void c_QPainter__eraseRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                           int h);
// QPainter::fillRect(const QRect & arg__1, const QBrush & arg__2)
void c_QPainter__fillRect_QRect_QBrush(void *thisObj, void *arg__1_,
                                       void *arg__2_);
// QPainter::fillRect(const QRect & arg__1, const QColor & color)
void c_QPainter__fillRect_QRect_QColor(void *thisObj, void *arg__1_,
                                       void *color_);
// QPainter::fillRect(const QRectF & arg__1, const QBrush & arg__2)
void c_QPainter__fillRect_QRectF_QBrush(void *thisObj, void *arg__1_,
                                        void *arg__2_);
// QPainter::fillRect(const QRectF & arg__1, const QColor & color)
void c_QPainter__fillRect_QRectF_QColor(void *thisObj, void *arg__1_,
                                        void *color_);
// QPainter::fillRect(int x, int y, int w, int h, const QBrush & arg__5)
void c_QPainter__fillRect_int_int_int_int_QBrush(void *thisObj, int x, int y,
                                                 int w, int h, void *arg__5_);
// QPainter::fillRect(int x, int y, int w, int h, const QColor & color)
void c_QPainter__fillRect_int_int_int_int_QColor(void *thisObj, int x, int y,
                                                 int w, int h, void *color_);
// QPainter::font() const
void *c_QPainter__font(void *thisObj);
// QPainter::hasClipping() const
bool c_QPainter__hasClipping(void *thisObj);
// QPainter::isActive() const
bool c_QPainter__isActive(void *thisObj);
// QPainter::layoutDirection() const
int c_QPainter__layoutDirection(void *thisObj);
// QPainter::opacity() const
qreal c_QPainter__opacity(void *thisObj);
// QPainter::pen() const
void *c_QPainter__pen(void *thisObj);
// QPainter::resetTransform()
void c_QPainter__resetTransform(void *thisObj);
// QPainter::restore()
void c_QPainter__restore(void *thisObj);
// QPainter::rotate(qreal a)
void c_QPainter__rotate_qreal(void *thisObj, qreal a);
// QPainter::save()
void c_QPainter__save(void *thisObj);
// QPainter::scale(qreal sx, qreal sy)
void c_QPainter__scale_qreal_qreal(void *thisObj, qreal sx, qreal sy);
// QPainter::setBackground(const QBrush & bg)
void c_QPainter__setBackground_QBrush(void *thisObj, void *bg_);
// QPainter::setBrush(const QBrush & brush)
void c_QPainter__setBrush_QBrush(void *thisObj, void *brush_);
// QPainter::setBrushOrigin(const QPoint & arg__1)
void c_QPainter__setBrushOrigin_QPoint(void *thisObj, void *arg__1_);
// QPainter::setBrushOrigin(const QPointF & arg__1)
void c_QPainter__setBrushOrigin_QPointF(void *thisObj, void *arg__1_);
// QPainter::setBrushOrigin(int x, int y)
void c_QPainter__setBrushOrigin_int_int(void *thisObj, int x, int y);
// QPainter::setClipRect(const QRect & arg__1)
void c_QPainter__setClipRect_QRect(void *thisObj, void *arg__1_);
// QPainter::setClipRect(const QRectF & arg__1)
void c_QPainter__setClipRect_QRectF(void *thisObj, void *arg__1_);
// QPainter::setClipRect(int x, int y, int w, int h)
void c_QPainter__setClipRect_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h);
// QPainter::setClipRegion(const QRegion & arg__1)
void c_QPainter__setClipRegion_QRegion(void *thisObj, void *arg__1_);
// QPainter::setClipping(bool enable)
void c_QPainter__setClipping_bool(void *thisObj, bool enable);
// QPainter::setFont(const QFont & f)
void c_QPainter__setFont_QFont(void *thisObj, void *f_);
// QPainter::setLayoutDirection(Qt::LayoutDirection direction)
void c_QPainter__setLayoutDirection_LayoutDirection(void *thisObj,
                                                    int direction);
// QPainter::setOpacity(qreal opacity)
void c_QPainter__setOpacity_qreal(void *thisObj, qreal opacity);
// QPainter::setPen(const QColor & color)
void c_QPainter__setPen_QColor(void *thisObj, void *color_);
// QPainter::setPen(const QPen & pen)
void c_QPainter__setPen_QPen(void *thisObj, void *pen_);
// QPainter::setViewTransformEnabled(bool enable)
void c_QPainter__setViewTransformEnabled_bool(void *thisObj, bool enable);
// QPainter::setViewport(const QRect & viewport)
void c_QPainter__setViewport_QRect(void *thisObj, void *viewport_);
// QPainter::setViewport(int x, int y, int w, int h)
void c_QPainter__setViewport_int_int_int_int(void *thisObj, int x, int y, int w,
                                             int h);
// QPainter::setWindow(const QRect & window)
void c_QPainter__setWindow_QRect(void *thisObj, void *window_);
// QPainter::setWindow(int x, int y, int w, int h)
void c_QPainter__setWindow_int_int_int_int(void *thisObj, int x, int y, int w,
                                           int h);
// QPainter::setWorldMatrixEnabled(bool enabled)
void c_QPainter__setWorldMatrixEnabled_bool(void *thisObj, bool enabled);
// QPainter::shear(qreal sh, qreal sv)
void c_QPainter__shear_qreal_qreal(void *thisObj, qreal sh, qreal sv);
// QPainter::translate(const QPoint & offset)
void c_QPainter__translate_QPoint(void *thisObj, void *offset_);
// QPainter::translate(const QPointF & offset)
void c_QPainter__translate_QPointF(void *thisObj, void *offset_);
// QPainter::translate(qreal dx, qreal dy)
void c_QPainter__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QPainter::viewTransformEnabled() const
bool c_QPainter__viewTransformEnabled(void *thisObj);
// QPainter::viewport() const
void *c_QPainter__viewport(void *thisObj);
// QPainter::window() const
void *c_QPainter__window(void *thisObj);
// QPainter::worldMatrixEnabled() const
bool c_QPainter__worldMatrixEnabled(void *thisObj);
void c_QPainter__destructor(void *thisObj);
void c_QPainter_Finalizer(void *cppObj); // QObject::QObject(QObject * parent)
void *c_QObject__constructor_QObject(void *parent_);
// QObject::blockSignals(bool b)
bool c_QObject__blockSignals_bool(void *thisObj, bool b);
// QObject::children() const
void *c_QObject__children(void *thisObj);
// QObject::customEvent(QEvent * event)
void c_QObject__customEvent_QEvent(void *thisObj, void *event_);
// QObject::deleteLater()
void c_QObject__deleteLater(void *thisObj);
// QObject::destroyed(QObject * arg__1)
void c_QObject__destroyed_QObject(void *thisObj, void *arg__1_);
void c_QObject__onDestroyed_QObject(
    void *thisObj, void *contextQObject,
    void *callback); // QObject::disconnect(const QObject * receiver, const char
                     // * member) const
bool c_QObject__disconnect_QObject_char(void *thisObj, void *receiver_,
                                        const char *member);
// QObject::disconnect(const QObject * sender, const char * signal, const
// QObject * receiver, const char * member)
bool c_static_QObject__disconnect_QObject_char_QObject_char(void *sender_,
                                                            const char *signal,
                                                            void *receiver_,
                                                            const char *member);
// QObject::disconnect(const char * signal, const QObject * receiver, const char
// * member) const
bool c_QObject__disconnect_char_QObject_char(void *thisObj, const char *signal,
                                             void *receiver_,
                                             const char *member);
// QObject::dumpObjectInfo() const
void c_QObject__dumpObjectInfo(void *thisObj);
// QObject::dumpObjectTree() const
void c_QObject__dumpObjectTree(void *thisObj);
// QObject::dynamicPropertyNames() const
void *c_QObject__dynamicPropertyNames(void *thisObj);
// QObject::event(QEvent * event)
bool c_QObject__event_QEvent(void *thisObj, void *event_);
// QObject::eventFilter(QObject * watched, QEvent * event)
bool c_QObject__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_);
// QObject::inherits(const char * classname) const
bool c_QObject__inherits_char(void *thisObj, const char *classname);
// QObject::installEventFilter(QObject * filterObj)
void c_QObject__installEventFilter_QObject(void *thisObj, void *filterObj_);
// QObject::isQuickItemType() const
bool c_QObject__isQuickItemType(void *thisObj);
// QObject::isWidgetType() const
bool c_QObject__isWidgetType(void *thisObj);
// QObject::isWindowType() const
bool c_QObject__isWindowType(void *thisObj);
// QObject::killTimer(int id)
void c_QObject__killTimer_int(void *thisObj, int id);
// QObject::objectName() const
void *c_QObject__objectName(void *thisObj);
// QObject::parent() const
void *c_QObject__parent(void *thisObj);
// QObject::property(const char * name) const
void *c_QObject__property_char(void *thisObj, const char *name);
// QObject::receivers(const char * signal) const
int c_QObject__receivers_char(void *thisObj, const char *signal);
// QObject::removeEventFilter(QObject * obj)
void c_QObject__removeEventFilter_QObject(void *thisObj, void *obj_);
// QObject::sender() const
void *c_QObject__sender(void *thisObj);
// QObject::senderSignalIndex() const
int c_QObject__senderSignalIndex(void *thisObj);
// QObject::setParent(QObject * parent)
void c_QObject__setParent_QObject(void *thisObj, void *parent_);
// QObject::setProperty(const char * name, const QVariant & value)
bool c_QObject__setProperty_char_QVariant(void *thisObj, const char *name,
                                          void *value_);
// QObject::signalsBlocked() const
bool c_QObject__signalsBlocked(void *thisObj);
// QObject::startTimer(int interval)
int c_QObject__startTimer_int(void *thisObj, int interval);
// QObject::tr(const char * s, const char * c, int n)
void *c_static_QObject__tr_char_char_int(const char *s, const char *c, int n);
void c_QObject__destructor(void *thisObj);
void c_QObject__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
void c_QObject_Finalizer(void *cppObj); // QWindow::QWindow()
void *c_QWindow__constructor();
// QWindow::QWindow(QWindow * parent)
void *c_QWindow__constructor_QWindow(void *parent_);
// QWindow::activeChanged()
void c_QWindow__activeChanged(void *thisObj);
void c_QWindow__onActiveChanged(void *thisObj, void *contextQObject,
                                void *callback); // QWindow::alert(int msec)
void c_QWindow__alert_int(void *thisObj, int msec);
// QWindow::baseSize() const
void *c_QWindow__baseSize(void *thisObj);
// QWindow::close()
bool c_QWindow__close(void *thisObj);
// QWindow::create()
void c_QWindow__create(void *thisObj);
// QWindow::customEvent(QEvent * event)
void c_QWindow__customEvent_QEvent(void *thisObj, void *event_);
// QWindow::destroy()
void c_QWindow__destroy(void *thisObj);
// QWindow::devicePixelRatio() const
qreal c_QWindow__devicePixelRatio(void *thisObj);
// QWindow::event(QEvent * arg__1)
bool c_QWindow__event_QEvent(void *thisObj, void *arg__1_);
// QWindow::eventFilter(QObject * watched, QEvent * event)
bool c_QWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_);
// QWindow::filePath() const
void *c_QWindow__filePath(void *thisObj);
// QWindow::focusObject() const
void *c_QWindow__focusObject(void *thisObj);
// QWindow::focusObjectChanged(QObject * object)
void c_QWindow__focusObjectChanged_QObject(void *thisObj, void *object_);
void c_QWindow__onFocusObjectChanged_QObject(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::frameGeometry() const
void *c_QWindow__frameGeometry(void *thisObj);
// QWindow::framePosition() const
void *c_QWindow__framePosition(void *thisObj);
// QWindow::geometry() const
void *c_QWindow__geometry(void *thisObj);
// QWindow::height() const
int c_QWindow__height(void *thisObj);
// QWindow::heightChanged(int arg)
void c_QWindow__heightChanged_int(void *thisObj, int arg);
void c_QWindow__onHeightChanged_int(void *thisObj, void *contextQObject,
                                    void *callback); // QWindow::hide()
void c_QWindow__hide(void *thisObj);
// QWindow::icon() const
void *c_QWindow__icon(void *thisObj);
// QWindow::isActive() const
bool c_QWindow__isActive(void *thisObj);
// QWindow::isAncestorOf(const QWindow * child) const
bool c_QWindow__isAncestorOf_QWindow(void *thisObj, void *child_);
// QWindow::isExposed() const
bool c_QWindow__isExposed(void *thisObj);
// QWindow::isModal() const
bool c_QWindow__isModal(void *thisObj);
// QWindow::isTopLevel() const
bool c_QWindow__isTopLevel(void *thisObj);
// QWindow::isVisible() const
bool c_QWindow__isVisible(void *thisObj);
// QWindow::lower()
void c_QWindow__lower(void *thisObj);
// QWindow::mapFromGlobal(const QPoint & pos) const
void *c_QWindow__mapFromGlobal_QPoint(void *thisObj, void *pos_);
// QWindow::mapFromGlobal(const QPointF & pos) const
void *c_QWindow__mapFromGlobal_QPointF(void *thisObj, void *pos_);
// QWindow::mapToGlobal(const QPoint & pos) const
void *c_QWindow__mapToGlobal_QPoint(void *thisObj, void *pos_);
// QWindow::mapToGlobal(const QPointF & pos) const
void *c_QWindow__mapToGlobal_QPointF(void *thisObj, void *pos_);
// QWindow::mask() const
void *c_QWindow__mask(void *thisObj);
// QWindow::maximumHeight() const
int c_QWindow__maximumHeight(void *thisObj);
// QWindow::maximumHeightChanged(int arg)
void c_QWindow__maximumHeightChanged_int(void *thisObj, int arg);
void c_QWindow__onMaximumHeightChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::maximumSize() const
void *c_QWindow__maximumSize(void *thisObj);
// QWindow::maximumWidth() const
int c_QWindow__maximumWidth(void *thisObj);
// QWindow::maximumWidthChanged(int arg)
void c_QWindow__maximumWidthChanged_int(void *thisObj, int arg);
void c_QWindow__onMaximumWidthChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::minimumHeight() const
int c_QWindow__minimumHeight(void *thisObj);
// QWindow::minimumHeightChanged(int arg)
void c_QWindow__minimumHeightChanged_int(void *thisObj, int arg);
void c_QWindow__onMinimumHeightChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::minimumSize() const
void *c_QWindow__minimumSize(void *thisObj);
// QWindow::minimumWidth() const
int c_QWindow__minimumWidth(void *thisObj);
// QWindow::minimumWidthChanged(int arg)
void c_QWindow__minimumWidthChanged_int(void *thisObj, int arg);
void c_QWindow__onMinimumWidthChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QWindow::mouseMoveEvent(QMouseEvent * arg__1)
void c_QWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QWindow::mousePressEvent(QMouseEvent * arg__1)
void c_QWindow__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QWindow::mouseReleaseEvent(QMouseEvent * arg__1)
void c_QWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QWindow::opacity() const
qreal c_QWindow__opacity(void *thisObj);
// QWindow::opacityChanged(qreal opacity)
void c_QWindow__opacityChanged_qreal(void *thisObj, qreal opacity);
void c_QWindow__onOpacityChanged_qreal(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::paintEvent(QPaintEvent * arg__1)
void c_QWindow__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QWindow::parent() const
void *c_QWindow__parent(void *thisObj);
// QWindow::position() const
void *c_QWindow__position(void *thisObj);
// QWindow::raise()
void c_QWindow__raise(void *thisObj);
// QWindow::requestActivate()
void c_QWindow__requestActivate(void *thisObj);
// QWindow::requestUpdate()
void c_QWindow__requestUpdate(void *thisObj);
// QWindow::resize(const QSize & newSize)
void c_QWindow__resize_QSize(void *thisObj, void *newSize_);
// QWindow::resize(int w, int h)
void c_QWindow__resize_int_int(void *thisObj, int w, int h);
// QWindow::setBaseSize(const QSize & size)
void c_QWindow__setBaseSize_QSize(void *thisObj, void *size_);
// QWindow::setFilePath(const QString & filePath)
void c_QWindow__setFilePath_QString(void *thisObj, const char *filePath_);
// QWindow::setFramePosition(const QPoint & point)
void c_QWindow__setFramePosition_QPoint(void *thisObj, void *point_);
// QWindow::setGeometry(const QRect & rect)
void c_QWindow__setGeometry_QRect(void *thisObj, void *rect_);
// QWindow::setGeometry(int posx, int posy, int w, int h)
void c_QWindow__setGeometry_int_int_int_int(void *thisObj, int posx, int posy,
                                            int w, int h);
// QWindow::setHeight(int arg)
void c_QWindow__setHeight_int(void *thisObj, int arg);
// QWindow::setIcon(const QIcon & icon)
void c_QWindow__setIcon_QIcon(void *thisObj, void *icon_);
// QWindow::setKeyboardGrabEnabled(bool grab)
bool c_QWindow__setKeyboardGrabEnabled_bool(void *thisObj, bool grab);
// QWindow::setMask(const QRegion & region)
void c_QWindow__setMask_QRegion(void *thisObj, void *region_);
// QWindow::setMaximumHeight(int h)
void c_QWindow__setMaximumHeight_int(void *thisObj, int h);
// QWindow::setMaximumSize(const QSize & size)
void c_QWindow__setMaximumSize_QSize(void *thisObj, void *size_);
// QWindow::setMaximumWidth(int w)
void c_QWindow__setMaximumWidth_int(void *thisObj, int w);
// QWindow::setMinimumHeight(int h)
void c_QWindow__setMinimumHeight_int(void *thisObj, int h);
// QWindow::setMinimumSize(const QSize & size)
void c_QWindow__setMinimumSize_QSize(void *thisObj, void *size_);
// QWindow::setMinimumWidth(int w)
void c_QWindow__setMinimumWidth_int(void *thisObj, int w);
// QWindow::setMouseGrabEnabled(bool grab)
bool c_QWindow__setMouseGrabEnabled_bool(void *thisObj, bool grab);
// QWindow::setOpacity(qreal level)
void c_QWindow__setOpacity_qreal(void *thisObj, qreal level);
// QWindow::setPosition(const QPoint & pt)
void c_QWindow__setPosition_QPoint(void *thisObj, void *pt_);
// QWindow::setPosition(int posx, int posy)
void c_QWindow__setPosition_int_int(void *thisObj, int posx, int posy);
// QWindow::setSizeIncrement(const QSize & size)
void c_QWindow__setSizeIncrement_QSize(void *thisObj, void *size_);
// QWindow::setTitle(const QString & arg__1)
void c_QWindow__setTitle_QString(void *thisObj, const char *arg__1_);
// QWindow::setTransientParent(QWindow * parent)
void c_QWindow__setTransientParent_QWindow(void *thisObj, void *parent_);
// QWindow::setVisible(bool visible)
void c_QWindow__setVisible_bool(void *thisObj, bool visible);
// QWindow::setWidth(int arg)
void c_QWindow__setWidth_int(void *thisObj, int arg);
// QWindow::setX(int arg)
void c_QWindow__setX_int(void *thisObj, int arg);
// QWindow::setY(int arg)
void c_QWindow__setY_int(void *thisObj, int arg);
// QWindow::show()
void c_QWindow__show(void *thisObj);
// QWindow::showFullScreen()
void c_QWindow__showFullScreen(void *thisObj);
// QWindow::showMaximized()
void c_QWindow__showMaximized(void *thisObj);
// QWindow::showMinimized()
void c_QWindow__showMinimized(void *thisObj);
// QWindow::showNormal()
void c_QWindow__showNormal(void *thisObj);
// QWindow::size() const
void *c_QWindow__size(void *thisObj);
// QWindow::sizeIncrement() const
void *c_QWindow__sizeIncrement(void *thisObj);
// QWindow::startSystemMove()
bool c_QWindow__startSystemMove(void *thisObj);
// QWindow::title() const
void *c_QWindow__title(void *thisObj);
// QWindow::tr(const char * s, const char * c, int n)
void *c_static_QWindow__tr_char_char_int(const char *s, const char *c, int n);
// QWindow::transientParent() const
void *c_QWindow__transientParent(void *thisObj);
// QWindow::transientParentChanged(QWindow * transientParent)
void c_QWindow__transientParentChanged_QWindow(void *thisObj,
                                               void *transientParent_);
void c_QWindow__onTransientParentChanged_QWindow(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::unsetCursor()
void c_QWindow__unsetCursor(void *thisObj);
// QWindow::visibleChanged(bool arg)
void c_QWindow__visibleChanged_bool(void *thisObj, bool arg);
void c_QWindow__onVisibleChanged_bool(void *thisObj, void *contextQObject,
                                      void *callback); // QWindow::width() const
int c_QWindow__width(void *thisObj);
// QWindow::widthChanged(int arg)
void c_QWindow__widthChanged_int(void *thisObj, int arg);
void c_QWindow__onWidthChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QWindow::windowTitleChanged(const QString & title)
void c_QWindow__windowTitleChanged_QString(void *thisObj, const char *title_);
void c_QWindow__onWindowTitleChanged_QString(
    void *thisObj, void *contextQObject, void *callback); // QWindow::x() const
int c_QWindow__x(void *thisObj);
// QWindow::xChanged(int arg)
void c_QWindow__xChanged_int(void *thisObj, int arg);
void c_QWindow__onXChanged_int(void *thisObj, void *contextQObject,
                               void *callback); // QWindow::y() const
int c_QWindow__y(void *thisObj);
// QWindow::yChanged(int arg)
void c_QWindow__yChanged_int(void *thisObj, int arg);
void c_QWindow__onYChanged_int(void *thisObj, void *contextQObject,
                               void *callback);
void c_QWindow__destructor(void *thisObj);
void c_QWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
void c_QWindow_Finalizer(void *cppObj); // QWidget::QWidget(QWidget * parent)
void *c_QWidget__constructor_QWidget(void *parent_);
// QWidget::acceptDrops() const
bool c_QWidget__acceptDrops(void *thisObj);
// QWidget::accessibleDescription() const
void *c_QWidget__accessibleDescription(void *thisObj);
// QWidget::accessibleName() const
void *c_QWidget__accessibleName(void *thisObj);
// QWidget::actions() const
void *c_QWidget__actions(void *thisObj);
// QWidget::activateWindow()
void c_QWidget__activateWindow(void *thisObj);
// QWidget::addAction(QAction * action)
void c_QWidget__addAction_QAction(void *thisObj, void *action_);
// QWidget::addAction(const QIcon & icon, const QString & text)
void *c_QWidget__addAction_QIcon_QString(void *thisObj, void *icon_,
                                         const char *text_);
// QWidget::addAction(const QIcon & icon, const QString & text, const
// QKeySequence & shortcut)
void *c_QWidget__addAction_QIcon_QString_QKeySequence(void *thisObj,
                                                      void *icon_,
                                                      const char *text_,
                                                      void *shortcut_);
// QWidget::addAction(const QIcon & icon, const QString & text, const
// QKeySequence & shortcut, const QObject * receiver, const char * member)
void *c_QWidget__addAction_QIcon_QString_QKeySequence_QObject_char(
    void *thisObj, void *icon_, const char *text_, void *shortcut_,
    void *receiver_, const char *member);
// QWidget::addAction(const QIcon & icon, const QString & text, const QObject *
// receiver, const char * member)
void *c_QWidget__addAction_QIcon_QString_QObject_char(void *thisObj,
                                                      void *icon_,
                                                      const char *text_,
                                                      void *receiver_,
                                                      const char *member);
// QWidget::addAction(const QString & text)
void *c_QWidget__addAction_QString(void *thisObj, const char *text_);
// QWidget::addAction(const QString & text, const QKeySequence & shortcut)
void *c_QWidget__addAction_QString_QKeySequence(void *thisObj,
                                                const char *text_,
                                                void *shortcut_);
// QWidget::addAction(const QString & text, const QKeySequence & shortcut, const
// QObject * receiver, const char * member)
void *c_QWidget__addAction_QString_QKeySequence_QObject_char(
    void *thisObj, const char *text_, void *shortcut_, void *receiver_,
    const char *member);
// QWidget::addAction(const QString & text, const QObject * receiver, const char
// * member)
void *c_QWidget__addAction_QString_QObject_char(void *thisObj,
                                                const char *text_,
                                                void *receiver_,
                                                const char *member);
// QWidget::addActions(const QList<QAction* > & actions)
void c_QWidget__addActions_QList_QAction(void *thisObj, void *actions_);
// QWidget::adjustSize()
void c_QWidget__adjustSize(void *thisObj);
// QWidget::autoFillBackground() const
bool c_QWidget__autoFillBackground(void *thisObj);
// QWidget::backgroundRole() const
int c_QWidget__backgroundRole(void *thisObj);
// QWidget::baseSize() const
void *c_QWidget__baseSize(void *thisObj);
// QWidget::changeEvent(QEvent * arg__1)
void c_QWidget__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QWidget::childAt(const QPoint & p) const
void *c_QWidget__childAt_QPoint(void *thisObj, void *p_);
// QWidget::childAt(int x, int y) const
void *c_QWidget__childAt_int_int(void *thisObj, int x, int y);
// QWidget::childrenRect() const
void *c_QWidget__childrenRect(void *thisObj);
// QWidget::childrenRegion() const
void *c_QWidget__childrenRegion(void *thisObj);
// QWidget::clearFocus()
void c_QWidget__clearFocus(void *thisObj);
// QWidget::clearMask()
void c_QWidget__clearMask(void *thisObj);
// QWidget::close()
bool c_QWidget__close(void *thisObj);
// QWidget::contentsRect() const
void *c_QWidget__contentsRect(void *thisObj);
// QWidget::create()
void c_QWidget__create(void *thisObj);
// QWidget::createWinId()
void c_QWidget__createWinId(void *thisObj);
// QWidget::createWindowContainer(QWindow * window, QWidget * parent)
void *c_static_QWidget__createWindowContainer_QWindow_QWidget(void *window_,
                                                              void *parent_);
// QWidget::customContextMenuRequested(const QPoint & pos)
void c_QWidget__customContextMenuRequested_QPoint(void *thisObj, void *pos_);
void c_QWidget__onCustomContextMenuRequested_QPoint(
    void *thisObj, void *contextQObject,
    void *callback); // QWidget::customEvent(QEvent * event)
void c_QWidget__customEvent_QEvent(void *thisObj, void *event_);
// QWidget::destroy(bool destroyWindow, bool destroySubWindows)
void c_QWidget__destroy_bool_bool(void *thisObj, bool destroyWindow,
                                  bool destroySubWindows);
// QWidget::devType() const
int c_QWidget__devType(void *thisObj);
// QWidget::ensurePolished() const
void c_QWidget__ensurePolished(void *thisObj);
// QWidget::event(QEvent * event)
bool c_QWidget__event_QEvent(void *thisObj, void *event_);
// QWidget::eventFilter(QObject * watched, QEvent * event)
bool c_QWidget__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_);
// QWidget::focusNextChild()
bool c_QWidget__focusNextChild(void *thisObj);
// QWidget::focusNextPrevChild(bool next)
bool c_QWidget__focusNextPrevChild_bool(void *thisObj, bool next);
// QWidget::focusPreviousChild()
bool c_QWidget__focusPreviousChild(void *thisObj);
// QWidget::focusProxy() const
void *c_QWidget__focusProxy(void *thisObj);
// QWidget::focusWidget() const
void *c_QWidget__focusWidget(void *thisObj);
// QWidget::font() const
void *c_QWidget__font(void *thisObj);
// QWidget::foregroundRole() const
int c_QWidget__foregroundRole(void *thisObj);
// QWidget::frameGeometry() const
void *c_QWidget__frameGeometry(void *thisObj);
// QWidget::frameSize() const
void *c_QWidget__frameSize(void *thisObj);
// QWidget::geometry() const
void *c_QWidget__geometry(void *thisObj);
// QWidget::grab(const QRect & rectangle)
void *c_QWidget__grab_QRect(void *thisObj, void *rectangle_);
// QWidget::grabKeyboard()
void c_QWidget__grabKeyboard(void *thisObj);
// QWidget::grabMouse()
void c_QWidget__grabMouse(void *thisObj);
// QWidget::grabShortcut(const QKeySequence & key)
int c_QWidget__grabShortcut_QKeySequence(void *thisObj, void *key_);
// QWidget::hasFocus() const
bool c_QWidget__hasFocus(void *thisObj);
// QWidget::hasHeightForWidth() const
bool c_QWidget__hasHeightForWidth(void *thisObj);
// QWidget::hasMouseTracking() const
bool c_QWidget__hasMouseTracking(void *thisObj);
// QWidget::hasTabletTracking() const
bool c_QWidget__hasTabletTracking(void *thisObj);
// QWidget::height() const
int c_QWidget__height(void *thisObj);
// QWidget::heightForWidth(int arg__1) const
int c_QWidget__heightForWidth_int(void *thisObj, int arg__1);
// QWidget::hide()
void c_QWidget__hide(void *thisObj);
// QWidget::initPainter(QPainter * painter) const
void c_QWidget__initPainter_QPainter(void *thisObj, void *painter_);
// QWidget::insertAction(QAction * before, QAction * action)
void c_QWidget__insertAction_QAction_QAction(void *thisObj, void *before_,
                                             void *action_);
// QWidget::insertActions(QAction * before, const QList<QAction* > & actions)
void c_QWidget__insertActions_QAction_QList_QAction(void *thisObj,
                                                    void *before_,
                                                    void *actions_);
// QWidget::isActiveWindow() const
bool c_QWidget__isActiveWindow(void *thisObj);
// QWidget::isAncestorOf(const QWidget * child) const
bool c_QWidget__isAncestorOf_QWidget(void *thisObj, void *child_);
// QWidget::isEnabled() const
bool c_QWidget__isEnabled(void *thisObj);
// QWidget::isEnabledTo(const QWidget * arg__1) const
bool c_QWidget__isEnabledTo_QWidget(void *thisObj, void *arg__1_);
// QWidget::isFullScreen() const
bool c_QWidget__isFullScreen(void *thisObj);
// QWidget::isHidden() const
bool c_QWidget__isHidden(void *thisObj);
// QWidget::isLeftToRight() const
bool c_QWidget__isLeftToRight(void *thisObj);
// QWidget::isMaximized() const
bool c_QWidget__isMaximized(void *thisObj);
// QWidget::isMinimized() const
bool c_QWidget__isMinimized(void *thisObj);
// QWidget::isModal() const
bool c_QWidget__isModal(void *thisObj);
// QWidget::isRightToLeft() const
bool c_QWidget__isRightToLeft(void *thisObj);
// QWidget::isVisible() const
bool c_QWidget__isVisible(void *thisObj);
// QWidget::isVisibleTo(const QWidget * arg__1) const
bool c_QWidget__isVisibleTo_QWidget(void *thisObj, void *arg__1_);
// QWidget::isWindow() const
bool c_QWidget__isWindow(void *thisObj);
// QWidget::isWindowModified() const
bool c_QWidget__isWindowModified(void *thisObj);
// QWidget::keyboardGrabber()
void *c_static_QWidget__keyboardGrabber();
// QWidget::layout() const
void *c_QWidget__layout(void *thisObj);
// QWidget::layoutDirection() const
int c_QWidget__layoutDirection(void *thisObj);
// QWidget::leaveEvent(QEvent * event)
void c_QWidget__leaveEvent_QEvent(void *thisObj, void *event_);
// QWidget::lower()
void c_QWidget__lower(void *thisObj);
// QWidget::mapFrom(const QWidget * arg__1, const QPoint & arg__2) const
void *c_QWidget__mapFrom_QWidget_QPoint(void *thisObj, void *arg__1_,
                                        void *arg__2_);
// QWidget::mapFrom(const QWidget * arg__1, const QPointF & arg__2) const
void *c_QWidget__mapFrom_QWidget_QPointF(void *thisObj, void *arg__1_,
                                         void *arg__2_);
// QWidget::mapFromGlobal(const QPoint & arg__1) const
void *c_QWidget__mapFromGlobal_QPoint(void *thisObj, void *arg__1_);
// QWidget::mapFromGlobal(const QPointF & arg__1) const
void *c_QWidget__mapFromGlobal_QPointF(void *thisObj, void *arg__1_);
// QWidget::mapFromParent(const QPoint & arg__1) const
void *c_QWidget__mapFromParent_QPoint(void *thisObj, void *arg__1_);
// QWidget::mapFromParent(const QPointF & arg__1) const
void *c_QWidget__mapFromParent_QPointF(void *thisObj, void *arg__1_);
// QWidget::mapTo(const QWidget * arg__1, const QPoint & arg__2) const
void *c_QWidget__mapTo_QWidget_QPoint(void *thisObj, void *arg__1_,
                                      void *arg__2_);
// QWidget::mapTo(const QWidget * arg__1, const QPointF & arg__2) const
void *c_QWidget__mapTo_QWidget_QPointF(void *thisObj, void *arg__1_,
                                       void *arg__2_);
// QWidget::mapToGlobal(const QPoint & arg__1) const
void *c_QWidget__mapToGlobal_QPoint(void *thisObj, void *arg__1_);
// QWidget::mapToGlobal(const QPointF & arg__1) const
void *c_QWidget__mapToGlobal_QPointF(void *thisObj, void *arg__1_);
// QWidget::mapToParent(const QPoint & arg__1) const
void *c_QWidget__mapToParent_QPoint(void *thisObj, void *arg__1_);
// QWidget::mapToParent(const QPointF & arg__1) const
void *c_QWidget__mapToParent_QPointF(void *thisObj, void *arg__1_);
// QWidget::mask() const
void *c_QWidget__mask(void *thisObj);
// QWidget::maximumHeight() const
int c_QWidget__maximumHeight(void *thisObj);
// QWidget::maximumSize() const
void *c_QWidget__maximumSize(void *thisObj);
// QWidget::maximumWidth() const
int c_QWidget__maximumWidth(void *thisObj);
// QWidget::minimumHeight() const
int c_QWidget__minimumHeight(void *thisObj);
// QWidget::minimumSize() const
void *c_QWidget__minimumSize(void *thisObj);
// QWidget::minimumSizeHint() const
void *c_QWidget__minimumSizeHint(void *thisObj);
// QWidget::minimumWidth() const
int c_QWidget__minimumWidth(void *thisObj);
// QWidget::mouseDoubleClickEvent(QMouseEvent * event)
void c_QWidget__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QWidget::mouseGrabber()
void *c_static_QWidget__mouseGrabber();
// QWidget::mouseMoveEvent(QMouseEvent * event)
void c_QWidget__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QWidget::mousePressEvent(QMouseEvent * event)
void c_QWidget__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QWidget::mouseReleaseEvent(QMouseEvent * event)
void c_QWidget__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QWidget::move(const QPoint & arg__1)
void c_QWidget__move_QPoint(void *thisObj, void *arg__1_);
// QWidget::move(int x, int y)
void c_QWidget__move_int_int(void *thisObj, int x, int y);
// QWidget::nativeParentWidget() const
void *c_QWidget__nativeParentWidget(void *thisObj);
// QWidget::nextInFocusChain() const
void *c_QWidget__nextInFocusChain(void *thisObj);
// QWidget::normalGeometry() const
void *c_QWidget__normalGeometry(void *thisObj);
// QWidget::paintEvent(QPaintEvent * event)
void c_QWidget__paintEvent_QPaintEvent(void *thisObj, void *event_);
// QWidget::palette() const
void *c_QWidget__palette(void *thisObj);
// QWidget::parentWidget() const
void *c_QWidget__parentWidget(void *thisObj);
// QWidget::pos() const
void *c_QWidget__pos(void *thisObj);
// QWidget::previousInFocusChain() const
void *c_QWidget__previousInFocusChain(void *thisObj);
// QWidget::raise()
void c_QWidget__raise(void *thisObj);
// QWidget::rect() const
void *c_QWidget__rect(void *thisObj);
// QWidget::releaseKeyboard()
void c_QWidget__releaseKeyboard(void *thisObj);
// QWidget::releaseMouse()
void c_QWidget__releaseMouse(void *thisObj);
// QWidget::releaseShortcut(int id)
void c_QWidget__releaseShortcut_int(void *thisObj, int id);
// QWidget::removeAction(QAction * action)
void c_QWidget__removeAction_QAction(void *thisObj, void *action_);
// QWidget::render(QPainter * painter, const QPoint & targetOffset, const
// QRegion & sourceRegion)
void c_QWidget__render_QPainter_QPoint_QRegion(void *thisObj, void *painter_,
                                               void *targetOffset_,
                                               void *sourceRegion_);
// QWidget::repaint()
void c_QWidget__repaint(void *thisObj);
// QWidget::repaint(const QRect & arg__1)
void c_QWidget__repaint_QRect(void *thisObj, void *arg__1_);
// QWidget::repaint(const QRegion & arg__1)
void c_QWidget__repaint_QRegion(void *thisObj, void *arg__1_);
// QWidget::repaint(int x, int y, int w, int h)
void c_QWidget__repaint_int_int_int_int(void *thisObj, int x, int y, int w,
                                        int h);
// QWidget::resize(const QSize & arg__1)
void c_QWidget__resize_QSize(void *thisObj, void *arg__1_);
// QWidget::resize(int w, int h)
void c_QWidget__resize_int_int(void *thisObj, int w, int h);
// QWidget::restoreGeometry(const QByteArray & geometry)
bool c_QWidget__restoreGeometry_QByteArray(void *thisObj, void *geometry_);
// QWidget::saveGeometry() const
void *c_QWidget__saveGeometry(void *thisObj);
// QWidget::scroll(int dx, int dy)
void c_QWidget__scroll_int_int(void *thisObj, int dx, int dy);
// QWidget::scroll(int dx, int dy, const QRect & arg__3)
void c_QWidget__scroll_int_int_QRect(void *thisObj, int dx, int dy,
                                     void *arg__3_);
// QWidget::setAcceptDrops(bool on)
void c_QWidget__setAcceptDrops_bool(void *thisObj, bool on);
// QWidget::setAccessibleDescription(const QString & description)
void c_QWidget__setAccessibleDescription_QString(void *thisObj,
                                                 const char *description_);
// QWidget::setAccessibleName(const QString & name)
void c_QWidget__setAccessibleName_QString(void *thisObj, const char *name_);
// QWidget::setAutoFillBackground(bool enabled)
void c_QWidget__setAutoFillBackground_bool(void *thisObj, bool enabled);
// QWidget::setBackgroundRole(QPalette::ColorRole arg__1)
void c_QWidget__setBackgroundRole_ColorRole(void *thisObj, int arg__1);
// QWidget::setBaseSize(const QSize & arg__1)
void c_QWidget__setBaseSize_QSize(void *thisObj, void *arg__1_);
// QWidget::setBaseSize(int basew, int baseh)
void c_QWidget__setBaseSize_int_int(void *thisObj, int basew, int baseh);
// QWidget::setContentsMargins(int left, int top, int right, int bottom)
void c_QWidget__setContentsMargins_int_int_int_int(void *thisObj, int left,
                                                   int top, int right,
                                                   int bottom);
// QWidget::setDisabled(bool arg__1)
void c_QWidget__setDisabled_bool(void *thisObj, bool arg__1);
// QWidget::setEnabled(bool arg__1)
void c_QWidget__setEnabled_bool(void *thisObj, bool arg__1);
// QWidget::setFixedHeight(int h)
void c_QWidget__setFixedHeight_int(void *thisObj, int h);
// QWidget::setFixedSize(const QSize & arg__1)
void c_QWidget__setFixedSize_QSize(void *thisObj, void *arg__1_);
// QWidget::setFixedSize(int w, int h)
void c_QWidget__setFixedSize_int_int(void *thisObj, int w, int h);
// QWidget::setFixedWidth(int w)
void c_QWidget__setFixedWidth_int(void *thisObj, int w);
// QWidget::setFocus()
void c_QWidget__setFocus(void *thisObj);
// QWidget::setFocusProxy(QWidget * arg__1)
void c_QWidget__setFocusProxy_QWidget(void *thisObj, void *arg__1_);
// QWidget::setFont(const QFont & arg__1)
void c_QWidget__setFont_QFont(void *thisObj, void *arg__1_);
// QWidget::setForegroundRole(QPalette::ColorRole arg__1)
void c_QWidget__setForegroundRole_ColorRole(void *thisObj, int arg__1);
// QWidget::setGeometry(const QRect & arg__1)
void c_QWidget__setGeometry_QRect(void *thisObj, void *arg__1_);
// QWidget::setGeometry(int x, int y, int w, int h)
void c_QWidget__setGeometry_int_int_int_int(void *thisObj, int x, int y, int w,
                                            int h);
// QWidget::setHidden(bool hidden)
void c_QWidget__setHidden_bool(void *thisObj, bool hidden);
// QWidget::setLayout(QLayout * arg__1)
void c_QWidget__setLayout_QLayout(void *thisObj, void *arg__1_);
// QWidget::setLayoutDirection(Qt::LayoutDirection direction)
void c_QWidget__setLayoutDirection_LayoutDirection(void *thisObj,
                                                   int direction);
// QWidget::setMask(const QRegion & arg__1)
void c_QWidget__setMask_QRegion(void *thisObj, void *arg__1_);
// QWidget::setMaximumHeight(int maxh)
void c_QWidget__setMaximumHeight_int(void *thisObj, int maxh);
// QWidget::setMaximumSize(const QSize & arg__1)
void c_QWidget__setMaximumSize_QSize(void *thisObj, void *arg__1_);
// QWidget::setMaximumSize(int maxw, int maxh)
void c_QWidget__setMaximumSize_int_int(void *thisObj, int maxw, int maxh);
// QWidget::setMaximumWidth(int maxw)
void c_QWidget__setMaximumWidth_int(void *thisObj, int maxw);
// QWidget::setMinimumHeight(int minh)
void c_QWidget__setMinimumHeight_int(void *thisObj, int minh);
// QWidget::setMinimumSize(const QSize & arg__1)
void c_QWidget__setMinimumSize_QSize(void *thisObj, void *arg__1_);
// QWidget::setMinimumSize(int minw, int minh)
void c_QWidget__setMinimumSize_int_int(void *thisObj, int minw, int minh);
// QWidget::setMinimumWidth(int minw)
void c_QWidget__setMinimumWidth_int(void *thisObj, int minw);
// QWidget::setMouseTracking(bool enable)
void c_QWidget__setMouseTracking_bool(void *thisObj, bool enable);
// QWidget::setPalette(const QPalette & arg__1)
void c_QWidget__setPalette_QPalette(void *thisObj, void *arg__1_);
// QWidget::setShortcutAutoRepeat(int id, bool enable)
void c_QWidget__setShortcutAutoRepeat_int_bool(void *thisObj, int id,
                                               bool enable);
// QWidget::setShortcutEnabled(int id, bool enable)
void c_QWidget__setShortcutEnabled_int_bool(void *thisObj, int id, bool enable);
// QWidget::setSizeIncrement(const QSize & arg__1)
void c_QWidget__setSizeIncrement_QSize(void *thisObj, void *arg__1_);
// QWidget::setSizeIncrement(int w, int h)
void c_QWidget__setSizeIncrement_int_int(void *thisObj, int w, int h);
// QWidget::setSizePolicy(QSizePolicy arg__1)
void c_QWidget__setSizePolicy_QSizePolicy(void *thisObj, void *arg__1_);
// QWidget::setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy
// vertical)
void c_QWidget__setSizePolicy_Policy_Policy(void *thisObj, int horizontal,
                                            int vertical);
// QWidget::setStatusTip(const QString & arg__1)
void c_QWidget__setStatusTip_QString(void *thisObj, const char *arg__1_);
// QWidget::setStyle(QStyle * arg__1)
void c_QWidget__setStyle_QStyle(void *thisObj, void *arg__1_);
// QWidget::setStyleSheet(const QString & styleSheet)
void c_QWidget__setStyleSheet_QString(void *thisObj, const char *styleSheet_);
// QWidget::setTabOrder(QWidget * arg__1, QWidget * arg__2)
void c_static_QWidget__setTabOrder_QWidget_QWidget(void *arg__1_,
                                                   void *arg__2_);
// QWidget::setTabletTracking(bool enable)
void c_QWidget__setTabletTracking_bool(void *thisObj, bool enable);
// QWidget::setToolTip(const QString & arg__1)
void c_QWidget__setToolTip_QString(void *thisObj, const char *arg__1_);
// QWidget::setToolTipDuration(int msec)
void c_QWidget__setToolTipDuration_int(void *thisObj, int msec);
// QWidget::setUpdatesEnabled(bool enable)
void c_QWidget__setUpdatesEnabled_bool(void *thisObj, bool enable);
// QWidget::setVisible(bool visible)
void c_QWidget__setVisible_bool(void *thisObj, bool visible);
// QWidget::setWhatsThis(const QString & arg__1)
void c_QWidget__setWhatsThis_QString(void *thisObj, const char *arg__1_);
// QWidget::setWindowFilePath(const QString & filePath)
void c_QWidget__setWindowFilePath_QString(void *thisObj, const char *filePath_);
// QWidget::setWindowIcon(const QIcon & icon)
void c_QWidget__setWindowIcon_QIcon(void *thisObj, void *icon_);
// QWidget::setWindowIconText(const QString & arg__1)
void c_QWidget__setWindowIconText_QString(void *thisObj, const char *arg__1_);
// QWidget::setWindowModified(bool arg__1)
void c_QWidget__setWindowModified_bool(void *thisObj, bool arg__1);
// QWidget::setWindowOpacity(qreal level)
void c_QWidget__setWindowOpacity_qreal(void *thisObj, qreal level);
// QWidget::setWindowRole(const QString & arg__1)
void c_QWidget__setWindowRole_QString(void *thisObj, const char *arg__1_);
// QWidget::setWindowTitle(const QString & arg__1)
void c_QWidget__setWindowTitle_QString(void *thisObj, const char *arg__1_);
// QWidget::sharedPainter() const
void *c_QWidget__sharedPainter(void *thisObj);
// QWidget::show()
void c_QWidget__show(void *thisObj);
// QWidget::showFullScreen()
void c_QWidget__showFullScreen(void *thisObj);
// QWidget::showMaximized()
void c_QWidget__showMaximized(void *thisObj);
// QWidget::showMinimized()
void c_QWidget__showMinimized(void *thisObj);
// QWidget::showNormal()
void c_QWidget__showNormal(void *thisObj);
// QWidget::size() const
void *c_QWidget__size(void *thisObj);
// QWidget::sizeHint() const
void *c_QWidget__sizeHint(void *thisObj);
// QWidget::sizeIncrement() const
void *c_QWidget__sizeIncrement(void *thisObj);
// QWidget::sizePolicy() const
void *c_QWidget__sizePolicy(void *thisObj);
// QWidget::stackUnder(QWidget * arg__1)
void c_QWidget__stackUnder_QWidget(void *thisObj, void *arg__1_);
// QWidget::statusTip() const
void *c_QWidget__statusTip(void *thisObj);
// QWidget::style() const
void *c_QWidget__style(void *thisObj);
// QWidget::styleSheet() const
void *c_QWidget__styleSheet(void *thisObj);
// QWidget::toolTip() const
void *c_QWidget__toolTip(void *thisObj);
// QWidget::toolTipDuration() const
int c_QWidget__toolTipDuration(void *thisObj);
// QWidget::topLevelWidget() const
void *c_QWidget__topLevelWidget(void *thisObj);
// QWidget::tr(const char * s, const char * c, int n)
void *c_static_QWidget__tr_char_char_int(const char *s, const char *c, int n);
// QWidget::underMouse() const
bool c_QWidget__underMouse(void *thisObj);
// QWidget::unsetCursor()
void c_QWidget__unsetCursor(void *thisObj);
// QWidget::unsetLayoutDirection()
void c_QWidget__unsetLayoutDirection(void *thisObj);
// QWidget::unsetLocale()
void c_QWidget__unsetLocale(void *thisObj);
// QWidget::update()
void c_QWidget__update(void *thisObj);
// QWidget::update(const QRect & arg__1)
void c_QWidget__update_QRect(void *thisObj, void *arg__1_);
// QWidget::update(const QRegion & arg__1)
void c_QWidget__update_QRegion(void *thisObj, void *arg__1_);
// QWidget::update(int x, int y, int w, int h)
void c_QWidget__update_int_int_int_int(void *thisObj, int x, int y, int w,
                                       int h);
// QWidget::updateGeometry()
void c_QWidget__updateGeometry(void *thisObj);
// QWidget::updateMicroFocus()
void c_QWidget__updateMicroFocus(void *thisObj);
// QWidget::updatesEnabled() const
bool c_QWidget__updatesEnabled(void *thisObj);
// QWidget::visibleRegion() const
void *c_QWidget__visibleRegion(void *thisObj);
// QWidget::whatsThis() const
void *c_QWidget__whatsThis(void *thisObj);
// QWidget::width() const
int c_QWidget__width(void *thisObj);
// QWidget::window() const
void *c_QWidget__window(void *thisObj);
// QWidget::windowFilePath() const
void *c_QWidget__windowFilePath(void *thisObj);
// QWidget::windowHandle() const
void *c_QWidget__windowHandle(void *thisObj);
// QWidget::windowIcon() const
void *c_QWidget__windowIcon(void *thisObj);
// QWidget::windowIconChanged(const QIcon & icon)
void c_QWidget__windowIconChanged_QIcon(void *thisObj, void *icon_);
void c_QWidget__onWindowIconChanged_QIcon(
    void *thisObj, void *contextQObject,
    void *callback); // QWidget::windowIconText() const
void *c_QWidget__windowIconText(void *thisObj);
// QWidget::windowIconTextChanged(const QString & iconText)
void c_QWidget__windowIconTextChanged_QString(void *thisObj,
                                              const char *iconText_);
void c_QWidget__onWindowIconTextChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QWidget::windowOpacity() const
qreal c_QWidget__windowOpacity(void *thisObj);
// QWidget::windowRole() const
void *c_QWidget__windowRole(void *thisObj);
// QWidget::windowTitle() const
void *c_QWidget__windowTitle(void *thisObj);
// QWidget::windowTitleChanged(const QString & title)
void c_QWidget__windowTitleChanged_QString(void *thisObj, const char *title_);
void c_QWidget__onWindowTitleChanged_QString(
    void *thisObj, void *contextQObject, void *callback); // QWidget::x() const
int c_QWidget__x(void *thisObj);
// QWidget::y() const
int c_QWidget__y(void *thisObj);
void c_QWidget__destructor(void *thisObj);
void c_QWidget__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
void c_QWidget_Finalizer(void *cppObj); // QToolBar::QToolBar(QWidget * parent)
void *c_QToolBar__constructor_QWidget(void *parent_);
// QToolBar::QToolBar(const QString & title, QWidget * parent)
void *c_QToolBar__constructor_QString_QWidget(const char *title_,
                                              void *parent_);
// QToolBar::actionAt(const QPoint & p) const
void *c_QToolBar__actionAt_QPoint(void *thisObj, void *p_);
// QToolBar::actionAt(int x, int y) const
void *c_QToolBar__actionAt_int_int(void *thisObj, int x, int y);
// QToolBar::actionGeometry(QAction * action) const
void *c_QToolBar__actionGeometry_QAction(void *thisObj, void *action_);
// QToolBar::actionTriggered(QAction * action)
void c_QToolBar__actionTriggered_QAction(void *thisObj, void *action_);
void c_QToolBar__onActionTriggered_QAction(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::addSeparator()
void *c_QToolBar__addSeparator(void *thisObj);
// QToolBar::addWidget(QWidget * widget)
void *c_QToolBar__addWidget_QWidget(void *thisObj, void *widget_);
// QToolBar::changeEvent(QEvent * event)
void c_QToolBar__changeEvent_QEvent(void *thisObj, void *event_);
// QToolBar::clear()
void c_QToolBar__clear(void *thisObj);
// QToolBar::customEvent(QEvent * event)
void c_QToolBar__customEvent_QEvent(void *thisObj, void *event_);
// QToolBar::devType() const
int c_QToolBar__devType(void *thisObj);
// QToolBar::event(QEvent * event)
bool c_QToolBar__event_QEvent(void *thisObj, void *event_);
// QToolBar::eventFilter(QObject * watched, QEvent * event)
bool c_QToolBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                            void *event_);
// QToolBar::focusNextPrevChild(bool next)
bool c_QToolBar__focusNextPrevChild_bool(void *thisObj, bool next);
// QToolBar::hasHeightForWidth() const
bool c_QToolBar__hasHeightForWidth(void *thisObj);
// QToolBar::heightForWidth(int arg__1) const
int c_QToolBar__heightForWidth_int(void *thisObj, int arg__1);
// QToolBar::iconSize() const
void *c_QToolBar__iconSize(void *thisObj);
// QToolBar::iconSizeChanged(const QSize & iconSize)
void c_QToolBar__iconSizeChanged_QSize(void *thisObj, void *iconSize_);
void c_QToolBar__onIconSizeChanged_QSize(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::initPainter(QPainter * painter) const
void c_QToolBar__initPainter_QPainter(void *thisObj, void *painter_);
// QToolBar::insertSeparator(QAction * before)
void *c_QToolBar__insertSeparator_QAction(void *thisObj, void *before_);
// QToolBar::insertWidget(QAction * before, QWidget * widget)
void *c_QToolBar__insertWidget_QAction_QWidget(void *thisObj, void *before_,
                                               void *widget_);
// QToolBar::isFloatable() const
bool c_QToolBar__isFloatable(void *thisObj);
// QToolBar::isFloating() const
bool c_QToolBar__isFloating(void *thisObj);
// QToolBar::isMovable() const
bool c_QToolBar__isMovable(void *thisObj);
// QToolBar::leaveEvent(QEvent * event)
void c_QToolBar__leaveEvent_QEvent(void *thisObj, void *event_);
// QToolBar::minimumSizeHint() const
void *c_QToolBar__minimumSizeHint(void *thisObj);
// QToolBar::mouseDoubleClickEvent(QMouseEvent * event)
void c_QToolBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QToolBar::mouseMoveEvent(QMouseEvent * event)
void c_QToolBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QToolBar::mousePressEvent(QMouseEvent * event)
void c_QToolBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QToolBar::mouseReleaseEvent(QMouseEvent * event)
void c_QToolBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QToolBar::movableChanged(bool movable)
void c_QToolBar__movableChanged_bool(void *thisObj, bool movable);
void c_QToolBar__onMovableChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::orientation() const
int c_QToolBar__orientation(void *thisObj);
// QToolBar::orientationChanged(Qt::Orientation orientation)
void c_QToolBar__orientationChanged_Orientation(void *thisObj, int orientation);
void c_QToolBar__onOrientationChanged_Orientation(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::paintEvent(QPaintEvent * event)
void c_QToolBar__paintEvent_QPaintEvent(void *thisObj, void *event_);
// QToolBar::setFloatable(bool floatable)
void c_QToolBar__setFloatable_bool(void *thisObj, bool floatable);
// QToolBar::setIconSize(const QSize & iconSize)
void c_QToolBar__setIconSize_QSize(void *thisObj, void *iconSize_);
// QToolBar::setMovable(bool movable)
void c_QToolBar__setMovable_bool(void *thisObj, bool movable);
// QToolBar::setOrientation(Qt::Orientation orientation)
void c_QToolBar__setOrientation_Orientation(void *thisObj, int orientation);
// QToolBar::setVisible(bool visible)
void c_QToolBar__setVisible_bool(void *thisObj, bool visible);
// QToolBar::sharedPainter() const
void *c_QToolBar__sharedPainter(void *thisObj);
// QToolBar::sizeHint() const
void *c_QToolBar__sizeHint(void *thisObj);
// QToolBar::toggleViewAction() const
void *c_QToolBar__toggleViewAction(void *thisObj);
// QToolBar::topLevelChanged(bool topLevel)
void c_QToolBar__topLevelChanged_bool(void *thisObj, bool topLevel);
void c_QToolBar__onTopLevelChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::tr(const char * s, const char * c, int n)
void *c_static_QToolBar__tr_char_char_int(const char *s, const char *c, int n);
// QToolBar::visibilityChanged(bool visible)
void c_QToolBar__visibilityChanged_bool(void *thisObj, bool visible);
void c_QToolBar__onVisibilityChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QToolBar::widgetForAction(QAction * action) const
void *c_QToolBar__widgetForAction_QAction(void *thisObj, void *action_);
void c_QToolBar__destructor(void *thisObj);
void c_QToolBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId);
void c_QToolBar_Finalizer(
    void *cppObj); // QStatusBar::QStatusBar(QWidget * parent)
void *c_QStatusBar__constructor_QWidget(void *parent_);
// QStatusBar::addPermanentWidget(QWidget * widget, int stretch)
void c_QStatusBar__addPermanentWidget_QWidget_int(void *thisObj, void *widget_,
                                                  int stretch);
// QStatusBar::addWidget(QWidget * widget, int stretch)
void c_QStatusBar__addWidget_QWidget_int(void *thisObj, void *widget_,
                                         int stretch);
// QStatusBar::changeEvent(QEvent * arg__1)
void c_QStatusBar__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QStatusBar::clearMessage()
void c_QStatusBar__clearMessage(void *thisObj);
// QStatusBar::currentMessage() const
void *c_QStatusBar__currentMessage(void *thisObj);
// QStatusBar::customEvent(QEvent * event)
void c_QStatusBar__customEvent_QEvent(void *thisObj, void *event_);
// QStatusBar::devType() const
int c_QStatusBar__devType(void *thisObj);
// QStatusBar::event(QEvent * arg__1)
bool c_QStatusBar__event_QEvent(void *thisObj, void *arg__1_);
// QStatusBar::eventFilter(QObject * watched, QEvent * event)
bool c_QStatusBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_);
// QStatusBar::focusNextPrevChild(bool next)
bool c_QStatusBar__focusNextPrevChild_bool(void *thisObj, bool next);
// QStatusBar::hasHeightForWidth() const
bool c_QStatusBar__hasHeightForWidth(void *thisObj);
// QStatusBar::heightForWidth(int arg__1) const
int c_QStatusBar__heightForWidth_int(void *thisObj, int arg__1);
// QStatusBar::hideOrShow()
void c_QStatusBar__hideOrShow(void *thisObj);
// QStatusBar::initPainter(QPainter * painter) const
void c_QStatusBar__initPainter_QPainter(void *thisObj, void *painter_);
// QStatusBar::insertPermanentWidget(int index, QWidget * widget, int stretch)
int c_QStatusBar__insertPermanentWidget_int_QWidget_int(void *thisObj,
                                                        int index,
                                                        void *widget_,
                                                        int stretch);
// QStatusBar::insertWidget(int index, QWidget * widget, int stretch)
int c_QStatusBar__insertWidget_int_QWidget_int(void *thisObj, int index,
                                               void *widget_, int stretch);
// QStatusBar::isSizeGripEnabled() const
bool c_QStatusBar__isSizeGripEnabled(void *thisObj);
// QStatusBar::leaveEvent(QEvent * event)
void c_QStatusBar__leaveEvent_QEvent(void *thisObj, void *event_);
// QStatusBar::messageChanged(const QString & text)
void c_QStatusBar__messageChanged_QString(void *thisObj, const char *text_);
void c_QStatusBar__onMessageChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QStatusBar::minimumSizeHint() const
void *c_QStatusBar__minimumSizeHint(void *thisObj);
// QStatusBar::mouseDoubleClickEvent(QMouseEvent * event)
void c_QStatusBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_);
// QStatusBar::mouseMoveEvent(QMouseEvent * event)
void c_QStatusBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QStatusBar::mousePressEvent(QMouseEvent * event)
void c_QStatusBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QStatusBar::mouseReleaseEvent(QMouseEvent * event)
void c_QStatusBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QStatusBar::paintEvent(QPaintEvent * arg__1)
void c_QStatusBar__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QStatusBar::reformat()
void c_QStatusBar__reformat(void *thisObj);
// QStatusBar::removeWidget(QWidget * widget)
void c_QStatusBar__removeWidget_QWidget(void *thisObj, void *widget_);
// QStatusBar::setSizeGripEnabled(bool arg__1)
void c_QStatusBar__setSizeGripEnabled_bool(void *thisObj, bool arg__1);
// QStatusBar::setVisible(bool visible)
void c_QStatusBar__setVisible_bool(void *thisObj, bool visible);
// QStatusBar::sharedPainter() const
void *c_QStatusBar__sharedPainter(void *thisObj);
// QStatusBar::showMessage(const QString & text, int timeout)
void c_QStatusBar__showMessage_QString_int(void *thisObj, const char *text_,
                                           int timeout);
// QStatusBar::sizeHint() const
void *c_QStatusBar__sizeHint(void *thisObj);
// QStatusBar::tr(const char * s, const char * c, int n)
void *c_static_QStatusBar__tr_char_char_int(const char *s, const char *c,
                                            int n);
void c_QStatusBar__destructor(void *thisObj);
void c_QStatusBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
void c_QStatusBar_Finalizer(void *cppObj); // QTimer::QTimer(QObject * parent)
void *c_QTimer__constructor_QObject(void *parent_);
// QTimer::customEvent(QEvent * event)
void c_QTimer__customEvent_QEvent(void *thisObj, void *event_);
// QTimer::event(QEvent * event)
bool c_QTimer__event_QEvent(void *thisObj, void *event_);
// QTimer::eventFilter(QObject * watched, QEvent * event)
bool c_QTimer__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QTimer::interval() const
int c_QTimer__interval(void *thisObj);
// QTimer::isActive() const
bool c_QTimer__isActive(void *thisObj);
// QTimer::isSingleShot() const
bool c_QTimer__isSingleShot(void *thisObj);
// QTimer::remainingTime() const
int c_QTimer__remainingTime(void *thisObj);
// QTimer::setInterval(int msec)
void c_QTimer__setInterval_int(void *thisObj, int msec);
// QTimer::setSingleShot(bool singleShot)
void c_QTimer__setSingleShot_bool(void *thisObj, bool singleShot);
// QTimer::singleShot(int msec, const QObject * receiver, const char * member)
void c_static_QTimer__singleShot_int_QObject_char(int msec, void *receiver_,
                                                  const char *member);
// QTimer::start()
void c_QTimer__start(void *thisObj);
// QTimer::start(int msec)
void c_QTimer__start_int(void *thisObj, int msec);
// QTimer::stop()
void c_QTimer__stop(void *thisObj);
// QTimer::timerId() const
int c_QTimer__timerId(void *thisObj);
// QTimer::tr(const char * s, const char * c, int n)
void *c_static_QTimer__tr_char_char_int(const char *s, const char *c, int n);
void c_QTimer__destructor(void *thisObj);
void c_QTimer__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
void c_QTimer_Finalizer(
    void *cppObj); // QStyleOption::QStyleOption(int version, int type)
void *c_QStyleOption__constructor_int_int(int version, int type);
// QStyleOption::initFrom(const QWidget * w)
void c_QStyleOption__initFrom_QWidget(void *thisObj, void *w_);
void c_QStyleOption__destructor(void *thisObj);
int c_QStyleOption___get_version(void *thisObj);
int c_QStyleOption___get_type(void *thisObj);
void c_QStyleOption___set_version_int(void *thisObj, int version_);
void c_QStyleOption___set_type_int(void *thisObj, int type_);
void c_QStyleOption_Finalizer(void *cppObj); // QStyleOptionComplex::QStyleOptionComplex(int
                                             // version, int type)
void *c_QStyleOptionComplex__constructor_int_int(int version, int type);
void c_QStyleOptionComplex__destructor(void *thisObj);
void c_QStyleOptionComplex_Finalizer(void *cppObj); // QStyle::QStyle()
void *c_QStyle__constructor();
// QStyle::customEvent(QEvent * event)
void c_QStyle__customEvent_QEvent(void *thisObj, void *event_);
// QStyle::drawComplexControl(QStyle::ComplexControl cc, const
// QStyleOptionComplex * opt, QPainter * p, const QWidget * widget) const
void c_QStyle__drawComplexControl_ComplexControl_QStyleOptionComplex_QPainter_QWidget(
    void *thisObj, int cc, void *opt_, void *p_, void *widget_);
// QStyle::drawControl(QStyle::ControlElement element, const QStyleOption * opt,
// QPainter * p, const QWidget * w) const
void c_QStyle__drawControl_ControlElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int element, void *opt_, void *p_, void *w_);
// QStyle::drawItemPixmap(QPainter * painter, const QRect & rect, int alignment,
// const QPixmap & pixmap) const
void c_QStyle__drawItemPixmap_QPainter_QRect_int_QPixmap(
    void *thisObj, void *painter_, void *rect_, int alignment, void *pixmap_);
// QStyle::drawItemText(QPainter * painter, const QRect & rect, int flags, const
// QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole
// textRole) const
void c_QStyle__drawItemText_QPainter_QRect_int_QPalette_bool_QString_ColorRole(
    void *thisObj, void *painter_, void *rect_, int flags, void *pal_,
    bool enabled, const char *text_, int textRole);
// QStyle::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption * opt,
// QPainter * p, const QWidget * w) const
void c_QStyle__drawPrimitive_PrimitiveElement_QStyleOption_QPainter_QWidget(
    void *thisObj, int pe, void *opt_, void *p_, void *w_);
// QStyle::event(QEvent * event)
bool c_QStyle__event_QEvent(void *thisObj, void *event_);
// QStyle::eventFilter(QObject * watched, QEvent * event)
bool c_QStyle__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QStyle::generatedIconPixmap(QIcon::Mode iconMode, const QPixmap & pixmap,
// const QStyleOption * opt) const
void *c_QStyle__generatedIconPixmap_Mode_QPixmap_QStyleOption(void *thisObj,
                                                              int iconMode,
                                                              void *pixmap_,
                                                              void *opt_);
// QStyle::hitTestComplexControl(QStyle::ComplexControl cc, const
// QStyleOptionComplex * opt, const QPoint & pt, const QWidget * widget) const
int c_QStyle__hitTestComplexControl_ComplexControl_QStyleOptionComplex_QPoint_QWidget(
    void *thisObj, int cc, void *opt_, void *pt_, void *widget_);
// QStyle::itemPixmapRect(const QRect & r, int flags, const QPixmap & pixmap)
// const
void *c_QStyle__itemPixmapRect_QRect_int_QPixmap(void *thisObj, void *r_,
                                                 int flags, void *pixmap_);
// QStyle::layoutSpacing(QSizePolicy::ControlType control1,
// QSizePolicy::ControlType control2, Qt::Orientation orientation, const
// QStyleOption * option, const QWidget * widget) const
int c_QStyle__layoutSpacing_ControlType_ControlType_Orientation_QStyleOption_QWidget(
    void *thisObj, int control1, int control2, int orientation, void *option_,
    void *widget_);
// QStyle::name() const
void *c_QStyle__name(void *thisObj);
// QStyle::pixelMetric(QStyle::PixelMetric metric, const QStyleOption * option,
// const QWidget * widget) const
int c_QStyle__pixelMetric_PixelMetric_QStyleOption_QWidget(void *thisObj,
                                                           int metric,
                                                           void *option_,
                                                           void *widget_);
// QStyle::polish(QApplication * application)
void c_QStyle__polishApplication_QApplication(void *thisObj,
                                              void *application_);
// QStyle::polish(QPalette & palette)
void c_QStyle__polish_QPalette(void *thisObj, void *palette_);
// QStyle::polish(QWidget * widget)
void c_QStyle__polishWidget_QWidget(void *thisObj, void *widget_);
// QStyle::proxy() const
void *c_QStyle__proxy(void *thisObj);
// QStyle::sizeFromContents(QStyle::ContentsType ct, const QStyleOption * opt,
// const QSize & contentsSize, const QWidget * w) const
void *c_QStyle__sizeFromContents_ContentsType_QStyleOption_QSize_QWidget(
    void *thisObj, int ct, void *opt_, void *contentsSize_, void *w_);
// QStyle::sliderPositionFromValue(int min, int max, int val, int space, bool
// upsideDown)
int c_static_QStyle__sliderPositionFromValue_int_int_int_int_bool(
    int min, int max, int val, int space, bool upsideDown);
// QStyle::sliderValueFromPosition(int min, int max, int pos, int space, bool
// upsideDown)
int c_static_QStyle__sliderValueFromPosition_int_int_int_int_bool(
    int min, int max, int pos, int space, bool upsideDown);
// QStyle::standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption
// * option, const QWidget * widget) const
void *c_QStyle__standardIcon_StandardPixmap_QStyleOption_QWidget(
    void *thisObj, int standardIcon, void *option_, void *widget_);
// QStyle::standardPalette() const
void *c_QStyle__standardPalette(void *thisObj);
// QStyle::standardPixmap(QStyle::StandardPixmap standardPixmap, const
// QStyleOption * opt, const QWidget * widget) const
void *c_QStyle__standardPixmap_StandardPixmap_QStyleOption_QWidget(
    void *thisObj, int standardPixmap, void *opt_, void *widget_);
// QStyle::styleHint(QStyle::StyleHint stylehint, const QStyleOption * opt,
// const QWidget * widget, QStyleHintReturn * returnData) const
int c_QStyle__styleHint_StyleHint_QStyleOption_QWidget_QStyleHintReturn(
    void *thisObj, int stylehint, void *opt_, void *widget_, void *returnData_);
// QStyle::subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex *
// opt, QStyle::SubControl sc, const QWidget * widget) const
void *
c_QStyle__subControlRect_ComplexControl_QStyleOptionComplex_SubControl_QWidget(
    void *thisObj, int cc, void *opt_, int sc, void *widget_);
// QStyle::subElementRect(QStyle::SubElement subElement, const QStyleOption *
// option, const QWidget * widget) const
void *c_QStyle__subElementRect_SubElement_QStyleOption_QWidget(void *thisObj,
                                                               int subElement,
                                                               void *option_,
                                                               void *widget_);
// QStyle::tr(const char * s, const char * c, int n)
void *c_static_QStyle__tr_char_char_int(const char *s, const char *c, int n);
// QStyle::unpolish(QApplication * application)
void c_QStyle__unpolishApplication_QApplication(void *thisObj,
                                                void *application_);
// QStyle::unpolish(QWidget * widget)
void c_QStyle__unpolish_QWidget(void *thisObj, void *widget_);
// QStyle::visualPos(Qt::LayoutDirection direction, const QRect & boundingRect,
// const QPoint & logicalPos)
void *c_static_QStyle__visualPos_LayoutDirection_QRect_QPoint(
    int direction, void *boundingRect_, void *logicalPos_);
// QStyle::visualRect(Qt::LayoutDirection direction, const QRect & boundingRect,
// const QRect & logicalRect)
void *c_static_QStyle__visualRect_LayoutDirection_QRect_QRect(
    int direction, void *boundingRect_, void *logicalRect_);
void c_QStyle__destructor(void *thisObj);
void c_QStyle__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
void c_QStyle_Finalizer(void *cppObj); // QShortcut::QShortcut(QKeySequence::StandardKey
                                       // key, QObject * parent, const char *
                                       // member, const char * ambiguousMember)
void *c_QShortcut__constructor_StandardKey_QObject_char_char(
    int key, void *parent_, const char *member, const char *ambiguousMember);
// QShortcut::QShortcut(QObject * parent)
void *c_QShortcut__constructor_QObject(void *parent_);
// QShortcut::QShortcut(const QKeySequence & key, QObject * parent, const char *
// member, const char * ambiguousMember)
void *c_QShortcut__constructor_QKeySequence_QObject_char_char(
    void *key_, void *parent_, const char *member, const char *ambiguousMember);
// QShortcut::activated()
void c_QShortcut__activated(void *thisObj);
void c_QShortcut__onActivated(
    void *thisObj, void *contextQObject,
    void *callback); // QShortcut::activatedAmbiguously()
void c_QShortcut__activatedAmbiguously(void *thisObj);
void c_QShortcut__onActivatedAmbiguously(
    void *thisObj, void *contextQObject,
    void *callback); // QShortcut::autoRepeat() const
bool c_QShortcut__autoRepeat(void *thisObj);
// QShortcut::customEvent(QEvent * event)
void c_QShortcut__customEvent_QEvent(void *thisObj, void *event_);
// QShortcut::event(QEvent * e)
bool c_QShortcut__event_QEvent(void *thisObj, void *e_);
// QShortcut::eventFilter(QObject * watched, QEvent * event)
bool c_QShortcut__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_);
// QShortcut::isEnabled() const
bool c_QShortcut__isEnabled(void *thisObj);
// QShortcut::key() const
void *c_QShortcut__key(void *thisObj);
// QShortcut::keys() const
void *c_QShortcut__keys(void *thisObj);
// QShortcut::setAutoRepeat(bool on)
void c_QShortcut__setAutoRepeat_bool(void *thisObj, bool on);
// QShortcut::setEnabled(bool enable)
void c_QShortcut__setEnabled_bool(void *thisObj, bool enable);
// QShortcut::setKey(const QKeySequence & key)
void c_QShortcut__setKey_QKeySequence(void *thisObj, void *key_);
// QShortcut::setKeys(QKeySequence::StandardKey key)
void c_QShortcut__setKeys_StandardKey(void *thisObj, int key);
// QShortcut::setKeys(const QList<QKeySequence > & keys)
void c_QShortcut__setKeys_QList_QKeySequence(void *thisObj, void *keys_);
// QShortcut::setWhatsThis(const QString & text)
void c_QShortcut__setWhatsThis_QString(void *thisObj, const char *text_);
// QShortcut::tr(const char * s, const char * c, int n)
void *c_static_QShortcut__tr_char_char_int(const char *s, const char *c, int n);
// QShortcut::whatsThis() const
void *c_QShortcut__whatsThis(void *thisObj);
void c_QShortcut__destructor(void *thisObj);
void c_QShortcut__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QShortcut_Finalizer(void *cppObj); // QModelIndex::QModelIndex()
void *c_QModelIndex__constructor();
// QModelIndex::column() const
int c_QModelIndex__column(void *thisObj);
// QModelIndex::data(int role) const
void *c_QModelIndex__data_int(void *thisObj, int role);
// QModelIndex::isValid() const
bool c_QModelIndex__isValid(void *thisObj);
// QModelIndex::model() const
void *c_QModelIndex__model(void *thisObj);
// QModelIndex::parent() const
void *c_QModelIndex__parent(void *thisObj);
// QModelIndex::row() const
int c_QModelIndex__row(void *thisObj);
// QModelIndex::sibling(int row, int column) const
void *c_QModelIndex__sibling_int_int(void *thisObj, int row, int column);
// QModelIndex::siblingAtColumn(int column) const
void *c_QModelIndex__siblingAtColumn_int(void *thisObj, int column);
// QModelIndex::siblingAtRow(int row) const
void *c_QModelIndex__siblingAtRow_int(void *thisObj, int row);
void c_QModelIndex__destructor(void *thisObj);
void c_QModelIndex_Finalizer(
    void *cppObj); // QMenuBar::QMenuBar(QWidget * parent)
void *c_QMenuBar__constructor_QWidget(void *parent_);
// QMenuBar::actionAt(const QPoint & arg__1) const
void *c_QMenuBar__actionAt_QPoint(void *thisObj, void *arg__1_);
// QMenuBar::actionGeometry(QAction * arg__1) const
void *c_QMenuBar__actionGeometry_QAction(void *thisObj, void *arg__1_);
// QMenuBar::activeAction() const
void *c_QMenuBar__activeAction(void *thisObj);
// QMenuBar::addMenu(QMenu * menu)
void *c_QMenuBar__addMenu_QMenu(void *thisObj, void *menu_);
// QMenuBar::addMenu(const QIcon & icon, const QString & title)
void *c_QMenuBar__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                        const char *title_);
// QMenuBar::addMenu(const QString & title)
void *c_QMenuBar__addMenu_QString(void *thisObj, const char *title_);
// QMenuBar::addSeparator()
void *c_QMenuBar__addSeparator(void *thisObj);
// QMenuBar::changeEvent(QEvent * arg__1)
void c_QMenuBar__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QMenuBar::clear()
void c_QMenuBar__clear(void *thisObj);
// QMenuBar::cornerWidget() const
void *c_QMenuBar__cornerWidget(void *thisObj);
// QMenuBar::customEvent(QEvent * event)
void c_QMenuBar__customEvent_QEvent(void *thisObj, void *event_);
// QMenuBar::devType() const
int c_QMenuBar__devType(void *thisObj);
// QMenuBar::event(QEvent * arg__1)
bool c_QMenuBar__event_QEvent(void *thisObj, void *arg__1_);
// QMenuBar::eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QMenuBar__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                            void *arg__2_);
// QMenuBar::focusNextPrevChild(bool next)
bool c_QMenuBar__focusNextPrevChild_bool(void *thisObj, bool next);
// QMenuBar::hasHeightForWidth() const
bool c_QMenuBar__hasHeightForWidth(void *thisObj);
// QMenuBar::heightForWidth(int arg__1) const
int c_QMenuBar__heightForWidth_int(void *thisObj, int arg__1);
// QMenuBar::hovered(QAction * action)
void c_QMenuBar__hovered_QAction(void *thisObj, void *action_);
void c_QMenuBar__onHovered_QAction(
    void *thisObj, void *contextQObject,
    void *callback); // QMenuBar::initPainter(QPainter * painter) const
void c_QMenuBar__initPainter_QPainter(void *thisObj, void *painter_);
// QMenuBar::insertMenu(QAction * before, QMenu * menu)
void *c_QMenuBar__insertMenu_QAction_QMenu(void *thisObj, void *before_,
                                           void *menu_);
// QMenuBar::insertSeparator(QAction * before)
void *c_QMenuBar__insertSeparator_QAction(void *thisObj, void *before_);
// QMenuBar::isDefaultUp() const
bool c_QMenuBar__isDefaultUp(void *thisObj);
// QMenuBar::isNativeMenuBar() const
bool c_QMenuBar__isNativeMenuBar(void *thisObj);
// QMenuBar::leaveEvent(QEvent * arg__1)
void c_QMenuBar__leaveEvent_QEvent(void *thisObj, void *arg__1_);
// QMenuBar::minimumSizeHint() const
void *c_QMenuBar__minimumSizeHint(void *thisObj);
// QMenuBar::mouseDoubleClickEvent(QMouseEvent * event)
void c_QMenuBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QMenuBar::mouseMoveEvent(QMouseEvent * arg__1)
void c_QMenuBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenuBar::mousePressEvent(QMouseEvent * arg__1)
void c_QMenuBar__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenuBar::mouseReleaseEvent(QMouseEvent * arg__1)
void c_QMenuBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenuBar::paintEvent(QPaintEvent * arg__1)
void c_QMenuBar__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QMenuBar::setActiveAction(QAction * action)
void c_QMenuBar__setActiveAction_QAction(void *thisObj, void *action_);
// QMenuBar::setCornerWidget(QWidget * w)
void c_QMenuBar__setCornerWidget_QWidget(void *thisObj, void *w_);
// QMenuBar::setDefaultUp(bool arg__1)
void c_QMenuBar__setDefaultUp_bool(void *thisObj, bool arg__1);
// QMenuBar::setNativeMenuBar(bool nativeMenuBar)
void c_QMenuBar__setNativeMenuBar_bool(void *thisObj, bool nativeMenuBar);
// QMenuBar::setVisible(bool visible)
void c_QMenuBar__setVisible_bool(void *thisObj, bool visible);
// QMenuBar::sharedPainter() const
void *c_QMenuBar__sharedPainter(void *thisObj);
// QMenuBar::sizeHint() const
void *c_QMenuBar__sizeHint(void *thisObj);
// QMenuBar::tr(const char * s, const char * c, int n)
void *c_static_QMenuBar__tr_char_char_int(const char *s, const char *c, int n);
// QMenuBar::triggered(QAction * action)
void c_QMenuBar__triggered_QAction(void *thisObj, void *action_);
void c_QMenuBar__onTriggered_QAction(void *thisObj, void *contextQObject,
                                     void *callback);
void c_QMenuBar__destructor(void *thisObj);
void c_QMenuBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId);
void c_QMenuBar_Finalizer(void *cppObj); // QMenu::QMenu(QWidget * parent)
void *c_QMenu__constructor_QWidget(void *parent_);
// QMenu::QMenu(const QString & title, QWidget * parent)
void *c_QMenu__constructor_QString_QWidget(const char *title_, void *parent_);
// QMenu::aboutToHide()
void c_QMenu__aboutToHide(void *thisObj);
void c_QMenu__onAboutToHide(void *thisObj, void *contextQObject,
                            void *callback); // QMenu::aboutToShow()
void c_QMenu__aboutToShow(void *thisObj);
void c_QMenu__onAboutToShow(
    void *thisObj, void *contextQObject,
    void *callback); // QMenu::actionAt(const QPoint & arg__1) const
void *c_QMenu__actionAt_QPoint(void *thisObj, void *arg__1_);
// QMenu::actionGeometry(QAction * arg__1) const
void *c_QMenu__actionGeometry_QAction(void *thisObj, void *arg__1_);
// QMenu::activeAction() const
void *c_QMenu__activeAction(void *thisObj);
// QMenu::addMenu(QMenu * menu)
void *c_QMenu__addMenu_QMenu(void *thisObj, void *menu_);
// QMenu::addMenu(const QIcon & icon, const QString & title)
void *c_QMenu__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                     const char *title_);
// QMenu::addMenu(const QString & title)
void *c_QMenu__addMenu_QString(void *thisObj, const char *title_);
// QMenu::addSection(const QIcon & icon, const QString & text)
void *c_QMenu__addSection_QIcon_QString(void *thisObj, void *icon_,
                                        const char *text_);
// QMenu::addSection(const QString & text)
void *c_QMenu__addSection_QString(void *thisObj, const char *text_);
// QMenu::addSeparator()
void *c_QMenu__addSeparator(void *thisObj);
// QMenu::changeEvent(QEvent * arg__1)
void c_QMenu__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QMenu::clear()
void c_QMenu__clear(void *thisObj);
// QMenu::columnCount() const
int c_QMenu__columnCount(void *thisObj);
// QMenu::customEvent(QEvent * event)
void c_QMenu__customEvent_QEvent(void *thisObj, void *event_);
// QMenu::defaultAction() const
void *c_QMenu__defaultAction(void *thisObj);
// QMenu::devType() const
int c_QMenu__devType(void *thisObj);
// QMenu::event(QEvent * arg__1)
bool c_QMenu__event_QEvent(void *thisObj, void *arg__1_);
// QMenu::eventFilter(QObject * watched, QEvent * event)
bool c_QMenu__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                         void *event_);
// QMenu::exec()
void *c_QMenu__exec(void *thisObj);
// QMenu::exec(const QList<QAction* > & actions, const QPoint & pos, QAction *
// at, QWidget * parent)
void *c_static_QMenu__exec_QList_QAction_QPoint_QAction_QWidget(void *actions_,
                                                                void *pos_,
                                                                void *at_,
                                                                void *parent_);
// QMenu::exec(const QPoint & pos, QAction * at)
void *c_QMenu__exec_QPoint_QAction(void *thisObj, void *pos_, void *at_);
// QMenu::focusNextPrevChild(bool next)
bool c_QMenu__focusNextPrevChild_bool(void *thisObj, bool next);
// QMenu::hasHeightForWidth() const
bool c_QMenu__hasHeightForWidth(void *thisObj);
// QMenu::heightForWidth(int arg__1) const
int c_QMenu__heightForWidth_int(void *thisObj, int arg__1);
// QMenu::hideTearOffMenu()
void c_QMenu__hideTearOffMenu(void *thisObj);
// QMenu::hovered(QAction * action)
void c_QMenu__hovered_QAction(void *thisObj, void *action_);
void c_QMenu__onHovered_QAction(void *thisObj, void *contextQObject,
                                void *callback); // QMenu::icon() const
void *c_QMenu__icon(void *thisObj);
// QMenu::initPainter(QPainter * painter) const
void c_QMenu__initPainter_QPainter(void *thisObj, void *painter_);
// QMenu::insertMenu(QAction * before, QMenu * menu)
void *c_QMenu__insertMenu_QAction_QMenu(void *thisObj, void *before_,
                                        void *menu_);
// QMenu::insertSection(QAction * before, const QIcon & icon, const QString &
// text)
void *c_QMenu__insertSection_QAction_QIcon_QString(void *thisObj, void *before_,
                                                   void *icon_,
                                                   const char *text_);
// QMenu::insertSection(QAction * before, const QString & text)
void *c_QMenu__insertSection_QAction_QString(void *thisObj, void *before_,
                                             const char *text_);
// QMenu::insertSeparator(QAction * before)
void *c_QMenu__insertSeparator_QAction(void *thisObj, void *before_);
// QMenu::isEmpty() const
bool c_QMenu__isEmpty(void *thisObj);
// QMenu::isTearOffEnabled() const
bool c_QMenu__isTearOffEnabled(void *thisObj);
// QMenu::isTearOffMenuVisible() const
bool c_QMenu__isTearOffMenuVisible(void *thisObj);
// QMenu::leaveEvent(QEvent * arg__1)
void c_QMenu__leaveEvent_QEvent(void *thisObj, void *arg__1_);
// QMenu::menuAction() const
void *c_QMenu__menuAction(void *thisObj);
// QMenu::menuInAction(const QAction * action)
void *c_static_QMenu__menuInAction_QAction(void *action_);
// QMenu::minimumSizeHint() const
void *c_QMenu__minimumSizeHint(void *thisObj);
// QMenu::mouseDoubleClickEvent(QMouseEvent * event)
void c_QMenu__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QMenu::mouseMoveEvent(QMouseEvent * arg__1)
void c_QMenu__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenu::mousePressEvent(QMouseEvent * arg__1)
void c_QMenu__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenu::mouseReleaseEvent(QMouseEvent * arg__1)
void c_QMenu__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenu::paintEvent(QPaintEvent * arg__1)
void c_QMenu__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QMenu::popup(const QPoint & pos, QAction * at)
void c_QMenu__popup_QPoint_QAction(void *thisObj, void *pos_, void *at_);
// QMenu::separatorsCollapsible() const
bool c_QMenu__separatorsCollapsible(void *thisObj);
// QMenu::setActiveAction(QAction * act)
void c_QMenu__setActiveAction_QAction(void *thisObj, void *act_);
// QMenu::setDefaultAction(QAction * arg__1)
void c_QMenu__setDefaultAction_QAction(void *thisObj, void *arg__1_);
// QMenu::setIcon(const QIcon & icon)
void c_QMenu__setIcon_QIcon(void *thisObj, void *icon_);
// QMenu::setNoReplayFor(QWidget * widget)
void c_QMenu__setNoReplayFor_QWidget(void *thisObj, void *widget_);
// QMenu::setSeparatorsCollapsible(bool collapse)
void c_QMenu__setSeparatorsCollapsible_bool(void *thisObj, bool collapse);
// QMenu::setTearOffEnabled(bool arg__1)
void c_QMenu__setTearOffEnabled_bool(void *thisObj, bool arg__1);
// QMenu::setTitle(const QString & title)
void c_QMenu__setTitle_QString(void *thisObj, const char *title_);
// QMenu::setToolTipsVisible(bool visible)
void c_QMenu__setToolTipsVisible_bool(void *thisObj, bool visible);
// QMenu::setVisible(bool visible)
void c_QMenu__setVisible_bool(void *thisObj, bool visible);
// QMenu::sharedPainter() const
void *c_QMenu__sharedPainter(void *thisObj);
// QMenu::showTearOffMenu()
void c_QMenu__showTearOffMenu(void *thisObj);
// QMenu::showTearOffMenu(const QPoint & pos)
void c_QMenu__showTearOffMenu_QPoint(void *thisObj, void *pos_);
// QMenu::sizeHint() const
void *c_QMenu__sizeHint(void *thisObj);
// QMenu::title() const
void *c_QMenu__title(void *thisObj);
// QMenu::toolTipsVisible() const
bool c_QMenu__toolTipsVisible(void *thisObj);
// QMenu::tr(const char * s, const char * c, int n)
void *c_static_QMenu__tr_char_char_int(const char *s, const char *c, int n);
// QMenu::triggered(QAction * action)
void c_QMenu__triggered_QAction(void *thisObj, void *action_);
void c_QMenu__onTriggered_QAction(void *thisObj, void *contextQObject,
                                  void *callback);
void c_QMenu__destructor(void *thisObj);
void c_QMenu__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId);
void c_QMenu_Finalizer(
    void *cppObj); // QMainWindow::QMainWindow(QWidget * parent)
void *c_QMainWindow__constructor_QWidget(void *parent_);
// QMainWindow::addToolBar(QToolBar * toolbar)
void c_QMainWindow__addToolBar_QToolBar(void *thisObj, void *toolbar_);
// QMainWindow::addToolBar(const QString & title)
void *c_QMainWindow__addToolBar_QString(void *thisObj, const char *title_);
// QMainWindow::addToolBarBreak()
void c_QMainWindow__addToolBarBreak(void *thisObj);
// QMainWindow::centralWidget() const
void *c_QMainWindow__centralWidget(void *thisObj);
// QMainWindow::changeEvent(QEvent * arg__1)
void c_QMainWindow__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QMainWindow::createPopupMenu()
void *c_QMainWindow__createPopupMenu(void *thisObj);
// QMainWindow::customEvent(QEvent * event)
void c_QMainWindow__customEvent_QEvent(void *thisObj, void *event_);
// QMainWindow::devType() const
int c_QMainWindow__devType(void *thisObj);
// QMainWindow::documentMode() const
bool c_QMainWindow__documentMode(void *thisObj);
// QMainWindow::event(QEvent * event)
bool c_QMainWindow__event_QEvent(void *thisObj, void *event_);
// QMainWindow::eventFilter(QObject * watched, QEvent * event)
bool c_QMainWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);
// QMainWindow::focusNextPrevChild(bool next)
bool c_QMainWindow__focusNextPrevChild_bool(void *thisObj, bool next);
// QMainWindow::hasHeightForWidth() const
bool c_QMainWindow__hasHeightForWidth(void *thisObj);
// QMainWindow::heightForWidth(int arg__1) const
int c_QMainWindow__heightForWidth_int(void *thisObj, int arg__1);
// QMainWindow::iconSize() const
void *c_QMainWindow__iconSize(void *thisObj);
// QMainWindow::iconSizeChanged(const QSize & iconSize)
void c_QMainWindow__iconSizeChanged_QSize(void *thisObj, void *iconSize_);
void c_QMainWindow__onIconSizeChanged_QSize(
    void *thisObj, void *contextQObject,
    void *callback); // QMainWindow::initPainter(QPainter * painter) const
void c_QMainWindow__initPainter_QPainter(void *thisObj, void *painter_);
// QMainWindow::insertToolBar(QToolBar * before, QToolBar * toolbar)
void c_QMainWindow__insertToolBar_QToolBar_QToolBar(void *thisObj,
                                                    void *before_,
                                                    void *toolbar_);
// QMainWindow::insertToolBarBreak(QToolBar * before)
void c_QMainWindow__insertToolBarBreak_QToolBar(void *thisObj, void *before_);
// QMainWindow::isAnimated() const
bool c_QMainWindow__isAnimated(void *thisObj);
// QMainWindow::isDockNestingEnabled() const
bool c_QMainWindow__isDockNestingEnabled(void *thisObj);
// QMainWindow::isSeparator(const QPoint & pos) const
bool c_QMainWindow__isSeparator_QPoint(void *thisObj, void *pos_);
// QMainWindow::leaveEvent(QEvent * event)
void c_QMainWindow__leaveEvent_QEvent(void *thisObj, void *event_);
// QMainWindow::menuBar() const
void *c_QMainWindow__menuBar(void *thisObj);
// QMainWindow::menuWidget() const
void *c_QMainWindow__menuWidget(void *thisObj);
// QMainWindow::minimumSizeHint() const
void *c_QMainWindow__minimumSizeHint(void *thisObj);
// QMainWindow::mouseDoubleClickEvent(QMouseEvent * event)
void c_QMainWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *event_);
// QMainWindow::mouseMoveEvent(QMouseEvent * event)
void c_QMainWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QMainWindow::mousePressEvent(QMouseEvent * event)
void c_QMainWindow__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QMainWindow::mouseReleaseEvent(QMouseEvent * event)
void c_QMainWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QMainWindow::paintEvent(QPaintEvent * event)
void c_QMainWindow__paintEvent_QPaintEvent(void *thisObj, void *event_);
// QMainWindow::removeToolBar(QToolBar * toolbar)
void c_QMainWindow__removeToolBar_QToolBar(void *thisObj, void *toolbar_);
// QMainWindow::removeToolBarBreak(QToolBar * before)
void c_QMainWindow__removeToolBarBreak_QToolBar(void *thisObj, void *before_);
// QMainWindow::restoreState(const QByteArray & state, int version)
bool c_QMainWindow__restoreState_QByteArray_int(void *thisObj, void *state_,
                                                int version);
// QMainWindow::saveState(int version) const
void *c_QMainWindow__saveState_int(void *thisObj, int version);
// QMainWindow::setAnimated(bool enabled)
void c_QMainWindow__setAnimated_bool(void *thisObj, bool enabled);
// QMainWindow::setCentralWidget(QWidget * widget)
void c_QMainWindow__setCentralWidget_QWidget(void *thisObj, void *widget_);
// QMainWindow::setDockNestingEnabled(bool enabled)
void c_QMainWindow__setDockNestingEnabled_bool(void *thisObj, bool enabled);
// QMainWindow::setDocumentMode(bool enabled)
void c_QMainWindow__setDocumentMode_bool(void *thisObj, bool enabled);
// QMainWindow::setIconSize(const QSize & iconSize)
void c_QMainWindow__setIconSize_QSize(void *thisObj, void *iconSize_);
// QMainWindow::setMenuBar(QMenuBar * menubar)
void c_QMainWindow__setMenuBar_QMenuBar(void *thisObj, void *menubar_);
// QMainWindow::setMenuWidget(QWidget * menubar)
void c_QMainWindow__setMenuWidget_QWidget(void *thisObj, void *menubar_);
// QMainWindow::setStatusBar(QStatusBar * statusbar)
void c_QMainWindow__setStatusBar_QStatusBar(void *thisObj, void *statusbar_);
// QMainWindow::setUnifiedTitleAndToolBarOnMac(bool set)
void c_QMainWindow__setUnifiedTitleAndToolBarOnMac_bool(void *thisObj,
                                                        bool set);
// QMainWindow::setVisible(bool visible)
void c_QMainWindow__setVisible_bool(void *thisObj, bool visible);
// QMainWindow::sharedPainter() const
void *c_QMainWindow__sharedPainter(void *thisObj);
// QMainWindow::sizeHint() const
void *c_QMainWindow__sizeHint(void *thisObj);
// QMainWindow::statusBar() const
void *c_QMainWindow__statusBar(void *thisObj);
// QMainWindow::takeCentralWidget()
void *c_QMainWindow__takeCentralWidget(void *thisObj);
// QMainWindow::toolBarBreak(QToolBar * toolbar) const
bool c_QMainWindow__toolBarBreak_QToolBar(void *thisObj, void *toolbar_);
// QMainWindow::tr(const char * s, const char * c, int n)
void *c_static_QMainWindow__tr_char_char_int(const char *s, const char *c,
                                             int n);
// QMainWindow::unifiedTitleAndToolBarOnMac() const
bool c_QMainWindow__unifiedTitleAndToolBarOnMac(void *thisObj);
void c_QMainWindow__destructor(void *thisObj);
void c_QMainWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QMainWindow_Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QVariant_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QVariant_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QVariant_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QVariant_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QVariant_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QVariant_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QVariant_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QVariant_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QVariant_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QVariant_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QVariant_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QVariant_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QVariant_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QVariant_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QVariant_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QVariant_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QVariant_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QVariant_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QVariant_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QVariant_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QVariant_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QVariant_T___mid_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QVariant_T___move_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype from,
                                                     qsizetype to);
// QList::pop_back()
void c_QList_T_QVariant_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QVariant_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QVariant_T___remove_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QVariant_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QVariant_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QVariant_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QVariant_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QVariant_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QVariant_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QVariant_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QVariant_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QVariant_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype pos,
                                                        qsizetype n);
// QList::squeeze()
void c_QList_T_QVariant_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QVariant_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype i,
                                                            qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QVariant_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QVariant_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QVariant_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QVariant_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QVariant_T___destructor(void *thisObj);
void c_QList_T_QVariant_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QString_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QString_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QString_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QString_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QString_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QString_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QString_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QString_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QString_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QString_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QString_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QString_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QString_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QString_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QString_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QString_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QString_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QString_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QString_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QString_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QString_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QString_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QString_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to);
// QList::pop_back()
void c_QList_T_QString_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QString_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QString_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QString_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QString_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QString_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QString_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QString_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QString_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QString_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QString_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QString_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n);
// QList::squeeze()
void c_QList_T_QString_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QString_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QString_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QString_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QString_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QString_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QString_T___destructor(void *thisObj);
void c_QList_T_QString_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_unsigned_int_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_unsigned_int_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_unsigned_int_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const unsigned int c_QList_T_unsigned_int_T___at_qsizetype(void *thisObj,
                                                           qsizetype i);
// QList::back()
unsigned int c_QList_T_unsigned_int_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_unsigned_int_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_unsigned_int_T___clear(void *thisObj);
// QList::constFirst() const
const unsigned int c_QList_T_unsigned_int_T___constFirst(void *thisObj);
// QList::constLast() const
const unsigned int c_QList_T_unsigned_int_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_unsigned_int_T___count(void *thisObj);
// QList::detach()
void c_QList_T_unsigned_int_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_unsigned_int_T___empty(void *thisObj);
// QList::first()
unsigned int c_QList_T_unsigned_int_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_unsigned_int_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
unsigned int c_QList_T_unsigned_int_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_unsigned_int_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_unsigned_int_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_unsigned_int_T___isSharedWith_QList_T(void *thisObj,
                                                     void *other_);
// QList::last()
unsigned int c_QList_T_unsigned_int_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_unsigned_int_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_unsigned_int_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_unsigned_int_T___mid_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype pos,
                                                         qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_unsigned_int_T___move_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype from,
                                                         qsizetype to);
// QList::pop_back()
void c_QList_T_unsigned_int_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_unsigned_int_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_unsigned_int_T___remove_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_unsigned_int_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_unsigned_int_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_unsigned_int_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_unsigned_int_T___reserve_qsizetype(void *thisObj,
                                                  qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_unsigned_int_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_unsigned_int_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_unsigned_int_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_unsigned_int_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_unsigned_int_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype pos,
                                                            qsizetype n);
// QList::squeeze()
void c_QList_T_unsigned_int_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_unsigned_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype i,
                                                                qsizetype j);
// QList::takeAt(qsizetype i)
unsigned int c_QList_T_unsigned_int_T___takeAt_qsizetype(void *thisObj,
                                                         qsizetype i);
// QList::toList() const
void *c_QList_T_unsigned_int_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_unsigned_int_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
unsigned int c_QList_T_unsigned_int_T___value_qsizetype(void *thisObj,
                                                        qsizetype i);
void c_QList_T_unsigned_int_T___destructor(void *thisObj);
void c_QList_T_unsigned_int_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QStandardItem_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QStandardItem_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QStandardItem_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QStandardItem_T___at_qsizetype(void *thisObj,
                                                     qsizetype i);
// QList::back()
void *c_QList_T_QStandardItem_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QStandardItem_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QStandardItem_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QStandardItem_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QStandardItem_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QStandardItem_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QStandardItem_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QStandardItem_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QStandardItem_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QStandardItem_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QStandardItem_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QStandardItem_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QStandardItem_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QStandardItem_T___isSharedWith_QList_T(void *thisObj,
                                                      void *other_);
// QList::last()
void *c_QList_T_QStandardItem_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QStandardItem_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QStandardItem_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QStandardItem_T___mid_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype pos,
                                                          qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QStandardItem_T___move_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype from,
                                                          qsizetype to);
// QList::pop_back()
void c_QList_T_QStandardItem_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QStandardItem_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QStandardItem_T___remove_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype i,
                                                            qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QStandardItem_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QStandardItem_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QStandardItem_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QStandardItem_T___reserve_qsizetype(void *thisObj,
                                                   qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QStandardItem_T___resize_qsizetype(void *thisObj,
                                                  qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QStandardItem_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QStandardItem_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QStandardItem_T___sliced_qsizetype(void *thisObj,
                                                   qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QStandardItem_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                             qsizetype pos,
                                                             qsizetype n);
// QList::squeeze()
void c_QList_T_QStandardItem_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QStandardItem_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                 qsizetype i,
                                                                 qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QStandardItem_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QStandardItem_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QStandardItem_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QStandardItem_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QStandardItem_T___destructor(void *thisObj);
void c_QList_T_QStandardItem_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_qreal_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_qreal_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_qreal_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const qreal c_QList_T_qreal_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
qreal c_QList_T_qreal_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_qreal_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_qreal_T___clear(void *thisObj);
// QList::constFirst() const
const qreal c_QList_T_qreal_T___constFirst(void *thisObj);
// QList::constLast() const
const qreal c_QList_T_qreal_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_qreal_T___count(void *thisObj);
// QList::detach()
void c_QList_T_qreal_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_qreal_T___empty(void *thisObj);
// QList::first()
qreal c_QList_T_qreal_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_qreal_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
qreal c_QList_T_qreal_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_qreal_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_qreal_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_qreal_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
qreal c_QList_T_qreal_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_qreal_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_qreal_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_qreal_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_qreal_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                  qsizetype to);
// QList::pop_back()
void c_QList_T_qreal_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_qreal_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_qreal_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_qreal_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_qreal_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_qreal_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_qreal_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_qreal_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_qreal_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_qreal_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_qreal_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_qreal_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype n);
// QList::squeeze()
void c_QList_T_qreal_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_qreal_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype j);
// QList::takeAt(qsizetype i)
qreal c_QList_T_qreal_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_qreal_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_qreal_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
qreal c_QList_T_qreal_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_qreal_T___destructor(void *thisObj);
void c_QList_T_qreal_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QObject_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QObject_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QObject_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QObject_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QObject_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QObject_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QObject_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QObject_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QObject_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QObject_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QObject_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QObject_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QObject_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QObject_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QObject_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QObject_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QObject_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QObject_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QObject_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QObject_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QObject_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QObject_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QObject_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to);
// QList::pop_back()
void c_QList_T_QObject_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QObject_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QObject_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QObject_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QObject_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QObject_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QObject_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QObject_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QObject_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QObject_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QObject_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QObject_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n);
// QList::squeeze()
void c_QList_T_QObject_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QObject_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QObject_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QObject_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QObject_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QObject_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QObject_T___destructor(void *thisObj);
void c_QList_T_QObject_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QByteArray_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QByteArray_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QByteArray_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QByteArray_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QByteArray_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QByteArray_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QByteArray_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QByteArray_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QByteArray_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QByteArray_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QByteArray_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QByteArray_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QByteArray_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QByteArray_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QByteArray_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QByteArray_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QByteArray_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QByteArray_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QByteArray_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QByteArray_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QByteArray_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QByteArray_T___mid_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QByteArray_T___move_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype from,
                                                       qsizetype to);
// QList::pop_back()
void c_QList_T_QByteArray_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QByteArray_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QByteArray_T___remove_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QByteArray_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QByteArray_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QByteArray_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QByteArray_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QByteArray_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QByteArray_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QByteArray_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QByteArray_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QByteArray_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype pos,
                                                          qsizetype n);
// QList::squeeze()
void c_QList_T_QByteArray_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QByteArray_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                              qsizetype i,
                                                              qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QByteArray_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QByteArray_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QByteArray_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QByteArray_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QByteArray_T___destructor(void *thisObj);
void c_QList_T_QByteArray_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QAction_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QAction_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QAction_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QAction_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QAction_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QAction_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QAction_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QAction_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QAction_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QAction_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QAction_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QAction_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QAction_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QAction_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QAction_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QAction_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QAction_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QAction_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QAction_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QAction_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QAction_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QAction_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QAction_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to);
// QList::pop_back()
void c_QList_T_QAction_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QAction_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QAction_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QAction_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QAction_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QAction_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QAction_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QAction_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QAction_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QAction_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QAction_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QAction_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n);
// QList::squeeze()
void c_QList_T_QAction_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QAction_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QAction_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QAction_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QAction_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QAction_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QAction_T___destructor(void *thisObj);
void c_QList_T_QAction_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QKeySequence_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QKeySequence_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QKeySequence_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QKeySequence_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QKeySequence_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QKeySequence_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QKeySequence_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QKeySequence_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QKeySequence_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QKeySequence_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QKeySequence_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QKeySequence_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QKeySequence_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QKeySequence_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QKeySequence_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QKeySequence_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QKeySequence_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QKeySequence_T___isSharedWith_QList_T(void *thisObj,
                                                     void *other_);
// QList::last()
void *c_QList_T_QKeySequence_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QKeySequence_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QKeySequence_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QKeySequence_T___mid_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype pos,
                                                         qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QKeySequence_T___move_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype from,
                                                         qsizetype to);
// QList::pop_back()
void c_QList_T_QKeySequence_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QKeySequence_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QKeySequence_T___remove_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QKeySequence_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QKeySequence_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QKeySequence_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QKeySequence_T___reserve_qsizetype(void *thisObj,
                                                  qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QKeySequence_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QKeySequence_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QKeySequence_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QKeySequence_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QKeySequence_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype pos,
                                                            qsizetype n);
// QList::squeeze()
void c_QList_T_QKeySequence_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QKeySequence_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype i,
                                                                qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QKeySequence_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QKeySequence_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QKeySequence_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QKeySequence_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QKeySequence_T___destructor(void *thisObj);
void c_QList_T_QKeySequence_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QModelIndex_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QModelIndex_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QModelIndex_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QModelIndex_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QModelIndex_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QModelIndex_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QModelIndex_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QModelIndex_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QModelIndex_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QModelIndex_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QModelIndex_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QModelIndex_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QModelIndex_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QModelIndex_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QModelIndex_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QModelIndex_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QModelIndex_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QModelIndex_T___isSharedWith_QList_T(void *thisObj,
                                                    void *other_);
// QList::last()
void *c_QList_T_QModelIndex_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QModelIndex_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QModelIndex_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QModelIndex_T___mid_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype pos,
                                                        qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QModelIndex_T___move_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype from,
                                                        qsizetype to);
// QList::pop_back()
void c_QList_T_QModelIndex_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QModelIndex_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QModelIndex_T___remove_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype i,
                                                          qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QModelIndex_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QModelIndex_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QModelIndex_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QModelIndex_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QModelIndex_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QModelIndex_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QModelIndex_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QModelIndex_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QModelIndex_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype pos,
                                                           qsizetype n);
// QList::squeeze()
void c_QList_T_QModelIndex_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QModelIndex_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                               qsizetype i,
                                                               qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QModelIndex_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QModelIndex_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QModelIndex_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QModelIndex_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QModelIndex_T___destructor(void *thisObj);
void c_QList_T_QModelIndex_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QItemSelectionRange_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QItemSelectionRange_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QItemSelectionRange_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QItemSelectionRange_T___at_qsizetype(void *thisObj,
                                                           qsizetype i);
// QList::back()
void *c_QList_T_QItemSelectionRange_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QItemSelectionRange_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QItemSelectionRange_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QItemSelectionRange_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QItemSelectionRange_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QItemSelectionRange_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QItemSelectionRange_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QItemSelectionRange_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QItemSelectionRange_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___first_qsizetype(void *thisObj,
                                                        qsizetype n);
// QList::front()
void *c_QList_T_QItemSelectionRange_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QItemSelectionRange_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QItemSelectionRange_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QItemSelectionRange_T___isSharedWith_QList_T(void *thisObj,
                                                            void *other_);
// QList::last()
void *c_QList_T_QItemSelectionRange_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___last_qsizetype(void *thisObj,
                                                       qsizetype n);
// QList::length() const
qsizetype c_QList_T_QItemSelectionRange_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QItemSelectionRange_T___mid_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype pos,
                                                                qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QItemSelectionRange_T___move_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype from,
                                                                qsizetype to);
// QList::pop_back()
void c_QList_T_QItemSelectionRange_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QItemSelectionRange_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QItemSelectionRange_T___remove_qsizetype_qsizetype(void *thisObj,
                                                                  qsizetype i,
                                                                  qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QItemSelectionRange_T___removeAt_qsizetype(void *thisObj,
                                                          qsizetype i);
// QList::removeFirst()
void c_QList_T_QItemSelectionRange_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QItemSelectionRange_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QItemSelectionRange_T___reserve_qsizetype(void *thisObj,
                                                         qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QItemSelectionRange_T___resize_qsizetype(void *thisObj,
                                                        qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QItemSelectionRange_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QItemSelectionRange_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QItemSelectionRange_T___sliced_qsizetype(void *thisObj,
                                                         qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___sliced_qsizetype_qsizetype(
    void *thisObj, qsizetype pos, qsizetype n);
// QList::squeeze()
void c_QList_T_QItemSelectionRange_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QItemSelectionRange_T___swapItemsAt_qsizetype_qsizetype(
    void *thisObj, qsizetype i, qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QItemSelectionRange_T___takeAt_qsizetype(void *thisObj,
                                                         qsizetype i);
// QList::toList() const
void *c_QList_T_QItemSelectionRange_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QItemSelectionRange_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QItemSelectionRange_T___value_qsizetype(void *thisObj,
                                                        qsizetype i);
void c_QList_T_QItemSelectionRange_T___destructor(void *thisObj);
void c_QList_T_QItemSelectionRange_T__Finalizer(
    void *cppObj); // QList::QList<T>()
void *c_QList_T_QSize_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QSize_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QSize_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QSize_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QSize_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QSize_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QSize_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QSize_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QSize_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QSize_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QSize_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QSize_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QSize_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QSize_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QSize_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QSize_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QSize_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QSize_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QSize_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QSize_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QSize_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QSize_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QSize_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                  qsizetype to);
// QList::pop_back()
void c_QList_T_QSize_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QSize_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QSize_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QSize_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QSize_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QSize_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QSize_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QSize_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QSize_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QSize_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QSize_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QSize_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype n);
// QList::squeeze()
void c_QList_T_QSize_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QSize_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QSize_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QSize_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QSize_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QSize_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QSize_T___destructor(void *thisObj);
void c_QList_T_QSize_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_int_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_int_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_int_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const int c_QList_T_int_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
int c_QList_T_int_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_int_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_int_T___clear(void *thisObj);
// QList::constFirst() const
const int c_QList_T_int_T___constFirst(void *thisObj);
// QList::constLast() const
const int c_QList_T_int_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_int_T___count(void *thisObj);
// QList::detach()
void c_QList_T_int_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_int_T___empty(void *thisObj);
// QList::first()
int c_QList_T_int_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_int_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
int c_QList_T_int_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_int_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_int_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_int_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
int c_QList_T_int_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_int_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_int_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_int_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_int_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                qsizetype to);
// QList::pop_back()
void c_QList_T_int_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_int_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_int_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_int_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_int_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_int_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_int_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_int_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_int_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_int_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_int_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_int_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype n);
// QList::squeeze()
void c_QList_T_int_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype j);
// QList::takeAt(qsizetype i)
int c_QList_T_int_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_int_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_int_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
int c_QList_T_int_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_int_T___destructor(void *thisObj);
void c_QList_T_int_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QWindow_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QWindow_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QWindow_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QWindow_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QWindow_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QWindow_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QWindow_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QWindow_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QWindow_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QWindow_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QWindow_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QWindow_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QWindow_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QWindow_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QWindow_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QWindow_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QWindow_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QWindow_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QWindow_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QWindow_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QWindow_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QWindow_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QWindow_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to);
// QList::pop_back()
void c_QList_T_QWindow_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QWindow_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QWindow_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QWindow_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QWindow_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QWindow_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QWindow_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QWindow_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QWindow_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QWindow_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QWindow_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QWindow_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n);
// QList::squeeze()
void c_QList_T_QWindow_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QWindow_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QWindow_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QWindow_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QWindow_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QWindow_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QWindow_T___destructor(void *thisObj);
void c_QList_T_QWindow_T__Finalizer(void *cppObj); // QList::QList<T>()
void *c_QList_T_QWidget_T___constructor();
// QList::QList<T>(qsizetype size)
void *c_QList_T_QWidget_T___constructor_qsizetype(qsizetype size);
// QList::append(const QList<T > & l)
void c_QList_T_QWidget_T___append_QList_T(void *thisObj, void *l_);
// QList::at(qsizetype i) const
const void *c_QList_T_QWidget_T___at_qsizetype(void *thisObj, qsizetype i);
// QList::back()
void *c_QList_T_QWidget_T___back(void *thisObj);
// QList::capacity() const
qsizetype c_QList_T_QWidget_T___capacity(void *thisObj);
// QList::clear()
void c_QList_T_QWidget_T___clear(void *thisObj);
// QList::constFirst() const
const void *c_QList_T_QWidget_T___constFirst(void *thisObj);
// QList::constLast() const
const void *c_QList_T_QWidget_T___constLast(void *thisObj);
// QList::count() const
qsizetype c_QList_T_QWidget_T___count(void *thisObj);
// QList::detach()
void c_QList_T_QWidget_T___detach(void *thisObj);
// QList::empty() const
bool c_QList_T_QWidget_T___empty(void *thisObj);
// QList::first()
void *c_QList_T_QWidget_T___first(void *thisObj);
// QList::first(qsizetype n) const
void *c_QList_T_QWidget_T___first_qsizetype(void *thisObj, qsizetype n);
// QList::front()
void *c_QList_T_QWidget_T___front(void *thisObj);
// QList::isDetached() const
bool c_QList_T_QWidget_T___isDetached(void *thisObj);
// QList::isEmpty() const
bool c_QList_T_QWidget_T___isEmpty(void *thisObj);
// QList::isSharedWith(const QList<T > & other) const
bool c_QList_T_QWidget_T___isSharedWith_QList_T(void *thisObj, void *other_);
// QList::last()
void *c_QList_T_QWidget_T___last(void *thisObj);
// QList::last(qsizetype n) const
void *c_QList_T_QWidget_T___last_qsizetype(void *thisObj, qsizetype n);
// QList::length() const
qsizetype c_QList_T_QWidget_T___length(void *thisObj);
// QList::mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QWidget_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len);
// QList::move(qsizetype from, qsizetype to)
void c_QList_T_QWidget_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to);
// QList::pop_back()
void c_QList_T_QWidget_T___pop_back(void *thisObj);
// QList::pop_front()
void c_QList_T_QWidget_T___pop_front(void *thisObj);
// QList::remove(qsizetype i, qsizetype n)
void c_QList_T_QWidget_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype n);
// QList::removeAt(qsizetype i)
void c_QList_T_QWidget_T___removeAt_qsizetype(void *thisObj, qsizetype i);
// QList::removeFirst()
void c_QList_T_QWidget_T___removeFirst(void *thisObj);
// QList::removeLast()
void c_QList_T_QWidget_T___removeLast(void *thisObj);
// QList::reserve(qsizetype size)
void c_QList_T_QWidget_T___reserve_qsizetype(void *thisObj, qsizetype size);
// QList::resize(qsizetype size)
void c_QList_T_QWidget_T___resize_qsizetype(void *thisObj, qsizetype size);
// QList::shrink_to_fit()
void c_QList_T_QWidget_T___shrink_to_fit(void *thisObj);
// QList::size() const
qsizetype c_QList_T_QWidget_T___size(void *thisObj);
// QList::sliced(qsizetype pos) const
void *c_QList_T_QWidget_T___sliced_qsizetype(void *thisObj, qsizetype pos);
// QList::sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QWidget_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n);
// QList::squeeze()
void c_QList_T_QWidget_T___squeeze(void *thisObj);
// QList::swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QWidget_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j);
// QList::takeAt(qsizetype i)
void *c_QList_T_QWidget_T___takeAt_qsizetype(void *thisObj, qsizetype i);
// QList::toList() const
void *c_QList_T_QWidget_T___toList(void *thisObj);
// QList::toVector() const
void *c_QList_T_QWidget_T___toVector(void *thisObj);
// QList::value(qsizetype i) const
void *c_QList_T_QWidget_T___value_qsizetype(void *thisObj, qsizetype i);
void c_QList_T_QWidget_T___destructor(void *thisObj);
void c_QList_T_QWidget_T__Finalizer(void *cppObj); // QLineF::QLineF()
void *c_QLineF__constructor();
// QLineF::QLineF(const QLine & line)
void *c_QLineF__constructor_QLine(void *line_);
// QLineF::QLineF(const QPointF & pt1, const QPointF & pt2)
void *c_QLineF__constructor_QPointF_QPointF(void *pt1_, void *pt2_);
// QLineF::QLineF(qreal x1, qreal y1, qreal x2, qreal y2)
void *c_QLineF__constructor_qreal_qreal_qreal_qreal(qreal x1, qreal y1,
                                                    qreal x2, qreal y2);
// QLineF::angle() const
qreal c_QLineF__angle(void *thisObj);
// QLineF::angleTo(const QLineF & l) const
qreal c_QLineF__angleTo_QLineF(void *thisObj, void *l_);
// QLineF::center() const
void *c_QLineF__center(void *thisObj);
// QLineF::dx() const
qreal c_QLineF__dx(void *thisObj);
// QLineF::dy() const
qreal c_QLineF__dy(void *thisObj);
// QLineF::fromPolar(qreal length, qreal angle)
void *c_static_QLineF__fromPolar_qreal_qreal(qreal length, qreal angle);
// QLineF::isNull() const
bool c_QLineF__isNull(void *thisObj);
// QLineF::length() const
qreal c_QLineF__length(void *thisObj);
// QLineF::normalVector() const
void *c_QLineF__normalVector(void *thisObj);
// QLineF::p1() const
void *c_QLineF__p1(void *thisObj);
// QLineF::p2() const
void *c_QLineF__p2(void *thisObj);
// QLineF::pointAt(qreal t) const
void *c_QLineF__pointAt_qreal(void *thisObj, qreal t);
// QLineF::setAngle(qreal angle)
void c_QLineF__setAngle_qreal(void *thisObj, qreal angle);
// QLineF::setLength(qreal len)
void c_QLineF__setLength_qreal(void *thisObj, qreal len);
// QLineF::setLine(qreal x1, qreal y1, qreal x2, qreal y2)
void c_QLineF__setLine_qreal_qreal_qreal_qreal(void *thisObj, qreal x1,
                                               qreal y1, qreal x2, qreal y2);
// QLineF::setP1(const QPointF & p1)
void c_QLineF__setP1_QPointF(void *thisObj, void *p1_);
// QLineF::setP2(const QPointF & p2)
void c_QLineF__setP2_QPointF(void *thisObj, void *p2_);
// QLineF::setPoints(const QPointF & p1, const QPointF & p2)
void c_QLineF__setPoints_QPointF_QPointF(void *thisObj, void *p1_, void *p2_);
// QLineF::toLine() const
void *c_QLineF__toLine(void *thisObj);
// QLineF::translate(const QPointF & p)
void c_QLineF__translate_QPointF(void *thisObj, void *p_);
// QLineF::translate(qreal dx, qreal dy)
void c_QLineF__translate_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QLineF::translated(const QPointF & p) const
void *c_QLineF__translated_QPointF(void *thisObj, void *p_);
// QLineF::translated(qreal dx, qreal dy) const
void *c_QLineF__translated_qreal_qreal(void *thisObj, qreal dx, qreal dy);
// QLineF::unitVector() const
void *c_QLineF__unitVector(void *thisObj);
// QLineF::x1() const
qreal c_QLineF__x1(void *thisObj);
// QLineF::x2() const
qreal c_QLineF__x2(void *thisObj);
// QLineF::y1() const
qreal c_QLineF__y1(void *thisObj);
// QLineF::y2() const
qreal c_QLineF__y2(void *thisObj);
void c_QLineF__destructor(void *thisObj);
void c_QLineF_Finalizer(void *cppObj); // QLineEdit::QLineEdit(QWidget * parent)
void *c_QLineEdit__constructor_QWidget(void *parent_);
// QLineEdit::QLineEdit(const QString & arg__1, QWidget * parent)
void *c_QLineEdit__constructor_QString_QWidget(const char *arg__1_,
                                               void *parent_);
// QLineEdit::backspace()
void c_QLineEdit__backspace(void *thisObj);
// QLineEdit::changeEvent(QEvent * arg__1)
void c_QLineEdit__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QLineEdit::clear()
void c_QLineEdit__clear(void *thisObj);
// QLineEdit::copy() const
void c_QLineEdit__copy(void *thisObj);
// QLineEdit::createStandardContextMenu()
void *c_QLineEdit__createStandardContextMenu(void *thisObj);
// QLineEdit::cursorBackward(bool mark, int steps)
void c_QLineEdit__cursorBackward_bool_int(void *thisObj, bool mark, int steps);
// QLineEdit::cursorForward(bool mark, int steps)
void c_QLineEdit__cursorForward_bool_int(void *thisObj, bool mark, int steps);
// QLineEdit::cursorPosition() const
int c_QLineEdit__cursorPosition(void *thisObj);
// QLineEdit::cursorPositionAt(const QPoint & pos)
int c_QLineEdit__cursorPositionAt_QPoint(void *thisObj, void *pos_);
// QLineEdit::cursorPositionChanged(int arg__1, int arg__2)
void c_QLineEdit__cursorPositionChanged_int_int(void *thisObj, int arg__1,
                                                int arg__2);
void c_QLineEdit__onCursorPositionChanged_int_int(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::cursorRect() const
void *c_QLineEdit__cursorRect(void *thisObj);
// QLineEdit::cursorWordBackward(bool mark)
void c_QLineEdit__cursorWordBackward_bool(void *thisObj, bool mark);
// QLineEdit::cursorWordForward(bool mark)
void c_QLineEdit__cursorWordForward_bool(void *thisObj, bool mark);
// QLineEdit::customEvent(QEvent * event)
void c_QLineEdit__customEvent_QEvent(void *thisObj, void *event_);
// QLineEdit::cut()
void c_QLineEdit__cut(void *thisObj);
// QLineEdit::del()
void c_QLineEdit__del(void *thisObj);
// QLineEdit::deselect()
void c_QLineEdit__deselect(void *thisObj);
// QLineEdit::devType() const
int c_QLineEdit__devType(void *thisObj);
// QLineEdit::displayText() const
void *c_QLineEdit__displayText(void *thisObj);
// QLineEdit::dragEnabled() const
bool c_QLineEdit__dragEnabled(void *thisObj);
// QLineEdit::editingFinished()
void c_QLineEdit__editingFinished(void *thisObj);
void c_QLineEdit__onEditingFinished(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::end(bool mark)
void c_QLineEdit__end_bool(void *thisObj, bool mark);
// QLineEdit::event(QEvent * arg__1)
bool c_QLineEdit__event_QEvent(void *thisObj, void *arg__1_);
// QLineEdit::eventFilter(QObject * watched, QEvent * event)
bool c_QLineEdit__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_);
// QLineEdit::focusNextPrevChild(bool next)
bool c_QLineEdit__focusNextPrevChild_bool(void *thisObj, bool next);
// QLineEdit::hasAcceptableInput() const
bool c_QLineEdit__hasAcceptableInput(void *thisObj);
// QLineEdit::hasFrame() const
bool c_QLineEdit__hasFrame(void *thisObj);
// QLineEdit::hasHeightForWidth() const
bool c_QLineEdit__hasHeightForWidth(void *thisObj);
// QLineEdit::hasSelectedText() const
bool c_QLineEdit__hasSelectedText(void *thisObj);
// QLineEdit::heightForWidth(int arg__1) const
int c_QLineEdit__heightForWidth_int(void *thisObj, int arg__1);
// QLineEdit::home(bool mark)
void c_QLineEdit__home_bool(void *thisObj, bool mark);
// QLineEdit::initPainter(QPainter * painter) const
void c_QLineEdit__initPainter_QPainter(void *thisObj, void *painter_);
// QLineEdit::inputMask() const
void *c_QLineEdit__inputMask(void *thisObj);
// QLineEdit::inputRejected()
void c_QLineEdit__inputRejected(void *thisObj);
void c_QLineEdit__onInputRejected(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::insert(const QString & arg__1)
void c_QLineEdit__insert_QString(void *thisObj, const char *arg__1_);
// QLineEdit::isClearButtonEnabled() const
bool c_QLineEdit__isClearButtonEnabled(void *thisObj);
// QLineEdit::isModified() const
bool c_QLineEdit__isModified(void *thisObj);
// QLineEdit::isReadOnly() const
bool c_QLineEdit__isReadOnly(void *thisObj);
// QLineEdit::isRedoAvailable() const
bool c_QLineEdit__isRedoAvailable(void *thisObj);
// QLineEdit::isUndoAvailable() const
bool c_QLineEdit__isUndoAvailable(void *thisObj);
// QLineEdit::leaveEvent(QEvent * event)
void c_QLineEdit__leaveEvent_QEvent(void *thisObj, void *event_);
// QLineEdit::maxLength() const
int c_QLineEdit__maxLength(void *thisObj);
// QLineEdit::minimumSizeHint() const
void *c_QLineEdit__minimumSizeHint(void *thisObj);
// QLineEdit::mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *arg__1_);
// QLineEdit::mouseMoveEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QLineEdit::mousePressEvent(QMouseEvent * arg__1)
void c_QLineEdit__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QLineEdit::mouseReleaseEvent(QMouseEvent * arg__1)
void c_QLineEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QLineEdit::paintEvent(QPaintEvent * arg__1)
void c_QLineEdit__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QLineEdit::paste()
void c_QLineEdit__paste(void *thisObj);
// QLineEdit::placeholderText() const
void *c_QLineEdit__placeholderText(void *thisObj);
// QLineEdit::redo()
void c_QLineEdit__redo(void *thisObj);
// QLineEdit::returnPressed()
void c_QLineEdit__returnPressed(void *thisObj);
void c_QLineEdit__onReturnPressed(void *thisObj, void *contextQObject,
                                  void *callback); // QLineEdit::selectAll()
void c_QLineEdit__selectAll(void *thisObj);
// QLineEdit::selectedText() const
void *c_QLineEdit__selectedText(void *thisObj);
// QLineEdit::selectionChanged()
void c_QLineEdit__selectionChanged(void *thisObj);
void c_QLineEdit__onSelectionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::selectionEnd() const
int c_QLineEdit__selectionEnd(void *thisObj);
// QLineEdit::selectionLength() const
int c_QLineEdit__selectionLength(void *thisObj);
// QLineEdit::selectionStart() const
int c_QLineEdit__selectionStart(void *thisObj);
// QLineEdit::setClearButtonEnabled(bool enable)
void c_QLineEdit__setClearButtonEnabled_bool(void *thisObj, bool enable);
// QLineEdit::setCursorPosition(int arg__1)
void c_QLineEdit__setCursorPosition_int(void *thisObj, int arg__1);
// QLineEdit::setDragEnabled(bool b)
void c_QLineEdit__setDragEnabled_bool(void *thisObj, bool b);
// QLineEdit::setFrame(bool arg__1)
void c_QLineEdit__setFrame_bool(void *thisObj, bool arg__1);
// QLineEdit::setInputMask(const QString & inputMask)
void c_QLineEdit__setInputMask_QString(void *thisObj, const char *inputMask_);
// QLineEdit::setMaxLength(int arg__1)
void c_QLineEdit__setMaxLength_int(void *thisObj, int arg__1);
// QLineEdit::setModified(bool arg__1)
void c_QLineEdit__setModified_bool(void *thisObj, bool arg__1);
// QLineEdit::setPlaceholderText(const QString & arg__1)
void c_QLineEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *arg__1_);
// QLineEdit::setReadOnly(bool arg__1)
void c_QLineEdit__setReadOnly_bool(void *thisObj, bool arg__1);
// QLineEdit::setSelection(int arg__1, int arg__2)
void c_QLineEdit__setSelection_int_int(void *thisObj, int arg__1, int arg__2);
// QLineEdit::setText(const QString & arg__1)
void c_QLineEdit__setText_QString(void *thisObj, const char *arg__1_);
// QLineEdit::setTextMargins(int left, int top, int right, int bottom)
void c_QLineEdit__setTextMargins_int_int_int_int(void *thisObj, int left,
                                                 int top, int right,
                                                 int bottom);
// QLineEdit::setVisible(bool visible)
void c_QLineEdit__setVisible_bool(void *thisObj, bool visible);
// QLineEdit::sharedPainter() const
void *c_QLineEdit__sharedPainter(void *thisObj);
// QLineEdit::sizeHint() const
void *c_QLineEdit__sizeHint(void *thisObj);
// QLineEdit::text() const
void *c_QLineEdit__text(void *thisObj);
// QLineEdit::textChanged(const QString & arg__1)
void c_QLineEdit__textChanged_QString(void *thisObj, const char *arg__1_);
void c_QLineEdit__onTextChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::textEdited(const QString & arg__1)
void c_QLineEdit__textEdited_QString(void *thisObj, const char *arg__1_);
void c_QLineEdit__onTextEdited_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::tr(const char * s, const char * c, int n)
void *c_static_QLineEdit__tr_char_char_int(const char *s, const char *c, int n);
// QLineEdit::undo()
void c_QLineEdit__undo(void *thisObj);
void c_QLineEdit__destructor(void *thisObj);
void c_QLineEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QLineEdit_Finalizer(void *cppObj); // QLine::QLine()
void *c_QLine__constructor();
// QLine::QLine(const QPoint & pt1, const QPoint & pt2)
void *c_QLine__constructor_QPoint_QPoint(void *pt1_, void *pt2_);
// QLine::QLine(int x1, int y1, int x2, int y2)
void *c_QLine__constructor_int_int_int_int(int x1, int y1, int x2, int y2);
// QLine::center() const
void *c_QLine__center(void *thisObj);
// QLine::dx() const
int c_QLine__dx(void *thisObj);
// QLine::dy() const
int c_QLine__dy(void *thisObj);
// QLine::isNull() const
bool c_QLine__isNull(void *thisObj);
// QLine::p1() const
void *c_QLine__p1(void *thisObj);
// QLine::p2() const
void *c_QLine__p2(void *thisObj);
// QLine::setLine(int x1, int y1, int x2, int y2)
void c_QLine__setLine_int_int_int_int(void *thisObj, int x1, int y1, int x2,
                                      int y2);
// QLine::setP1(const QPoint & p1)
void c_QLine__setP1_QPoint(void *thisObj, void *p1_);
// QLine::setP2(const QPoint & p2)
void c_QLine__setP2_QPoint(void *thisObj, void *p2_);
// QLine::setPoints(const QPoint & p1, const QPoint & p2)
void c_QLine__setPoints_QPoint_QPoint(void *thisObj, void *p1_, void *p2_);
// QLine::toLineF() const
void *c_QLine__toLineF(void *thisObj);
// QLine::translate(const QPoint & p)
void c_QLine__translate_QPoint(void *thisObj, void *p_);
// QLine::translate(int dx, int dy)
void c_QLine__translate_int_int(void *thisObj, int dx, int dy);
// QLine::translated(const QPoint & p) const
void *c_QLine__translated_QPoint(void *thisObj, void *p_);
// QLine::translated(int dx, int dy) const
void *c_QLine__translated_int_int(void *thisObj, int dx, int dy);
// QLine::x1() const
int c_QLine__x1(void *thisObj);
// QLine::x2() const
int c_QLine__x2(void *thisObj);
// QLine::y1() const
int c_QLine__y1(void *thisObj);
// QLine::y2() const
int c_QLine__y2(void *thisObj);
void c_QLine__destructor(void *thisObj);
void c_QLine_Finalizer(void *cppObj); // QLayoutItem::QLayoutItem()
void *c_QLayoutItem__constructor();
// QLayoutItem::expandingDirections() const
int c_QLayoutItem__expandingDirections(void *thisObj);
// QLayoutItem::geometry() const
void *c_QLayoutItem__geometry(void *thisObj);
// QLayoutItem::hasHeightForWidth() const
bool c_QLayoutItem__hasHeightForWidth(void *thisObj);
// QLayoutItem::heightForWidth(int arg__1) const
int c_QLayoutItem__heightForWidth_int(void *thisObj, int arg__1);
// QLayoutItem::invalidate()
void c_QLayoutItem__invalidate(void *thisObj);
// QLayoutItem::isEmpty() const
bool c_QLayoutItem__isEmpty(void *thisObj);
// QLayoutItem::layout()
void *c_QLayoutItem__layout(void *thisObj);
// QLayoutItem::maximumSize() const
void *c_QLayoutItem__maximumSize(void *thisObj);
// QLayoutItem::minimumHeightForWidth(int arg__1) const
int c_QLayoutItem__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QLayoutItem::minimumSize() const
void *c_QLayoutItem__minimumSize(void *thisObj);
// QLayoutItem::setGeometry(const QRect & arg__1)
void c_QLayoutItem__setGeometry_QRect(void *thisObj, void *arg__1_);
// QLayoutItem::sizeHint() const
void *c_QLayoutItem__sizeHint(void *thisObj);
// QLayoutItem::widget() const
void *c_QLayoutItem__widget(void *thisObj);
void c_QLayoutItem__destructor(void *thisObj);
void c_QLayoutItem__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QLayoutItem_Finalizer(
    void *cppObj); // QLayout::QLayout(QWidget * parent)
void *c_QLayout__constructor_QWidget(void *parent_);
// QLayout::activate()
bool c_QLayout__activate(void *thisObj);
// QLayout::addChildLayout(QLayout * l)
void c_QLayout__addChildLayout_QLayout(void *thisObj, void *l_);
// QLayout::addChildWidget(QWidget * w)
void c_QLayout__addChildWidget_QWidget(void *thisObj, void *w_);
// QLayout::addItem(QLayoutItem * arg__1)
void c_QLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_);
// QLayout::addWidget(QWidget * w)
void c_QLayout__addWidget_QWidget(void *thisObj, void *w_);
// QLayout::adoptLayout(QLayout * layout)
bool c_QLayout__adoptLayout_QLayout(void *thisObj, void *layout_);
// QLayout::alignmentRect(const QRect & arg__1) const
void *c_QLayout__alignmentRect_QRect(void *thisObj, void *arg__1_);
// QLayout::closestAcceptableSize(const QWidget * w, const QSize & s)
void *c_static_QLayout__closestAcceptableSize_QWidget_QSize(void *w_, void *s_);
// QLayout::contentsRect() const
void *c_QLayout__contentsRect(void *thisObj);
// QLayout::count() const
int c_QLayout__count(void *thisObj);
// QLayout::customEvent(QEvent * event)
void c_QLayout__customEvent_QEvent(void *thisObj, void *event_);
// QLayout::event(QEvent * event)
bool c_QLayout__event_QEvent(void *thisObj, void *event_);
// QLayout::eventFilter(QObject * watched, QEvent * event)
bool c_QLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_);
// QLayout::expandingDirections() const
int c_QLayout__expandingDirections(void *thisObj);
// QLayout::geometry() const
void *c_QLayout__geometry(void *thisObj);
// QLayout::hasHeightForWidth() const
bool c_QLayout__hasHeightForWidth(void *thisObj);
// QLayout::heightForWidth(int arg__1) const
int c_QLayout__heightForWidth_int(void *thisObj, int arg__1);
// QLayout::indexOf(const QLayoutItem * arg__1) const
int c_QLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_);
// QLayout::indexOf(const QWidget * arg__1) const
int c_QLayout__indexOf_QWidget(void *thisObj, void *arg__1_);
// QLayout::invalidate()
void c_QLayout__invalidate(void *thisObj);
// QLayout::isEmpty() const
bool c_QLayout__isEmpty(void *thisObj);
// QLayout::isEnabled() const
bool c_QLayout__isEnabled(void *thisObj);
// QLayout::itemAt(int index) const
void *c_QLayout__itemAt_int(void *thisObj, int index);
// QLayout::layout()
void *c_QLayout__layout(void *thisObj);
// QLayout::maximumSize() const
void *c_QLayout__maximumSize(void *thisObj);
// QLayout::menuBar() const
void *c_QLayout__menuBar(void *thisObj);
// QLayout::minimumHeightForWidth(int arg__1) const
int c_QLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QLayout::minimumSize() const
void *c_QLayout__minimumSize(void *thisObj);
// QLayout::parentWidget() const
void *c_QLayout__parentWidget(void *thisObj);
// QLayout::removeItem(QLayoutItem * arg__1)
void c_QLayout__removeItem_QLayoutItem(void *thisObj, void *arg__1_);
// QLayout::removeWidget(QWidget * w)
void c_QLayout__removeWidget_QWidget(void *thisObj, void *w_);
// QLayout::setContentsMargins(int left, int top, int right, int bottom)
void c_QLayout__setContentsMargins_int_int_int_int(void *thisObj, int left,
                                                   int top, int right,
                                                   int bottom);
// QLayout::setEnabled(bool arg__1)
void c_QLayout__setEnabled_bool(void *thisObj, bool arg__1);
// QLayout::setGeometry(const QRect & arg__1)
void c_QLayout__setGeometry_QRect(void *thisObj, void *arg__1_);
// QLayout::setMenuBar(QWidget * w)
void c_QLayout__setMenuBar_QWidget(void *thisObj, void *w_);
// QLayout::setSpacing(int arg__1)
void c_QLayout__setSpacing_int(void *thisObj, int arg__1);
// QLayout::sizeHint() const
void *c_QLayout__sizeHint(void *thisObj);
// QLayout::spacing() const
int c_QLayout__spacing(void *thisObj);
// QLayout::takeAt(int index)
void *c_QLayout__takeAt_int(void *thisObj, int index);
// QLayout::totalHeightForWidth(int w) const
int c_QLayout__totalHeightForWidth_int(void *thisObj, int w);
// QLayout::totalMaximumSize() const
void *c_QLayout__totalMaximumSize(void *thisObj);
// QLayout::totalMinimumHeightForWidth(int w) const
int c_QLayout__totalMinimumHeightForWidth_int(void *thisObj, int w);
// QLayout::totalMinimumSize() const
void *c_QLayout__totalMinimumSize(void *thisObj);
// QLayout::totalSizeHint() const
void *c_QLayout__totalSizeHint(void *thisObj);
// QLayout::tr(const char * s, const char * c, int n)
void *c_static_QLayout__tr_char_char_int(const char *s, const char *c, int n);
// QLayout::unsetContentsMargins()
void c_QLayout__unsetContentsMargins(void *thisObj);
// QLayout::update()
void c_QLayout__update(void *thisObj);
// QLayout::widget() const
void *c_QLayout__widget(void *thisObj);
// QLayout::widgetEvent(QEvent * arg__1)
void c_QLayout__widgetEvent_QEvent(void *thisObj, void *arg__1_);
void c_QLayout__destructor(void *thisObj);
void c_QLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
void c_QLayout_Finalizer(void *cppObj); // QKeySequence::QKeySequence()
void *c_QKeySequence__constructor();
// QKeySequence::QKeySequence(QKeySequence::StandardKey key)
void *c_QKeySequence__constructor_StandardKey(int key);
// QKeySequence::QKeySequence(const QString & key)
void *c_QKeySequence__constructor_QString(const char *key_);
// QKeySequence::QKeySequence(int k1, int k2, int k3, int k4)
void *c_QKeySequence__constructor_int_int_int_int(int k1, int k2, int k3,
                                                  int k4);
// QKeySequence::count() const
int c_QKeySequence__count(void *thisObj);
// QKeySequence::fromString(const QString & str)
void *c_static_QKeySequence__fromString_QString(const char *str_);
// QKeySequence::isDetached() const
bool c_QKeySequence__isDetached(void *thisObj);
// QKeySequence::isEmpty() const
bool c_QKeySequence__isEmpty(void *thisObj);
// QKeySequence::keyBindings(QKeySequence::StandardKey key)
void *c_static_QKeySequence__keyBindings_StandardKey(int key);
// QKeySequence::listFromString(const QString & str)
void *c_static_QKeySequence__listFromString_QString(const char *str_);
// QKeySequence::listToString(const QList<QKeySequence > & list)
void *c_static_QKeySequence__listToString_QList_QKeySequence(void *list_);
// QKeySequence::mnemonic(const QString & text)
void *c_static_QKeySequence__mnemonic_QString(const char *text_);
void c_QKeySequence__destructor(void *thisObj);
void c_QKeySequence_Finalizer(
    void *cppObj); // QItemSelectionRange::QItemSelectionRange()
void *c_QItemSelectionRange__constructor();
// QItemSelectionRange::QItemSelectionRange(const QModelIndex & index)
void *c_QItemSelectionRange__constructor_QModelIndex(void *index_);
// QItemSelectionRange::QItemSelectionRange(const QModelIndex & topL, const
// QModelIndex & bottomR)
void *
c_QItemSelectionRange__constructor_QModelIndex_QModelIndex(void *topL_,
                                                           void *bottomR_);
// QItemSelectionRange::bottom() const
int c_QItemSelectionRange__bottom(void *thisObj);
// QItemSelectionRange::contains(const QModelIndex & index) const
bool c_QItemSelectionRange__contains_QModelIndex(void *thisObj, void *index_);
// QItemSelectionRange::contains(int row, int column, const QModelIndex &
// parentIndex) const
bool c_QItemSelectionRange__contains_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *parentIndex_);
// QItemSelectionRange::height() const
int c_QItemSelectionRange__height(void *thisObj);
// QItemSelectionRange::indexes() const
void *c_QItemSelectionRange__indexes(void *thisObj);
// QItemSelectionRange::intersected(const QItemSelectionRange & other) const
void *c_QItemSelectionRange__intersected_QItemSelectionRange(void *thisObj,
                                                             void *other_);
// QItemSelectionRange::intersects(const QItemSelectionRange & other) const
bool c_QItemSelectionRange__intersects_QItemSelectionRange(void *thisObj,
                                                           void *other_);
// QItemSelectionRange::isEmpty() const
bool c_QItemSelectionRange__isEmpty(void *thisObj);
// QItemSelectionRange::isValid() const
bool c_QItemSelectionRange__isValid(void *thisObj);
// QItemSelectionRange::left() const
int c_QItemSelectionRange__left(void *thisObj);
// QItemSelectionRange::model() const
void *c_QItemSelectionRange__model(void *thisObj);
// QItemSelectionRange::parent() const
void *c_QItemSelectionRange__parent(void *thisObj);
// QItemSelectionRange::right() const
int c_QItemSelectionRange__right(void *thisObj);
// QItemSelectionRange::top() const
int c_QItemSelectionRange__top(void *thisObj);
// QItemSelectionRange::width() const
int c_QItemSelectionRange__width(void *thisObj);
void c_QItemSelectionRange__destructor(void *thisObj);
void c_QItemSelectionRange_Finalizer(void *cppObj); // QItemSelectionModel::QItemSelectionModel(QAbstractItemModel
                                                    // * model)
void *c_QItemSelectionModel__constructor_QAbstractItemModel(void *model_);
// QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model, QObject
// * parent)
void *
c_QItemSelectionModel__constructor_QAbstractItemModel_QObject(void *model_,
                                                              void *parent_);
// QItemSelectionModel::clear()
void c_QItemSelectionModel__clear(void *thisObj);
// QItemSelectionModel::clearCurrentIndex()
void c_QItemSelectionModel__clearCurrentIndex(void *thisObj);
// QItemSelectionModel::clearSelection()
void c_QItemSelectionModel__clearSelection(void *thisObj);
// QItemSelectionModel::columnIntersectsSelection(int column, const QModelIndex
// & parent) const
bool c_QItemSelectionModel__columnIntersectsSelection_int_QModelIndex(
    void *thisObj, int column, void *parent_);
// QItemSelectionModel::currentChanged(const QModelIndex & current, const
// QModelIndex & previous)
void c_QItemSelectionModel__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
void c_QItemSelectionModel__onCurrentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::currentColumnChanged(const
                     // QModelIndex & current, const QModelIndex & previous)
void c_QItemSelectionModel__currentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
void c_QItemSelectionModel__onCurrentColumnChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::currentIndex() const
void *c_QItemSelectionModel__currentIndex(void *thisObj);
// QItemSelectionModel::currentRowChanged(const QModelIndex & current, const
// QModelIndex & previous)
void c_QItemSelectionModel__currentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
void c_QItemSelectionModel__onCurrentRowChanged_QModelIndex_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::customEvent(QEvent * event)
void c_QItemSelectionModel__customEvent_QEvent(void *thisObj, void *event_);
// QItemSelectionModel::emitSelectionChanged(const QItemSelection &
// newSelection, const QItemSelection & oldSelection)
void c_QItemSelectionModel__emitSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *newSelection_, void *oldSelection_);
// QItemSelectionModel::event(QEvent * event)
bool c_QItemSelectionModel__event_QEvent(void *thisObj, void *event_);
// QItemSelectionModel::eventFilter(QObject * watched, QEvent * event)
bool c_QItemSelectionModel__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *watched_,
                                                       void *event_);
// QItemSelectionModel::hasSelection() const
bool c_QItemSelectionModel__hasSelection(void *thisObj);
// QItemSelectionModel::isColumnSelected(int column, const QModelIndex & parent)
// const
bool c_QItemSelectionModel__isColumnSelected_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             void *parent_);
// QItemSelectionModel::isRowSelected(int row, const QModelIndex & parent) const
bool c_QItemSelectionModel__isRowSelected_int_QModelIndex(void *thisObj,
                                                          int row,
                                                          void *parent_);
// QItemSelectionModel::isSelected(const QModelIndex & index) const
bool c_QItemSelectionModel__isSelected_QModelIndex(void *thisObj, void *index_);
// QItemSelectionModel::model()
void *c_QItemSelectionModel__model(void *thisObj);
// QItemSelectionModel::modelChanged(QAbstractItemModel * model)
void c_QItemSelectionModel__modelChanged_QAbstractItemModel(void *thisObj,
                                                            void *model_);
void c_QItemSelectionModel__onModelChanged_QAbstractItemModel(
    void *thisObj, void *contextQObject,
    void *callback); // QItemSelectionModel::reset()
void c_QItemSelectionModel__reset(void *thisObj);
// QItemSelectionModel::rowIntersectsSelection(int row, const QModelIndex &
// parent) const
bool c_QItemSelectionModel__rowIntersectsSelection_int_QModelIndex(
    void *thisObj, int row, void *parent_);
// QItemSelectionModel::select(const QItemSelection & selection,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelectionModel__select_QItemSelection_SelectionFlags(
    void *thisObj, void *selection_, int command_);
// QItemSelectionModel::select(const QModelIndex & index,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelectionModel__selectIndex_QModelIndex_SelectionFlags(
    void *thisObj, void *index_, int command_);
// QItemSelectionModel::selectedColumns(int row) const
void *c_QItemSelectionModel__selectedColumns_int(void *thisObj, int row);
// QItemSelectionModel::selectedIndexes() const
void *c_QItemSelectionModel__selectedIndexes(void *thisObj);
// QItemSelectionModel::selectedRows(int column) const
void *c_QItemSelectionModel__selectedRows_int(void *thisObj, int column);
// QItemSelectionModel::selection() const
void *c_QItemSelectionModel__selection(void *thisObj);
// QItemSelectionModel::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
void c_QItemSelectionModel__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);
void c_QItemSelectionModel__onSelectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *contextQObject,
    void *
        callback); // QItemSelectionModel::setCurrentIndex(const QModelIndex &
                   // index, QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelectionModel__setCurrentIndex_QModelIndex_SelectionFlags(
    void *thisObj, void *index_, int command_);
// QItemSelectionModel::setModel(QAbstractItemModel * model)
void c_QItemSelectionModel__setModel_QAbstractItemModel(void *thisObj,
                                                        void *model_);
// QItemSelectionModel::tr(const char * s, const char * c, int n)
void *c_static_QItemSelectionModel__tr_char_char_int(const char *s,
                                                     const char *c, int n);
void c_QItemSelectionModel__destructor(void *thisObj);
void c_QItemSelectionModel__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId);
void c_QItemSelectionModel_Finalizer(
    void *cppObj); // QItemSelection::QItemSelection(const QModelIndex &
                   // topLeft, const QModelIndex & bottomRight)
void *c_QItemSelection__constructor_QModelIndex_QModelIndex(void *topLeft_,
                                                            void *bottomRight_);
// QItemSelection::append(const QList<QItemSelectionRange > & l)
void c_QItemSelection__append_QList_QItemSelectionRange(void *thisObj,
                                                        void *l_);
// QItemSelection::at(qsizetype i) const
void *c_QItemSelection__at_qsizetype(void *thisObj, qsizetype i);
// QItemSelection::back()
void *c_QItemSelection__back(void *thisObj);
// QItemSelection::capacity() const
qsizetype c_QItemSelection__capacity(void *thisObj);
// QItemSelection::clear()
void c_QItemSelection__clear(void *thisObj);
// QItemSelection::constData() const
void *c_QItemSelection__constData(void *thisObj);
// QItemSelection::constFirst() const
void *c_QItemSelection__constFirst(void *thisObj);
// QItemSelection::constLast() const
void *c_QItemSelection__constLast(void *thisObj);
// QItemSelection::contains(const QModelIndex & index) const
bool c_QItemSelection__contains_QModelIndex(void *thisObj, void *index_);
// QItemSelection::count() const
qsizetype c_QItemSelection__count(void *thisObj);
// QItemSelection::data()
void *c_QItemSelection__data(void *thisObj);
// QItemSelection::detach()
void c_QItemSelection__detach(void *thisObj);
// QItemSelection::empty() const
bool c_QItemSelection__empty(void *thisObj);
// QItemSelection::first()
void *c_QItemSelection__first(void *thisObj);
// QItemSelection::first(qsizetype n) const
void *c_QItemSelection__first_qsizetype(void *thisObj, qsizetype n);
// QItemSelection::fromList(const QList<QItemSelectionRange > & list)
void *c_static_QItemSelection__fromList_QList_QItemSelectionRange(void *list_);
// QItemSelection::fromVector(const QList<QItemSelectionRange > & vector)
void *
c_static_QItemSelection__fromVector_QList_QItemSelectionRange(void *vector_);
// QItemSelection::front()
void *c_QItemSelection__front(void *thisObj);
// QItemSelection::indexes() const
void *c_QItemSelection__indexes(void *thisObj);
// QItemSelection::isDetached() const
bool c_QItemSelection__isDetached(void *thisObj);
// QItemSelection::isEmpty() const
bool c_QItemSelection__isEmpty(void *thisObj);
// QItemSelection::isSharedWith(const QList<QItemSelectionRange > & other) const
bool c_QItemSelection__isSharedWith_QList_QItemSelectionRange(void *thisObj,
                                                              void *other_);
// QItemSelection::last()
void *c_QItemSelection__last(void *thisObj);
// QItemSelection::last(qsizetype n) const
void *c_QItemSelection__last_qsizetype(void *thisObj, qsizetype n);
// QItemSelection::length() const
qsizetype c_QItemSelection__length(void *thisObj);
// QItemSelection::merge(const QItemSelection & other,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QItemSelection__merge_QItemSelection_SelectionFlags(void *thisObj,
                                                           void *other_,
                                                           int command_);
// QItemSelection::mid(qsizetype pos, qsizetype len) const
void *c_QItemSelection__mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                qsizetype len);
// QItemSelection::move(qsizetype from, qsizetype to)
void c_QItemSelection__move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                qsizetype to);
// QItemSelection::pop_back()
void c_QItemSelection__pop_back(void *thisObj);
// QItemSelection::pop_front()
void c_QItemSelection__pop_front(void *thisObj);
// QItemSelection::remove(qsizetype i, qsizetype n)
void c_QItemSelection__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype n);
// QItemSelection::removeAt(qsizetype i)
void c_QItemSelection__removeAt_qsizetype(void *thisObj, qsizetype i);
// QItemSelection::removeFirst()
void c_QItemSelection__removeFirst(void *thisObj);
// QItemSelection::removeLast()
void c_QItemSelection__removeLast(void *thisObj);
// QItemSelection::reserve(qsizetype size)
void c_QItemSelection__reserve_qsizetype(void *thisObj, qsizetype size);
// QItemSelection::resize(qsizetype size)
void c_QItemSelection__resize_qsizetype(void *thisObj, qsizetype size);
// QItemSelection::select(const QModelIndex & topLeft, const QModelIndex &
// bottomRight)
void c_QItemSelection__select_QModelIndex_QModelIndex(void *thisObj,
                                                      void *topLeft_,
                                                      void *bottomRight_);
// QItemSelection::shrink_to_fit()
void c_QItemSelection__shrink_to_fit(void *thisObj);
// QItemSelection::size() const
qsizetype c_QItemSelection__size(void *thisObj);
// QItemSelection::sliced(qsizetype pos) const
void *c_QItemSelection__sliced_qsizetype(void *thisObj, qsizetype pos);
// QItemSelection::sliced(qsizetype pos, qsizetype n) const
void *c_QItemSelection__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype n);
// QItemSelection::split(const QItemSelectionRange & range, const
// QItemSelectionRange & other, QItemSelection * result)
void c_static_QItemSelection__split_QItemSelectionRange_QItemSelectionRange_QItemSelection(
    void *range_, void *other_, void *result_);
// QItemSelection::squeeze()
void c_QItemSelection__squeeze(void *thisObj);
// QItemSelection::swapItemsAt(qsizetype i, qsizetype j)
void c_QItemSelection__swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype j);
// QItemSelection::takeAt(qsizetype i)
void *c_QItemSelection__takeAt_qsizetype(void *thisObj, qsizetype i);
// QItemSelection::toList() const
void *c_QItemSelection__toList(void *thisObj);
// QItemSelection::toVector() const
void *c_QItemSelection__toVector(void *thisObj);
// QItemSelection::value(qsizetype i) const
void *c_QItemSelection__value_qsizetype(void *thisObj, qsizetype i);
void c_QItemSelection__destructor(void *thisObj);
void c_QItemSelection_Finalizer(void *cppObj); // QIcon::QIcon()
void *c_QIcon__constructor();
// QIcon::QIcon(const QPixmap & pixmap)
void *c_QIcon__constructor_QPixmap(void *pixmap_);
// QIcon::QIcon(const QString & fileName)
void *c_QIcon__constructor_QString(const char *fileName_);
// QIcon::actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state)
// const
void *c_QIcon__actualSize_QSize_Mode_State(void *thisObj, void *size_, int mode,
                                           int state);
// QIcon::addFile(const QString & fileName, const QSize & size, QIcon::Mode
// mode, QIcon::State state)
void c_QIcon__addFile_QString_QSize_Mode_State(void *thisObj,
                                               const char *fileName_,
                                               void *size_, int mode,
                                               int state);
// QIcon::addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State
// state)
void c_QIcon__addPixmap_QPixmap_Mode_State(void *thisObj, void *pixmap_,
                                           int mode, int state);
// QIcon::availableSizes(QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__availableSizes_Mode_State(void *thisObj, int mode, int state);
// QIcon::cacheKey() const
qint64 c_QIcon__cacheKey(void *thisObj);
// QIcon::detach()
void c_QIcon__detach(void *thisObj);
// QIcon::fallbackSearchPaths()
void *c_static_QIcon__fallbackSearchPaths();
// QIcon::fallbackThemeName()
void *c_static_QIcon__fallbackThemeName();
// QIcon::fromTheme(const QString & name)
void *c_static_QIcon__fromTheme_QString(const char *name_);
// QIcon::fromTheme(const QString & name, const QIcon & fallback)
void *c_static_QIcon__fromTheme_QString_QIcon(const char *name_,
                                              void *fallback_);
// QIcon::hasThemeIcon(const QString & name)
bool c_static_QIcon__hasThemeIcon_QString(const char *name_);
// QIcon::isDetached() const
bool c_QIcon__isDetached(void *thisObj);
// QIcon::isMask() const
bool c_QIcon__isMask(void *thisObj);
// QIcon::isNull() const
bool c_QIcon__isNull(void *thisObj);
// QIcon::name() const
void *c_QIcon__name(void *thisObj);
// QIcon::paint(QPainter * painter, const QRect & rect) const
void c_QIcon__paint_QPainter_QRect(void *thisObj, void *painter_, void *rect_);
// QIcon::paint(QPainter * painter, int x, int y, int w, int h) const
void c_QIcon__paint_QPainter_int_int_int_int(void *thisObj, void *painter_,
                                             int x, int y, int w, int h);
// QIcon::pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_QSize_Mode_State(void *thisObj, void *size_, int mode,
                                       int state);
// QIcon::pixmap(const QSize & size, qreal devicePixelRatio, QIcon::Mode mode,
// QIcon::State state) const
void *c_QIcon__pixmap_QSize_qreal_Mode_State(void *thisObj, void *size_,
                                             qreal devicePixelRatio, int mode,
                                             int state);
// QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_int_Mode_State(void *thisObj, int extent, int mode,
                                     int state);
// QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_int_int_Mode_State(void *thisObj, int w, int h, int mode,
                                         int state);
// QIcon::setFallbackSearchPaths(const QList<QString > & paths)
void c_static_QIcon__setFallbackSearchPaths_QList_QString(void *paths_);
// QIcon::setFallbackThemeName(const QString & name)
void c_static_QIcon__setFallbackThemeName_QString(const char *name_);
// QIcon::setIsMask(bool isMask)
void c_QIcon__setIsMask_bool(void *thisObj, bool isMask);
// QIcon::setThemeName(const QString & path)
void c_static_QIcon__setThemeName_QString(const char *path_);
// QIcon::setThemeSearchPaths(const QList<QString > & searchpath)
void c_static_QIcon__setThemeSearchPaths_QList_QString(void *searchpath_);
// QIcon::themeName()
void *c_static_QIcon__themeName();
// QIcon::themeSearchPaths()
void *c_static_QIcon__themeSearchPaths();
void c_QIcon__destructor(void *thisObj);
void c_QIcon_Finalizer(void *cppObj); // QIODevice::QIODevice()
void *c_QIODevice__constructor();
// QIODevice::QIODevice(QObject * parent)
void *c_QIODevice__constructor_QObject(void *parent_);
// QIODevice::aboutToClose()
void c_QIODevice__aboutToClose(void *thisObj);
void c_QIODevice__onAboutToClose(void *thisObj, void *contextQObject,
                                 void *callback); // QIODevice::atEnd() const
bool c_QIODevice__atEnd(void *thisObj);
// QIODevice::bytesAvailable() const
qint64 c_QIODevice__bytesAvailable(void *thisObj);
// QIODevice::bytesToWrite() const
qint64 c_QIODevice__bytesToWrite(void *thisObj);
// QIODevice::bytesWritten(qint64 bytes)
void c_QIODevice__bytesWritten_qint64(void *thisObj, qint64 bytes);
void c_QIODevice__onBytesWritten_qint64(
    void *thisObj, void *contextQObject,
    void *callback); // QIODevice::canReadLine() const
bool c_QIODevice__canReadLine(void *thisObj);
// QIODevice::channelBytesWritten(int channel, qint64 bytes)
void c_QIODevice__channelBytesWritten_int_qint64(void *thisObj, int channel,
                                                 qint64 bytes);
void c_QIODevice__onChannelBytesWritten_int_qint64(
    void *thisObj, void *contextQObject,
    void *callback); // QIODevice::channelReadyRead(int channel)
void c_QIODevice__channelReadyRead_int(void *thisObj, int channel);
void c_QIODevice__onChannelReadyRead_int(void *thisObj, void *contextQObject,
                                         void *callback); // QIODevice::close()
void c_QIODevice__close(void *thisObj);
// QIODevice::commitTransaction()
void c_QIODevice__commitTransaction(void *thisObj);
// QIODevice::currentReadChannel() const
int c_QIODevice__currentReadChannel(void *thisObj);
// QIODevice::currentWriteChannel() const
int c_QIODevice__currentWriteChannel(void *thisObj);
// QIODevice::customEvent(QEvent * event)
void c_QIODevice__customEvent_QEvent(void *thisObj, void *event_);
// QIODevice::errorString() const
void *c_QIODevice__errorString(void *thisObj);
// QIODevice::event(QEvent * event)
bool c_QIODevice__event_QEvent(void *thisObj, void *event_);
// QIODevice::eventFilter(QObject * watched, QEvent * event)
bool c_QIODevice__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_);
// QIODevice::getChar(char * c)
bool c_QIODevice__getChar_char(void *thisObj, char *c);
// QIODevice::isOpen() const
bool c_QIODevice__isOpen(void *thisObj);
// QIODevice::isReadable() const
bool c_QIODevice__isReadable(void *thisObj);
// QIODevice::isSequential() const
bool c_QIODevice__isSequential(void *thisObj);
// QIODevice::isTextModeEnabled() const
bool c_QIODevice__isTextModeEnabled(void *thisObj);
// QIODevice::isTransactionStarted() const
bool c_QIODevice__isTransactionStarted(void *thisObj);
// QIODevice::isWritable() const
bool c_QIODevice__isWritable(void *thisObj);
// QIODevice::peek(char * data, qint64 maxlen)
qint64 c_QIODevice__peek_char_qint64(void *thisObj, char *data, qint64 maxlen);
// QIODevice::peek(qint64 maxlen)
void *c_QIODevice__peek_qint64(void *thisObj, qint64 maxlen);
// QIODevice::pos() const
qint64 c_QIODevice__pos(void *thisObj);
// QIODevice::read(char * data, qint64 maxlen)
qint64 c_QIODevice__read_char_qint64(void *thisObj, char *data, qint64 maxlen);
// QIODevice::read(qint64 maxlen)
void *c_QIODevice__read_qint64(void *thisObj, qint64 maxlen);
// QIODevice::readAll()
void *c_QIODevice__readAll(void *thisObj);
// QIODevice::readChannelCount() const
int c_QIODevice__readChannelCount(void *thisObj);
// QIODevice::readChannelFinished()
void c_QIODevice__readChannelFinished(void *thisObj);
void c_QIODevice__onReadChannelFinished(
    void *thisObj, void *contextQObject,
    void *callback); // QIODevice::readData(char * data, qint64 maxlen)
qint64 c_QIODevice__readData_char_qint64(void *thisObj, char *data,
                                         qint64 maxlen);
// QIODevice::readLine(char * data, qint64 maxlen)
qint64 c_QIODevice__readLine_char_qint64(void *thisObj, char *data,
                                         qint64 maxlen);
// QIODevice::readLine(qint64 maxlen)
void *c_QIODevice__readLine_qint64(void *thisObj, qint64 maxlen);
// QIODevice::readLineData(char * data, qint64 maxlen)
qint64 c_QIODevice__readLineData_char_qint64(void *thisObj, char *data,
                                             qint64 maxlen);
// QIODevice::readyRead()
void c_QIODevice__readyRead(void *thisObj);
void c_QIODevice__onReadyRead(void *thisObj, void *contextQObject,
                              void *callback); // QIODevice::reset()
bool c_QIODevice__reset(void *thisObj);
// QIODevice::rollbackTransaction()
void c_QIODevice__rollbackTransaction(void *thisObj);
// QIODevice::seek(qint64 pos)
bool c_QIODevice__seek_qint64(void *thisObj, qint64 pos);
// QIODevice::setCurrentReadChannel(int channel)
void c_QIODevice__setCurrentReadChannel_int(void *thisObj, int channel);
// QIODevice::setCurrentWriteChannel(int channel)
void c_QIODevice__setCurrentWriteChannel_int(void *thisObj, int channel);
// QIODevice::setErrorString(const QString & errorString)
void c_QIODevice__setErrorString_QString(void *thisObj,
                                         const char *errorString_);
// QIODevice::setTextModeEnabled(bool enabled)
void c_QIODevice__setTextModeEnabled_bool(void *thisObj, bool enabled);
// QIODevice::size() const
qint64 c_QIODevice__size(void *thisObj);
// QIODevice::skip(qint64 maxSize)
qint64 c_QIODevice__skip_qint64(void *thisObj, qint64 maxSize);
// QIODevice::skipData(qint64 maxSize)
qint64 c_QIODevice__skipData_qint64(void *thisObj, qint64 maxSize);
// QIODevice::startTransaction()
void c_QIODevice__startTransaction(void *thisObj);
// QIODevice::tr(const char * s, const char * c, int n)
void *c_static_QIODevice__tr_char_char_int(const char *s, const char *c, int n);
// QIODevice::waitForBytesWritten(int msecs)
bool c_QIODevice__waitForBytesWritten_int(void *thisObj, int msecs);
// QIODevice::waitForReadyRead(int msecs)
bool c_QIODevice__waitForReadyRead_int(void *thisObj, int msecs);
// QIODevice::write(const QByteArray & data)
qint64 c_QIODevice__write_QByteArray(void *thisObj, void *data_);
// QIODevice::write(const char * data)
qint64 c_QIODevice__write_char(void *thisObj, const char *data);
// QIODevice::write(const char * data, qint64 len)
qint64 c_QIODevice__write_char_qint64(void *thisObj, const char *data,
                                      qint64 len);
// QIODevice::writeChannelCount() const
int c_QIODevice__writeChannelCount(void *thisObj);
// QIODevice::writeData(const char * data, qint64 len)
qint64 c_QIODevice__writeData_char_qint64(void *thisObj, const char *data,
                                          qint64 len);
void c_QIODevice__destructor(void *thisObj);
void c_QIODevice__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QIODevice_Finalizer(
    void *cppObj); // QProcess::QProcess(QObject * parent)
void *c_QProcess__constructor_QObject(void *parent_);
// QProcess::arguments() const
void *c_QProcess__arguments(void *thisObj);
// QProcess::atEnd() const
bool c_QProcess__atEnd(void *thisObj);
// QProcess::bytesAvailable() const
qint64 c_QProcess__bytesAvailable(void *thisObj);
// QProcess::bytesToWrite() const
qint64 c_QProcess__bytesToWrite(void *thisObj);
// QProcess::canReadLine() const
bool c_QProcess__canReadLine(void *thisObj);
// QProcess::close()
void c_QProcess__close(void *thisObj);
// QProcess::closeWriteChannel()
void c_QProcess__closeWriteChannel(void *thisObj);
// QProcess::customEvent(QEvent * event)
void c_QProcess__customEvent_QEvent(void *thisObj, void *event_);
// QProcess::environment() const
void *c_QProcess__environment(void *thisObj);
// QProcess::event(QEvent * event)
bool c_QProcess__event_QEvent(void *thisObj, void *event_);
// QProcess::eventFilter(QObject * watched, QEvent * event)
bool c_QProcess__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                            void *event_);
// QProcess::execute(const QString & program, const QList<QString > & arguments)
int c_static_QProcess__execute_QString_QList_QString(const char *program_,
                                                     void *arguments_);
// QProcess::exitCode() const
int c_QProcess__exitCode(void *thisObj);
// QProcess::finished(int exitCode)
void c_QProcess__finished_int(void *thisObj, int exitCode);
void c_QProcess__onFinished_int(
    void *thisObj, void *contextQObject,
    void *callback); // QProcess::isSequential() const
bool c_QProcess__isSequential(void *thisObj);
// QProcess::kill()
void c_QProcess__kill(void *thisObj);
// QProcess::nullDevice()
void *c_static_QProcess__nullDevice();
// QProcess::pos() const
qint64 c_QProcess__pos(void *thisObj);
// QProcess::processId() const
qint64 c_QProcess__processId(void *thisObj);
// QProcess::program() const
void *c_QProcess__program(void *thisObj);
// QProcess::readAllStandardError()
void *c_QProcess__readAllStandardError(void *thisObj);
// QProcess::readAllStandardOutput()
void *c_QProcess__readAllStandardOutput(void *thisObj);
// QProcess::readData(char * data, qint64 maxlen)
qint64 c_QProcess__readData_char_qint64(void *thisObj, char *data,
                                        qint64 maxlen);
// QProcess::readLineData(char * data, qint64 maxlen)
qint64 c_QProcess__readLineData_char_qint64(void *thisObj, char *data,
                                            qint64 maxlen);
// QProcess::reset()
bool c_QProcess__reset(void *thisObj);
// QProcess::seek(qint64 pos)
bool c_QProcess__seek_qint64(void *thisObj, qint64 pos);
// QProcess::setArguments(const QList<QString > & arguments)
void c_QProcess__setArguments_QList_QString(void *thisObj, void *arguments_);
// QProcess::setEnvironment(const QList<QString > & environment)
void c_QProcess__setEnvironment_QList_QString(void *thisObj,
                                              void *environment_);
// QProcess::setProgram(const QString & program)
void c_QProcess__setProgram_QString(void *thisObj, const char *program_);
// QProcess::setStandardErrorFile(const QString & fileName)
void c_QProcess__setStandardErrorFile_QString(void *thisObj,
                                              const char *fileName_);
// QProcess::setStandardInputFile(const QString & fileName)
void c_QProcess__setStandardInputFile_QString(void *thisObj,
                                              const char *fileName_);
// QProcess::setStandardOutputFile(const QString & fileName)
void c_QProcess__setStandardOutputFile_QString(void *thisObj,
                                               const char *fileName_);
// QProcess::setStandardOutputProcess(QProcess * destination)
void c_QProcess__setStandardOutputProcess_QProcess(void *thisObj,
                                                   void *destination_);
// QProcess::setWorkingDirectory(const QString & dir)
void c_QProcess__setWorkingDirectory_QString(void *thisObj, const char *dir_);
// QProcess::size() const
qint64 c_QProcess__size(void *thisObj);
// QProcess::skipData(qint64 maxSize)
qint64 c_QProcess__skipData_qint64(void *thisObj, qint64 maxSize);
// QProcess::start()
void c_QProcess__start(void *thisObj);
// QProcess::start(const QString & program, const QList<QString > & arguments)
void c_QProcess__start_QString_QList_QString(void *thisObj,
                                             const char *program_,
                                             void *arguments_);
// QProcess::startCommand(const QString & command)
void c_QProcess__startCommand_QString(void *thisObj, const char *command_);
// QProcess::systemEnvironment()
void *c_static_QProcess__systemEnvironment();
// QProcess::terminate()
void c_QProcess__terminate(void *thisObj);
// QProcess::tr(const char * s, const char * c, int n)
void *c_static_QProcess__tr_char_char_int(const char *s, const char *c, int n);
// QProcess::waitForFinished(int msecs)
bool c_QProcess__waitForFinished_int(void *thisObj, int msecs);
// QProcess::waitForStarted(int msecs)
bool c_QProcess__waitForStarted_int(void *thisObj, int msecs);
// QProcess::workingDirectory() const
void *c_QProcess__workingDirectory(void *thisObj);
// QProcess::writeData(const char * data, qint64 len)
qint64 c_QProcess__writeData_char_qint64(void *thisObj, const char *data,
                                         qint64 len);
void c_QProcess__destructor(void *thisObj);
void c_QProcess__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId);
void c_QProcess_Finalizer(
    void *cppObj); // QGridLayout::QGridLayout(QWidget * parent)
void *c_QGridLayout__constructor_QWidget(void *parent_);
// QGridLayout::addItem(QLayoutItem * arg__1)
void c_QGridLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_);
// QGridLayout::addItem(QLayoutItem * item, int row, int column, int rowSpan,
// int columnSpan)
void c_QGridLayout__addItemToGrid_QLayoutItem_int_int_int_int(
    void *thisObj, void *item_, int row, int column, int rowSpan,
    int columnSpan);
// QGridLayout::addLayout(QLayout * arg__1, int row, int column)
void c_QGridLayout__addLayout_QLayout_int_int(void *thisObj, void *arg__1_,
                                              int row, int column);
// QGridLayout::addLayout(QLayout * arg__1, int row, int column, int rowSpan,
// int columnSpan)
void c_QGridLayout__addLayout_QLayout_int_int_int_int(void *thisObj,
                                                      void *arg__1_, int row,
                                                      int column, int rowSpan,
                                                      int columnSpan);
// QGridLayout::addWidget(QWidget * arg__1, int row, int column)
void c_QGridLayout__addWidgetToGrid_QWidget_int_int(void *thisObj,
                                                    void *arg__1_, int row,
                                                    int column);
// QGridLayout::addWidget(QWidget * arg__1, int row, int column, int rowSpan,
// int columnSpan)
void c_QGridLayout__addWidgetToGrid_QWidget_int_int_int_int(void *thisObj,
                                                            void *arg__1_,
                                                            int row, int column,
                                                            int rowSpan,
                                                            int columnSpan);
// QGridLayout::addWidget(QWidget * w)
void c_QGridLayout__addWidget_QWidget(void *thisObj, void *w_);
// QGridLayout::cellRect(int row, int column) const
void *c_QGridLayout__cellRect_int_int(void *thisObj, int row, int column);
// QGridLayout::columnCount() const
int c_QGridLayout__columnCount(void *thisObj);
// QGridLayout::columnMinimumWidth(int column) const
int c_QGridLayout__columnMinimumWidth_int(void *thisObj, int column);
// QGridLayout::columnStretch(int column) const
int c_QGridLayout__columnStretch_int(void *thisObj, int column);
// QGridLayout::count() const
int c_QGridLayout__count(void *thisObj);
// QGridLayout::customEvent(QEvent * event)
void c_QGridLayout__customEvent_QEvent(void *thisObj, void *event_);
// QGridLayout::event(QEvent * event)
bool c_QGridLayout__event_QEvent(void *thisObj, void *event_);
// QGridLayout::eventFilter(QObject * watched, QEvent * event)
bool c_QGridLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);
// QGridLayout::expandingDirections() const
int c_QGridLayout__expandingDirections(void *thisObj);
// QGridLayout::geometry() const
void *c_QGridLayout__geometry(void *thisObj);
// QGridLayout::hasHeightForWidth() const
bool c_QGridLayout__hasHeightForWidth(void *thisObj);
// QGridLayout::heightForWidth(int arg__1) const
int c_QGridLayout__heightForWidth_int(void *thisObj, int arg__1);
// QGridLayout::horizontalSpacing() const
int c_QGridLayout__horizontalSpacing(void *thisObj);
// QGridLayout::indexOf(const QLayoutItem * arg__1) const
int c_QGridLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_);
// QGridLayout::indexOf(const QWidget * arg__1) const
int c_QGridLayout__indexOf_QWidget(void *thisObj, void *arg__1_);
// QGridLayout::invalidate()
void c_QGridLayout__invalidate(void *thisObj);
// QGridLayout::isEmpty() const
bool c_QGridLayout__isEmpty(void *thisObj);
// QGridLayout::itemAt(int index) const
void *c_QGridLayout__itemAt_int(void *thisObj, int index);
// QGridLayout::itemAtPosition(int row, int column) const
void *c_QGridLayout__itemAtPosition_int_int(void *thisObj, int row, int column);
// QGridLayout::layout()
void *c_QGridLayout__layout(void *thisObj);
// QGridLayout::maximumSize() const
void *c_QGridLayout__maximumSize(void *thisObj);
// QGridLayout::minimumHeightForWidth(int arg__1) const
int c_QGridLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QGridLayout::minimumSize() const
void *c_QGridLayout__minimumSize(void *thisObj);
// QGridLayout::rowCount() const
int c_QGridLayout__rowCount(void *thisObj);
// QGridLayout::rowMinimumHeight(int row) const
int c_QGridLayout__rowMinimumHeight_int(void *thisObj, int row);
// QGridLayout::rowStretch(int row) const
int c_QGridLayout__rowStretch_int(void *thisObj, int row);
// QGridLayout::setColumnMinimumWidth(int column, int minSize)
void c_QGridLayout__setColumnMinimumWidth_int_int(void *thisObj, int column,
                                                  int minSize);
// QGridLayout::setColumnStretch(int column, int stretch)
void c_QGridLayout__setColumnStretch_int_int(void *thisObj, int column,
                                             int stretch);
// QGridLayout::setDefaultPositioning(int n, Qt::Orientation orient)
void c_QGridLayout__setDefaultPositioning_int_Orientation(void *thisObj, int n,
                                                          int orient);
// QGridLayout::setGeometry(const QRect & arg__1)
void c_QGridLayout__setGeometry_QRect(void *thisObj, void *arg__1_);
// QGridLayout::setHorizontalSpacing(int spacing)
void c_QGridLayout__setHorizontalSpacing_int(void *thisObj, int spacing);
// QGridLayout::setRowMinimumHeight(int row, int minSize)
void c_QGridLayout__setRowMinimumHeight_int_int(void *thisObj, int row,
                                                int minSize);
// QGridLayout::setRowStretch(int row, int stretch)
void c_QGridLayout__setRowStretch_int_int(void *thisObj, int row, int stretch);
// QGridLayout::setSpacing(int spacing)
void c_QGridLayout__setSpacing_int(void *thisObj, int spacing);
// QGridLayout::setVerticalSpacing(int spacing)
void c_QGridLayout__setVerticalSpacing_int(void *thisObj, int spacing);
// QGridLayout::sizeHint() const
void *c_QGridLayout__sizeHint(void *thisObj);
// QGridLayout::spacing() const
int c_QGridLayout__spacing(void *thisObj);
// QGridLayout::takeAt(int index)
void *c_QGridLayout__takeAt_int(void *thisObj, int index);
// QGridLayout::tr(const char * s, const char * c, int n)
void *c_static_QGridLayout__tr_char_char_int(const char *s, const char *c,
                                             int n);
// QGridLayout::verticalSpacing() const
int c_QGridLayout__verticalSpacing(void *thisObj);
// QGridLayout::widget() const
void *c_QGridLayout__widget(void *thisObj);
void c_QGridLayout__destructor(void *thisObj);
void c_QGridLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QGridLayout_Finalizer(void *cppObj); // QFrame::QFrame(QWidget * parent)
void *c_QFrame__constructor_QWidget(void *parent_);
// QFrame::changeEvent(QEvent * arg__1)
void c_QFrame__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QFrame::customEvent(QEvent * event)
void c_QFrame__customEvent_QEvent(void *thisObj, void *event_);
// QFrame::devType() const
int c_QFrame__devType(void *thisObj);
// QFrame::drawFrame(QPainter * arg__1)
void c_QFrame__drawFrame_QPainter(void *thisObj, void *arg__1_);
// QFrame::event(QEvent * e)
bool c_QFrame__event_QEvent(void *thisObj, void *e_);
// QFrame::eventFilter(QObject * watched, QEvent * event)
bool c_QFrame__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QFrame::focusNextPrevChild(bool next)
bool c_QFrame__focusNextPrevChild_bool(void *thisObj, bool next);
// QFrame::frameRect() const
void *c_QFrame__frameRect(void *thisObj);
// QFrame::frameStyle() const
int c_QFrame__frameStyle(void *thisObj);
// QFrame::frameWidth() const
int c_QFrame__frameWidth(void *thisObj);
// QFrame::hasHeightForWidth() const
bool c_QFrame__hasHeightForWidth(void *thisObj);
// QFrame::heightForWidth(int arg__1) const
int c_QFrame__heightForWidth_int(void *thisObj, int arg__1);
// QFrame::initPainter(QPainter * painter) const
void c_QFrame__initPainter_QPainter(void *thisObj, void *painter_);
// QFrame::leaveEvent(QEvent * event)
void c_QFrame__leaveEvent_QEvent(void *thisObj, void *event_);
// QFrame::lineWidth() const
int c_QFrame__lineWidth(void *thisObj);
// QFrame::midLineWidth() const
int c_QFrame__midLineWidth(void *thisObj);
// QFrame::minimumSizeHint() const
void *c_QFrame__minimumSizeHint(void *thisObj);
// QFrame::mouseDoubleClickEvent(QMouseEvent * event)
void c_QFrame__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QFrame::mouseMoveEvent(QMouseEvent * event)
void c_QFrame__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QFrame::mousePressEvent(QMouseEvent * event)
void c_QFrame__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QFrame::mouseReleaseEvent(QMouseEvent * event)
void c_QFrame__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QFrame::paintEvent(QPaintEvent * arg__1)
void c_QFrame__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QFrame::setFrameRect(const QRect & arg__1)
void c_QFrame__setFrameRect_QRect(void *thisObj, void *arg__1_);
// QFrame::setFrameStyle(int arg__1)
void c_QFrame__setFrameStyle_int(void *thisObj, int arg__1);
// QFrame::setLineWidth(int arg__1)
void c_QFrame__setLineWidth_int(void *thisObj, int arg__1);
// QFrame::setMidLineWidth(int arg__1)
void c_QFrame__setMidLineWidth_int(void *thisObj, int arg__1);
// QFrame::setVisible(bool visible)
void c_QFrame__setVisible_bool(void *thisObj, bool visible);
// QFrame::sharedPainter() const
void *c_QFrame__sharedPainter(void *thisObj);
// QFrame::sizeHint() const
void *c_QFrame__sizeHint(void *thisObj);
// QFrame::tr(const char * s, const char * c, int n)
void *c_static_QFrame__tr_char_char_int(const char *s, const char *c, int n);
void c_QFrame__destructor(void *thisObj);
void c_QFrame__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
void c_QFrame_Finalizer(void *cppObj); // QSplitter::QSplitter(QWidget * parent)
void *c_QSplitter__constructor_QWidget(void *parent_);
// QSplitter::QSplitter(Qt::Orientation arg__1, QWidget * parent)
void *c_QSplitter__constructor_Orientation_QWidget(int arg__1, void *parent_);
// QSplitter::addWidget(QWidget * widget)
void c_QSplitter__addWidget_QWidget(void *thisObj, void *widget_);
// QSplitter::changeEvent(QEvent * arg__1)
void c_QSplitter__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QSplitter::childrenCollapsible() const
bool c_QSplitter__childrenCollapsible(void *thisObj);
// QSplitter::closestLegalPosition(int arg__1, int arg__2)
int c_QSplitter__closestLegalPosition_int_int(void *thisObj, int arg__1,
                                              int arg__2);
// QSplitter::count() const
int c_QSplitter__count(void *thisObj);
// QSplitter::customEvent(QEvent * event)
void c_QSplitter__customEvent_QEvent(void *thisObj, void *event_);
// QSplitter::devType() const
int c_QSplitter__devType(void *thisObj);
// QSplitter::event(QEvent * arg__1)
bool c_QSplitter__event_QEvent(void *thisObj, void *arg__1_);
// QSplitter::eventFilter(QObject * watched, QEvent * event)
bool c_QSplitter__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_);
// QSplitter::focusNextPrevChild(bool next)
bool c_QSplitter__focusNextPrevChild_bool(void *thisObj, bool next);
// QSplitter::handleWidth() const
int c_QSplitter__handleWidth(void *thisObj);
// QSplitter::hasHeightForWidth() const
bool c_QSplitter__hasHeightForWidth(void *thisObj);
// QSplitter::heightForWidth(int arg__1) const
int c_QSplitter__heightForWidth_int(void *thisObj, int arg__1);
// QSplitter::indexOf(QWidget * w) const
int c_QSplitter__indexOf_QWidget(void *thisObj, void *w_);
// QSplitter::initPainter(QPainter * painter) const
void c_QSplitter__initPainter_QPainter(void *thisObj, void *painter_);
// QSplitter::insertWidget(int index, QWidget * widget)
void c_QSplitter__insertWidget_int_QWidget(void *thisObj, int index,
                                           void *widget_);
// QSplitter::isCollapsible(int index) const
bool c_QSplitter__isCollapsible_int(void *thisObj, int index);
// QSplitter::leaveEvent(QEvent * event)
void c_QSplitter__leaveEvent_QEvent(void *thisObj, void *event_);
// QSplitter::minimumSizeHint() const
void *c_QSplitter__minimumSizeHint(void *thisObj);
// QSplitter::mouseDoubleClickEvent(QMouseEvent * event)
void c_QSplitter__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_);
// QSplitter::mouseMoveEvent(QMouseEvent * event)
void c_QSplitter__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QSplitter::mousePressEvent(QMouseEvent * event)
void c_QSplitter__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QSplitter::mouseReleaseEvent(QMouseEvent * event)
void c_QSplitter__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QSplitter::moveSplitter(int pos, int index)
void c_QSplitter__moveSplitter_int_int(void *thisObj, int pos, int index);
// QSplitter::opaqueResize() const
bool c_QSplitter__opaqueResize(void *thisObj);
// QSplitter::orientation() const
int c_QSplitter__orientation(void *thisObj);
// QSplitter::paintEvent(QPaintEvent * arg__1)
void c_QSplitter__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QSplitter::refresh()
void c_QSplitter__refresh(void *thisObj);
// QSplitter::replaceWidget(int index, QWidget * widget)
void *c_QSplitter__replaceWidget_int_QWidget(void *thisObj, int index,
                                             void *widget_);
// QSplitter::restoreState(const QByteArray & state)
bool c_QSplitter__restoreState_QByteArray(void *thisObj, void *state_);
// QSplitter::saveState() const
void *c_QSplitter__saveState(void *thisObj);
// QSplitter::setChildrenCollapsible(bool arg__1)
void c_QSplitter__setChildrenCollapsible_bool(void *thisObj, bool arg__1);
// QSplitter::setCollapsible(int index, bool arg__2)
void c_QSplitter__setCollapsible_int_bool(void *thisObj, int index,
                                          bool arg__2);
// QSplitter::setHandleWidth(int arg__1)
void c_QSplitter__setHandleWidth_int(void *thisObj, int arg__1);
// QSplitter::setOpaqueResize(bool opaque)
void c_QSplitter__setOpaqueResize_bool(void *thisObj, bool opaque);
// QSplitter::setOrientation(Qt::Orientation arg__1)
void c_QSplitter__setOrientation_Orientation(void *thisObj, int arg__1);
// QSplitter::setRubberBand(int position)
void c_QSplitter__setRubberBand_int(void *thisObj, int position);
// QSplitter::setSizes(const QList<int > & list)
void c_QSplitter__setSizes_QList_int(void *thisObj, void *list_);
// QSplitter::setStretchFactor(int index, int stretch)
void c_QSplitter__setStretchFactor_int_int(void *thisObj, int index,
                                           int stretch);
// QSplitter::setVisible(bool visible)
void c_QSplitter__setVisible_bool(void *thisObj, bool visible);
// QSplitter::sharedPainter() const
void *c_QSplitter__sharedPainter(void *thisObj);
// QSplitter::sizeHint() const
void *c_QSplitter__sizeHint(void *thisObj);
// QSplitter::sizes() const
void *c_QSplitter__sizes(void *thisObj);
// QSplitter::splitterMoved(int pos, int index)
void c_QSplitter__splitterMoved_int_int(void *thisObj, int pos, int index);
void c_QSplitter__onSplitterMoved_int_int(
    void *thisObj, void *contextQObject,
    void *callback); // QSplitter::tr(const char * s, const char * c, int n)
void *c_static_QSplitter__tr_char_char_int(const char *s, const char *c, int n);
// QSplitter::widget(int index) const
void *c_QSplitter__widget_int(void *thisObj, int index);
void c_QSplitter__destructor(void *thisObj);
void c_QSplitter__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QSplitter_Finalizer(void *cppObj); // QLabel::QLabel(QWidget * parent)
void *c_QLabel__constructor_QWidget(void *parent_);
// QLabel::QLabel(const QString & text, QWidget * parent)
void *c_QLabel__constructor_QString_QWidget(const char *text_, void *parent_);
// QLabel::buddy() const
void *c_QLabel__buddy(void *thisObj);
// QLabel::changeEvent(QEvent * arg__1)
void c_QLabel__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QLabel::clear()
void c_QLabel__clear(void *thisObj);
// QLabel::customEvent(QEvent * event)
void c_QLabel__customEvent_QEvent(void *thisObj, void *event_);
// QLabel::devType() const
int c_QLabel__devType(void *thisObj);
// QLabel::event(QEvent * e)
bool c_QLabel__event_QEvent(void *thisObj, void *e_);
// QLabel::eventFilter(QObject * watched, QEvent * event)
bool c_QLabel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_);
// QLabel::focusNextPrevChild(bool next)
bool c_QLabel__focusNextPrevChild_bool(void *thisObj, bool next);
// QLabel::hasHeightForWidth() const
bool c_QLabel__hasHeightForWidth(void *thisObj);
// QLabel::hasScaledContents() const
bool c_QLabel__hasScaledContents(void *thisObj);
// QLabel::hasSelectedText() const
bool c_QLabel__hasSelectedText(void *thisObj);
// QLabel::heightForWidth(int arg__1) const
int c_QLabel__heightForWidth_int(void *thisObj, int arg__1);
// QLabel::indent() const
int c_QLabel__indent(void *thisObj);
// QLabel::initPainter(QPainter * painter) const
void c_QLabel__initPainter_QPainter(void *thisObj, void *painter_);
// QLabel::leaveEvent(QEvent * event)
void c_QLabel__leaveEvent_QEvent(void *thisObj, void *event_);
// QLabel::linkActivated(const QString & link)
void c_QLabel__linkActivated_QString(void *thisObj, const char *link_);
void c_QLabel__onLinkActivated_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QLabel::linkHovered(const QString & link)
void c_QLabel__linkHovered_QString(void *thisObj, const char *link_);
void c_QLabel__onLinkHovered_QString(void *thisObj, void *contextQObject,
                                     void *callback); // QLabel::margin() const
int c_QLabel__margin(void *thisObj);
// QLabel::minimumSizeHint() const
void *c_QLabel__minimumSizeHint(void *thisObj);
// QLabel::mouseDoubleClickEvent(QMouseEvent * event)
void c_QLabel__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QLabel::mouseMoveEvent(QMouseEvent * ev)
void c_QLabel__mouseMoveEvent_QMouseEvent(void *thisObj, void *ev_);
// QLabel::mousePressEvent(QMouseEvent * ev)
void c_QLabel__mousePressEvent_QMouseEvent(void *thisObj, void *ev_);
// QLabel::mouseReleaseEvent(QMouseEvent * ev)
void c_QLabel__mouseReleaseEvent_QMouseEvent(void *thisObj, void *ev_);
// QLabel::openExternalLinks() const
bool c_QLabel__openExternalLinks(void *thisObj);
// QLabel::paintEvent(QPaintEvent * arg__1)
void c_QLabel__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QLabel::pixmap() const
void *c_QLabel__pixmap(void *thisObj);
// QLabel::selectedText() const
void *c_QLabel__selectedText(void *thisObj);
// QLabel::selectionStart() const
int c_QLabel__selectionStart(void *thisObj);
// QLabel::setBuddy(QWidget * arg__1)
void c_QLabel__setBuddy_QWidget(void *thisObj, void *arg__1_);
// QLabel::setIndent(int arg__1)
void c_QLabel__setIndent_int(void *thisObj, int arg__1);
// QLabel::setMargin(int arg__1)
void c_QLabel__setMargin_int(void *thisObj, int arg__1);
// QLabel::setNum(double arg__1)
void c_QLabel__setNum_double(void *thisObj, double arg__1);
// QLabel::setNum(int arg__1)
void c_QLabel__setNum_int(void *thisObj, int arg__1);
// QLabel::setOpenExternalLinks(bool open)
void c_QLabel__setOpenExternalLinks_bool(void *thisObj, bool open);
// QLabel::setPixmap(const QPixmap & arg__1)
void c_QLabel__setPixmap_QPixmap(void *thisObj, void *arg__1_);
// QLabel::setScaledContents(bool arg__1)
void c_QLabel__setScaledContents_bool(void *thisObj, bool arg__1);
// QLabel::setSelection(int arg__1, int arg__2)
void c_QLabel__setSelection_int_int(void *thisObj, int arg__1, int arg__2);
// QLabel::setText(const QString & arg__1)
void c_QLabel__setText_QString(void *thisObj, const char *arg__1_);
// QLabel::setVisible(bool visible)
void c_QLabel__setVisible_bool(void *thisObj, bool visible);
// QLabel::setWordWrap(bool on)
void c_QLabel__setWordWrap_bool(void *thisObj, bool on);
// QLabel::sharedPainter() const
void *c_QLabel__sharedPainter(void *thisObj);
// QLabel::sizeHint() const
void *c_QLabel__sizeHint(void *thisObj);
// QLabel::text() const
void *c_QLabel__text(void *thisObj);
// QLabel::tr(const char * s, const char * c, int n)
void *c_static_QLabel__tr_char_char_int(const char *s, const char *c, int n);
// QLabel::wordWrap() const
bool c_QLabel__wordWrap(void *thisObj);
void c_QLabel__destructor(void *thisObj);
void c_QLabel__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
void c_QLabel_Finalizer(
    void *cppObj); // QFormLayout::QFormLayout(QWidget * parent)
void *c_QFormLayout__constructor_QWidget(void *parent_);
// QFormLayout::addItem(QLayoutItem * item)
void c_QFormLayout__addItem_QLayoutItem(void *thisObj, void *item_);
// QFormLayout::addRow(QLayout * layout)
void c_QFormLayout__addRow_QLayout(void *thisObj, void *layout_);
// QFormLayout::addRow(QWidget * label, QLayout * field)
void c_QFormLayout__addRow_QWidget_QLayout(void *thisObj, void *label_,
                                           void *field_);
// QFormLayout::addRow(QWidget * label, QWidget * field)
void c_QFormLayout__addRow_QWidget_QWidget(void *thisObj, void *label_,
                                           void *field_);
// QFormLayout::addRow(QWidget * widget)
void c_QFormLayout__addRow_QWidget(void *thisObj, void *widget_);
// QFormLayout::addRow(const QString & labelText, QLayout * field)
void c_QFormLayout__addRow_QString_QLayout(void *thisObj,
                                           const char *labelText_,
                                           void *field_);
// QFormLayout::addRow(const QString & labelText, QWidget * field)
void c_QFormLayout__addRow_QString_QWidget(void *thisObj,
                                           const char *labelText_,
                                           void *field_);
// QFormLayout::count() const
int c_QFormLayout__count(void *thisObj);
// QFormLayout::customEvent(QEvent * event)
void c_QFormLayout__customEvent_QEvent(void *thisObj, void *event_);
// QFormLayout::event(QEvent * event)
bool c_QFormLayout__event_QEvent(void *thisObj, void *event_);
// QFormLayout::eventFilter(QObject * watched, QEvent * event)
bool c_QFormLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);
// QFormLayout::expandingDirections() const
int c_QFormLayout__expandingDirections(void *thisObj);
// QFormLayout::geometry() const
void *c_QFormLayout__geometry(void *thisObj);
// QFormLayout::hasHeightForWidth() const
bool c_QFormLayout__hasHeightForWidth(void *thisObj);
// QFormLayout::heightForWidth(int width) const
int c_QFormLayout__heightForWidth_int(void *thisObj, int width);
// QFormLayout::horizontalSpacing() const
int c_QFormLayout__horizontalSpacing(void *thisObj);
// QFormLayout::indexOf(const QLayoutItem * arg__1) const
int c_QFormLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_);
// QFormLayout::indexOf(const QWidget * arg__1) const
int c_QFormLayout__indexOf_QWidget(void *thisObj, void *arg__1_);
// QFormLayout::insertRow(int row, QLayout * layout)
void c_QFormLayout__insertRow_int_QLayout(void *thisObj, int row,
                                          void *layout_);
// QFormLayout::insertRow(int row, QWidget * label, QLayout * field)
void c_QFormLayout__insertRow_int_QWidget_QLayout(void *thisObj, int row,
                                                  void *label_, void *field_);
// QFormLayout::insertRow(int row, QWidget * label, QWidget * field)
void c_QFormLayout__insertRow_int_QWidget_QWidget(void *thisObj, int row,
                                                  void *label_, void *field_);
// QFormLayout::insertRow(int row, QWidget * widget)
void c_QFormLayout__insertRow_int_QWidget(void *thisObj, int row,
                                          void *widget_);
// QFormLayout::insertRow(int row, const QString & labelText, QLayout * field)
void c_QFormLayout__insertRow_int_QString_QLayout(void *thisObj, int row,
                                                  const char *labelText_,
                                                  void *field_);
// QFormLayout::insertRow(int row, const QString & labelText, QWidget * field)
void c_QFormLayout__insertRow_int_QString_QWidget(void *thisObj, int row,
                                                  const char *labelText_,
                                                  void *field_);
// QFormLayout::invalidate()
void c_QFormLayout__invalidate(void *thisObj);
// QFormLayout::isEmpty() const
bool c_QFormLayout__isEmpty(void *thisObj);
// QFormLayout::isRowVisible(QLayout * layout) const
bool c_QFormLayout__isRowVisible_QLayout(void *thisObj, void *layout_);
// QFormLayout::isRowVisible(QWidget * widget) const
bool c_QFormLayout__isRowVisible_QWidget(void *thisObj, void *widget_);
// QFormLayout::isRowVisible(int row) const
bool c_QFormLayout__isRowVisible_int(void *thisObj, int row);
// QFormLayout::itemAt(int index) const
void *c_QFormLayout__itemAt_int(void *thisObj, int index);
// QFormLayout::labelForField(QLayout * field) const
void *c_QFormLayout__labelForField_QLayout(void *thisObj, void *field_);
// QFormLayout::labelForField(QWidget * field) const
void *c_QFormLayout__labelForField_QWidget(void *thisObj, void *field_);
// QFormLayout::layout()
void *c_QFormLayout__layout(void *thisObj);
// QFormLayout::maximumSize() const
void *c_QFormLayout__maximumSize(void *thisObj);
// QFormLayout::minimumHeightForWidth(int arg__1) const
int c_QFormLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QFormLayout::minimumSize() const
void *c_QFormLayout__minimumSize(void *thisObj);
// QFormLayout::removeRow(QLayout * layout)
void c_QFormLayout__removeRow_QLayout(void *thisObj, void *layout_);
// QFormLayout::removeRow(QWidget * widget)
void c_QFormLayout__removeRow_QWidget(void *thisObj, void *widget_);
// QFormLayout::removeRow(int row)
void c_QFormLayout__removeRow_int(void *thisObj, int row);
// QFormLayout::rowCount() const
int c_QFormLayout__rowCount(void *thisObj);
// QFormLayout::setGeometry(const QRect & rect)
void c_QFormLayout__setGeometry_QRect(void *thisObj, void *rect_);
// QFormLayout::setHorizontalSpacing(int spacing)
void c_QFormLayout__setHorizontalSpacing_int(void *thisObj, int spacing);
// QFormLayout::setRowVisible(QLayout * layout, bool on)
void c_QFormLayout__setRowVisible_QLayout_bool(void *thisObj, void *layout_,
                                               bool on);
// QFormLayout::setRowVisible(QWidget * widget, bool on)
void c_QFormLayout__setRowVisible_QWidget_bool(void *thisObj, void *widget_,
                                               bool on);
// QFormLayout::setRowVisible(int row, bool on)
void c_QFormLayout__setRowVisible_int_bool(void *thisObj, int row, bool on);
// QFormLayout::setSpacing(int arg__1)
void c_QFormLayout__setSpacing_int(void *thisObj, int arg__1);
// QFormLayout::setVerticalSpacing(int spacing)
void c_QFormLayout__setVerticalSpacing_int(void *thisObj, int spacing);
// QFormLayout::sizeHint() const
void *c_QFormLayout__sizeHint(void *thisObj);
// QFormLayout::spacing() const
int c_QFormLayout__spacing(void *thisObj);
// QFormLayout::takeAt(int index)
void *c_QFormLayout__takeAt_int(void *thisObj, int index);
// QFormLayout::tr(const char * s, const char * c, int n)
void *c_static_QFormLayout__tr_char_char_int(const char *s, const char *c,
                                             int n);
// QFormLayout::verticalSpacing() const
int c_QFormLayout__verticalSpacing(void *thisObj);
// QFormLayout::widget() const
void *c_QFormLayout__widget(void *thisObj);
void c_QFormLayout__destructor(void *thisObj);
void c_QFormLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QFormLayout_Finalizer(void *cppObj); // QFontDatabase::addApplicationFont(const
                                            // QString & fileName)
int c_static_QFontDatabase__addApplicationFont_QString(const char *fileName_);
// QFontDatabase::addApplicationFontFromData(const QByteArray & fontData)
int c_static_QFontDatabase__addApplicationFontFromData_QByteArray(
    void *fontData_);
// QFontDatabase::applicationFontFamilies(int id)
void *c_static_QFontDatabase__applicationFontFamilies_int(int id);
// QFontDatabase::bold(const QString & family, const QString & style)
bool c_static_QFontDatabase__bold_QString_QString(const char *family_,
                                                  const char *style_);
// QFontDatabase::families()
void *c_static_QFontDatabase__families();
// QFontDatabase::font(const QString & family, const QString & style, int
// pointSize)
void *c_static_QFontDatabase__font_QString_QString_int(const char *family_,
                                                       const char *style_,
                                                       int pointSize);
// QFontDatabase::hasFamily(const QString & family)
bool c_static_QFontDatabase__hasFamily_QString(const char *family_);
// QFontDatabase::isBitmapScalable(const QString & family, const QString &
// style)
bool c_static_QFontDatabase__isBitmapScalable_QString_QString(
    const char *family_, const char *style_);
// QFontDatabase::isFixedPitch(const QString & family, const QString & style)
bool c_static_QFontDatabase__isFixedPitch_QString_QString(const char *family_,
                                                          const char *style_);
// QFontDatabase::isPrivateFamily(const QString & family)
bool c_static_QFontDatabase__isPrivateFamily_QString(const char *family_);
// QFontDatabase::isScalable(const QString & family, const QString & style)
bool c_static_QFontDatabase__isScalable_QString_QString(const char *family_,
                                                        const char *style_);
// QFontDatabase::isSmoothlyScalable(const QString & family, const QString &
// style)
bool c_static_QFontDatabase__isSmoothlyScalable_QString_QString(
    const char *family_, const char *style_);
// QFontDatabase::italic(const QString & family, const QString & style)
bool c_static_QFontDatabase__italic_QString_QString(const char *family_,
                                                    const char *style_);
// QFontDatabase::pointSizes(const QString & family, const QString & style)
void *c_static_QFontDatabase__pointSizes_QString_QString(const char *family_,
                                                         const char *style_);
// QFontDatabase::removeAllApplicationFonts()
bool c_static_QFontDatabase__removeAllApplicationFonts();
// QFontDatabase::removeApplicationFont(int id)
bool c_static_QFontDatabase__removeApplicationFont_int(int id);
// QFontDatabase::smoothSizes(const QString & family, const QString & style)
void *c_static_QFontDatabase__smoothSizes_QString_QString(const char *family_,
                                                          const char *style_);
// QFontDatabase::standardSizes()
void *c_static_QFontDatabase__standardSizes();
// QFontDatabase::styleString(const QFont & font)
void *c_static_QFontDatabase__styleString_QFont(void *font_);
// QFontDatabase::styles(const QString & family)
void *c_static_QFontDatabase__styles_QString(const char *family_);
// QFontDatabase::systemFont(QFontDatabase::SystemFont type)
void *c_static_QFontDatabase__systemFont_SystemFont(int type);
// QFontDatabase::weight(const QString & family, const QString & style)
int c_static_QFontDatabase__weight_QString_QString(const char *family_,
                                                   const char *style_);
void c_QFontDatabase__destructor(void *thisObj);
void c_QFontDatabase_Finalizer(void *cppObj); // QFont::QFont()
void *c_QFont__constructor();
// QFont::QFont(const QList<QString > & families, int pointSize, int weight,
// bool italic)
void *c_QFont__constructor_QList_QString_int_int_bool(void *families_,
                                                      int pointSize, int weight,
                                                      bool italic);
// QFont::QFont(const QString & family, int pointSize, int weight, bool italic)
void *c_QFont__constructor_QString_int_int_bool(const char *family_,
                                                int pointSize, int weight,
                                                bool italic);
// QFont::bold() const
bool c_QFont__bold(void *thisObj);
// QFont::cacheStatistics()
void c_static_QFont__cacheStatistics();
// QFont::cleanup()
void c_static_QFont__cleanup();
// QFont::defaultFamily() const
void *c_QFont__defaultFamily(void *thisObj);
// QFont::exactMatch() const
bool c_QFont__exactMatch(void *thisObj);
// QFont::families() const
void *c_QFont__families(void *thisObj);
// QFont::family() const
void *c_QFont__family(void *thisObj);
// QFont::fixedPitch() const
bool c_QFont__fixedPitch(void *thisObj);
// QFont::fromString(const QString & arg__1)
bool c_QFont__fromString_QString(void *thisObj, const char *arg__1_);
// QFont::initialize()
void c_static_QFont__initialize();
// QFont::insertSubstitution(const QString & arg__1, const QString & arg__2)
void c_static_QFont__insertSubstitution_QString_QString(const char *arg__1_,
                                                        const char *arg__2_);
// QFont::insertSubstitutions(const QString & arg__1, const QList<QString > &
// arg__2)
void c_static_QFont__insertSubstitutions_QString_QList_QString(
    const char *arg__1_, void *arg__2_);
// QFont::isCopyOf(const QFont & arg__1) const
bool c_QFont__isCopyOf_QFont(void *thisObj, void *arg__1_);
// QFont::italic() const
bool c_QFont__italic(void *thisObj);
// QFont::kerning() const
bool c_QFont__kerning(void *thisObj);
// QFont::key() const
void *c_QFont__key(void *thisObj);
// QFont::letterSpacing() const
qreal c_QFont__letterSpacing(void *thisObj);
// QFont::overline() const
bool c_QFont__overline(void *thisObj);
// QFont::pixelSize() const
int c_QFont__pixelSize(void *thisObj);
// QFont::pointSize() const
int c_QFont__pointSize(void *thisObj);
// QFont::pointSizeF() const
qreal c_QFont__pointSizeF(void *thisObj);
// QFont::removeSubstitutions(const QString & arg__1)
void c_static_QFont__removeSubstitutions_QString(const char *arg__1_);
// QFont::resolve(const QFont & arg__1) const
void *c_QFont__resolve_QFont(void *thisObj, void *arg__1_);
// QFont::setBold(bool arg__1)
void c_QFont__setBold_bool(void *thisObj, bool arg__1);
// QFont::setFamilies(const QList<QString > & arg__1)
void c_QFont__setFamilies_QList_QString(void *thisObj, void *arg__1_);
// QFont::setFamily(const QString & arg__1)
void c_QFont__setFamily_QString(void *thisObj, const char *arg__1_);
// QFont::setFixedPitch(bool arg__1)
void c_QFont__setFixedPitch_bool(void *thisObj, bool arg__1);
// QFont::setItalic(bool b)
void c_QFont__setItalic_bool(void *thisObj, bool b);
// QFont::setKerning(bool arg__1)
void c_QFont__setKerning_bool(void *thisObj, bool arg__1);
// QFont::setOverline(bool arg__1)
void c_QFont__setOverline_bool(void *thisObj, bool arg__1);
// QFont::setPixelSize(int arg__1)
void c_QFont__setPixelSize_int(void *thisObj, int arg__1);
// QFont::setPointSize(int arg__1)
void c_QFont__setPointSize_int(void *thisObj, int arg__1);
// QFont::setPointSizeF(qreal arg__1)
void c_QFont__setPointSizeF_qreal(void *thisObj, qreal arg__1);
// QFont::setStretch(int arg__1)
void c_QFont__setStretch_int(void *thisObj, int arg__1);
// QFont::setStrikeOut(bool arg__1)
void c_QFont__setStrikeOut_bool(void *thisObj, bool arg__1);
// QFont::setStyleHint(QFont::StyleHint arg__1)
void c_QFont__setStyleHint_StyleHint(void *thisObj, int arg__1);
// QFont::setStyleName(const QString & arg__1)
void c_QFont__setStyleName_QString(void *thisObj, const char *arg__1_);
// QFont::setUnderline(bool arg__1)
void c_QFont__setUnderline_bool(void *thisObj, bool arg__1);
// QFont::setWordSpacing(qreal spacing)
void c_QFont__setWordSpacing_qreal(void *thisObj, qreal spacing);
// QFont::stretch() const
int c_QFont__stretch(void *thisObj);
// QFont::strikeOut() const
bool c_QFont__strikeOut(void *thisObj);
// QFont::styleHint() const
int c_QFont__styleHint(void *thisObj);
// QFont::styleName() const
void *c_QFont__styleName(void *thisObj);
// QFont::substitute(const QString & arg__1)
void *c_static_QFont__substitute_QString(const char *arg__1_);
// QFont::substitutes(const QString & arg__1)
void *c_static_QFont__substitutes_QString(const char *arg__1_);
// QFont::substitutions()
void *c_static_QFont__substitutions();
// QFont::underline() const
bool c_QFont__underline(void *thisObj);
// QFont::wordSpacing() const
qreal c_QFont__wordSpacing(void *thisObj);
void c_QFont__destructor(void *thisObj);
void c_QFont_Finalizer(void *cppObj); // QFileInfo::QFileInfo()
void *c_QFileInfo__constructor();
// QFileInfo::QFileInfo(const QString & file)
void *c_QFileInfo__constructor_QString(const char *file_);
// QFileInfo::absoluteFilePath() const
void *c_QFileInfo__absoluteFilePath(void *thisObj);
// QFileInfo::absolutePath() const
void *c_QFileInfo__absolutePath(void *thisObj);
// QFileInfo::baseName() const
void *c_QFileInfo__baseName(void *thisObj);
// QFileInfo::bundleName() const
void *c_QFileInfo__bundleName(void *thisObj);
// QFileInfo::caching() const
bool c_QFileInfo__caching(void *thisObj);
// QFileInfo::canonicalFilePath() const
void *c_QFileInfo__canonicalFilePath(void *thisObj);
// QFileInfo::canonicalPath() const
void *c_QFileInfo__canonicalPath(void *thisObj);
// QFileInfo::completeBaseName() const
void *c_QFileInfo__completeBaseName(void *thisObj);
// QFileInfo::completeSuffix() const
void *c_QFileInfo__completeSuffix(void *thisObj);
// QFileInfo::exists() const
bool c_QFileInfo__exists(void *thisObj);
// QFileInfo::exists(const QString & file)
bool c_static_QFileInfo__exists_QString(const char *file_);
// QFileInfo::fileName() const
void *c_QFileInfo__fileName(void *thisObj);
// QFileInfo::filePath() const
void *c_QFileInfo__filePath(void *thisObj);
// QFileInfo::group() const
void *c_QFileInfo__group(void *thisObj);
// QFileInfo::isAbsolute() const
bool c_QFileInfo__isAbsolute(void *thisObj);
// QFileInfo::isAlias() const
bool c_QFileInfo__isAlias(void *thisObj);
// QFileInfo::isBundle() const
bool c_QFileInfo__isBundle(void *thisObj);
// QFileInfo::isDir() const
bool c_QFileInfo__isDir(void *thisObj);
// QFileInfo::isExecutable() const
bool c_QFileInfo__isExecutable(void *thisObj);
// QFileInfo::isFile() const
bool c_QFileInfo__isFile(void *thisObj);
// QFileInfo::isHidden() const
bool c_QFileInfo__isHidden(void *thisObj);
// QFileInfo::isJunction() const
bool c_QFileInfo__isJunction(void *thisObj);
// QFileInfo::isNativePath() const
bool c_QFileInfo__isNativePath(void *thisObj);
// QFileInfo::isReadable() const
bool c_QFileInfo__isReadable(void *thisObj);
// QFileInfo::isRelative() const
bool c_QFileInfo__isRelative(void *thisObj);
// QFileInfo::isRoot() const
bool c_QFileInfo__isRoot(void *thisObj);
// QFileInfo::isShortcut() const
bool c_QFileInfo__isShortcut(void *thisObj);
// QFileInfo::isSymLink() const
bool c_QFileInfo__isSymLink(void *thisObj);
// QFileInfo::isSymbolicLink() const
bool c_QFileInfo__isSymbolicLink(void *thisObj);
// QFileInfo::isWritable() const
bool c_QFileInfo__isWritable(void *thisObj);
// QFileInfo::junctionTarget() const
void *c_QFileInfo__junctionTarget(void *thisObj);
// QFileInfo::makeAbsolute()
bool c_QFileInfo__makeAbsolute(void *thisObj);
// QFileInfo::owner() const
void *c_QFileInfo__owner(void *thisObj);
// QFileInfo::path() const
void *c_QFileInfo__path(void *thisObj);
// QFileInfo::refresh()
void c_QFileInfo__refresh(void *thisObj);
// QFileInfo::setCaching(bool on)
void c_QFileInfo__setCaching_bool(void *thisObj, bool on);
// QFileInfo::setFile(const QString & file)
void c_QFileInfo__setFile_QString(void *thisObj, const char *file_);
// QFileInfo::size() const
qint64 c_QFileInfo__size(void *thisObj);
// QFileInfo::stat()
void c_QFileInfo__stat(void *thisObj);
// QFileInfo::suffix() const
void *c_QFileInfo__suffix(void *thisObj);
// QFileInfo::symLinkTarget() const
void *c_QFileInfo__symLinkTarget(void *thisObj);
void c_QFileInfo__destructor(void *thisObj);
void c_QFileInfo_Finalizer(void *cppObj); // QEvent::accept()
void c_QEvent__accept(void *thisObj);
// QEvent::clone() const
void *c_QEvent__clone(void *thisObj);
// QEvent::ignore()
void c_QEvent__ignore(void *thisObj);
// QEvent::isAccepted() const
bool c_QEvent__isAccepted(void *thisObj);
// QEvent::isInputEvent() const
bool c_QEvent__isInputEvent(void *thisObj);
// QEvent::isPointerEvent() const
bool c_QEvent__isPointerEvent(void *thisObj);
// QEvent::isSinglePointEvent() const
bool c_QEvent__isSinglePointEvent(void *thisObj);
// QEvent::registerEventType(int hint)
int c_static_QEvent__registerEventType_int(int hint);
// QEvent::setAccepted(bool accepted)
void c_QEvent__setAccepted_bool(void *thisObj, bool accepted);
// QEvent::spontaneous() const
bool c_QEvent__spontaneous(void *thisObj);
void c_QEvent__destructor(void *thisObj);
void c_QEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId);
void c_QEvent_Finalizer(
    void *cppObj); // QPaintEvent::QPaintEvent(const QRect & paintRect)
void *c_QPaintEvent__constructor_QRect(void *paintRect_);
// QPaintEvent::QPaintEvent(const QRegion & paintRegion)
void *c_QPaintEvent__constructor_QRegion(void *paintRegion_);
// QPaintEvent::clone() const
void *c_QPaintEvent__clone(void *thisObj);
// QPaintEvent::rect() const
void *c_QPaintEvent__rect(void *thisObj);
// QPaintEvent::region() const
void *c_QPaintEvent__region(void *thisObj);
// QPaintEvent::setAccepted(bool accepted)
void c_QPaintEvent__setAccepted_bool(void *thisObj, bool accepted);
void c_QPaintEvent__destructor(void *thisObj);
void c_QPaintEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QPaintEvent_Finalizer(void *cppObj); // QInputEvent::clone() const
void *c_QInputEvent__clone(void *thisObj);
// QInputEvent::modifiers() const
int c_QInputEvent__modifiers(void *thisObj);
// QInputEvent::setAccepted(bool accepted)
void c_QInputEvent__setAccepted_bool(void *thisObj, bool accepted);
// QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
void c_QInputEvent__setModifiers_KeyboardModifiers(void *thisObj,
                                                   int modifiers_);
void c_QInputEvent__destructor(void *thisObj);
void c_QInputEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QInputEvent_Finalizer(
    void *cppObj); // QPointerEvent::allPointsAccepted() const
bool c_QPointerEvent__allPointsAccepted(void *thisObj);
// QPointerEvent::allPointsGrabbed() const
bool c_QPointerEvent__allPointsGrabbed(void *thisObj);
// QPointerEvent::clone() const
void *c_QPointerEvent__clone(void *thisObj);
// QPointerEvent::isBeginEvent() const
bool c_QPointerEvent__isBeginEvent(void *thisObj);
// QPointerEvent::isEndEvent() const
bool c_QPointerEvent__isEndEvent(void *thisObj);
// QPointerEvent::isUpdateEvent() const
bool c_QPointerEvent__isUpdateEvent(void *thisObj);
// QPointerEvent::pointCount() const
qsizetype c_QPointerEvent__pointCount(void *thisObj);
// QPointerEvent::setAccepted(bool accepted)
void c_QPointerEvent__setAccepted_bool(void *thisObj, bool accepted);
void c_QPointerEvent__destructor(void *thisObj);
void c_QPointerEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                    int methodId);
void c_QPointerEvent_Finalizer(
    void *cppObj); // QSinglePointEvent::clone() const
void *c_QSinglePointEvent__clone(void *thisObj);
// QSinglePointEvent::exclusivePointGrabber() const
void *c_QSinglePointEvent__exclusivePointGrabber(void *thisObj);
// QSinglePointEvent::globalPosition() const
void *c_QSinglePointEvent__globalPosition(void *thisObj);
// QSinglePointEvent::isBeginEvent() const
bool c_QSinglePointEvent__isBeginEvent(void *thisObj);
// QSinglePointEvent::isEndEvent() const
bool c_QSinglePointEvent__isEndEvent(void *thisObj);
// QSinglePointEvent::isUpdateEvent() const
bool c_QSinglePointEvent__isUpdateEvent(void *thisObj);
// QSinglePointEvent::position() const
void *c_QSinglePointEvent__position(void *thisObj);
// QSinglePointEvent::scenePosition() const
void *c_QSinglePointEvent__scenePosition(void *thisObj);
// QSinglePointEvent::setAccepted(bool accepted)
void c_QSinglePointEvent__setAccepted_bool(void *thisObj, bool accepted);
// QSinglePointEvent::setExclusivePointGrabber(QObject * exclusiveGrabber)
void c_QSinglePointEvent__setExclusivePointGrabber_QObject(
    void *thisObj, void *exclusiveGrabber_);
void c_QSinglePointEvent__destructor(void *thisObj);
void c_QSinglePointEvent__registerVirtualMethodCallback(void *ptr,
                                                        void *callback,
                                                        int methodId);
void c_QSinglePointEvent_Finalizer(void *cppObj); // QMouseEvent::clone() const
void *c_QMouseEvent__clone(void *thisObj);
// QMouseEvent::isBeginEvent() const
bool c_QMouseEvent__isBeginEvent(void *thisObj);
// QMouseEvent::isEndEvent() const
bool c_QMouseEvent__isEndEvent(void *thisObj);
// QMouseEvent::isUpdateEvent() const
bool c_QMouseEvent__isUpdateEvent(void *thisObj);
// QMouseEvent::pos() const
void *c_QMouseEvent__pos(void *thisObj);
// QMouseEvent::setAccepted(bool accepted)
void c_QMouseEvent__setAccepted_bool(void *thisObj, bool accepted);
void c_QMouseEvent__destructor(void *thisObj);
void c_QMouseEvent__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QMouseEvent_Finalizer(
    void *cppObj); // QDialog::QDialog(QWidget * parent)
void *c_QDialog__constructor_QWidget(void *parent_);
// QDialog::accept()
void c_QDialog__accept(void *thisObj);
// QDialog::accepted()
void c_QDialog__accepted(void *thisObj);
void c_QDialog__onAccepted(
    void *thisObj, void *contextQObject,
    void *callback); // QDialog::adjustPosition(QWidget * arg__1)
void c_QDialog__adjustPosition_QWidget(void *thisObj, void *arg__1_);
// QDialog::changeEvent(QEvent * arg__1)
void c_QDialog__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QDialog::customEvent(QEvent * event)
void c_QDialog__customEvent_QEvent(void *thisObj, void *event_);
// QDialog::devType() const
int c_QDialog__devType(void *thisObj);
// QDialog::done(int arg__1)
void c_QDialog__done_int(void *thisObj, int arg__1);
// QDialog::event(QEvent * event)
bool c_QDialog__event_QEvent(void *thisObj, void *event_);
// QDialog::eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_);
// QDialog::exec()
int c_QDialog__exec(void *thisObj);
// QDialog::finished(int result)
void c_QDialog__finished_int(void *thisObj, int result);
void c_QDialog__onFinished_int(
    void *thisObj, void *contextQObject,
    void *callback); // QDialog::focusNextPrevChild(bool next)
bool c_QDialog__focusNextPrevChild_bool(void *thisObj, bool next);
// QDialog::hasHeightForWidth() const
bool c_QDialog__hasHeightForWidth(void *thisObj);
// QDialog::heightForWidth(int arg__1) const
int c_QDialog__heightForWidth_int(void *thisObj, int arg__1);
// QDialog::initPainter(QPainter * painter) const
void c_QDialog__initPainter_QPainter(void *thisObj, void *painter_);
// QDialog::isSizeGripEnabled() const
bool c_QDialog__isSizeGripEnabled(void *thisObj);
// QDialog::leaveEvent(QEvent * event)
void c_QDialog__leaveEvent_QEvent(void *thisObj, void *event_);
// QDialog::minimumSizeHint() const
void *c_QDialog__minimumSizeHint(void *thisObj);
// QDialog::mouseDoubleClickEvent(QMouseEvent * event)
void c_QDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QDialog::mouseMoveEvent(QMouseEvent * event)
void c_QDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QDialog::mousePressEvent(QMouseEvent * event)
void c_QDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QDialog::mouseReleaseEvent(QMouseEvent * event)
void c_QDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QDialog::open()
void c_QDialog__open(void *thisObj);
// QDialog::paintEvent(QPaintEvent * event)
void c_QDialog__paintEvent_QPaintEvent(void *thisObj, void *event_);
// QDialog::reject()
void c_QDialog__reject(void *thisObj);
// QDialog::rejected()
void c_QDialog__rejected(void *thisObj);
void c_QDialog__onRejected(void *thisObj, void *contextQObject,
                           void *callback); // QDialog::result() const
int c_QDialog__result(void *thisObj);
// QDialog::setModal(bool modal)
void c_QDialog__setModal_bool(void *thisObj, bool modal);
// QDialog::setResult(int r)
void c_QDialog__setResult_int(void *thisObj, int r);
// QDialog::setSizeGripEnabled(bool arg__1)
void c_QDialog__setSizeGripEnabled_bool(void *thisObj, bool arg__1);
// QDialog::setVisible(bool visible)
void c_QDialog__setVisible_bool(void *thisObj, bool visible);
// QDialog::sharedPainter() const
void *c_QDialog__sharedPainter(void *thisObj);
// QDialog::sizeHint() const
void *c_QDialog__sizeHint(void *thisObj);
// QDialog::tr(const char * s, const char * c, int n)
void *c_static_QDialog__tr_char_char_int(const char *s, const char *c, int n);
void c_QDialog__destructor(void *thisObj);
void c_QDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
void c_QDialog_Finalizer(
    void *cppObj); // QInputDialog::QInputDialog(QWidget * parent)
void *c_QInputDialog__constructor_QWidget(void *parent_);
// QInputDialog::accept()
void c_QInputDialog__accept(void *thisObj);
// QInputDialog::cancelButtonText() const
void *c_QInputDialog__cancelButtonText(void *thisObj);
// QInputDialog::changeEvent(QEvent * arg__1)
void c_QInputDialog__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QInputDialog::comboBoxItems() const
void *c_QInputDialog__comboBoxItems(void *thisObj);
// QInputDialog::customEvent(QEvent * event)
void c_QInputDialog__customEvent_QEvent(void *thisObj, void *event_);
// QInputDialog::devType() const
int c_QInputDialog__devType(void *thisObj);
// QInputDialog::done(int result)
void c_QInputDialog__done_int(void *thisObj, int result);
// QInputDialog::doubleDecimals() const
int c_QInputDialog__doubleDecimals(void *thisObj);
// QInputDialog::doubleMaximum() const
double c_QInputDialog__doubleMaximum(void *thisObj);
// QInputDialog::doubleMinimum() const
double c_QInputDialog__doubleMinimum(void *thisObj);
// QInputDialog::doubleStep() const
double c_QInputDialog__doubleStep(void *thisObj);
// QInputDialog::doubleValue() const
double c_QInputDialog__doubleValue(void *thisObj);
// QInputDialog::doubleValueChanged(double value)
void c_QInputDialog__doubleValueChanged_double(void *thisObj, double value);
void c_QInputDialog__onDoubleValueChanged_double(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::doubleValueSelected(double value)
void c_QInputDialog__doubleValueSelected_double(void *thisObj, double value);
void c_QInputDialog__onDoubleValueSelected_double(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::event(QEvent * event)
bool c_QInputDialog__event_QEvent(void *thisObj, void *event_);
// QInputDialog::eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QInputDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                void *arg__2_);
// QInputDialog::exec()
int c_QInputDialog__exec(void *thisObj);
// QInputDialog::focusNextPrevChild(bool next)
bool c_QInputDialog__focusNextPrevChild_bool(void *thisObj, bool next);
// QInputDialog::getText(QWidget * parent, const QString & title, const QString
// & label)
void *c_static_QInputDialog__getText_QWidget_QString_QString(
    void *parent_, const char *title_, const char *label_);
// QInputDialog::hasHeightForWidth() const
bool c_QInputDialog__hasHeightForWidth(void *thisObj);
// QInputDialog::heightForWidth(int arg__1) const
int c_QInputDialog__heightForWidth_int(void *thisObj, int arg__1);
// QInputDialog::initPainter(QPainter * painter) const
void c_QInputDialog__initPainter_QPainter(void *thisObj, void *painter_);
// QInputDialog::intMaximum() const
int c_QInputDialog__intMaximum(void *thisObj);
// QInputDialog::intMinimum() const
int c_QInputDialog__intMinimum(void *thisObj);
// QInputDialog::intStep() const
int c_QInputDialog__intStep(void *thisObj);
// QInputDialog::intValue() const
int c_QInputDialog__intValue(void *thisObj);
// QInputDialog::intValueChanged(int value)
void c_QInputDialog__intValueChanged_int(void *thisObj, int value);
void c_QInputDialog__onIntValueChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::intValueSelected(int value)
void c_QInputDialog__intValueSelected_int(void *thisObj, int value);
void c_QInputDialog__onIntValueSelected_int(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::isComboBoxEditable() const
bool c_QInputDialog__isComboBoxEditable(void *thisObj);
// QInputDialog::labelText() const
void *c_QInputDialog__labelText(void *thisObj);
// QInputDialog::leaveEvent(QEvent * event)
void c_QInputDialog__leaveEvent_QEvent(void *thisObj, void *event_);
// QInputDialog::minimumSizeHint() const
void *c_QInputDialog__minimumSizeHint(void *thisObj);
// QInputDialog::mouseDoubleClickEvent(QMouseEvent * event)
void c_QInputDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                       void *event_);
// QInputDialog::mouseMoveEvent(QMouseEvent * event)
void c_QInputDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QInputDialog::mousePressEvent(QMouseEvent * event)
void c_QInputDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QInputDialog::mouseReleaseEvent(QMouseEvent * event)
void c_QInputDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QInputDialog::okButtonText() const
void *c_QInputDialog__okButtonText(void *thisObj);
// QInputDialog::open()
void c_QInputDialog__open(void *thisObj);
// QInputDialog::paintEvent(QPaintEvent * event)
void c_QInputDialog__paintEvent_QPaintEvent(void *thisObj, void *event_);
// QInputDialog::reject()
void c_QInputDialog__reject(void *thisObj);
// QInputDialog::setCancelButtonText(const QString & text)
void c_QInputDialog__setCancelButtonText_QString(void *thisObj,
                                                 const char *text_);
// QInputDialog::setComboBoxEditable(bool editable)
void c_QInputDialog__setComboBoxEditable_bool(void *thisObj, bool editable);
// QInputDialog::setComboBoxItems(const QList<QString > & items)
void c_QInputDialog__setComboBoxItems_QList_QString(void *thisObj,
                                                    void *items_);
// QInputDialog::setDoubleDecimals(int decimals)
void c_QInputDialog__setDoubleDecimals_int(void *thisObj, int decimals);
// QInputDialog::setDoubleMaximum(double max)
void c_QInputDialog__setDoubleMaximum_double(void *thisObj, double max);
// QInputDialog::setDoubleMinimum(double min)
void c_QInputDialog__setDoubleMinimum_double(void *thisObj, double min);
// QInputDialog::setDoubleRange(double min, double max)
void c_QInputDialog__setDoubleRange_double_double(void *thisObj, double min,
                                                  double max);
// QInputDialog::setDoubleStep(double step)
void c_QInputDialog__setDoubleStep_double(void *thisObj, double step);
// QInputDialog::setDoubleValue(double value)
void c_QInputDialog__setDoubleValue_double(void *thisObj, double value);
// QInputDialog::setIntMaximum(int max)
void c_QInputDialog__setIntMaximum_int(void *thisObj, int max);
// QInputDialog::setIntMinimum(int min)
void c_QInputDialog__setIntMinimum_int(void *thisObj, int min);
// QInputDialog::setIntRange(int min, int max)
void c_QInputDialog__setIntRange_int_int(void *thisObj, int min, int max);
// QInputDialog::setIntStep(int step)
void c_QInputDialog__setIntStep_int(void *thisObj, int step);
// QInputDialog::setIntValue(int value)
void c_QInputDialog__setIntValue_int(void *thisObj, int value);
// QInputDialog::setLabelText(const QString & text)
void c_QInputDialog__setLabelText_QString(void *thisObj, const char *text_);
// QInputDialog::setOkButtonText(const QString & text)
void c_QInputDialog__setOkButtonText_QString(void *thisObj, const char *text_);
// QInputDialog::setTextValue(const QString & text)
void c_QInputDialog__setTextValue_QString(void *thisObj, const char *text_);
// QInputDialog::setVisible(bool visible)
void c_QInputDialog__setVisible_bool(void *thisObj, bool visible);
// QInputDialog::sharedPainter() const
void *c_QInputDialog__sharedPainter(void *thisObj);
// QInputDialog::sizeHint() const
void *c_QInputDialog__sizeHint(void *thisObj);
// QInputDialog::textValue() const
void *c_QInputDialog__textValue(void *thisObj);
// QInputDialog::textValueChanged(const QString & text)
void c_QInputDialog__textValueChanged_QString(void *thisObj, const char *text_);
void c_QInputDialog__onTextValueChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::textValueSelected(const QString & text)
void c_QInputDialog__textValueSelected_QString(void *thisObj,
                                               const char *text_);
void c_QInputDialog__onTextValueSelected_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::tr(const char * s, const char * c, int n)
void *c_static_QInputDialog__tr_char_char_int(const char *s, const char *c,
                                              int n);
void c_QInputDialog__destructor(void *thisObj);
void c_QInputDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId);
void c_QInputDialog_Finalizer(
    void *cppObj); // QCoreApplication::addLibraryPath(const QString & arg__1)
void c_static_QCoreApplication__addLibraryPath_QString(const char *arg__1_);
// QCoreApplication::applicationDirPath()
void *c_static_QCoreApplication__applicationDirPath();
// QCoreApplication::applicationFilePath()
void *c_static_QCoreApplication__applicationFilePath();
// QCoreApplication::applicationName()
void *c_static_QCoreApplication__applicationName();
// QCoreApplication::applicationNameChanged()
void c_QCoreApplication__applicationNameChanged(void *thisObj);
void c_QCoreApplication__onApplicationNameChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::applicationPid()
qint64 c_static_QCoreApplication__applicationPid();
// QCoreApplication::applicationVersion()
void *c_static_QCoreApplication__applicationVersion();
// QCoreApplication::applicationVersionChanged()
void c_QCoreApplication__applicationVersionChanged(void *thisObj);
void c_QCoreApplication__onApplicationVersionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::arguments()
void *c_static_QCoreApplication__arguments();
// QCoreApplication::closingDown()
bool c_static_QCoreApplication__closingDown();
// QCoreApplication::customEvent(QEvent * event)
void c_QCoreApplication__customEvent_QEvent(void *thisObj, void *event_);
// QCoreApplication::event(QEvent * arg__1)
bool c_QCoreApplication__event_QEvent(void *thisObj, void *arg__1_);
// QCoreApplication::eventFilter(QObject * watched, QEvent * event)
bool c_QCoreApplication__eventFilter_QObject_QEvent(void *thisObj,
                                                    void *watched_,
                                                    void *event_);
// QCoreApplication::exec()
int c_static_QCoreApplication__exec();
// QCoreApplication::exit(int retcode)
void c_static_QCoreApplication__exit_int(int retcode);
// QCoreApplication::instance()
void *c_static_QCoreApplication__instance();
// QCoreApplication::isQuitLockEnabled()
bool c_static_QCoreApplication__isQuitLockEnabled();
// QCoreApplication::isSetuidAllowed()
bool c_static_QCoreApplication__isSetuidAllowed();
// QCoreApplication::libraryPaths()
void *c_static_QCoreApplication__libraryPaths();
// QCoreApplication::notify(QObject * arg__1, QEvent * arg__2)
bool c_QCoreApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                               void *arg__2_);
// QCoreApplication::organizationDomain()
void *c_static_QCoreApplication__organizationDomain();
// QCoreApplication::organizationDomainChanged()
void c_QCoreApplication__organizationDomainChanged(void *thisObj);
void c_QCoreApplication__onOrganizationDomainChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::organizationName()
void *c_static_QCoreApplication__organizationName();
// QCoreApplication::organizationNameChanged()
void c_QCoreApplication__organizationNameChanged(void *thisObj);
void c_QCoreApplication__onOrganizationNameChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::postEvent(QObject * receiver, QEvent *
                     // event, int priority)
void c_static_QCoreApplication__postEvent_QObject_QEvent_int(void *receiver_,
                                                             void *event_,
                                                             int priority);
// QCoreApplication::processEvents()
void c_static_QCoreApplication__processEvents();
// QCoreApplication::quit()
void c_static_QCoreApplication__quit();
// QCoreApplication::removeLibraryPath(const QString & arg__1)
void c_static_QCoreApplication__removeLibraryPath_QString(const char *arg__1_);
// QCoreApplication::removePostedEvents(QObject * receiver, int eventType)
void c_static_QCoreApplication__removePostedEvents_QObject_int(void *receiver_,
                                                               int eventType);
// QCoreApplication::sendEvent(QObject * receiver, QEvent * event)
bool c_static_QCoreApplication__sendEvent_QObject_QEvent(void *receiver_,
                                                         void *event_);
// QCoreApplication::sendPostedEvents(QObject * receiver, int event_type)
void c_static_QCoreApplication__sendPostedEvents_QObject_int(void *receiver_,
                                                             int event_type);
// QCoreApplication::setApplicationName(const QString & application)
void c_static_QCoreApplication__setApplicationName_QString(
    const char *application_);
// QCoreApplication::setApplicationVersion(const QString & version)
void c_static_QCoreApplication__setApplicationVersion_QString(
    const char *version_);
// QCoreApplication::setLibraryPaths(const QList<QString > & arg__1)
void c_static_QCoreApplication__setLibraryPaths_QList_QString(void *arg__1_);
// QCoreApplication::setOrganizationDomain(const QString & orgDomain)
void c_static_QCoreApplication__setOrganizationDomain_QString(
    const char *orgDomain_);
// QCoreApplication::setOrganizationName(const QString & orgName)
void c_static_QCoreApplication__setOrganizationName_QString(
    const char *orgName_);
// QCoreApplication::setQuitLockEnabled(bool enabled)
void c_static_QCoreApplication__setQuitLockEnabled_bool(bool enabled);
// QCoreApplication::setSetuidAllowed(bool allow)
void c_static_QCoreApplication__setSetuidAllowed_bool(bool allow);
// QCoreApplication::startingUp()
bool c_static_QCoreApplication__startingUp();
// QCoreApplication::tr(const char * s, const char * c, int n)
void *c_static_QCoreApplication__tr_char_char_int(const char *s, const char *c,
                                                  int n);
// QCoreApplication::translate(const char * context, const char * key, const
// char * disambiguation, int n)
void *c_static_QCoreApplication__translate_char_char_char_int(
    const char *context, const char *key, const char *disambiguation, int n);
void c_QCoreApplication__destructor(void *thisObj);
void c_QCoreApplication__registerVirtualMethodCallback(void *ptr,
                                                       void *callback,
                                                       int methodId);
void c_QCoreApplication_Finalizer(
    void *cppObj); // QGuiApplication::allWindows()
void *c_static_QGuiApplication__allWindows();
// QGuiApplication::applicationDisplayName()
void *c_static_QGuiApplication__applicationDisplayName();
// QGuiApplication::applicationDisplayNameChanged()
void c_QGuiApplication__applicationDisplayNameChanged(void *thisObj);
void c_QGuiApplication__onApplicationDisplayNameChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::customEvent(QEvent * event)
void c_QGuiApplication__customEvent_QEvent(void *thisObj, void *event_);
// QGuiApplication::desktopFileName()
void *c_static_QGuiApplication__desktopFileName();
// QGuiApplication::desktopSettingsAware()
bool c_static_QGuiApplication__desktopSettingsAware();
// QGuiApplication::devicePixelRatio() const
qreal c_QGuiApplication__devicePixelRatio(void *thisObj);
// QGuiApplication::event(QEvent * arg__1)
bool c_QGuiApplication__event_QEvent(void *thisObj, void *arg__1_);
// QGuiApplication::eventFilter(QObject * watched, QEvent * event)
bool c_QGuiApplication__eventFilter_QObject_QEvent(void *thisObj,
                                                   void *watched_,
                                                   void *event_);
// QGuiApplication::exec()
int c_static_QGuiApplication__exec();
// QGuiApplication::focusObject()
void *c_static_QGuiApplication__focusObject();
// QGuiApplication::focusObjectChanged(QObject * focusObject)
void c_QGuiApplication__focusObjectChanged_QObject(void *thisObj,
                                                   void *focusObject_);
void c_QGuiApplication__onFocusObjectChanged_QObject(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::focusWindow()
void *c_static_QGuiApplication__focusWindow();
// QGuiApplication::focusWindowChanged(QWindow * focusWindow)
void c_QGuiApplication__focusWindowChanged_QWindow(void *thisObj,
                                                   void *focusWindow_);
void c_QGuiApplication__onFocusWindowChanged_QWindow(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::font()
void *c_static_QGuiApplication__font();
// QGuiApplication::fontDatabaseChanged()
void c_QGuiApplication__fontDatabaseChanged(void *thisObj);
void c_QGuiApplication__onFontDatabaseChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::isLeftToRight()
bool c_static_QGuiApplication__isLeftToRight();
// QGuiApplication::isRightToLeft()
bool c_static_QGuiApplication__isRightToLeft();
// QGuiApplication::isSavingSession() const
bool c_QGuiApplication__isSavingSession(void *thisObj);
// QGuiApplication::isSessionRestored() const
bool c_QGuiApplication__isSessionRestored(void *thisObj);
// QGuiApplication::keyboardModifiers()
int c_static_QGuiApplication__keyboardModifiers();
// QGuiApplication::lastWindowClosed()
void c_QGuiApplication__lastWindowClosed(void *thisObj);
void c_QGuiApplication__onLastWindowClosed(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::layoutDirection()
int c_static_QGuiApplication__layoutDirection();
// QGuiApplication::layoutDirectionChanged(Qt::LayoutDirection direction)
void c_QGuiApplication__layoutDirectionChanged_LayoutDirection(void *thisObj,
                                                               int direction);
void c_QGuiApplication__onLayoutDirectionChanged_LayoutDirection(
    void *thisObj, void *contextQObject,
    void *callback); // QGuiApplication::modalWindow()
void *c_static_QGuiApplication__modalWindow();
// QGuiApplication::notify(QObject * arg__1, QEvent * arg__2)
bool c_QGuiApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                              void *arg__2_);
// QGuiApplication::palette()
void *c_static_QGuiApplication__palette();
// QGuiApplication::platformName()
void *c_static_QGuiApplication__platformName();
// QGuiApplication::queryKeyboardModifiers()
int c_static_QGuiApplication__queryKeyboardModifiers();
// QGuiApplication::quitOnLastWindowClosed()
bool c_static_QGuiApplication__quitOnLastWindowClosed();
// QGuiApplication::restoreOverrideCursor()
void c_static_QGuiApplication__restoreOverrideCursor();
// QGuiApplication::sessionId() const
void *c_QGuiApplication__sessionId(void *thisObj);
// QGuiApplication::sessionKey() const
void *c_QGuiApplication__sessionKey(void *thisObj);
// QGuiApplication::setApplicationDisplayName(const QString & name)
void c_static_QGuiApplication__setApplicationDisplayName_QString(
    const char *name_);
// QGuiApplication::setDesktopFileName(const QString & name)
void c_static_QGuiApplication__setDesktopFileName_QString(const char *name_);
// QGuiApplication::setDesktopSettingsAware(bool on)
void c_static_QGuiApplication__setDesktopSettingsAware_bool(bool on);
// QGuiApplication::setFont(const QFont & arg__1)
void c_static_QGuiApplication__setFont_QFont(void *arg__1_);
// QGuiApplication::setLayoutDirection(Qt::LayoutDirection direction)
void c_static_QGuiApplication__setLayoutDirection_LayoutDirection(
    int direction);
// QGuiApplication::setPalette(const QPalette & pal)
void c_static_QGuiApplication__setPalette_QPalette(void *pal_);
// QGuiApplication::setQuitOnLastWindowClosed(bool quit)
void c_static_QGuiApplication__setQuitOnLastWindowClosed_bool(bool quit);
// QGuiApplication::setWindowIcon(const QIcon & icon)
void c_static_QGuiApplication__setWindowIcon_QIcon(void *icon_);
// QGuiApplication::sync()
void c_static_QGuiApplication__sync();
// QGuiApplication::topLevelAt(const QPoint & pos)
void *c_static_QGuiApplication__topLevelWindowAtPos_QPoint(void *pos_);
// QGuiApplication::topLevelWindows()
void *c_static_QGuiApplication__topLevelWindows();
// QGuiApplication::tr(const char * s, const char * c, int n)
void *c_static_QGuiApplication__tr_char_char_int(const char *s, const char *c,
                                                 int n);
// QGuiApplication::windowIcon()
void *c_static_QGuiApplication__windowIcon();
void c_QGuiApplication__destructor(void *thisObj);
void c_QGuiApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                      int methodId);
void c_QGuiApplication_Finalizer(void *cppObj); // QColor::QColor()
void *c_QColor__constructor();
// QColor::QColor(const QString & name)
void *c_QColor__constructor_QString(const char *name_);
// QColor::QColor(const char * aname)
void *c_QColor__constructor_char(const char *aname);
// QColor::QColor(int r, int g, int b, int a)
void *c_QColor__constructor_int_int_int_int(int r, int g, int b, int a);
// QColor::alpha() const
int c_QColor__alpha(void *thisObj);
// QColor::alphaF() const
float c_QColor__alphaF(void *thisObj);
// QColor::black() const
int c_QColor__black(void *thisObj);
// QColor::blackF() const
float c_QColor__blackF(void *thisObj);
// QColor::blue() const
int c_QColor__blue(void *thisObj);
// QColor::blueF() const
float c_QColor__blueF(void *thisObj);
// QColor::colorNames()
void *c_static_QColor__colorNames();
// QColor::cyan() const
int c_QColor__cyan(void *thisObj);
// QColor::cyanF() const
float c_QColor__cyanF(void *thisObj);
// QColor::darker(int f) const
void *c_QColor__darker_int(void *thisObj, int f);
// QColor::fromCmyk(int c, int m, int y, int k, int a)
void *c_static_QColor__fromCmyk_int_int_int_int_int(int c, int m, int y, int k,
                                                    int a);
// QColor::fromCmykF(float c, float m, float y, float k, float a)
void *c_static_QColor__fromCmykF_float_float_float_float_float(float c, float m,
                                                               float y, float k,
                                                               float a);
// QColor::fromHsl(int h, int s, int l, int a)
void *c_static_QColor__fromHsl_int_int_int_int(int h, int s, int l, int a);
// QColor::fromHslF(float h, float s, float l, float a)
void *c_static_QColor__fromHslF_float_float_float_float(float h, float s,
                                                        float l, float a);
// QColor::fromHsv(int h, int s, int v, int a)
void *c_static_QColor__fromHsv_int_int_int_int(int h, int s, int v, int a);
// QColor::fromHsvF(float h, float s, float v, float a)
void *c_static_QColor__fromHsvF_float_float_float_float(float h, float s,
                                                        float v, float a);
// QColor::fromRgb(int r, int g, int b, int a)
void *c_static_QColor__fromRgb_int_int_int_int(int r, int g, int b, int a);
// QColor::fromRgbF(float r, float g, float b, float a)
void *c_static_QColor__fromRgbF_float_float_float_float(float r, float g,
                                                        float b, float a);
// QColor::green() const
int c_QColor__green(void *thisObj);
// QColor::greenF() const
float c_QColor__greenF(void *thisObj);
// QColor::hslHue() const
int c_QColor__hslHue(void *thisObj);
// QColor::hslHueF() const
float c_QColor__hslHueF(void *thisObj);
// QColor::hslSaturation() const
int c_QColor__hslSaturation(void *thisObj);
// QColor::hslSaturationF() const
float c_QColor__hslSaturationF(void *thisObj);
// QColor::hsvHue() const
int c_QColor__hsvHue(void *thisObj);
// QColor::hsvHueF() const
float c_QColor__hsvHueF(void *thisObj);
// QColor::hsvSaturation() const
int c_QColor__hsvSaturation(void *thisObj);
// QColor::hsvSaturationF() const
float c_QColor__hsvSaturationF(void *thisObj);
// QColor::hue() const
int c_QColor__hue(void *thisObj);
// QColor::hueF() const
float c_QColor__hueF(void *thisObj);
// QColor::isValid() const
bool c_QColor__isValid(void *thisObj);
// QColor::isValidColor(const QString & name)
bool c_static_QColor__isValidColor_QString(const char *name_);
// QColor::lighter(int f) const
void *c_QColor__lighter_int(void *thisObj, int f);
// QColor::lightness() const
int c_QColor__lightness(void *thisObj);
// QColor::lightnessF() const
float c_QColor__lightnessF(void *thisObj);
// QColor::magenta() const
int c_QColor__magenta(void *thisObj);
// QColor::magentaF() const
float c_QColor__magentaF(void *thisObj);
// QColor::name() const
void *c_QColor__name(void *thisObj);
// QColor::red() const
int c_QColor__red(void *thisObj);
// QColor::redF() const
float c_QColor__redF(void *thisObj);
// QColor::saturation() const
int c_QColor__saturation(void *thisObj);
// QColor::saturationF() const
float c_QColor__saturationF(void *thisObj);
// QColor::setAlpha(int alpha)
void c_QColor__setAlpha_int(void *thisObj, int alpha);
// QColor::setAlphaF(float alpha)
void c_QColor__setAlphaF_float(void *thisObj, float alpha);
// QColor::setBlue(int blue)
void c_QColor__setBlue_int(void *thisObj, int blue);
// QColor::setBlueF(float blue)
void c_QColor__setBlueF_float(void *thisObj, float blue);
// QColor::setCmyk(int c, int m, int y, int k, int a)
void c_QColor__setCmyk_int_int_int_int_int(void *thisObj, int c, int m, int y,
                                           int k, int a);
// QColor::setCmykF(float c, float m, float y, float k, float a)
void c_QColor__setCmykF_float_float_float_float_float(void *thisObj, float c,
                                                      float m, float y, float k,
                                                      float a);
// QColor::setGreen(int green)
void c_QColor__setGreen_int(void *thisObj, int green);
// QColor::setGreenF(float green)
void c_QColor__setGreenF_float(void *thisObj, float green);
// QColor::setHsl(int h, int s, int l, int a)
void c_QColor__setHsl_int_int_int_int(void *thisObj, int h, int s, int l,
                                      int a);
// QColor::setHslF(float h, float s, float l, float a)
void c_QColor__setHslF_float_float_float_float(void *thisObj, float h, float s,
                                               float l, float a);
// QColor::setHsv(int h, int s, int v, int a)
void c_QColor__setHsv_int_int_int_int(void *thisObj, int h, int s, int v,
                                      int a);
// QColor::setHsvF(float h, float s, float v, float a)
void c_QColor__setHsvF_float_float_float_float(void *thisObj, float h, float s,
                                               float v, float a);
// QColor::setNamedColor(const QString & name)
void c_QColor__setNamedColor_QString(void *thisObj, const char *name_);
// QColor::setRed(int red)
void c_QColor__setRed_int(void *thisObj, int red);
// QColor::setRedF(float red)
void c_QColor__setRedF_float(void *thisObj, float red);
// QColor::setRgb(int r, int g, int b, int a)
void c_QColor__setRgb_int_int_int_int(void *thisObj, int r, int g, int b,
                                      int a);
// QColor::setRgbF(float r, float g, float b, float a)
void c_QColor__setRgbF_float_float_float_float(void *thisObj, float r, float g,
                                               float b, float a);
// QColor::toCmyk() const
void *c_QColor__toCmyk(void *thisObj);
// QColor::toExtendedRgb() const
void *c_QColor__toExtendedRgb(void *thisObj);
// QColor::toHsl() const
void *c_QColor__toHsl(void *thisObj);
// QColor::toHsv() const
void *c_QColor__toHsv(void *thisObj);
// QColor::toRgb() const
void *c_QColor__toRgb(void *thisObj);
// QColor::value() const
int c_QColor__value(void *thisObj);
// QColor::valueF() const
float c_QColor__valueF(void *thisObj);
// QColor::yellow() const
int c_QColor__yellow(void *thisObj);
// QColor::yellowF() const
float c_QColor__yellowF(void *thisObj);
void c_QColor__destructor(void *thisObj);
void c_QColor_Finalizer(void *cppObj); // QByteArray::QByteArray()
void *c_QByteArray__constructor();
// QByteArray::QByteArray(const char * arg__1, qsizetype size)
void *c_QByteArray__constructor_char_qsizetype(const char *arg__1,
                                               qsizetype size);
// QByteArray::append(const QByteArray & a)
void *c_QByteArray__append_QByteArray(void *thisObj, void *a_);
// QByteArray::append(const char * s)
void *c_QByteArray__append_char(void *thisObj, const char *s);
// QByteArray::append(const char * s, qsizetype len)
void *c_QByteArray__append_char_qsizetype(void *thisObj, const char *s,
                                          qsizetype len);
// QByteArray::at(qsizetype i) const
char c_QByteArray__at_qsizetype(void *thisObj, qsizetype i);
// QByteArray::back() const
char c_QByteArray__back(void *thisObj);
// QByteArray::begin() const
const char *c_QByteArray__begin(void *thisObj);
// QByteArray::capacity() const
qsizetype c_QByteArray__capacity(void *thisObj);
// QByteArray::cbegin() const
const char *c_QByteArray__cbegin(void *thisObj);
// QByteArray::cend() const
const char *c_QByteArray__cend(void *thisObj);
// QByteArray::chop(qsizetype n)
void c_QByteArray__chop_qsizetype(void *thisObj, qsizetype n);
// QByteArray::chopped(qsizetype len) const
void *c_QByteArray__chopped_qsizetype(void *thisObj, qsizetype len);
// QByteArray::clear()
void c_QByteArray__clear(void *thisObj);
// QByteArray::constBegin() const
const char *c_QByteArray__constBegin(void *thisObj);
// QByteArray::constData() const
const char *c_QByteArray__constData(void *thisObj);
// QByteArray::constEnd() const
const char *c_QByteArray__constEnd(void *thisObj);
// QByteArray::data() const
const char *c_QByteArray__data(void *thisObj);
// QByteArray::detach()
void c_QByteArray__detach(void *thisObj);
// QByteArray::end() const
const char *c_QByteArray__end(void *thisObj);
// QByteArray::first(qsizetype n) const
void *c_QByteArray__first_qsizetype(void *thisObj, qsizetype n);
// QByteArray::fromBase64(const QByteArray & base64)
void *c_static_QByteArray__fromBase64_QByteArray(void *base64_);
// QByteArray::fromHex(const QByteArray & hexEncoded)
void *c_static_QByteArray__fromHex_QByteArray(void *hexEncoded_);
// QByteArray::fromRawData(const char * data, qsizetype size)
void *c_static_QByteArray__fromRawData_char_qsizetype(const char *data,
                                                      qsizetype size);
// QByteArray::front() const
char c_QByteArray__front(void *thisObj);
// QByteArray::insert(qsizetype i, const QByteArray & data)
void *c_QByteArray__insert_qsizetype_QByteArray(void *thisObj, qsizetype i,
                                                void *data_);
// QByteArray::insert(qsizetype i, const char * s)
void *c_QByteArray__insert_qsizetype_char(void *thisObj, qsizetype i,
                                          const char *s);
// QByteArray::insert(qsizetype i, const char * s, qsizetype len)
void *c_QByteArray__insert_qsizetype_char_qsizetype(void *thisObj, qsizetype i,
                                                    const char *s,
                                                    qsizetype len);
// QByteArray::isDetached() const
bool c_QByteArray__isDetached(void *thisObj);
// QByteArray::isEmpty() const
bool c_QByteArray__isEmpty(void *thisObj);
// QByteArray::isLower() const
bool c_QByteArray__isLower(void *thisObj);
// QByteArray::isNull() const
bool c_QByteArray__isNull(void *thisObj);
// QByteArray::isSharedWith(const QByteArray & other) const
bool c_QByteArray__isSharedWith_QByteArray(void *thisObj, void *other_);
// QByteArray::isUpper() const
bool c_QByteArray__isUpper(void *thisObj);
// QByteArray::isValidUtf8() const
bool c_QByteArray__isValidUtf8(void *thisObj);
// QByteArray::last(qsizetype n) const
void *c_QByteArray__last_qsizetype(void *thisObj, qsizetype n);
// QByteArray::left(qsizetype len) const
void *c_QByteArray__left_qsizetype(void *thisObj, qsizetype len);
// QByteArray::length() const
qsizetype c_QByteArray__length(void *thisObj);
// QByteArray::mid(qsizetype index, qsizetype len) const
void *c_QByteArray__mid_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                            qsizetype len);
// QByteArray::number(int arg__1, int base)
void *c_static_QByteArray__number_int_int(int arg__1, int base);
// QByteArray::number(long arg__1, int base)
void *c_static_QByteArray__number_long_int(long arg__1, int base);
// QByteArray::number(qint64 arg__1, int base)
void *c_static_QByteArray__number_qint64_int(qint64 arg__1, int base);
// QByteArray::prepend(const QByteArray & a)
void *c_QByteArray__prepend_QByteArray(void *thisObj, void *a_);
// QByteArray::prepend(const char * s)
void *c_QByteArray__prepend_char(void *thisObj, const char *s);
// QByteArray::prepend(const char * s, qsizetype len)
void *c_QByteArray__prepend_char_qsizetype(void *thisObj, const char *s,
                                           qsizetype len);
// QByteArray::push_back(const QByteArray & a)
void c_QByteArray__push_back_QByteArray(void *thisObj, void *a_);
// QByteArray::push_back(const char * s)
void c_QByteArray__push_back_char(void *thisObj, const char *s);
// QByteArray::push_front(const QByteArray & a)
void c_QByteArray__push_front_QByteArray(void *thisObj, void *a_);
// QByteArray::push_front(const char * c)
void c_QByteArray__push_front_char(void *thisObj, const char *c);
// QByteArray::remove(qsizetype index, qsizetype len)
void *c_QByteArray__remove_qsizetype_qsizetype(void *thisObj, qsizetype index,
                                               qsizetype len);
// QByteArray::repeated(qsizetype times) const
void *c_QByteArray__repeated_qsizetype(void *thisObj, qsizetype times);
// QByteArray::replace(const char * before, qsizetype bsize, const char * after,
// qsizetype asize)
void *c_QByteArray__replace_char_qsizetype_char_qsizetype(void *thisObj,
                                                          const char *before,
                                                          qsizetype bsize,
                                                          const char *after,
                                                          qsizetype asize);
// QByteArray::replace(qsizetype index, qsizetype len, const char * s, qsizetype
// alen)
void *c_QByteArray__replace_qsizetype_qsizetype_char_qsizetype(void *thisObj,
                                                               qsizetype index,
                                                               qsizetype len,
                                                               const char *s,
                                                               qsizetype alen);
// QByteArray::reserve(qsizetype size)
void c_QByteArray__reserve_qsizetype(void *thisObj, qsizetype size);
// QByteArray::resize(qsizetype size)
void c_QByteArray__resize_qsizetype(void *thisObj, qsizetype size);
// QByteArray::right(qsizetype len) const
void *c_QByteArray__right_qsizetype(void *thisObj, qsizetype len);
// QByteArray::setNum(int arg__1, int base)
void *c_QByteArray__setNum_int_int(void *thisObj, int arg__1, int base);
// QByteArray::setNum(long arg__1, int base)
void *c_QByteArray__setNum_long_int(void *thisObj, long arg__1, int base);
// QByteArray::setNum(qint64 arg__1, int base)
void *c_QByteArray__setNum_qint64_int(void *thisObj, qint64 arg__1, int base);
// QByteArray::setNum(short arg__1, int base)
void *c_QByteArray__setNum_short_int(void *thisObj, short arg__1, int base);
// QByteArray::setRawData(const char * a, qsizetype n)
void *c_QByteArray__setRawData_char_qsizetype(void *thisObj, const char *a,
                                              qsizetype n);
// QByteArray::shrink_to_fit()
void c_QByteArray__shrink_to_fit(void *thisObj);
// QByteArray::simplified()
void *c_QByteArray__simplified(void *thisObj);
// QByteArray::size() const
qsizetype c_QByteArray__size(void *thisObj);
// QByteArray::sliced(qsizetype pos) const
void *c_QByteArray__sliced_qsizetype(void *thisObj, qsizetype pos);
// QByteArray::sliced(qsizetype pos, qsizetype n) const
void *c_QByteArray__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                               qsizetype n);
// QByteArray::squeeze()
void c_QByteArray__squeeze(void *thisObj);
// QByteArray::toBase64() const
void *c_QByteArray__toBase64(void *thisObj);
// QByteArray::toLower()
void *c_QByteArray__toLower(void *thisObj);
// QByteArray::toUpper()
void *c_QByteArray__toUpper(void *thisObj);
// QByteArray::trimmed()
void *c_QByteArray__trimmed(void *thisObj);
// QByteArray::truncate(qsizetype pos)
void c_QByteArray__truncate_qsizetype(void *thisObj, qsizetype pos);
void c_QByteArray__destructor(void *thisObj);
void c_QByteArray_Finalizer(void *cppObj); // QBrush::QBrush()
void *c_QBrush__constructor();
// QBrush::QBrush(const QColor & color)
void *c_QBrush__constructor_QColor(void *color_);
// QBrush::QBrush(const QColor & color, const QPixmap & pixmap)
void *c_QBrush__constructor_QColor_QPixmap(void *color_, void *pixmap_);
// QBrush::QBrush(const QPixmap & pixmap)
void *c_QBrush__constructor_QPixmap(void *pixmap_);
// QBrush::color() const
void *c_QBrush__color(void *thisObj);
// QBrush::isDetached() const
bool c_QBrush__isDetached(void *thisObj);
// QBrush::isOpaque() const
bool c_QBrush__isOpaque(void *thisObj);
// QBrush::setColor(const QColor & color)
void c_QBrush__setColor_QColor(void *thisObj, void *color_);
// QBrush::setTexture(const QPixmap & pixmap)
void c_QBrush__setTexture_QPixmap(void *thisObj, void *pixmap_);
// QBrush::texture() const
void *c_QBrush__texture(void *thisObj);
void c_QBrush__destructor(void *thisObj);
void c_QBrush_Finalizer(
    void *cppObj); // QBoxLayout::addItem(QLayoutItem * arg__1)
void c_QBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_);
// QBoxLayout::addLayout(QLayout * layout, int stretch)
void c_QBoxLayout__addLayout_QLayout_int(void *thisObj, void *layout_,
                                         int stretch);
// QBoxLayout::addSpacing(int size)
void c_QBoxLayout__addSpacing_int(void *thisObj, int size);
// QBoxLayout::addStretch(int stretch)
void c_QBoxLayout__addStretch_int(void *thisObj, int stretch);
// QBoxLayout::addStrut(int arg__1)
void c_QBoxLayout__addStrut_int(void *thisObj, int arg__1);
// QBoxLayout::addWidget(QWidget * arg__1, int stretch)
void c_QBoxLayout__addWidget_QWidget_int(void *thisObj, void *arg__1_,
                                         int stretch);
// QBoxLayout::count() const
int c_QBoxLayout__count(void *thisObj);
// QBoxLayout::customEvent(QEvent * event)
void c_QBoxLayout__customEvent_QEvent(void *thisObj, void *event_);
// QBoxLayout::event(QEvent * event)
bool c_QBoxLayout__event_QEvent(void *thisObj, void *event_);
// QBoxLayout::eventFilter(QObject * watched, QEvent * event)
bool c_QBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                              void *event_);
// QBoxLayout::expandingDirections() const
int c_QBoxLayout__expandingDirections(void *thisObj);
// QBoxLayout::geometry() const
void *c_QBoxLayout__geometry(void *thisObj);
// QBoxLayout::hasHeightForWidth() const
bool c_QBoxLayout__hasHeightForWidth(void *thisObj);
// QBoxLayout::heightForWidth(int arg__1) const
int c_QBoxLayout__heightForWidth_int(void *thisObj, int arg__1);
// QBoxLayout::indexOf(const QLayoutItem * arg__1) const
int c_QBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_);
// QBoxLayout::indexOf(const QWidget * arg__1) const
int c_QBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_);
// QBoxLayout::insertItem(int index, QLayoutItem * arg__2)
void c_QBoxLayout__insertItem_int_QLayoutItem(void *thisObj, int index,
                                              void *arg__2_);
// QBoxLayout::insertLayout(int index, QLayout * layout, int stretch)
void c_QBoxLayout__insertLayout_int_QLayout_int(void *thisObj, int index,
                                                void *layout_, int stretch);
// QBoxLayout::insertSpacing(int index, int size)
void c_QBoxLayout__insertSpacing_int_int(void *thisObj, int index, int size);
// QBoxLayout::insertStretch(int index, int stretch)
void c_QBoxLayout__insertStretch_int_int(void *thisObj, int index, int stretch);
// QBoxLayout::insertWidget(int index, QWidget * widget, int stretch)
void c_QBoxLayout__insertWidget_int_QWidget_int(void *thisObj, int index,
                                                void *widget_, int stretch);
// QBoxLayout::invalidate()
void c_QBoxLayout__invalidate(void *thisObj);
// QBoxLayout::isEmpty() const
bool c_QBoxLayout__isEmpty(void *thisObj);
// QBoxLayout::itemAt(int arg__1) const
void *c_QBoxLayout__itemAt_int(void *thisObj, int arg__1);
// QBoxLayout::layout()
void *c_QBoxLayout__layout(void *thisObj);
// QBoxLayout::maximumSize() const
void *c_QBoxLayout__maximumSize(void *thisObj);
// QBoxLayout::minimumHeightForWidth(int arg__1) const
int c_QBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QBoxLayout::minimumSize() const
void *c_QBoxLayout__minimumSize(void *thisObj);
// QBoxLayout::setGeometry(const QRect & arg__1)
void c_QBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_);
// QBoxLayout::setSpacing(int spacing)
void c_QBoxLayout__setSpacing_int(void *thisObj, int spacing);
// QBoxLayout::setStretch(int index, int stretch)
void c_QBoxLayout__setStretch_int_int(void *thisObj, int index, int stretch);
// QBoxLayout::setStretchFactor(QLayout * l, int stretch)
bool c_QBoxLayout__setStretchFactor_QLayout_int(void *thisObj, void *l_,
                                                int stretch);
// QBoxLayout::setStretchFactor(QWidget * w, int stretch)
bool c_QBoxLayout__setStretchFactor_QWidget_int(void *thisObj, void *w_,
                                                int stretch);
// QBoxLayout::sizeHint() const
void *c_QBoxLayout__sizeHint(void *thisObj);
// QBoxLayout::spacing() const
int c_QBoxLayout__spacing(void *thisObj);
// QBoxLayout::stretch(int index) const
int c_QBoxLayout__stretch_int(void *thisObj, int index);
// QBoxLayout::takeAt(int arg__1)
void *c_QBoxLayout__takeAt_int(void *thisObj, int arg__1);
// QBoxLayout::tr(const char * s, const char * c, int n)
void *c_static_QBoxLayout__tr_char_char_int(const char *s, const char *c,
                                            int n);
// QBoxLayout::widget() const
void *c_QBoxLayout__widget(void *thisObj);
void c_QBoxLayout__destructor(void *thisObj);
void c_QBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
void c_QBoxLayout_Finalizer(
    void *cppObj); // QVBoxLayout::QVBoxLayout(QWidget * parent)
void *c_QVBoxLayout__constructor_QWidget(void *parent_);
// QVBoxLayout::addItem(QLayoutItem * arg__1)
void c_QVBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_);
// QVBoxLayout::count() const
int c_QVBoxLayout__count(void *thisObj);
// QVBoxLayout::customEvent(QEvent * event)
void c_QVBoxLayout__customEvent_QEvent(void *thisObj, void *event_);
// QVBoxLayout::event(QEvent * event)
bool c_QVBoxLayout__event_QEvent(void *thisObj, void *event_);
// QVBoxLayout::eventFilter(QObject * watched, QEvent * event)
bool c_QVBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);
// QVBoxLayout::expandingDirections() const
int c_QVBoxLayout__expandingDirections(void *thisObj);
// QVBoxLayout::geometry() const
void *c_QVBoxLayout__geometry(void *thisObj);
// QVBoxLayout::hasHeightForWidth() const
bool c_QVBoxLayout__hasHeightForWidth(void *thisObj);
// QVBoxLayout::heightForWidth(int arg__1) const
int c_QVBoxLayout__heightForWidth_int(void *thisObj, int arg__1);
// QVBoxLayout::indexOf(const QLayoutItem * arg__1) const
int c_QVBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_);
// QVBoxLayout::indexOf(const QWidget * arg__1) const
int c_QVBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_);
// QVBoxLayout::invalidate()
void c_QVBoxLayout__invalidate(void *thisObj);
// QVBoxLayout::isEmpty() const
bool c_QVBoxLayout__isEmpty(void *thisObj);
// QVBoxLayout::itemAt(int arg__1) const
void *c_QVBoxLayout__itemAt_int(void *thisObj, int arg__1);
// QVBoxLayout::layout()
void *c_QVBoxLayout__layout(void *thisObj);
// QVBoxLayout::maximumSize() const
void *c_QVBoxLayout__maximumSize(void *thisObj);
// QVBoxLayout::minimumHeightForWidth(int arg__1) const
int c_QVBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QVBoxLayout::minimumSize() const
void *c_QVBoxLayout__minimumSize(void *thisObj);
// QVBoxLayout::setGeometry(const QRect & arg__1)
void c_QVBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_);
// QVBoxLayout::setSpacing(int spacing)
void c_QVBoxLayout__setSpacing_int(void *thisObj, int spacing);
// QVBoxLayout::sizeHint() const
void *c_QVBoxLayout__sizeHint(void *thisObj);
// QVBoxLayout::spacing() const
int c_QVBoxLayout__spacing(void *thisObj);
// QVBoxLayout::takeAt(int arg__1)
void *c_QVBoxLayout__takeAt_int(void *thisObj, int arg__1);
// QVBoxLayout::tr(const char * s, const char * c, int n)
void *c_static_QVBoxLayout__tr_char_char_int(const char *s, const char *c,
                                             int n);
// QVBoxLayout::widget() const
void *c_QVBoxLayout__widget(void *thisObj);
void c_QVBoxLayout__destructor(void *thisObj);
void c_QVBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QVBoxLayout_Finalizer(
    void *cppObj); // QHBoxLayout::QHBoxLayout(QWidget * parent)
void *c_QHBoxLayout__constructor_QWidget(void *parent_);
// QHBoxLayout::addItem(QLayoutItem * arg__1)
void c_QHBoxLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_);
// QHBoxLayout::count() const
int c_QHBoxLayout__count(void *thisObj);
// QHBoxLayout::customEvent(QEvent * event)
void c_QHBoxLayout__customEvent_QEvent(void *thisObj, void *event_);
// QHBoxLayout::event(QEvent * event)
bool c_QHBoxLayout__event_QEvent(void *thisObj, void *event_);
// QHBoxLayout::eventFilter(QObject * watched, QEvent * event)
bool c_QHBoxLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);
// QHBoxLayout::expandingDirections() const
int c_QHBoxLayout__expandingDirections(void *thisObj);
// QHBoxLayout::geometry() const
void *c_QHBoxLayout__geometry(void *thisObj);
// QHBoxLayout::hasHeightForWidth() const
bool c_QHBoxLayout__hasHeightForWidth(void *thisObj);
// QHBoxLayout::heightForWidth(int arg__1) const
int c_QHBoxLayout__heightForWidth_int(void *thisObj, int arg__1);
// QHBoxLayout::indexOf(const QLayoutItem * arg__1) const
int c_QHBoxLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_);
// QHBoxLayout::indexOf(const QWidget * arg__1) const
int c_QHBoxLayout__indexOf_QWidget(void *thisObj, void *arg__1_);
// QHBoxLayout::invalidate()
void c_QHBoxLayout__invalidate(void *thisObj);
// QHBoxLayout::isEmpty() const
bool c_QHBoxLayout__isEmpty(void *thisObj);
// QHBoxLayout::itemAt(int arg__1) const
void *c_QHBoxLayout__itemAt_int(void *thisObj, int arg__1);
// QHBoxLayout::layout()
void *c_QHBoxLayout__layout(void *thisObj);
// QHBoxLayout::maximumSize() const
void *c_QHBoxLayout__maximumSize(void *thisObj);
// QHBoxLayout::minimumHeightForWidth(int arg__1) const
int c_QHBoxLayout__minimumHeightForWidth_int(void *thisObj, int arg__1);
// QHBoxLayout::minimumSize() const
void *c_QHBoxLayout__minimumSize(void *thisObj);
// QHBoxLayout::setGeometry(const QRect & arg__1)
void c_QHBoxLayout__setGeometry_QRect(void *thisObj, void *arg__1_);
// QHBoxLayout::setSpacing(int spacing)
void c_QHBoxLayout__setSpacing_int(void *thisObj, int spacing);
// QHBoxLayout::sizeHint() const
void *c_QHBoxLayout__sizeHint(void *thisObj);
// QHBoxLayout::spacing() const
int c_QHBoxLayout__spacing(void *thisObj);
// QHBoxLayout::takeAt(int arg__1)
void *c_QHBoxLayout__takeAt_int(void *thisObj, int arg__1);
// QHBoxLayout::tr(const char * s, const char * c, int n)
void *c_static_QHBoxLayout__tr_char_char_int(const char *s, const char *c,
                                             int n);
// QHBoxLayout::widget() const
void *c_QHBoxLayout__widget(void *thisObj);
void c_QHBoxLayout__destructor(void *thisObj);
void c_QHBoxLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QHBoxLayout_Finalizer(void *cppObj); // QApplication::QApplication()
void *c_QApplication__constructor();
// QApplication::aboutQt()
void c_static_QApplication__aboutQt();
// QApplication::activeModalWidget()
void *c_static_QApplication__activeModalWidget();
// QApplication::activePopupWidget()
void *c_static_QApplication__activePopupWidget();
// QApplication::activeWindow()
void *c_static_QApplication__activeWindow();
// QApplication::alert(QWidget * widget, int duration)
void c_static_QApplication__alert_QWidget_int(void *widget_, int duration);
// QApplication::allWidgets()
void *c_static_QApplication__allWidgets();
// QApplication::autoSipEnabled() const
bool c_QApplication__autoSipEnabled(void *thisObj);
// QApplication::beep()
void c_static_QApplication__beep();
// QApplication::closeAllWindows()
void c_static_QApplication__closeAllWindows();
// QApplication::cursorFlashTime()
int c_static_QApplication__cursorFlashTime();
// QApplication::customEvent(QEvent * event)
void c_QApplication__customEvent_QEvent(void *thisObj, void *event_);
// QApplication::doubleClickInterval()
int c_static_QApplication__doubleClickInterval();
// QApplication::event(QEvent * arg__1)
bool c_QApplication__event_QEvent(void *thisObj, void *arg__1_);
// QApplication::eventFilter(QObject * watched, QEvent * event)
bool c_QApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                                void *event_);
// QApplication::exec()
int c_static_QApplication__exec();
// QApplication::focusChanged(QWidget * old, QWidget * now)
void c_QApplication__focusChanged_QWidget_QWidget(void *thisObj, void *old_,
                                                  void *now_);
void c_QApplication__onFocusChanged_QWidget_QWidget(
    void *thisObj, void *contextQObject,
    void *callback); // QApplication::focusWidget()
void *c_static_QApplication__focusWidget();
// QApplication::font()
void *c_static_QApplication__font();
// QApplication::font(const QWidget * arg__1)
void *c_static_QApplication__fontForWidget_QWidget(void *arg__1_);
// QApplication::font(const char * className)
void *c_static_QApplication__fontForClassName_char(const char *className);
// QApplication::keyboardInputInterval()
int c_static_QApplication__keyboardInputInterval();
// QApplication::notify(QObject * arg__1, QEvent * arg__2)
bool c_QApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_);
// QApplication::palette(const QWidget * arg__1)
void *c_static_QApplication__palette_QWidget(void *arg__1_);
// QApplication::palette(const char * className)
void *c_static_QApplication__palette_char(const char *className);
// QApplication::setActiveWindow(QWidget * act)
void c_static_QApplication__setActiveWindow_QWidget(void *act_);
// QApplication::setAutoSipEnabled(const bool enabled)
void c_QApplication__setAutoSipEnabled_bool(void *thisObj, bool enabled);
// QApplication::setCursorFlashTime(int arg__1)
void c_static_QApplication__setCursorFlashTime_int(int arg__1);
// QApplication::setDoubleClickInterval(int arg__1)
void c_static_QApplication__setDoubleClickInterval_int(int arg__1);
// QApplication::setFont(const QFont & arg__1, const char * className)
void c_static_QApplication__setFont_QFont_char(void *arg__1_,
                                               const char *className);
// QApplication::setKeyboardInputInterval(int arg__1)
void c_static_QApplication__setKeyboardInputInterval_int(int arg__1);
// QApplication::setPalette(const QPalette & arg__1, const char * className)
void c_static_QApplication__setPalette_QPalette_char(void *arg__1_,
                                                     const char *className);
// QApplication::setStartDragDistance(int l)
void c_static_QApplication__setStartDragDistance_int(int l);
// QApplication::setStartDragTime(int ms)
void c_static_QApplication__setStartDragTime_int(int ms);
// QApplication::setStyle(QStyle * arg__1)
void c_static_QApplication__setStyle_QStyle(void *arg__1_);
// QApplication::setStyle(const QString & arg__1)
void *c_static_QApplication__setStyle_QString(const char *arg__1_);
// QApplication::setStyleSheet(const QString & sheet)
void c_QApplication__setStyleSheet_QString(void *thisObj, const char *sheet_);
// QApplication::setWheelScrollLines(int arg__1)
void c_static_QApplication__setWheelScrollLines_int(int arg__1);
// QApplication::startDragDistance()
int c_static_QApplication__startDragDistance();
// QApplication::startDragTime()
int c_static_QApplication__startDragTime();
// QApplication::style()
void *c_static_QApplication__style();
// QApplication::styleSheet() const
void *c_QApplication__styleSheet(void *thisObj);
// QApplication::topLevelAt(const QPoint & p)
void *c_static_QApplication__topLevelWidgetAtPos_QPoint(void *p_);
// QApplication::topLevelAt(int x, int y)
void *c_static_QApplication__topLevelWidgetAt_int_int(int x, int y);
// QApplication::topLevelWidgets()
void *c_static_QApplication__topLevelWidgets();
// QApplication::tr(const char * s, const char * c, int n)
void *c_static_QApplication__tr_char_char_int(const char *s, const char *c,
                                              int n);
// QApplication::wheelScrollLines()
int c_static_QApplication__wheelScrollLines();
// QApplication::widgetAt(const QPoint & p)
void *c_static_QApplication__widgetAt_QPoint(void *p_);
// QApplication::widgetAt(int x, int y)
void *c_static_QApplication__widgetAt_int_int(int x, int y);
void c_QApplication__destructor(void *thisObj);
void c_QApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                   int methodId);
void c_QApplication_Finalizer(
    void *cppObj); // QAction::QAction(QObject * parent)
void *c_QAction__constructor_QObject(void *parent_);
// QAction::QAction(const QIcon & icon, const QString & text, QObject * parent)
void *c_QAction__constructor_QIcon_QString_QObject(void *icon_,
                                                   const char *text_,
                                                   void *parent_);
// QAction::QAction(const QString & text, QObject * parent)
void *c_QAction__constructor_QString_QObject(const char *text_, void *parent_);
// QAction::associatedObjects() const
void *c_QAction__associatedObjects(void *thisObj);
// QAction::autoRepeat() const
bool c_QAction__autoRepeat(void *thisObj);
// QAction::changed()
void c_QAction__changed(void *thisObj);
void c_QAction__onChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QAction::checkableChanged(bool checkable)
void c_QAction__checkableChanged_bool(void *thisObj, bool checkable);
void c_QAction__onCheckableChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QAction::customEvent(QEvent * event)
void c_QAction__customEvent_QEvent(void *thisObj, void *event_);
// QAction::data() const
void *c_QAction__data(void *thisObj);
// QAction::enabledChanged(bool enabled)
void c_QAction__enabledChanged_bool(void *thisObj, bool enabled);
void c_QAction__onEnabledChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QAction::event(QEvent * arg__1)
bool c_QAction__event_QEvent(void *thisObj, void *arg__1_);
// QAction::eventFilter(QObject * watched, QEvent * event)
bool c_QAction__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_);
// QAction::font() const
void *c_QAction__font(void *thisObj);
// QAction::hover()
void c_QAction__hover(void *thisObj);
// QAction::hovered()
void c_QAction__hovered(void *thisObj);
void c_QAction__onHovered(void *thisObj, void *contextQObject,
                          void *callback); // QAction::icon() const
void *c_QAction__icon(void *thisObj);
// QAction::iconText() const
void *c_QAction__iconText(void *thisObj);
// QAction::isCheckable() const
bool c_QAction__isCheckable(void *thisObj);
// QAction::isChecked() const
bool c_QAction__isChecked(void *thisObj);
// QAction::isEnabled() const
bool c_QAction__isEnabled(void *thisObj);
// QAction::isIconVisibleInMenu() const
bool c_QAction__isIconVisibleInMenu(void *thisObj);
// QAction::isSeparator() const
bool c_QAction__isSeparator(void *thisObj);
// QAction::isShortcutVisibleInContextMenu() const
bool c_QAction__isShortcutVisibleInContextMenu(void *thisObj);
// QAction::isVisible() const
bool c_QAction__isVisible(void *thisObj);
// QAction::resetEnabled()
void c_QAction__resetEnabled(void *thisObj);
// QAction::setAutoRepeat(bool arg__1)
void c_QAction__setAutoRepeat_bool(void *thisObj, bool arg__1);
// QAction::setCheckable(bool arg__1)
void c_QAction__setCheckable_bool(void *thisObj, bool arg__1);
// QAction::setChecked(bool arg__1)
void c_QAction__setChecked_bool(void *thisObj, bool arg__1);
// QAction::setData(const QVariant & var)
void c_QAction__setData_QVariant(void *thisObj, void *var_);
// QAction::setDisabled(bool b)
void c_QAction__setDisabled_bool(void *thisObj, bool b);
// QAction::setEnabled(bool arg__1)
void c_QAction__setEnabled_bool(void *thisObj, bool arg__1);
// QAction::setFont(const QFont & font)
void c_QAction__setFont_QFont(void *thisObj, void *font_);
// QAction::setIcon(const QIcon & icon)
void c_QAction__setIcon_QIcon(void *thisObj, void *icon_);
// QAction::setIconText(const QString & text)
void c_QAction__setIconText_QString(void *thisObj, const char *text_);
// QAction::setIconVisibleInMenu(bool visible)
void c_QAction__setIconVisibleInMenu_bool(void *thisObj, bool visible);
// QAction::setSeparator(bool b)
void c_QAction__setSeparator_bool(void *thisObj, bool b);
// QAction::setShortcut(const QKeySequence & shortcut)
void c_QAction__setShortcut_QKeySequence(void *thisObj, void *shortcut_);
// QAction::setShortcutVisibleInContextMenu(bool show)
void c_QAction__setShortcutVisibleInContextMenu_bool(void *thisObj, bool show);
// QAction::setShortcuts(QKeySequence::StandardKey arg__1)
void c_QAction__setShortcuts_StandardKey(void *thisObj, int arg__1);
// QAction::setShortcuts(const QList<QKeySequence > & shortcuts)
void c_QAction__setShortcuts_QList_QKeySequence(void *thisObj,
                                                void *shortcuts_);
// QAction::setStatusTip(const QString & statusTip)
void c_QAction__setStatusTip_QString(void *thisObj, const char *statusTip_);
// QAction::setText(const QString & text)
void c_QAction__setText_QString(void *thisObj, const char *text_);
// QAction::setToolTip(const QString & tip)
void c_QAction__setToolTip_QString(void *thisObj, const char *tip_);
// QAction::setVisible(bool arg__1)
void c_QAction__setVisible_bool(void *thisObj, bool arg__1);
// QAction::setWhatsThis(const QString & what)
void c_QAction__setWhatsThis_QString(void *thisObj, const char *what_);
// QAction::shortcut() const
void *c_QAction__shortcut(void *thisObj);
// QAction::shortcuts() const
void *c_QAction__shortcuts(void *thisObj);
// QAction::showStatusText(QObject * object)
bool c_QAction__showStatusText_QObject(void *thisObj, void *object_);
// QAction::statusTip() const
void *c_QAction__statusTip(void *thisObj);
// QAction::text() const
void *c_QAction__text(void *thisObj);
// QAction::toggle()
void c_QAction__toggle(void *thisObj);
// QAction::toggled(bool arg__1)
void c_QAction__toggled_bool(void *thisObj, bool arg__1);
void c_QAction__onToggled_bool(void *thisObj, void *contextQObject,
                               void *callback); // QAction::toolTip() const
void *c_QAction__toolTip(void *thisObj);
// QAction::tr(const char * s, const char * c, int n)
void *c_static_QAction__tr_char_char_int(const char *s, const char *c, int n);
// QAction::trigger()
void c_QAction__trigger(void *thisObj);
// QAction::triggered(bool checked)
void c_QAction__triggered_bool(void *thisObj, bool checked);
void c_QAction__onTriggered_bool(void *thisObj, void *contextQObject,
                                 void *callback); // QAction::visibleChanged()
void c_QAction__visibleChanged(void *thisObj);
void c_QAction__onVisibleChanged(void *thisObj, void *contextQObject,
                                 void *callback); // QAction::whatsThis() const
void *c_QAction__whatsThis(void *thisObj);
void c_QAction__destructor(void *thisObj);
void c_QAction__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
void c_QAction_Finalizer(
    void *cppObj); // QAbstractScrollArea::QAbstractScrollArea(QWidget * parent)
void *c_QAbstractScrollArea__constructor_QWidget(void *parent_);
// QAbstractScrollArea::changeEvent(QEvent * arg__1)
void c_QAbstractScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QAbstractScrollArea::cornerWidget() const
void *c_QAbstractScrollArea__cornerWidget(void *thisObj);
// QAbstractScrollArea::customEvent(QEvent * event)
void c_QAbstractScrollArea__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractScrollArea::devType() const
int c_QAbstractScrollArea__devType(void *thisObj);
// QAbstractScrollArea::event(QEvent * arg__1)
bool c_QAbstractScrollArea__event_QEvent(void *thisObj, void *arg__1_);
// QAbstractScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QAbstractScrollArea__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *arg__1_,
                                                       void *arg__2_);
// QAbstractScrollArea::focusNextPrevChild(bool next)
bool c_QAbstractScrollArea__focusNextPrevChild_bool(void *thisObj, bool next);
// QAbstractScrollArea::hasHeightForWidth() const
bool c_QAbstractScrollArea__hasHeightForWidth(void *thisObj);
// QAbstractScrollArea::heightForWidth(int arg__1) const
int c_QAbstractScrollArea__heightForWidth_int(void *thisObj, int arg__1);
// QAbstractScrollArea::initPainter(QPainter * painter) const
void c_QAbstractScrollArea__initPainter_QPainter(void *thisObj, void *painter_);
// QAbstractScrollArea::leaveEvent(QEvent * event)
void c_QAbstractScrollArea__leaveEvent_QEvent(void *thisObj, void *event_);
// QAbstractScrollArea::maximumViewportSize() const
void *c_QAbstractScrollArea__maximumViewportSize(void *thisObj);
// QAbstractScrollArea::minimumSizeHint() const
void *c_QAbstractScrollArea__minimumSizeHint(void *thisObj);
// QAbstractScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                              void *arg__1_);
// QAbstractScrollArea::mouseMoveEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                       void *arg__1_);
// QAbstractScrollArea::mousePressEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mousePressEvent_QMouseEvent(void *thisObj,
                                                        void *arg__1_);
// QAbstractScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)
void c_QAbstractScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                          void *arg__1_);
// QAbstractScrollArea::paintEvent(QPaintEvent * arg__1)
void c_QAbstractScrollArea__paintEvent_QPaintEvent(void *thisObj,
                                                   void *arg__1_);
// QAbstractScrollArea::scrollContentsBy(int dx, int dy)
void c_QAbstractScrollArea__scrollContentsBy_int_int(void *thisObj, int dx,
                                                     int dy);
// QAbstractScrollArea::setCornerWidget(QWidget * widget)
void c_QAbstractScrollArea__setCornerWidget_QWidget(void *thisObj,
                                                    void *widget_);
// QAbstractScrollArea::setViewport(QWidget * widget)
void c_QAbstractScrollArea__setViewport_QWidget(void *thisObj, void *widget_);
// QAbstractScrollArea::setViewportMargins(int left, int top, int right, int
// bottom)
void c_QAbstractScrollArea__setViewportMargins_int_int_int_int(
    void *thisObj, int left, int top, int right, int bottom);
// QAbstractScrollArea::setVisible(bool visible)
void c_QAbstractScrollArea__setVisible_bool(void *thisObj, bool visible);
// QAbstractScrollArea::setupViewport(QWidget * viewport)
void c_QAbstractScrollArea__setupViewport_QWidget(void *thisObj,
                                                  void *viewport_);
// QAbstractScrollArea::sharedPainter() const
void *c_QAbstractScrollArea__sharedPainter(void *thisObj);
// QAbstractScrollArea::sizeHint() const
void *c_QAbstractScrollArea__sizeHint(void *thisObj);
// QAbstractScrollArea::tr(const char * s, const char * c, int n)
void *c_static_QAbstractScrollArea__tr_char_char_int(const char *s,
                                                     const char *c, int n);
// QAbstractScrollArea::viewport() const
void *c_QAbstractScrollArea__viewport(void *thisObj);
// QAbstractScrollArea::viewportEvent(QEvent * arg__1)
bool c_QAbstractScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_);
// QAbstractScrollArea::viewportSizeHint() const
void *c_QAbstractScrollArea__viewportSizeHint(void *thisObj);
void c_QAbstractScrollArea__destructor(void *thisObj);
void c_QAbstractScrollArea__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId);
void c_QAbstractScrollArea_Finalizer(
    void *cppObj); // QTextEdit::QTextEdit(QWidget * parent)
void *c_QTextEdit__constructor_QWidget(void *parent_);
// QTextEdit::QTextEdit(const QString & text, QWidget * parent)
void *c_QTextEdit__constructor_QString_QWidget(const char *text_,
                                               void *parent_);
// QTextEdit::acceptRichText() const
bool c_QTextEdit__acceptRichText(void *thisObj);
// QTextEdit::anchorAt(const QPoint & pos) const
void *c_QTextEdit__anchorAt_QPoint(void *thisObj, void *pos_);
// QTextEdit::append(const QString & text)
void c_QTextEdit__append_QString(void *thisObj, const char *text_);
// QTextEdit::canPaste() const
bool c_QTextEdit__canPaste(void *thisObj);
// QTextEdit::changeEvent(QEvent * e)
void c_QTextEdit__changeEvent_QEvent(void *thisObj, void *e_);
// QTextEdit::clear()
void c_QTextEdit__clear(void *thisObj);
// QTextEdit::copy()
void c_QTextEdit__copy(void *thisObj);
// QTextEdit::copyAvailable(bool b)
void c_QTextEdit__copyAvailable_bool(void *thisObj, bool b);
void c_QTextEdit__onCopyAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::createStandardContextMenu()
void *c_QTextEdit__createStandardContextMenu(void *thisObj);
// QTextEdit::createStandardContextMenu(const QPoint & position)
void *c_QTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                    void *position_);
// QTextEdit::currentFont() const
void *c_QTextEdit__currentFont(void *thisObj);
// QTextEdit::cursorPositionChanged()
void c_QTextEdit__cursorPositionChanged(void *thisObj);
void c_QTextEdit__onCursorPositionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::cursorRect() const
void *c_QTextEdit__cursorRect(void *thisObj);
// QTextEdit::cursorWidth() const
int c_QTextEdit__cursorWidth(void *thisObj);
// QTextEdit::customEvent(QEvent * event)
void c_QTextEdit__customEvent_QEvent(void *thisObj, void *event_);
// QTextEdit::cut()
void c_QTextEdit__cut(void *thisObj);
// QTextEdit::devType() const
int c_QTextEdit__devType(void *thisObj);
// QTextEdit::documentTitle() const
void *c_QTextEdit__documentTitle(void *thisObj);
// QTextEdit::ensureCursorVisible()
void c_QTextEdit__ensureCursorVisible(void *thisObj);
// QTextEdit::event(QEvent * e)
bool c_QTextEdit__event_QEvent(void *thisObj, void *e_);
// QTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                             void *arg__2_);
// QTextEdit::find(const QString & exp)
bool c_QTextEdit__find_QString(void *thisObj, const char *exp_);
// QTextEdit::focusNextPrevChild(bool next)
bool c_QTextEdit__focusNextPrevChild_bool(void *thisObj, bool next);
// QTextEdit::fontFamily() const
void *c_QTextEdit__fontFamily(void *thisObj);
// QTextEdit::fontItalic() const
bool c_QTextEdit__fontItalic(void *thisObj);
// QTextEdit::fontPointSize() const
qreal c_QTextEdit__fontPointSize(void *thisObj);
// QTextEdit::fontUnderline() const
bool c_QTextEdit__fontUnderline(void *thisObj);
// QTextEdit::fontWeight() const
int c_QTextEdit__fontWeight(void *thisObj);
// QTextEdit::hasHeightForWidth() const
bool c_QTextEdit__hasHeightForWidth(void *thisObj);
// QTextEdit::heightForWidth(int arg__1) const
int c_QTextEdit__heightForWidth_int(void *thisObj, int arg__1);
// QTextEdit::initPainter(QPainter * painter) const
void c_QTextEdit__initPainter_QPainter(void *thisObj, void *painter_);
// QTextEdit::insertHtml(const QString & text)
void c_QTextEdit__insertHtml_QString(void *thisObj, const char *text_);
// QTextEdit::insertPlainText(const QString & text)
void c_QTextEdit__insertPlainText_QString(void *thisObj, const char *text_);
// QTextEdit::isReadOnly() const
bool c_QTextEdit__isReadOnly(void *thisObj);
// QTextEdit::isUndoRedoEnabled() const
bool c_QTextEdit__isUndoRedoEnabled(void *thisObj);
// QTextEdit::leaveEvent(QEvent * event)
void c_QTextEdit__leaveEvent_QEvent(void *thisObj, void *event_);
// QTextEdit::lineWrapColumnOrWidth() const
int c_QTextEdit__lineWrapColumnOrWidth(void *thisObj);
// QTextEdit::minimumSizeHint() const
void *c_QTextEdit__minimumSizeHint(void *thisObj);
// QTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
void c_QTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::mouseMoveEvent(QMouseEvent * e)
void c_QTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::mousePressEvent(QMouseEvent * e)
void c_QTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::mouseReleaseEvent(QMouseEvent * e)
void c_QTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::overwriteMode() const
bool c_QTextEdit__overwriteMode(void *thisObj);
// QTextEdit::paintEvent(QPaintEvent * e)
void c_QTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_);
// QTextEdit::paste()
void c_QTextEdit__paste(void *thisObj);
// QTextEdit::placeholderText() const
void *c_QTextEdit__placeholderText(void *thisObj);
// QTextEdit::redo()
void c_QTextEdit__redo(void *thisObj);
// QTextEdit::redoAvailable(bool b)
void c_QTextEdit__redoAvailable_bool(void *thisObj, bool b);
void c_QTextEdit__onRedoAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::scrollContentsBy(int dx, int dy)
void c_QTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QTextEdit::scrollToAnchor(const QString & name)
void c_QTextEdit__scrollToAnchor_QString(void *thisObj, const char *name_);
// QTextEdit::selectAll()
void c_QTextEdit__selectAll(void *thisObj);
// QTextEdit::selectionChanged()
void c_QTextEdit__selectionChanged(void *thisObj);
void c_QTextEdit__onSelectionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::setAcceptRichText(bool accept)
void c_QTextEdit__setAcceptRichText_bool(void *thisObj, bool accept);
// QTextEdit::setCurrentFont(const QFont & f)
void c_QTextEdit__setCurrentFont_QFont(void *thisObj, void *f_);
// QTextEdit::setCursorWidth(int width)
void c_QTextEdit__setCursorWidth_int(void *thisObj, int width);
// QTextEdit::setDocumentTitle(const QString & title)
void c_QTextEdit__setDocumentTitle_QString(void *thisObj, const char *title_);
// QTextEdit::setFontFamily(const QString & fontFamily)
void c_QTextEdit__setFontFamily_QString(void *thisObj, const char *fontFamily_);
// QTextEdit::setFontItalic(bool b)
void c_QTextEdit__setFontItalic_bool(void *thisObj, bool b);
// QTextEdit::setFontPointSize(qreal s)
void c_QTextEdit__setFontPointSize_qreal(void *thisObj, qreal s);
// QTextEdit::setFontUnderline(bool b)
void c_QTextEdit__setFontUnderline_bool(void *thisObj, bool b);
// QTextEdit::setFontWeight(int w)
void c_QTextEdit__setFontWeight_int(void *thisObj, int w);
// QTextEdit::setHtml(const QString & text)
void c_QTextEdit__setHtml_QString(void *thisObj, const char *text_);
// QTextEdit::setLineWrapColumnOrWidth(int w)
void c_QTextEdit__setLineWrapColumnOrWidth_int(void *thisObj, int w);
// QTextEdit::setMarkdown(const QString & markdown)
void c_QTextEdit__setMarkdown_QString(void *thisObj, const char *markdown_);
// QTextEdit::setOverwriteMode(bool overwrite)
void c_QTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite);
// QTextEdit::setPlaceholderText(const QString & placeholderText)
void c_QTextEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *placeholderText_);
// QTextEdit::setPlainText(const QString & text)
void c_QTextEdit__setPlainText_QString(void *thisObj, const char *text_);
// QTextEdit::setReadOnly(bool ro)
void c_QTextEdit__setReadOnly_bool(void *thisObj, bool ro);
// QTextEdit::setTabChangesFocus(bool b)
void c_QTextEdit__setTabChangesFocus_bool(void *thisObj, bool b);
// QTextEdit::setTabStopDistance(qreal distance)
void c_QTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance);
// QTextEdit::setText(const QString & text)
void c_QTextEdit__setText_QString(void *thisObj, const char *text_);
// QTextEdit::setTextBackgroundColor(const QColor & c)
void c_QTextEdit__setTextBackgroundColor_QColor(void *thisObj, void *c_);
// QTextEdit::setTextColor(const QColor & c)
void c_QTextEdit__setTextColor_QColor(void *thisObj, void *c_);
// QTextEdit::setUndoRedoEnabled(bool enable)
void c_QTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable);
// QTextEdit::setVisible(bool visible)
void c_QTextEdit__setVisible_bool(void *thisObj, bool visible);
// QTextEdit::setupViewport(QWidget * viewport)
void c_QTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_);
// QTextEdit::sharedPainter() const
void *c_QTextEdit__sharedPainter(void *thisObj);
// QTextEdit::sizeHint() const
void *c_QTextEdit__sizeHint(void *thisObj);
// QTextEdit::tabChangesFocus() const
bool c_QTextEdit__tabChangesFocus(void *thisObj);
// QTextEdit::tabStopDistance() const
qreal c_QTextEdit__tabStopDistance(void *thisObj);
// QTextEdit::textBackgroundColor() const
void *c_QTextEdit__textBackgroundColor(void *thisObj);
// QTextEdit::textChanged()
void c_QTextEdit__textChanged(void *thisObj);
void c_QTextEdit__onTextChanged(void *thisObj, void *contextQObject,
                                void *callback); // QTextEdit::textColor() const
void *c_QTextEdit__textColor(void *thisObj);
// QTextEdit::toHtml() const
void *c_QTextEdit__toHtml(void *thisObj);
// QTextEdit::toMarkdown() const
void *c_QTextEdit__toMarkdown(void *thisObj);
// QTextEdit::toPlainText() const
void *c_QTextEdit__toPlainText(void *thisObj);
// QTextEdit::tr(const char * s, const char * c, int n)
void *c_static_QTextEdit__tr_char_char_int(const char *s, const char *c, int n);
// QTextEdit::undo()
void c_QTextEdit__undo(void *thisObj);
// QTextEdit::undoAvailable(bool b)
void c_QTextEdit__undoAvailable_bool(void *thisObj, bool b);
void c_QTextEdit__onUndoAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::viewportEvent(QEvent * arg__1)
bool c_QTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_);
// QTextEdit::viewportSizeHint() const
void *c_QTextEdit__viewportSizeHint(void *thisObj);
// QTextEdit::zoomIn(int range)
void c_QTextEdit__zoomIn_int(void *thisObj, int range);
// QTextEdit::zoomInF(float range)
void c_QTextEdit__zoomInF_float(void *thisObj, float range);
// QTextEdit::zoomOut(int range)
void c_QTextEdit__zoomOut_int(void *thisObj, int range);
void c_QTextEdit__destructor(void *thisObj);
void c_QTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QTextEdit_Finalizer(
    void *cppObj); // QScrollArea::QScrollArea(QWidget * parent)
void *c_QScrollArea__constructor_QWidget(void *parent_);
// QScrollArea::changeEvent(QEvent * arg__1)
void c_QScrollArea__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QScrollArea::customEvent(QEvent * event)
void c_QScrollArea__customEvent_QEvent(void *thisObj, void *event_);
// QScrollArea::devType() const
int c_QScrollArea__devType(void *thisObj);
// QScrollArea::ensureVisible(int x, int y, int xmargin, int ymargin)
void c_QScrollArea__ensureVisible_int_int_int_int(void *thisObj, int x, int y,
                                                  int xmargin, int ymargin);
// QScrollArea::ensureWidgetVisible(QWidget * childWidget, int xmargin, int
// ymargin)
void c_QScrollArea__ensureWidgetVisible_QWidget_int_int(void *thisObj,
                                                        void *childWidget_,
                                                        int xmargin,
                                                        int ymargin);
// QScrollArea::event(QEvent * arg__1)
bool c_QScrollArea__event_QEvent(void *thisObj, void *arg__1_);
// QScrollArea::eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QScrollArea__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                               void *arg__2_);
// QScrollArea::focusNextPrevChild(bool next)
bool c_QScrollArea__focusNextPrevChild_bool(void *thisObj, bool next);
// QScrollArea::hasHeightForWidth() const
bool c_QScrollArea__hasHeightForWidth(void *thisObj);
// QScrollArea::heightForWidth(int arg__1) const
int c_QScrollArea__heightForWidth_int(void *thisObj, int arg__1);
// QScrollArea::initPainter(QPainter * painter) const
void c_QScrollArea__initPainter_QPainter(void *thisObj, void *painter_);
// QScrollArea::leaveEvent(QEvent * event)
void c_QScrollArea__leaveEvent_QEvent(void *thisObj, void *event_);
// QScrollArea::minimumSizeHint() const
void *c_QScrollArea__minimumSizeHint(void *thisObj);
// QScrollArea::mouseDoubleClickEvent(QMouseEvent * arg__1)
void c_QScrollArea__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *arg__1_);
// QScrollArea::mouseMoveEvent(QMouseEvent * arg__1)
void c_QScrollArea__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QScrollArea::mousePressEvent(QMouseEvent * arg__1)
void c_QScrollArea__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QScrollArea::mouseReleaseEvent(QMouseEvent * arg__1)
void c_QScrollArea__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QScrollArea::paintEvent(QPaintEvent * arg__1)
void c_QScrollArea__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QScrollArea::scrollContentsBy(int dx, int dy)
void c_QScrollArea__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QScrollArea::setVisible(bool visible)
void c_QScrollArea__setVisible_bool(void *thisObj, bool visible);
// QScrollArea::setWidget(QWidget * widget)
void c_QScrollArea__setWidget_QWidget(void *thisObj, void *widget_);
// QScrollArea::setWidgetResizable(bool resizable)
void c_QScrollArea__setWidgetResizable_bool(void *thisObj, bool resizable);
// QScrollArea::setupViewport(QWidget * viewport)
void c_QScrollArea__setupViewport_QWidget(void *thisObj, void *viewport_);
// QScrollArea::sharedPainter() const
void *c_QScrollArea__sharedPainter(void *thisObj);
// QScrollArea::sizeHint() const
void *c_QScrollArea__sizeHint(void *thisObj);
// QScrollArea::takeWidget()
void *c_QScrollArea__takeWidget(void *thisObj);
// QScrollArea::tr(const char * s, const char * c, int n)
void *c_static_QScrollArea__tr_char_char_int(const char *s, const char *c,
                                             int n);
// QScrollArea::viewportEvent(QEvent * arg__1)
bool c_QScrollArea__viewportEvent_QEvent(void *thisObj, void *arg__1_);
// QScrollArea::viewportSizeHint() const
void *c_QScrollArea__viewportSizeHint(void *thisObj);
// QScrollArea::widget() const
void *c_QScrollArea__widget(void *thisObj);
// QScrollArea::widgetResizable() const
bool c_QScrollArea__widgetResizable(void *thisObj);
void c_QScrollArea__destructor(void *thisObj);
void c_QScrollArea__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QScrollArea_Finalizer(
    void *cppObj); // QPlainTextEdit::QPlainTextEdit(QWidget * parent)
void *c_QPlainTextEdit__constructor_QWidget(void *parent_);
// QPlainTextEdit::QPlainTextEdit(const QString & text, QWidget * parent)
void *c_QPlainTextEdit__constructor_QString_QWidget(const char *text_,
                                                    void *parent_);
// QPlainTextEdit::anchorAt(const QPoint & pos) const
void *c_QPlainTextEdit__anchorAt_QPoint(void *thisObj, void *pos_);
// QPlainTextEdit::appendHtml(const QString & html)
void c_QPlainTextEdit__appendHtml_QString(void *thisObj, const char *html_);
// QPlainTextEdit::appendPlainText(const QString & text)
void c_QPlainTextEdit__appendPlainText_QString(void *thisObj,
                                               const char *text_);
// QPlainTextEdit::backgroundVisible() const
bool c_QPlainTextEdit__backgroundVisible(void *thisObj);
// QPlainTextEdit::blockCount() const
int c_QPlainTextEdit__blockCount(void *thisObj);
// QPlainTextEdit::blockCountChanged(int newBlockCount)
void c_QPlainTextEdit__blockCountChanged_int(void *thisObj, int newBlockCount);
void c_QPlainTextEdit__onBlockCountChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::canPaste() const
bool c_QPlainTextEdit__canPaste(void *thisObj);
// QPlainTextEdit::centerCursor()
void c_QPlainTextEdit__centerCursor(void *thisObj);
// QPlainTextEdit::centerOnScroll() const
bool c_QPlainTextEdit__centerOnScroll(void *thisObj);
// QPlainTextEdit::changeEvent(QEvent * e)
void c_QPlainTextEdit__changeEvent_QEvent(void *thisObj, void *e_);
// QPlainTextEdit::clear()
void c_QPlainTextEdit__clear(void *thisObj);
// QPlainTextEdit::contentOffset() const
void *c_QPlainTextEdit__contentOffset(void *thisObj);
// QPlainTextEdit::copy()
void c_QPlainTextEdit__copy(void *thisObj);
// QPlainTextEdit::copyAvailable(bool b)
void c_QPlainTextEdit__copyAvailable_bool(void *thisObj, bool b);
void c_QPlainTextEdit__onCopyAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::createStandardContextMenu()
void *c_QPlainTextEdit__createStandardContextMenu(void *thisObj);
// QPlainTextEdit::createStandardContextMenu(const QPoint & position)
void *c_QPlainTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                         void *position_);
// QPlainTextEdit::cursorPositionChanged()
void c_QPlainTextEdit__cursorPositionChanged(void *thisObj);
void c_QPlainTextEdit__onCursorPositionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::cursorRect() const
void *c_QPlainTextEdit__cursorRect(void *thisObj);
// QPlainTextEdit::cursorWidth() const
int c_QPlainTextEdit__cursorWidth(void *thisObj);
// QPlainTextEdit::customEvent(QEvent * event)
void c_QPlainTextEdit__customEvent_QEvent(void *thisObj, void *event_);
// QPlainTextEdit::cut()
void c_QPlainTextEdit__cut(void *thisObj);
// QPlainTextEdit::devType() const
int c_QPlainTextEdit__devType(void *thisObj);
// QPlainTextEdit::documentTitle() const
void *c_QPlainTextEdit__documentTitle(void *thisObj);
// QPlainTextEdit::ensureCursorVisible()
void c_QPlainTextEdit__ensureCursorVisible(void *thisObj);
// QPlainTextEdit::event(QEvent * e)
bool c_QPlainTextEdit__event_QEvent(void *thisObj, void *e_);
// QPlainTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QPlainTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                                  void *arg__2_);
// QPlainTextEdit::find(const QString & exp)
bool c_QPlainTextEdit__find_QString(void *thisObj, const char *exp_);
// QPlainTextEdit::focusNextPrevChild(bool next)
bool c_QPlainTextEdit__focusNextPrevChild_bool(void *thisObj, bool next);
// QPlainTextEdit::hasHeightForWidth() const
bool c_QPlainTextEdit__hasHeightForWidth(void *thisObj);
// QPlainTextEdit::heightForWidth(int arg__1) const
int c_QPlainTextEdit__heightForWidth_int(void *thisObj, int arg__1);
// QPlainTextEdit::initPainter(QPainter * painter) const
void c_QPlainTextEdit__initPainter_QPainter(void *thisObj, void *painter_);
// QPlainTextEdit::insertPlainText(const QString & text)
void c_QPlainTextEdit__insertPlainText_QString(void *thisObj,
                                               const char *text_);
// QPlainTextEdit::isReadOnly() const
bool c_QPlainTextEdit__isReadOnly(void *thisObj);
// QPlainTextEdit::isUndoRedoEnabled() const
bool c_QPlainTextEdit__isUndoRedoEnabled(void *thisObj);
// QPlainTextEdit::leaveEvent(QEvent * event)
void c_QPlainTextEdit__leaveEvent_QEvent(void *thisObj, void *event_);
// QPlainTextEdit::maximumBlockCount() const
int c_QPlainTextEdit__maximumBlockCount(void *thisObj);
// QPlainTextEdit::minimumSizeHint() const
void *c_QPlainTextEdit__minimumSizeHint(void *thisObj);
// QPlainTextEdit::modificationChanged(bool arg__1)
void c_QPlainTextEdit__modificationChanged_bool(void *thisObj, bool arg__1);
void c_QPlainTextEdit__onModificationChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                         void *e_);
// QPlainTextEdit::mouseMoveEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QPlainTextEdit::mousePressEvent(QMouseEvent * e)
void c_QPlainTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QPlainTextEdit::mouseReleaseEvent(QMouseEvent * e)
void c_QPlainTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QPlainTextEdit::overwriteMode() const
bool c_QPlainTextEdit__overwriteMode(void *thisObj);
// QPlainTextEdit::paintEvent(QPaintEvent * e)
void c_QPlainTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_);
// QPlainTextEdit::paste()
void c_QPlainTextEdit__paste(void *thisObj);
// QPlainTextEdit::placeholderText() const
void *c_QPlainTextEdit__placeholderText(void *thisObj);
// QPlainTextEdit::redo()
void c_QPlainTextEdit__redo(void *thisObj);
// QPlainTextEdit::redoAvailable(bool b)
void c_QPlainTextEdit__redoAvailable_bool(void *thisObj, bool b);
void c_QPlainTextEdit__onRedoAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::scrollContentsBy(int dx, int dy)
void c_QPlainTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QPlainTextEdit::selectAll()
void c_QPlainTextEdit__selectAll(void *thisObj);
// QPlainTextEdit::selectionChanged()
void c_QPlainTextEdit__selectionChanged(void *thisObj);
void c_QPlainTextEdit__onSelectionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::setBackgroundVisible(bool visible)
void c_QPlainTextEdit__setBackgroundVisible_bool(void *thisObj, bool visible);
// QPlainTextEdit::setCenterOnScroll(bool enabled)
void c_QPlainTextEdit__setCenterOnScroll_bool(void *thisObj, bool enabled);
// QPlainTextEdit::setCursorWidth(int width)
void c_QPlainTextEdit__setCursorWidth_int(void *thisObj, int width);
// QPlainTextEdit::setDocumentTitle(const QString & title)
void c_QPlainTextEdit__setDocumentTitle_QString(void *thisObj,
                                                const char *title_);
// QPlainTextEdit::setMaximumBlockCount(int maximum)
void c_QPlainTextEdit__setMaximumBlockCount_int(void *thisObj, int maximum);
// QPlainTextEdit::setOverwriteMode(bool overwrite)
void c_QPlainTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite);
// QPlainTextEdit::setPlaceholderText(const QString & placeholderText)
void c_QPlainTextEdit__setPlaceholderText_QString(void *thisObj,
                                                  const char *placeholderText_);
// QPlainTextEdit::setPlainText(const QString & text)
void c_QPlainTextEdit__setPlainText_QString(void *thisObj, const char *text_);
// QPlainTextEdit::setReadOnly(bool ro)
void c_QPlainTextEdit__setReadOnly_bool(void *thisObj, bool ro);
// QPlainTextEdit::setTabChangesFocus(bool b)
void c_QPlainTextEdit__setTabChangesFocus_bool(void *thisObj, bool b);
// QPlainTextEdit::setTabStopDistance(qreal distance)
void c_QPlainTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance);
// QPlainTextEdit::setUndoRedoEnabled(bool enable)
void c_QPlainTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable);
// QPlainTextEdit::setVisible(bool visible)
void c_QPlainTextEdit__setVisible_bool(void *thisObj, bool visible);
// QPlainTextEdit::setupViewport(QWidget * viewport)
void c_QPlainTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_);
// QPlainTextEdit::sharedPainter() const
void *c_QPlainTextEdit__sharedPainter(void *thisObj);
// QPlainTextEdit::sizeHint() const
void *c_QPlainTextEdit__sizeHint(void *thisObj);
// QPlainTextEdit::tabChangesFocus() const
bool c_QPlainTextEdit__tabChangesFocus(void *thisObj);
// QPlainTextEdit::tabStopDistance() const
qreal c_QPlainTextEdit__tabStopDistance(void *thisObj);
// QPlainTextEdit::textChanged()
void c_QPlainTextEdit__textChanged(void *thisObj);
void c_QPlainTextEdit__onTextChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::toPlainText() const
void *c_QPlainTextEdit__toPlainText(void *thisObj);
// QPlainTextEdit::tr(const char * s, const char * c, int n)
void *c_static_QPlainTextEdit__tr_char_char_int(const char *s, const char *c,
                                                int n);
// QPlainTextEdit::undo()
void c_QPlainTextEdit__undo(void *thisObj);
// QPlainTextEdit::undoAvailable(bool b)
void c_QPlainTextEdit__undoAvailable_bool(void *thisObj, bool b);
void c_QPlainTextEdit__onUndoAvailable_bool(
    void *thisObj, void *contextQObject,
    void
        *callback); // QPlainTextEdit::updateRequest(const QRect & rect, int dy)
void c_QPlainTextEdit__updateRequest_QRect_int(void *thisObj, void *rect_,
                                               int dy);
void c_QPlainTextEdit__onUpdateRequest_QRect_int(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::viewportEvent(QEvent * arg__1)
bool c_QPlainTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_);
// QPlainTextEdit::viewportSizeHint() const
void *c_QPlainTextEdit__viewportSizeHint(void *thisObj);
// QPlainTextEdit::zoomIn(int range)
void c_QPlainTextEdit__zoomIn_int(void *thisObj, int range);
// QPlainTextEdit::zoomInF(float range)
void c_QPlainTextEdit__zoomInF_float(void *thisObj, float range);
// QPlainTextEdit::zoomOut(int range)
void c_QPlainTextEdit__zoomOut_int(void *thisObj, int range);
void c_QPlainTextEdit__destructor(void *thisObj);
void c_QPlainTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                     int methodId);
void c_QPlainTextEdit_Finalizer(
    void *cppObj); // QAbstractItemView::QAbstractItemView(QWidget * parent)
void *c_QAbstractItemView__constructor_QWidget(void *parent_);
// QAbstractItemView::activated(const QModelIndex & index)
void c_QAbstractItemView__activated_QModelIndex(void *thisObj, void *index_);
void c_QAbstractItemView__onActivated_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::alternatingRowColors() const
bool c_QAbstractItemView__alternatingRowColors(void *thisObj);
// QAbstractItemView::autoScrollMargin() const
int c_QAbstractItemView__autoScrollMargin(void *thisObj);
// QAbstractItemView::changeEvent(QEvent * arg__1)
void c_QAbstractItemView__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QAbstractItemView::clearSelection()
void c_QAbstractItemView__clearSelection(void *thisObj);
// QAbstractItemView::clicked(const QModelIndex & index)
void c_QAbstractItemView__clicked_QModelIndex(void *thisObj, void *index_);
void c_QAbstractItemView__onClicked_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::closePersistentEditor(const
                     // QModelIndex & index)
void c_QAbstractItemView__closePersistentEditor_QModelIndex(void *thisObj,
                                                            void *index_);
// QAbstractItemView::commitData(QWidget * editor)
void c_QAbstractItemView__commitData_QWidget(void *thisObj, void *editor_);
// QAbstractItemView::currentChanged(const QModelIndex & current, const
// QModelIndex & previous)
void c_QAbstractItemView__currentChanged_QModelIndex_QModelIndex(
    void *thisObj, void *current_, void *previous_);
// QAbstractItemView::currentIndex() const
void *c_QAbstractItemView__currentIndex(void *thisObj);
// QAbstractItemView::customEvent(QEvent * event)
void c_QAbstractItemView__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractItemView::dataChanged(const QModelIndex & topLeft, const QModelIndex
// & bottomRight, const QList<int > & roles)
void c_QAbstractItemView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);
// QAbstractItemView::devType() const
int c_QAbstractItemView__devType(void *thisObj);
// QAbstractItemView::dirtyRegionOffset() const
void *c_QAbstractItemView__dirtyRegionOffset(void *thisObj);
// QAbstractItemView::doAutoScroll()
void c_QAbstractItemView__doAutoScroll(void *thisObj);
// QAbstractItemView::doItemsLayout()
void c_QAbstractItemView__doItemsLayout(void *thisObj);
// QAbstractItemView::doubleClicked(const QModelIndex & index)
void c_QAbstractItemView__doubleClicked_QModelIndex(void *thisObj,
                                                    void *index_);
void c_QAbstractItemView__onDoubleClicked_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::dragDropOverwriteMode() const
bool c_QAbstractItemView__dragDropOverwriteMode(void *thisObj);
// QAbstractItemView::dragEnabled() const
bool c_QAbstractItemView__dragEnabled(void *thisObj);
// QAbstractItemView::edit(const QModelIndex & index)
void c_QAbstractItemView__edit_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::editorDestroyed(QObject * editor)
void c_QAbstractItemView__editorDestroyed_QObject(void *thisObj, void *editor_);
// QAbstractItemView::entered(const QModelIndex & index)
void c_QAbstractItemView__entered_QModelIndex(void *thisObj, void *index_);
void c_QAbstractItemView__onEntered_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::event(QEvent * event)
bool c_QAbstractItemView__event_QEvent(void *thisObj, void *event_);
// QAbstractItemView::eventFilter(QObject * object, QEvent * event)
bool c_QAbstractItemView__eventFilter_QObject_QEvent(void *thisObj,
                                                     void *object_,
                                                     void *event_);
// QAbstractItemView::executeDelayedItemsLayout()
void c_QAbstractItemView__executeDelayedItemsLayout(void *thisObj);
// QAbstractItemView::focusNextPrevChild(bool next)
bool c_QAbstractItemView__focusNextPrevChild_bool(void *thisObj, bool next);
// QAbstractItemView::hasAutoScroll() const
bool c_QAbstractItemView__hasAutoScroll(void *thisObj);
// QAbstractItemView::hasHeightForWidth() const
bool c_QAbstractItemView__hasHeightForWidth(void *thisObj);
// QAbstractItemView::heightForWidth(int arg__1) const
int c_QAbstractItemView__heightForWidth_int(void *thisObj, int arg__1);
// QAbstractItemView::horizontalOffset() const
int c_QAbstractItemView__horizontalOffset(void *thisObj);
// QAbstractItemView::horizontalScrollbarAction(int action)
void c_QAbstractItemView__horizontalScrollbarAction_int(void *thisObj,
                                                        int action);
// QAbstractItemView::horizontalScrollbarValueChanged(int value)
void c_QAbstractItemView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                              int value);
// QAbstractItemView::iconSize() const
void *c_QAbstractItemView__iconSize(void *thisObj);
// QAbstractItemView::iconSizeChanged(const QSize & size)
void c_QAbstractItemView__iconSizeChanged_QSize(void *thisObj, void *size_);
void c_QAbstractItemView__onIconSizeChanged_QSize(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::indexAt(const QPoint & point) const
void *c_QAbstractItemView__indexAt_QPoint(void *thisObj, void *point_);
// QAbstractItemView::indexWidget(const QModelIndex & index) const
void *c_QAbstractItemView__indexWidget_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::initPainter(QPainter * painter) const
void c_QAbstractItemView__initPainter_QPainter(void *thisObj, void *painter_);
// QAbstractItemView::isIndexHidden(const QModelIndex & index) const
bool c_QAbstractItemView__isIndexHidden_QModelIndex(void *thisObj,
                                                    void *index_);
// QAbstractItemView::isPersistentEditorOpen(const QModelIndex & index) const
bool c_QAbstractItemView__isPersistentEditorOpen_QModelIndex(void *thisObj,
                                                             void *index_);
// QAbstractItemView::keyboardSearch(const QString & search)
void c_QAbstractItemView__keyboardSearch_QString(void *thisObj,
                                                 const char *search_);
// QAbstractItemView::leaveEvent(QEvent * event)
void c_QAbstractItemView__leaveEvent_QEvent(void *thisObj, void *event_);
// QAbstractItemView::minimumSizeHint() const
void *c_QAbstractItemView__minimumSizeHint(void *thisObj);
// QAbstractItemView::model() const
void *c_QAbstractItemView__model(void *thisObj);
// QAbstractItemView::mouseDoubleClickEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                            void *event_);
// QAbstractItemView::mouseMoveEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                     void *event_);
// QAbstractItemView::mousePressEvent(QMouseEvent * event)
void c_QAbstractItemView__mousePressEvent_QMouseEvent(void *thisObj,
                                                      void *event_);
// QAbstractItemView::mouseReleaseEvent(QMouseEvent * event)
void c_QAbstractItemView__mouseReleaseEvent_QMouseEvent(void *thisObj,
                                                        void *event_);
// QAbstractItemView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QAbstractItemView__moveCursor_CursorAction_KeyboardModifiers(
    void *thisObj, int cursorAction, int modifiers_);
// QAbstractItemView::openPersistentEditor(const QModelIndex & index)
void c_QAbstractItemView__openPersistentEditor_QModelIndex(void *thisObj,
                                                           void *index_);
// QAbstractItemView::paintEvent(QPaintEvent * arg__1)
void c_QAbstractItemView__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QAbstractItemView::pressed(const QModelIndex & index)
void c_QAbstractItemView__pressed_QModelIndex(void *thisObj, void *index_);
void c_QAbstractItemView__onPressed_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::reset()
void c_QAbstractItemView__reset(void *thisObj);
// QAbstractItemView::resetHorizontalScrollMode()
void c_QAbstractItemView__resetHorizontalScrollMode(void *thisObj);
// QAbstractItemView::resetVerticalScrollMode()
void c_QAbstractItemView__resetVerticalScrollMode(void *thisObj);
// QAbstractItemView::rootIndex() const
void *c_QAbstractItemView__rootIndex(void *thisObj);
// QAbstractItemView::rowsAboutToBeRemoved(const QModelIndex & parent, int
// start, int end)
void c_QAbstractItemView__rowsAboutToBeRemoved_QModelIndex_int_int(
    void *thisObj, void *parent_, int start, int end);
// QAbstractItemView::rowsInserted(const QModelIndex & parent, int start, int
// end)
void c_QAbstractItemView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end);
// QAbstractItemView::scheduleDelayedItemsLayout()
void c_QAbstractItemView__scheduleDelayedItemsLayout(void *thisObj);
// QAbstractItemView::scrollContentsBy(int dx, int dy)
void c_QAbstractItemView__scrollContentsBy_int_int(void *thisObj, int dx,
                                                   int dy);
// QAbstractItemView::scrollDirtyRegion(int dx, int dy)
void c_QAbstractItemView__scrollDirtyRegion_int_int(void *thisObj, int dx,
                                                    int dy);
// QAbstractItemView::scrollTo(const QModelIndex & index,
// QAbstractItemView::ScrollHint hint)
void c_QAbstractItemView__scrollTo_QModelIndex_ScrollHint(void *thisObj,
                                                          void *index_,
                                                          int hint);
// QAbstractItemView::scrollToBottom()
void c_QAbstractItemView__scrollToBottom(void *thisObj);
// QAbstractItemView::scrollToTop()
void c_QAbstractItemView__scrollToTop(void *thisObj);
// QAbstractItemView::selectAll()
void c_QAbstractItemView__selectAll(void *thisObj);
// QAbstractItemView::selectedIndexes() const
void *c_QAbstractItemView__selectedIndexes(void *thisObj);
// QAbstractItemView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
void c_QAbstractItemView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);
// QAbstractItemView::selectionCommand(const QModelIndex & index, const QEvent *
// event) const
int c_QAbstractItemView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                             void *index_,
                                                             void *event_);
// QAbstractItemView::selectionModel() const
void *c_QAbstractItemView__selectionModel(void *thisObj);
// QAbstractItemView::setAlternatingRowColors(bool enable)
void c_QAbstractItemView__setAlternatingRowColors_bool(void *thisObj,
                                                       bool enable);
// QAbstractItemView::setAutoScroll(bool enable)
void c_QAbstractItemView__setAutoScroll_bool(void *thisObj, bool enable);
// QAbstractItemView::setAutoScrollMargin(int margin)
void c_QAbstractItemView__setAutoScrollMargin_int(void *thisObj, int margin);
// QAbstractItemView::setCurrentIndex(const QModelIndex & index)
void c_QAbstractItemView__setCurrentIndex_QModelIndex(void *thisObj,
                                                      void *index_);
// QAbstractItemView::setDirtyRegion(const QRegion & region)
void c_QAbstractItemView__setDirtyRegion_QRegion(void *thisObj, void *region_);
// QAbstractItemView::setDragDropOverwriteMode(bool overwrite)
void c_QAbstractItemView__setDragDropOverwriteMode_bool(void *thisObj,
                                                        bool overwrite);
// QAbstractItemView::setDragEnabled(bool enable)
void c_QAbstractItemView__setDragEnabled_bool(void *thisObj, bool enable);
// QAbstractItemView::setDropIndicatorShown(bool enable)
void c_QAbstractItemView__setDropIndicatorShown_bool(void *thisObj,
                                                     bool enable);
// QAbstractItemView::setIconSize(const QSize & size)
void c_QAbstractItemView__setIconSize_QSize(void *thisObj, void *size_);
// QAbstractItemView::setIndexWidget(const QModelIndex & index, QWidget *
// widget)
void c_QAbstractItemView__setIndexWidget_QModelIndex_QWidget(void *thisObj,
                                                             void *index_,
                                                             void *widget_);
// QAbstractItemView::setModel(QAbstractItemModel * model)
void c_QAbstractItemView__setModel_QAbstractItemModel(void *thisObj,
                                                      void *model_);
// QAbstractItemView::setRootIndex(const QModelIndex & index)
void c_QAbstractItemView__setRootIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QAbstractItemView__setSelection_QRect_SelectionFlags(void *thisObj,
                                                            void *rect_,
                                                            int command_);
// QAbstractItemView::setSelectionModel(QItemSelectionModel * selectionModel)
void c_QAbstractItemView__setSelectionModel_QItemSelectionModel(
    void *thisObj, void *selectionModel_);
// QAbstractItemView::setTabKeyNavigation(bool enable)
void c_QAbstractItemView__setTabKeyNavigation_bool(void *thisObj, bool enable);
// QAbstractItemView::setVisible(bool visible)
void c_QAbstractItemView__setVisible_bool(void *thisObj, bool visible);
// QAbstractItemView::setupViewport(QWidget * viewport)
void c_QAbstractItemView__setupViewport_QWidget(void *thisObj, void *viewport_);
// QAbstractItemView::sharedPainter() const
void *c_QAbstractItemView__sharedPainter(void *thisObj);
// QAbstractItemView::showDropIndicator() const
bool c_QAbstractItemView__showDropIndicator(void *thisObj);
// QAbstractItemView::sizeHint() const
void *c_QAbstractItemView__sizeHint(void *thisObj);
// QAbstractItemView::sizeHintForColumn(int column) const
int c_QAbstractItemView__sizeHintForColumn_int(void *thisObj, int column);
// QAbstractItemView::sizeHintForIndex(const QModelIndex & index) const
void *c_QAbstractItemView__sizeHintForIndex_QModelIndex(void *thisObj,
                                                        void *index_);
// QAbstractItemView::sizeHintForRow(int row) const
int c_QAbstractItemView__sizeHintForRow_int(void *thisObj, int row);
// QAbstractItemView::startAutoScroll()
void c_QAbstractItemView__startAutoScroll(void *thisObj);
// QAbstractItemView::stopAutoScroll()
void c_QAbstractItemView__stopAutoScroll(void *thisObj);
// QAbstractItemView::tabKeyNavigation() const
bool c_QAbstractItemView__tabKeyNavigation(void *thisObj);
// QAbstractItemView::tr(const char * s, const char * c, int n)
void *c_static_QAbstractItemView__tr_char_char_int(const char *s, const char *c,
                                                   int n);
// QAbstractItemView::update(const QModelIndex & index)
void c_QAbstractItemView__updateIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::updateEditorData()
void c_QAbstractItemView__updateEditorData(void *thisObj);
// QAbstractItemView::updateEditorGeometries()
void c_QAbstractItemView__updateEditorGeometries(void *thisObj);
// QAbstractItemView::updateGeometries()
void c_QAbstractItemView__updateGeometries(void *thisObj);
// QAbstractItemView::verticalOffset() const
int c_QAbstractItemView__verticalOffset(void *thisObj);
// QAbstractItemView::verticalScrollbarAction(int action)
void c_QAbstractItemView__verticalScrollbarAction_int(void *thisObj,
                                                      int action);
// QAbstractItemView::verticalScrollbarValueChanged(int value)
void c_QAbstractItemView__verticalScrollbarValueChanged_int(void *thisObj,
                                                            int value);
// QAbstractItemView::viewportEntered()
void c_QAbstractItemView__viewportEntered(void *thisObj);
void c_QAbstractItemView__onViewportEntered(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemView::viewportEvent(QEvent * event)
bool c_QAbstractItemView__viewportEvent_QEvent(void *thisObj, void *event_);
// QAbstractItemView::viewportSizeHint() const
void *c_QAbstractItemView__viewportSizeHint(void *thisObj);
// QAbstractItemView::visualRect(const QModelIndex & index) const
void *c_QAbstractItemView__visualRect_QModelIndex(void *thisObj, void *index_);
// QAbstractItemView::visualRegionForSelection(const QItemSelection & selection)
// const
void *
c_QAbstractItemView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                             void *selection_);
void c_QAbstractItemView__destructor(void *thisObj);
void c_QAbstractItemView__registerVirtualMethodCallback(void *ptr,
                                                        void *callback,
                                                        int methodId);
void c_QAbstractItemView_Finalizer(
    void *cppObj); // QTreeView::QTreeView(QWidget * parent)
void *c_QTreeView__constructor_QWidget(void *parent_);
// QTreeView::allColumnsShowFocus() const
bool c_QTreeView__allColumnsShowFocus(void *thisObj);
// QTreeView::autoExpandDelay() const
int c_QTreeView__autoExpandDelay(void *thisObj);
// QTreeView::changeEvent(QEvent * event)
void c_QTreeView__changeEvent_QEvent(void *thisObj, void *event_);
// QTreeView::collapse(const QModelIndex & index)
void c_QTreeView__collapse_QModelIndex(void *thisObj, void *index_);
// QTreeView::collapseAll()
void c_QTreeView__collapseAll(void *thisObj);
// QTreeView::collapsed(const QModelIndex & index)
void c_QTreeView__collapsed_QModelIndex(void *thisObj, void *index_);
void c_QTreeView__onCollapsed_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QTreeView::columnAt(int x) const
int c_QTreeView__columnAt_int(void *thisObj, int x);
// QTreeView::columnCountChanged(int oldCount, int newCount)
void c_QTreeView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                             int newCount);
// QTreeView::columnMoved()
void c_QTreeView__columnMoved(void *thisObj);
// QTreeView::columnResized(int column, int oldSize, int newSize)
void c_QTreeView__columnResized_int_int_int(void *thisObj, int column,
                                            int oldSize, int newSize);
// QTreeView::columnViewportPosition(int column) const
int c_QTreeView__columnViewportPosition_int(void *thisObj, int column);
// QTreeView::columnWidth(int column) const
int c_QTreeView__columnWidth_int(void *thisObj, int column);
// QTreeView::commitData(QWidget * editor)
void c_QTreeView__commitData_QWidget(void *thisObj, void *editor_);
// QTreeView::currentChanged(const QModelIndex & current, const QModelIndex &
// previous)
void c_QTreeView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                         void *current_,
                                                         void *previous_);
// QTreeView::customEvent(QEvent * event)
void c_QTreeView__customEvent_QEvent(void *thisObj, void *event_);
// QTreeView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
// bottomRight, const QList<int > & roles)
void c_QTreeView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);
// QTreeView::devType() const
int c_QTreeView__devType(void *thisObj);
// QTreeView::doItemsLayout()
void c_QTreeView__doItemsLayout(void *thisObj);
// QTreeView::drawBranches(QPainter * painter, const QRect & rect, const
// QModelIndex & index) const
void c_QTreeView__drawBranches_QPainter_QRect_QModelIndex(void *thisObj,
                                                          void *painter_,
                                                          void *rect_,
                                                          void *index_);
// QTreeView::drawTree(QPainter * painter, const QRegion & region) const
void c_QTreeView__drawTree_QPainter_QRegion(void *thisObj, void *painter_,
                                            void *region_);
// QTreeView::editorDestroyed(QObject * editor)
void c_QTreeView__editorDestroyed_QObject(void *thisObj, void *editor_);
// QTreeView::event(QEvent * event)
bool c_QTreeView__event_QEvent(void *thisObj, void *event_);
// QTreeView::eventFilter(QObject * object, QEvent * event)
bool c_QTreeView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                             void *event_);
// QTreeView::expand(const QModelIndex & index)
void c_QTreeView__expand_QModelIndex(void *thisObj, void *index_);
// QTreeView::expandAll()
void c_QTreeView__expandAll(void *thisObj);
// QTreeView::expandRecursively(const QModelIndex & index, int depth)
void c_QTreeView__expandRecursively_QModelIndex_int(void *thisObj, void *index_,
                                                    int depth);
// QTreeView::expandToDepth(int depth)
void c_QTreeView__expandToDepth_int(void *thisObj, int depth);
// QTreeView::expanded(const QModelIndex & index)
void c_QTreeView__expanded_QModelIndex(void *thisObj, void *index_);
void c_QTreeView__onExpanded_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QTreeView::expandsOnDoubleClick() const
bool c_QTreeView__expandsOnDoubleClick(void *thisObj);
// QTreeView::focusNextPrevChild(bool next)
bool c_QTreeView__focusNextPrevChild_bool(void *thisObj, bool next);
// QTreeView::hasHeightForWidth() const
bool c_QTreeView__hasHeightForWidth(void *thisObj);
// QTreeView::heightForWidth(int arg__1) const
int c_QTreeView__heightForWidth_int(void *thisObj, int arg__1);
// QTreeView::hideColumn(int column)
void c_QTreeView__hideColumn_int(void *thisObj, int column);
// QTreeView::horizontalOffset() const
int c_QTreeView__horizontalOffset(void *thisObj);
// QTreeView::horizontalScrollbarAction(int action)
void c_QTreeView__horizontalScrollbarAction_int(void *thisObj, int action);
// QTreeView::horizontalScrollbarValueChanged(int value)
void c_QTreeView__horizontalScrollbarValueChanged_int(void *thisObj, int value);
// QTreeView::indentation() const
int c_QTreeView__indentation(void *thisObj);
// QTreeView::indexAbove(const QModelIndex & index) const
void *c_QTreeView__indexAbove_QModelIndex(void *thisObj, void *index_);
// QTreeView::indexAt(const QPoint & p) const
void *c_QTreeView__indexAt_QPoint(void *thisObj, void *p_);
// QTreeView::indexBelow(const QModelIndex & index) const
void *c_QTreeView__indexBelow_QModelIndex(void *thisObj, void *index_);
// QTreeView::indexRowSizeHint(const QModelIndex & index) const
int c_QTreeView__indexRowSizeHint_QModelIndex(void *thisObj, void *index_);
// QTreeView::initPainter(QPainter * painter) const
void c_QTreeView__initPainter_QPainter(void *thisObj, void *painter_);
// QTreeView::isAnimated() const
bool c_QTreeView__isAnimated(void *thisObj);
// QTreeView::isColumnHidden(int column) const
bool c_QTreeView__isColumnHidden_int(void *thisObj, int column);
// QTreeView::isExpanded(const QModelIndex & index) const
bool c_QTreeView__isExpanded_QModelIndex(void *thisObj, void *index_);
// QTreeView::isFirstColumnSpanned(int row, const QModelIndex & parent) const
bool c_QTreeView__isFirstColumnSpanned_int_QModelIndex(void *thisObj, int row,
                                                       void *parent_);
// QTreeView::isHeaderHidden() const
bool c_QTreeView__isHeaderHidden(void *thisObj);
// QTreeView::isIndexHidden(const QModelIndex & index) const
bool c_QTreeView__isIndexHidden_QModelIndex(void *thisObj, void *index_);
// QTreeView::isRowHidden(int row, const QModelIndex & parent) const
bool c_QTreeView__isRowHidden_int_QModelIndex(void *thisObj, int row,
                                              void *parent_);
// QTreeView::isSortingEnabled() const
bool c_QTreeView__isSortingEnabled(void *thisObj);
// QTreeView::itemsExpandable() const
bool c_QTreeView__itemsExpandable(void *thisObj);
// QTreeView::keyboardSearch(const QString & search)
void c_QTreeView__keyboardSearch_QString(void *thisObj, const char *search_);
// QTreeView::leaveEvent(QEvent * event)
void c_QTreeView__leaveEvent_QEvent(void *thisObj, void *event_);
// QTreeView::minimumSizeHint() const
void *c_QTreeView__minimumSizeHint(void *thisObj);
// QTreeView::mouseDoubleClickEvent(QMouseEvent * event)
void c_QTreeView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_);
// QTreeView::mouseMoveEvent(QMouseEvent * event)
void c_QTreeView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QTreeView::mousePressEvent(QMouseEvent * event)
void c_QTreeView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QTreeView::mouseReleaseEvent(QMouseEvent * event)
void c_QTreeView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QTreeView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QTreeView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                             int cursorAction,
                                                             int modifiers_);
// QTreeView::paintEvent(QPaintEvent * event)
void c_QTreeView__paintEvent_QPaintEvent(void *thisObj, void *event_);
// QTreeView::reexpand()
void c_QTreeView__reexpand(void *thisObj);
// QTreeView::reset()
void c_QTreeView__reset(void *thisObj);
// QTreeView::resetIndentation()
void c_QTreeView__resetIndentation(void *thisObj);
// QTreeView::resizeColumnToContents(int column)
void c_QTreeView__resizeColumnToContents_int(void *thisObj, int column);
// QTreeView::rootIsDecorated() const
bool c_QTreeView__rootIsDecorated(void *thisObj);
// QTreeView::rowHeight(const QModelIndex & index) const
int c_QTreeView__rowHeight_QModelIndex(void *thisObj, void *index_);
// QTreeView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
// end)
void c_QTreeView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end);
// QTreeView::rowsInserted(const QModelIndex & parent, int start, int end)
void c_QTreeView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                                   int start, int end);
// QTreeView::rowsRemoved(const QModelIndex & parent, int first, int last)
void c_QTreeView__rowsRemoved_QModelIndex_int_int(void *thisObj, void *parent_,
                                                  int first, int last);
// QTreeView::scrollContentsBy(int dx, int dy)
void c_QTreeView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QTreeView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
// hint)
void c_QTreeView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                  int hint);
// QTreeView::selectAll()
void c_QTreeView__selectAll(void *thisObj);
// QTreeView::selectedIndexes() const
void *c_QTreeView__selectedIndexes(void *thisObj);
// QTreeView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
void c_QTreeView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);
// QTreeView::selectionCommand(const QModelIndex & index, const QEvent * event)
// const
int c_QTreeView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                     void *index_,
                                                     void *event_);
// QTreeView::setAllColumnsShowFocus(bool enable)
void c_QTreeView__setAllColumnsShowFocus_bool(void *thisObj, bool enable);
// QTreeView::setAnimated(bool enable)
void c_QTreeView__setAnimated_bool(void *thisObj, bool enable);
// QTreeView::setAutoExpandDelay(int delay)
void c_QTreeView__setAutoExpandDelay_int(void *thisObj, int delay);
// QTreeView::setColumnHidden(int column, bool hide)
void c_QTreeView__setColumnHidden_int_bool(void *thisObj, int column,
                                           bool hide);
// QTreeView::setColumnWidth(int column, int width)
void c_QTreeView__setColumnWidth_int_int(void *thisObj, int column, int width);
// QTreeView::setExpanded(const QModelIndex & index, bool expand)
void c_QTreeView__setExpanded_QModelIndex_bool(void *thisObj, void *index_,
                                               bool expand);
// QTreeView::setExpandsOnDoubleClick(bool enable)
void c_QTreeView__setExpandsOnDoubleClick_bool(void *thisObj, bool enable);
// QTreeView::setFirstColumnSpanned(int row, const QModelIndex & parent, bool
// span)
void c_QTreeView__setFirstColumnSpanned_int_QModelIndex_bool(void *thisObj,
                                                             int row,
                                                             void *parent_,
                                                             bool span);
// QTreeView::setHeaderHidden(bool hide)
void c_QTreeView__setHeaderHidden_bool(void *thisObj, bool hide);
// QTreeView::setIndentation(int i)
void c_QTreeView__setIndentation_int(void *thisObj, int i);
// QTreeView::setItemsExpandable(bool enable)
void c_QTreeView__setItemsExpandable_bool(void *thisObj, bool enable);
// QTreeView::setModel(QAbstractItemModel * model)
void c_QTreeView__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QTreeView::setRootIndex(const QModelIndex & index)
void c_QTreeView__setRootIndex_QModelIndex(void *thisObj, void *index_);
// QTreeView::setRootIsDecorated(bool show)
void c_QTreeView__setRootIsDecorated_bool(void *thisObj, bool show);
// QTreeView::setRowHidden(int row, const QModelIndex & parent, bool hide)
void c_QTreeView__setRowHidden_int_QModelIndex_bool(void *thisObj, int row,
                                                    void *parent_, bool hide);
// QTreeView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QTreeView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                    int command_);
// QTreeView::setSelectionModel(QItemSelectionModel * selectionModel)
void c_QTreeView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                        void *selectionModel_);
// QTreeView::setSortingEnabled(bool enable)
void c_QTreeView__setSortingEnabled_bool(void *thisObj, bool enable);
// QTreeView::setTreePosition(int logicalIndex)
void c_QTreeView__setTreePosition_int(void *thisObj, int logicalIndex);
// QTreeView::setUniformRowHeights(bool uniform)
void c_QTreeView__setUniformRowHeights_bool(void *thisObj, bool uniform);
// QTreeView::setVisible(bool visible)
void c_QTreeView__setVisible_bool(void *thisObj, bool visible);
// QTreeView::setWordWrap(bool on)
void c_QTreeView__setWordWrap_bool(void *thisObj, bool on);
// QTreeView::setupViewport(QWidget * viewport)
void c_QTreeView__setupViewport_QWidget(void *thisObj, void *viewport_);
// QTreeView::sharedPainter() const
void *c_QTreeView__sharedPainter(void *thisObj);
// QTreeView::showColumn(int column)
void c_QTreeView__showColumn_int(void *thisObj, int column);
// QTreeView::sizeHint() const
void *c_QTreeView__sizeHint(void *thisObj);
// QTreeView::sizeHintForColumn(int column) const
int c_QTreeView__sizeHintForColumn_int(void *thisObj, int column);
// QTreeView::sizeHintForRow(int row) const
int c_QTreeView__sizeHintForRow_int(void *thisObj, int row);
// QTreeView::sortByColumn(int column, Qt::SortOrder order)
void c_QTreeView__sortByColumn_int_SortOrder(void *thisObj, int column,
                                             int order);
// QTreeView::tr(const char * s, const char * c, int n)
void *c_static_QTreeView__tr_char_char_int(const char *s, const char *c, int n);
// QTreeView::treePosition() const
int c_QTreeView__treePosition(void *thisObj);
// QTreeView::uniformRowHeights() const
bool c_QTreeView__uniformRowHeights(void *thisObj);
// QTreeView::updateEditorData()
void c_QTreeView__updateEditorData(void *thisObj);
// QTreeView::updateEditorGeometries()
void c_QTreeView__updateEditorGeometries(void *thisObj);
// QTreeView::updateGeometries()
void c_QTreeView__updateGeometries(void *thisObj);
// QTreeView::verticalOffset() const
int c_QTreeView__verticalOffset(void *thisObj);
// QTreeView::verticalScrollbarAction(int action)
void c_QTreeView__verticalScrollbarAction_int(void *thisObj, int action);
// QTreeView::verticalScrollbarValueChanged(int value)
void c_QTreeView__verticalScrollbarValueChanged_int(void *thisObj, int value);
// QTreeView::viewportEvent(QEvent * event)
bool c_QTreeView__viewportEvent_QEvent(void *thisObj, void *event_);
// QTreeView::viewportSizeHint() const
void *c_QTreeView__viewportSizeHint(void *thisObj);
// QTreeView::visualRect(const QModelIndex & index) const
void *c_QTreeView__visualRect_QModelIndex(void *thisObj, void *index_);
// QTreeView::visualRegionForSelection(const QItemSelection & selection) const
void *c_QTreeView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                           void *selection_);
// QTreeView::wordWrap() const
bool c_QTreeView__wordWrap(void *thisObj);
void c_QTreeView__destructor(void *thisObj);
void c_QTreeView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QTreeView_Finalizer(
    void *cppObj); // QTableView::QTableView(QWidget * parent)
void *c_QTableView__constructor_QWidget(void *parent_);
// QTableView::changeEvent(QEvent * arg__1)
void c_QTableView__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QTableView::clearSpans()
void c_QTableView__clearSpans(void *thisObj);
// QTableView::columnAt(int x) const
int c_QTableView__columnAt_int(void *thisObj, int x);
// QTableView::columnCountChanged(int oldCount, int newCount)
void c_QTableView__columnCountChanged_int_int(void *thisObj, int oldCount,
                                              int newCount);
// QTableView::columnMoved(int column, int oldIndex, int newIndex)
void c_QTableView__columnMoved_int_int_int(void *thisObj, int column,
                                           int oldIndex, int newIndex);
// QTableView::columnResized(int column, int oldWidth, int newWidth)
void c_QTableView__columnResized_int_int_int(void *thisObj, int column,
                                             int oldWidth, int newWidth);
// QTableView::columnSpan(int row, int column) const
int c_QTableView__columnSpan_int_int(void *thisObj, int row, int column);
// QTableView::columnViewportPosition(int column) const
int c_QTableView__columnViewportPosition_int(void *thisObj, int column);
// QTableView::columnWidth(int column) const
int c_QTableView__columnWidth_int(void *thisObj, int column);
// QTableView::commitData(QWidget * editor)
void c_QTableView__commitData_QWidget(void *thisObj, void *editor_);
// QTableView::currentChanged(const QModelIndex & current, const QModelIndex &
// previous)
void c_QTableView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                          void *current_,
                                                          void *previous_);
// QTableView::customEvent(QEvent * event)
void c_QTableView__customEvent_QEvent(void *thisObj, void *event_);
// QTableView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
// bottomRight, const QList<int > & roles)
void c_QTableView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);
// QTableView::devType() const
int c_QTableView__devType(void *thisObj);
// QTableView::doItemsLayout()
void c_QTableView__doItemsLayout(void *thisObj);
// QTableView::editorDestroyed(QObject * editor)
void c_QTableView__editorDestroyed_QObject(void *thisObj, void *editor_);
// QTableView::event(QEvent * event)
bool c_QTableView__event_QEvent(void *thisObj, void *event_);
// QTableView::eventFilter(QObject * object, QEvent * event)
bool c_QTableView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                              void *event_);
// QTableView::focusNextPrevChild(bool next)
bool c_QTableView__focusNextPrevChild_bool(void *thisObj, bool next);
// QTableView::hasHeightForWidth() const
bool c_QTableView__hasHeightForWidth(void *thisObj);
// QTableView::heightForWidth(int arg__1) const
int c_QTableView__heightForWidth_int(void *thisObj, int arg__1);
// QTableView::hideColumn(int column)
void c_QTableView__hideColumn_int(void *thisObj, int column);
// QTableView::hideRow(int row)
void c_QTableView__hideRow_int(void *thisObj, int row);
// QTableView::horizontalOffset() const
int c_QTableView__horizontalOffset(void *thisObj);
// QTableView::horizontalScrollbarAction(int action)
void c_QTableView__horizontalScrollbarAction_int(void *thisObj, int action);
// QTableView::horizontalScrollbarValueChanged(int value)
void c_QTableView__horizontalScrollbarValueChanged_int(void *thisObj,
                                                       int value);
// QTableView::indexAt(const QPoint & p) const
void *c_QTableView__indexAt_QPoint(void *thisObj, void *p_);
// QTableView::initPainter(QPainter * painter) const
void c_QTableView__initPainter_QPainter(void *thisObj, void *painter_);
// QTableView::isColumnHidden(int column) const
bool c_QTableView__isColumnHidden_int(void *thisObj, int column);
// QTableView::isCornerButtonEnabled() const
bool c_QTableView__isCornerButtonEnabled(void *thisObj);
// QTableView::isIndexHidden(const QModelIndex & index) const
bool c_QTableView__isIndexHidden_QModelIndex(void *thisObj, void *index_);
// QTableView::isRowHidden(int row) const
bool c_QTableView__isRowHidden_int(void *thisObj, int row);
// QTableView::isSortingEnabled() const
bool c_QTableView__isSortingEnabled(void *thisObj);
// QTableView::keyboardSearch(const QString & search)
void c_QTableView__keyboardSearch_QString(void *thisObj, const char *search_);
// QTableView::leaveEvent(QEvent * event)
void c_QTableView__leaveEvent_QEvent(void *thisObj, void *event_);
// QTableView::minimumSizeHint() const
void *c_QTableView__minimumSizeHint(void *thisObj);
// QTableView::mouseDoubleClickEvent(QMouseEvent * event)
void c_QTableView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                     void *event_);
// QTableView::mouseMoveEvent(QMouseEvent * event)
void c_QTableView__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QTableView::mousePressEvent(QMouseEvent * event)
void c_QTableView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QTableView::mouseReleaseEvent(QMouseEvent * event)
void c_QTableView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QTableView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QTableView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                              int cursorAction,
                                                              int modifiers_);
// QTableView::paintEvent(QPaintEvent * e)
void c_QTableView__paintEvent_QPaintEvent(void *thisObj, void *e_);
// QTableView::reset()
void c_QTableView__reset(void *thisObj);
// QTableView::resizeColumnToContents(int column)
void c_QTableView__resizeColumnToContents_int(void *thisObj, int column);
// QTableView::resizeColumnsToContents()
void c_QTableView__resizeColumnsToContents(void *thisObj);
// QTableView::resizeRowToContents(int row)
void c_QTableView__resizeRowToContents_int(void *thisObj, int row);
// QTableView::resizeRowsToContents()
void c_QTableView__resizeRowsToContents(void *thisObj);
// QTableView::rowAt(int y) const
int c_QTableView__rowAt_int(void *thisObj, int y);
// QTableView::rowCountChanged(int oldCount, int newCount)
void c_QTableView__rowCountChanged_int_int(void *thisObj, int oldCount,
                                           int newCount);
// QTableView::rowHeight(int row) const
int c_QTableView__rowHeight_int(void *thisObj, int row);
// QTableView::rowMoved(int row, int oldIndex, int newIndex)
void c_QTableView__rowMoved_int_int_int(void *thisObj, int row, int oldIndex,
                                        int newIndex);
// QTableView::rowResized(int row, int oldHeight, int newHeight)
void c_QTableView__rowResized_int_int_int(void *thisObj, int row, int oldHeight,
                                          int newHeight);
// QTableView::rowSpan(int row, int column) const
int c_QTableView__rowSpan_int_int(void *thisObj, int row, int column);
// QTableView::rowViewportPosition(int row) const
int c_QTableView__rowViewportPosition_int(void *thisObj, int row);
// QTableView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
// end)
void c_QTableView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                            void *parent_,
                                                            int start, int end);
// QTableView::rowsInserted(const QModelIndex & parent, int start, int end)
void c_QTableView__rowsInserted_QModelIndex_int_int(void *thisObj,
                                                    void *parent_, int start,
                                                    int end);
// QTableView::scrollContentsBy(int dx, int dy)
void c_QTableView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QTableView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
// hint)
void c_QTableView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                   int hint);
// QTableView::selectAll()
void c_QTableView__selectAll(void *thisObj);
// QTableView::selectColumn(int column)
void c_QTableView__selectColumn_int(void *thisObj, int column);
// QTableView::selectRow(int row)
void c_QTableView__selectRow_int(void *thisObj, int row);
// QTableView::selectedIndexes() const
void *c_QTableView__selectedIndexes(void *thisObj);
// QTableView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
void c_QTableView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);
// QTableView::selectionCommand(const QModelIndex & index, const QEvent * event)
// const
int c_QTableView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                      void *index_,
                                                      void *event_);
// QTableView::setColumnHidden(int column, bool hide)
void c_QTableView__setColumnHidden_int_bool(void *thisObj, int column,
                                            bool hide);
// QTableView::setColumnWidth(int column, int width)
void c_QTableView__setColumnWidth_int_int(void *thisObj, int column, int width);
// QTableView::setCornerButtonEnabled(bool enable)
void c_QTableView__setCornerButtonEnabled_bool(void *thisObj, bool enable);
// QTableView::setModel(QAbstractItemModel * model)
void c_QTableView__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QTableView::setRootIndex(const QModelIndex & index)
void c_QTableView__setRootIndex_QModelIndex(void *thisObj, void *index_);
// QTableView::setRowHeight(int row, int height)
void c_QTableView__setRowHeight_int_int(void *thisObj, int row, int height);
// QTableView::setRowHidden(int row, bool hide)
void c_QTableView__setRowHidden_int_bool(void *thisObj, int row, bool hide);
// QTableView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QTableView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                     int command_);
// QTableView::setSelectionModel(QItemSelectionModel * selectionModel)
void c_QTableView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                         void *selectionModel_);
// QTableView::setShowGrid(bool show)
void c_QTableView__setShowGrid_bool(void *thisObj, bool show);
// QTableView::setSortingEnabled(bool enable)
void c_QTableView__setSortingEnabled_bool(void *thisObj, bool enable);
// QTableView::setSpan(int row, int column, int rowSpan, int columnSpan)
void c_QTableView__setSpan_int_int_int_int(void *thisObj, int row, int column,
                                           int rowSpan, int columnSpan);
// QTableView::setVisible(bool visible)
void c_QTableView__setVisible_bool(void *thisObj, bool visible);
// QTableView::setWordWrap(bool on)
void c_QTableView__setWordWrap_bool(void *thisObj, bool on);
// QTableView::setupViewport(QWidget * viewport)
void c_QTableView__setupViewport_QWidget(void *thisObj, void *viewport_);
// QTableView::sharedPainter() const
void *c_QTableView__sharedPainter(void *thisObj);
// QTableView::showColumn(int column)
void c_QTableView__showColumn_int(void *thisObj, int column);
// QTableView::showGrid() const
bool c_QTableView__showGrid(void *thisObj);
// QTableView::showRow(int row)
void c_QTableView__showRow_int(void *thisObj, int row);
// QTableView::sizeHint() const
void *c_QTableView__sizeHint(void *thisObj);
// QTableView::sizeHintForColumn(int column) const
int c_QTableView__sizeHintForColumn_int(void *thisObj, int column);
// QTableView::sizeHintForRow(int row) const
int c_QTableView__sizeHintForRow_int(void *thisObj, int row);
// QTableView::sortByColumn(int column, Qt::SortOrder order)
void c_QTableView__sortByColumn_int_SortOrder(void *thisObj, int column,
                                              int order);
// QTableView::tr(const char * s, const char * c, int n)
void *c_static_QTableView__tr_char_char_int(const char *s, const char *c,
                                            int n);
// QTableView::updateEditorData()
void c_QTableView__updateEditorData(void *thisObj);
// QTableView::updateEditorGeometries()
void c_QTableView__updateEditorGeometries(void *thisObj);
// QTableView::updateGeometries()
void c_QTableView__updateGeometries(void *thisObj);
// QTableView::verticalOffset() const
int c_QTableView__verticalOffset(void *thisObj);
// QTableView::verticalScrollbarAction(int action)
void c_QTableView__verticalScrollbarAction_int(void *thisObj, int action);
// QTableView::verticalScrollbarValueChanged(int value)
void c_QTableView__verticalScrollbarValueChanged_int(void *thisObj, int value);
// QTableView::viewportEvent(QEvent * event)
bool c_QTableView__viewportEvent_QEvent(void *thisObj, void *event_);
// QTableView::viewportSizeHint() const
void *c_QTableView__viewportSizeHint(void *thisObj);
// QTableView::visualRect(const QModelIndex & index) const
void *c_QTableView__visualRect_QModelIndex(void *thisObj, void *index_);
// QTableView::visualRegionForSelection(const QItemSelection & selection) const
void *c_QTableView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                            void *selection_);
// QTableView::wordWrap() const
bool c_QTableView__wordWrap(void *thisObj);
void c_QTableView__destructor(void *thisObj);
void c_QTableView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
void c_QTableView_Finalizer(
    void *cppObj); // QListView::QListView(QWidget * parent)
void *c_QListView__constructor_QWidget(void *parent_);
// QListView::batchSize() const
int c_QListView__batchSize(void *thisObj);
// QListView::changeEvent(QEvent * arg__1)
void c_QListView__changeEvent_QEvent(void *thisObj, void *arg__1_);
// QListView::clearPropertyFlags()
void c_QListView__clearPropertyFlags(void *thisObj);
// QListView::commitData(QWidget * editor)
void c_QListView__commitData_QWidget(void *thisObj, void *editor_);
// QListView::contentsSize() const
void *c_QListView__contentsSize(void *thisObj);
// QListView::currentChanged(const QModelIndex & current, const QModelIndex &
// previous)
void c_QListView__currentChanged_QModelIndex_QModelIndex(void *thisObj,
                                                         void *current_,
                                                         void *previous_);
// QListView::customEvent(QEvent * event)
void c_QListView__customEvent_QEvent(void *thisObj, void *event_);
// QListView::dataChanged(const QModelIndex & topLeft, const QModelIndex &
// bottomRight, const QList<int > & roles)
void c_QListView__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);
// QListView::devType() const
int c_QListView__devType(void *thisObj);
// QListView::doItemsLayout()
void c_QListView__doItemsLayout(void *thisObj);
// QListView::editorDestroyed(QObject * editor)
void c_QListView__editorDestroyed_QObject(void *thisObj, void *editor_);
// QListView::event(QEvent * e)
bool c_QListView__event_QEvent(void *thisObj, void *e_);
// QListView::eventFilter(QObject * object, QEvent * event)
bool c_QListView__eventFilter_QObject_QEvent(void *thisObj, void *object_,
                                             void *event_);
// QListView::focusNextPrevChild(bool next)
bool c_QListView__focusNextPrevChild_bool(void *thisObj, bool next);
// QListView::gridSize() const
void *c_QListView__gridSize(void *thisObj);
// QListView::hasHeightForWidth() const
bool c_QListView__hasHeightForWidth(void *thisObj);
// QListView::heightForWidth(int arg__1) const
int c_QListView__heightForWidth_int(void *thisObj, int arg__1);
// QListView::horizontalOffset() const
int c_QListView__horizontalOffset(void *thisObj);
// QListView::horizontalScrollbarAction(int action)
void c_QListView__horizontalScrollbarAction_int(void *thisObj, int action);
// QListView::horizontalScrollbarValueChanged(int value)
void c_QListView__horizontalScrollbarValueChanged_int(void *thisObj, int value);
// QListView::indexAt(const QPoint & p) const
void *c_QListView__indexAt_QPoint(void *thisObj, void *p_);
// QListView::indexesMoved(const QList<QModelIndex > & indexes)
void c_QListView__indexesMoved_QList_QModelIndex(void *thisObj, void *indexes_);
void c_QListView__onIndexesMoved_QList_QModelIndex(
    void *thisObj, void *contextQObject,
    void *callback); // QListView::initPainter(QPainter * painter) const
void c_QListView__initPainter_QPainter(void *thisObj, void *painter_);
// QListView::isIndexHidden(const QModelIndex & index) const
bool c_QListView__isIndexHidden_QModelIndex(void *thisObj, void *index_);
// QListView::isRowHidden(int row) const
bool c_QListView__isRowHidden_int(void *thisObj, int row);
// QListView::isSelectionRectVisible() const
bool c_QListView__isSelectionRectVisible(void *thisObj);
// QListView::isWrapping() const
bool c_QListView__isWrapping(void *thisObj);
// QListView::keyboardSearch(const QString & search)
void c_QListView__keyboardSearch_QString(void *thisObj, const char *search_);
// QListView::leaveEvent(QEvent * event)
void c_QListView__leaveEvent_QEvent(void *thisObj, void *event_);
// QListView::minimumSizeHint() const
void *c_QListView__minimumSizeHint(void *thisObj);
// QListView::modelColumn() const
int c_QListView__modelColumn(void *thisObj);
// QListView::mouseDoubleClickEvent(QMouseEvent * event)
void c_QListView__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_);
// QListView::mouseMoveEvent(QMouseEvent * e)
void c_QListView__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QListView::mousePressEvent(QMouseEvent * event)
void c_QListView__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QListView::mouseReleaseEvent(QMouseEvent * e)
void c_QListView__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QListView::moveCursor(QAbstractItemView::CursorAction cursorAction,
// QFlags<Qt::KeyboardModifier> modifiers)
void *c_QListView__moveCursor_CursorAction_KeyboardModifiers(void *thisObj,
                                                             int cursorAction,
                                                             int modifiers_);
// QListView::paintEvent(QPaintEvent * e)
void c_QListView__paintEvent_QPaintEvent(void *thisObj, void *e_);
// QListView::rectForIndex(const QModelIndex & index) const
void *c_QListView__rectForIndex_QModelIndex(void *thisObj, void *index_);
// QListView::reset()
void c_QListView__reset(void *thisObj);
// QListView::resizeContents(int width, int height)
void c_QListView__resizeContents_int_int(void *thisObj, int width, int height);
// QListView::rowsAboutToBeRemoved(const QModelIndex & parent, int start, int
// end)
void c_QListView__rowsAboutToBeRemoved_QModelIndex_int_int(void *thisObj,
                                                           void *parent_,
                                                           int start, int end);
// QListView::rowsInserted(const QModelIndex & parent, int start, int end)
void c_QListView__rowsInserted_QModelIndex_int_int(void *thisObj, void *parent_,
                                                   int start, int end);
// QListView::scrollContentsBy(int dx, int dy)
void c_QListView__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QListView::scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint
// hint)
void c_QListView__scrollTo_QModelIndex_ScrollHint(void *thisObj, void *index_,
                                                  int hint);
// QListView::selectAll()
void c_QListView__selectAll(void *thisObj);
// QListView::selectedIndexes() const
void *c_QListView__selectedIndexes(void *thisObj);
// QListView::selectionChanged(const QItemSelection & selected, const
// QItemSelection & deselected)
void c_QListView__selectionChanged_QItemSelection_QItemSelection(
    void *thisObj, void *selected_, void *deselected_);
// QListView::selectionCommand(const QModelIndex & index, const QEvent * event)
// const
int c_QListView__selectionCommand_QModelIndex_QEvent(void *thisObj,
                                                     void *index_,
                                                     void *event_);
// QListView::setBatchSize(int batchSize)
void c_QListView__setBatchSize_int(void *thisObj, int batchSize);
// QListView::setGridSize(const QSize & size)
void c_QListView__setGridSize_QSize(void *thisObj, void *size_);
// QListView::setModel(QAbstractItemModel * model)
void c_QListView__setModel_QAbstractItemModel(void *thisObj, void *model_);
// QListView::setModelColumn(int column)
void c_QListView__setModelColumn_int(void *thisObj, int column);
// QListView::setPositionForIndex(const QPoint & position, const QModelIndex &
// index)
void c_QListView__setPositionForIndex_QPoint_QModelIndex(void *thisObj,
                                                         void *position_,
                                                         void *index_);
// QListView::setRootIndex(const QModelIndex & index)
void c_QListView__setRootIndex_QModelIndex(void *thisObj, void *index_);
// QListView::setRowHidden(int row, bool hide)
void c_QListView__setRowHidden_int_bool(void *thisObj, int row, bool hide);
// QListView::setSelection(const QRect & rect,
// QFlags<QItemSelectionModel::SelectionFlag> command)
void c_QListView__setSelection_QRect_SelectionFlags(void *thisObj, void *rect_,
                                                    int command_);
// QListView::setSelectionModel(QItemSelectionModel * selectionModel)
void c_QListView__setSelectionModel_QItemSelectionModel(void *thisObj,
                                                        void *selectionModel_);
// QListView::setSelectionRectVisible(bool show)
void c_QListView__setSelectionRectVisible_bool(void *thisObj, bool show);
// QListView::setSpacing(int space)
void c_QListView__setSpacing_int(void *thisObj, int space);
// QListView::setUniformItemSizes(bool enable)
void c_QListView__setUniformItemSizes_bool(void *thisObj, bool enable);
// QListView::setVisible(bool visible)
void c_QListView__setVisible_bool(void *thisObj, bool visible);
// QListView::setWordWrap(bool on)
void c_QListView__setWordWrap_bool(void *thisObj, bool on);
// QListView::setWrapping(bool enable)
void c_QListView__setWrapping_bool(void *thisObj, bool enable);
// QListView::setupViewport(QWidget * viewport)
void c_QListView__setupViewport_QWidget(void *thisObj, void *viewport_);
// QListView::sharedPainter() const
void *c_QListView__sharedPainter(void *thisObj);
// QListView::sizeHint() const
void *c_QListView__sizeHint(void *thisObj);
// QListView::sizeHintForColumn(int column) const
int c_QListView__sizeHintForColumn_int(void *thisObj, int column);
// QListView::sizeHintForRow(int row) const
int c_QListView__sizeHintForRow_int(void *thisObj, int row);
// QListView::spacing() const
int c_QListView__spacing(void *thisObj);
// QListView::tr(const char * s, const char * c, int n)
void *c_static_QListView__tr_char_char_int(const char *s, const char *c, int n);
// QListView::uniformItemSizes() const
bool c_QListView__uniformItemSizes(void *thisObj);
// QListView::updateEditorData()
void c_QListView__updateEditorData(void *thisObj);
// QListView::updateEditorGeometries()
void c_QListView__updateEditorGeometries(void *thisObj);
// QListView::updateGeometries()
void c_QListView__updateGeometries(void *thisObj);
// QListView::verticalOffset() const
int c_QListView__verticalOffset(void *thisObj);
// QListView::verticalScrollbarAction(int action)
void c_QListView__verticalScrollbarAction_int(void *thisObj, int action);
// QListView::verticalScrollbarValueChanged(int value)
void c_QListView__verticalScrollbarValueChanged_int(void *thisObj, int value);
// QListView::viewportEvent(QEvent * event)
bool c_QListView__viewportEvent_QEvent(void *thisObj, void *event_);
// QListView::viewportSizeHint() const
void *c_QListView__viewportSizeHint(void *thisObj);
// QListView::visualRect(const QModelIndex & index) const
void *c_QListView__visualRect_QModelIndex(void *thisObj, void *index_);
// QListView::visualRegionForSelection(const QItemSelection & selection) const
void *c_QListView__visualRegionForSelection_QItemSelection(void *thisObj,
                                                           void *selection_);
// QListView::wordWrap() const
bool c_QListView__wordWrap(void *thisObj);
void c_QListView__destructor(void *thisObj);
void c_QListView__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QListView_Finalizer(
    void *cppObj); // QAbstractItemModel::QAbstractItemModel(QObject * parent)
void *c_QAbstractItemModel__constructor_QObject(void *parent_);
// QAbstractItemModel::beginInsertColumns(const QModelIndex & parent, int first,
// int last)
void c_QAbstractItemModel__beginInsertColumns_QModelIndex_int_int(void *thisObj,
                                                                  void *parent_,
                                                                  int first,
                                                                  int last);
// QAbstractItemModel::beginInsertRows(const QModelIndex & parent, int first,
// int last)
void c_QAbstractItemModel__beginInsertRows_QModelIndex_int_int(void *thisObj,
                                                               void *parent_,
                                                               int first,
                                                               int last);
// QAbstractItemModel::beginMoveColumns(const QModelIndex & sourceParent, int
// sourceFirst, int sourceLast, const QModelIndex & destinationParent, int
// destinationColumn)
bool c_QAbstractItemModel__beginMoveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationColumn);
// QAbstractItemModel::beginMoveRows(const QModelIndex & sourceParent, int
// sourceFirst, int sourceLast, const QModelIndex & destinationParent, int
// destinationRow)
bool c_QAbstractItemModel__beginMoveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceFirst, int sourceLast,
    void *destinationParent_, int destinationRow);
// QAbstractItemModel::beginRemoveColumns(const QModelIndex & parent, int first,
// int last)
void c_QAbstractItemModel__beginRemoveColumns_QModelIndex_int_int(void *thisObj,
                                                                  void *parent_,
                                                                  int first,
                                                                  int last);
// QAbstractItemModel::beginRemoveRows(const QModelIndex & parent, int first,
// int last)
void c_QAbstractItemModel__beginRemoveRows_QModelIndex_int_int(void *thisObj,
                                                               void *parent_,
                                                               int first,
                                                               int last);
// QAbstractItemModel::beginResetModel()
void c_QAbstractItemModel__beginResetModel(void *thisObj);
// QAbstractItemModel::buddy(const QModelIndex & index) const
void *c_QAbstractItemModel__buddy_QModelIndex(void *thisObj, void *index_);
// QAbstractItemModel::canFetchMore(const QModelIndex & parent) const
bool c_QAbstractItemModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_);
// QAbstractItemModel::changePersistentIndex(const QModelIndex & from, const
// QModelIndex & to)
void c_QAbstractItemModel__changePersistentIndex_QModelIndex_QModelIndex(
    void *thisObj, void *from_, void *to_);
// QAbstractItemModel::changePersistentIndexList(const QList<QModelIndex > &
// from, const QList<QModelIndex > & to)
void c_QAbstractItemModel__changePersistentIndexList_QList_QModelIndex_QList_QModelIndex(
    void *thisObj, void *from_, void *to_);
// QAbstractItemModel::checkIndex(const QModelIndex & index) const
bool c_QAbstractItemModel__checkIndex_QModelIndex(void *thisObj, void *index_);
// QAbstractItemModel::clearItemData(const QModelIndex & index)
bool c_QAbstractItemModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_);
// QAbstractItemModel::columnCount(const QModelIndex & parent) const
int c_QAbstractItemModel__columnCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::customEvent(QEvent * event)
void c_QAbstractItemModel__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractItemModel::data(const QModelIndex & index, int role) const
void *c_QAbstractItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role);
// QAbstractItemModel::dataChanged(const QModelIndex & topLeft, const
// QModelIndex & bottomRight, const QList<int > & roles)
void c_QAbstractItemModel__dataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *topLeft_, void *bottomRight_, void *roles_);
void c_QAbstractItemModel__onDataChanged_QModelIndex_QModelIndex_QList_int(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::endInsertColumns()
void c_QAbstractItemModel__endInsertColumns(void *thisObj);
// QAbstractItemModel::endInsertRows()
void c_QAbstractItemModel__endInsertRows(void *thisObj);
// QAbstractItemModel::endMoveColumns()
void c_QAbstractItemModel__endMoveColumns(void *thisObj);
// QAbstractItemModel::endMoveRows()
void c_QAbstractItemModel__endMoveRows(void *thisObj);
// QAbstractItemModel::endRemoveColumns()
void c_QAbstractItemModel__endRemoveColumns(void *thisObj);
// QAbstractItemModel::endRemoveRows()
void c_QAbstractItemModel__endRemoveRows(void *thisObj);
// QAbstractItemModel::endResetModel()
void c_QAbstractItemModel__endResetModel(void *thisObj);
// QAbstractItemModel::event(QEvent * event)
bool c_QAbstractItemModel__event_QEvent(void *thisObj, void *event_);
// QAbstractItemModel::eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractItemModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_);
// QAbstractItemModel::fetchMore(const QModelIndex & parent)
void c_QAbstractItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::hasChildren(const QModelIndex & parent) const
bool c_QAbstractItemModel__hasChildren_QModelIndex(void *thisObj,
                                                   void *parent_);
// QAbstractItemModel::hasIndex(int row, int column, const QModelIndex & parent)
// const
bool c_QAbstractItemModel__hasIndex_int_int_QModelIndex(void *thisObj, int row,
                                                        int column,
                                                        void *parent_);
// QAbstractItemModel::headerData(int section, Qt::Orientation orientation, int
// role) const
void *c_QAbstractItemModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role);
// QAbstractItemModel::headerDataChanged(Qt::Orientation orientation, int first,
// int last)
void c_QAbstractItemModel__headerDataChanged_Orientation_int_int(
    void *thisObj, int orientation, int first, int last);
void c_QAbstractItemModel__onHeaderDataChanged_Orientation_int_int(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::index(int row, int column, const
                     // QModelIndex & parent) const
void *c_QAbstractItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                      int column,
                                                      void *parent_);
// QAbstractItemModel::insertColumns(int column, int count, const QModelIndex &
// parent)
bool c_QAbstractItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_);
// QAbstractItemModel::insertRows(int row, int count, const QModelIndex &
// parent)
bool c_QAbstractItemModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_);
// QAbstractItemModel::layoutAboutToBeChanged()
void c_QAbstractItemModel__layoutAboutToBeChanged(void *thisObj);
void c_QAbstractItemModel__onLayoutAboutToBeChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::layoutChanged()
void c_QAbstractItemModel__layoutChanged(void *thisObj);
void c_QAbstractItemModel__onLayoutChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractItemModel::mimeTypes() const
void *c_QAbstractItemModel__mimeTypes(void *thisObj);
// QAbstractItemModel::moveColumn(const QModelIndex & sourceParent, int
// sourceColumn, const QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveColumn_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn,
    void *destinationParent_, int destinationChild);
// QAbstractItemModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
bool c_QAbstractItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QAbstractItemModel::moveRow(const QModelIndex & sourceParent, int sourceRow,
// const QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveRow_QModelIndex_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, void *destinationParent_,
    int destinationChild);
// QAbstractItemModel::moveRows(const QModelIndex & sourceParent, int sourceRow,
// int count, const QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QAbstractItemModel::parent(const QModelIndex & child) const
void *c_QAbstractItemModel__parentIndex_QModelIndex(void *thisObj,
                                                    void *child_);
// QAbstractItemModel::persistentIndexList() const
void *c_QAbstractItemModel__persistentIndexList(void *thisObj);
// QAbstractItemModel::removeColumn(int column, const QModelIndex & parent)
bool c_QAbstractItemModel__removeColumn_int_QModelIndex(void *thisObj,
                                                        int column,
                                                        void *parent_);
// QAbstractItemModel::removeColumns(int column, int count, const QModelIndex &
// parent)
bool c_QAbstractItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_);
// QAbstractItemModel::removeRow(int row, const QModelIndex & parent)
bool c_QAbstractItemModel__removeRow_int_QModelIndex(void *thisObj, int row,
                                                     void *parent_);
// QAbstractItemModel::removeRows(int row, int count, const QModelIndex &
// parent)
bool c_QAbstractItemModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_);
// QAbstractItemModel::resetInternalData()
void c_QAbstractItemModel__resetInternalData(void *thisObj);
// QAbstractItemModel::revert()
void c_QAbstractItemModel__revert(void *thisObj);
// QAbstractItemModel::rowCount(const QModelIndex & parent) const
int c_QAbstractItemModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractItemModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
bool c_QAbstractItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                            void *index_,
                                                            void *value_,
                                                            int role);
// QAbstractItemModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
bool c_QAbstractItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QAbstractItemModel::sibling(int row, int column, const QModelIndex & idx)
// const
void *c_QAbstractItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column, void *idx_);
// QAbstractItemModel::sort(int column, Qt::SortOrder order)
void c_QAbstractItemModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order);
// QAbstractItemModel::span(const QModelIndex & index) const
void *c_QAbstractItemModel__span_QModelIndex(void *thisObj, void *index_);
// QAbstractItemModel::submit()
bool c_QAbstractItemModel__submit(void *thisObj);
// QAbstractItemModel::tr(const char * s, const char * c, int n)
void *c_static_QAbstractItemModel__tr_char_char_int(const char *s,
                                                    const char *c, int n);
void c_QAbstractItemModel__destructor(void *thisObj);
void c_QAbstractItemModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId);
void c_QAbstractItemModel_Finalizer(
    void *cppObj); // QStandardItemModel::QStandardItemModel(QObject * parent)
void *c_QStandardItemModel__constructor_QObject(void *parent_);
// QStandardItemModel::QStandardItemModel(int rows, int columns, QObject *
// parent)
void *c_QStandardItemModel__constructor_int_int_QObject(int rows, int columns,
                                                        void *parent_);
// QStandardItemModel::appendColumn(const QList<QStandardItem* > & items)
void c_QStandardItemModel__appendColumn_QList_QStandardItem(void *thisObj,
                                                            void *items_);
// QStandardItemModel::appendRow(QStandardItem * item)
void c_QStandardItemModel__appendRow_QStandardItem(void *thisObj, void *item_);
// QStandardItemModel::appendRow(const QList<QStandardItem* > & items)
void c_QStandardItemModel__appendRow_QList_QStandardItem(void *thisObj,
                                                         void *items_);
// QStandardItemModel::buddy(const QModelIndex & index) const
void *c_QStandardItemModel__buddy_QModelIndex(void *thisObj, void *index_);
// QStandardItemModel::canFetchMore(const QModelIndex & parent) const
bool c_QStandardItemModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_);
// QStandardItemModel::clear()
void c_QStandardItemModel__clear(void *thisObj);
// QStandardItemModel::clearItemData(const QModelIndex & index)
bool c_QStandardItemModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_);
// QStandardItemModel::columnCount(const QModelIndex & parent) const
int c_QStandardItemModel__columnCount_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::customEvent(QEvent * event)
void c_QStandardItemModel__customEvent_QEvent(void *thisObj, void *event_);
// QStandardItemModel::data(const QModelIndex & index, int role) const
void *c_QStandardItemModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role);
// QStandardItemModel::event(QEvent * event)
bool c_QStandardItemModel__event_QEvent(void *thisObj, void *event_);
// QStandardItemModel::eventFilter(QObject * watched, QEvent * event)
bool c_QStandardItemModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_);
// QStandardItemModel::fetchMore(const QModelIndex & parent)
void c_QStandardItemModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::findItems(const QString & text) const
void *c_QStandardItemModel__findItems_QString(void *thisObj, const char *text_);
// QStandardItemModel::hasChildren(const QModelIndex & parent) const
bool c_QStandardItemModel__hasChildren_QModelIndex(void *thisObj,
                                                   void *parent_);
// QStandardItemModel::headerData(int section, Qt::Orientation orientation, int
// role) const
void *c_QStandardItemModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role);
// QStandardItemModel::horizontalHeaderItem(int column) const
void *c_QStandardItemModel__horizontalHeaderItem_int(void *thisObj, int column);
// QStandardItemModel::index(int row, int column, const QModelIndex & parent)
// const
void *c_QStandardItemModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                      int column,
                                                      void *parent_);
// QStandardItemModel::indexFromItem(const QStandardItem * item) const
void *c_QStandardItemModel__indexFromItem_QStandardItem(void *thisObj,
                                                        void *item_);
// QStandardItemModel::insertColumn(int column, const QList<QStandardItem* > &
// items)
void c_QStandardItemModel__insertColumn_int_QList_QStandardItem(void *thisObj,
                                                                int column,
                                                                void *items_);
// QStandardItemModel::insertColumns(int column, int count, const QModelIndex &
// parent)
bool c_QStandardItemModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_);
// QStandardItemModel::insertRow(int row, QStandardItem * item)
void c_QStandardItemModel__insertRow_int_QStandardItem(void *thisObj, int row,
                                                       void *item_);
// QStandardItemModel::insertRow(int row, const QList<QStandardItem* > & items)
void c_QStandardItemModel__insertRow_int_QList_QStandardItem(void *thisObj,
                                                             int row,
                                                             void *items_);
// QStandardItemModel::insertRows(int row, int count, const QModelIndex &
// parent)
bool c_QStandardItemModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_);
// QStandardItemModel::invisibleRootItem() const
void *c_QStandardItemModel__invisibleRootItem(void *thisObj);
// QStandardItemModel::item(int row, int column) const
void *c_QStandardItemModel__item_int_int(void *thisObj, int row, int column);
// QStandardItemModel::itemChanged(QStandardItem * item)
void c_QStandardItemModel__itemChanged_QStandardItem(void *thisObj,
                                                     void *item_);
void c_QStandardItemModel__onItemChanged_QStandardItem(
    void *thisObj, void *contextQObject,
    void *callback); // QStandardItemModel::itemFromIndex(const QModelIndex &
                     // index) const
void *c_QStandardItemModel__itemFromIndex_QModelIndex(void *thisObj,
                                                      void *index_);
// QStandardItemModel::itemPrototype() const
void *c_QStandardItemModel__itemPrototype(void *thisObj);
// QStandardItemModel::mimeTypes() const
void *c_QStandardItemModel__mimeTypes(void *thisObj);
// QStandardItemModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
bool c_QStandardItemModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QStandardItemModel::moveRows(const QModelIndex & sourceParent, int sourceRow,
// int count, const QModelIndex & destinationParent, int destinationChild)
bool c_QStandardItemModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QStandardItemModel::parent(const QModelIndex & child) const
void *c_QStandardItemModel__parentIndex_QModelIndex(void *thisObj,
                                                    void *child_);
// QStandardItemModel::removeColumns(int column, int count, const QModelIndex &
// parent)
bool c_QStandardItemModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_);
// QStandardItemModel::removeRows(int row, int count, const QModelIndex &
// parent)
bool c_QStandardItemModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_);
// QStandardItemModel::resetInternalData()
void c_QStandardItemModel__resetInternalData(void *thisObj);
// QStandardItemModel::revert()
void c_QStandardItemModel__revert(void *thisObj);
// QStandardItemModel::rowCount(const QModelIndex & parent) const
int c_QStandardItemModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QStandardItemModel::setColumnCount(int columns)
void c_QStandardItemModel__setColumnCount_int(void *thisObj, int columns);
// QStandardItemModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
bool c_QStandardItemModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                            void *index_,
                                                            void *value_,
                                                            int role);
// QStandardItemModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
bool c_QStandardItemModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QStandardItemModel::setHorizontalHeaderItem(int column, QStandardItem * item)
void c_QStandardItemModel__setHorizontalHeaderItem_int_QStandardItem(
    void *thisObj, int column, void *item_);
// QStandardItemModel::setHorizontalHeaderLabels(const QList<QString > & labels)
void c_QStandardItemModel__setHorizontalHeaderLabels_QList_QString(
    void *thisObj, void *labels_);
// QStandardItemModel::setItem(int row, QStandardItem * item)
void c_QStandardItemModel__setItem_int_QStandardItem(void *thisObj, int row,
                                                     void *item_);
// QStandardItemModel::setItem(int row, int column, QStandardItem * item)
void c_QStandardItemModel__setItem_int_int_QStandardItem(void *thisObj, int row,
                                                         int column,
                                                         void *item_);
// QStandardItemModel::setItemPrototype(const QStandardItem * item)
void c_QStandardItemModel__setItemPrototype_QStandardItem(void *thisObj,
                                                          void *item_);
// QStandardItemModel::setRowCount(int rows)
void c_QStandardItemModel__setRowCount_int(void *thisObj, int rows);
// QStandardItemModel::setSortRole(int role)
void c_QStandardItemModel__setSortRole_int(void *thisObj, int role);
// QStandardItemModel::setVerticalHeaderItem(int row, QStandardItem * item)
void c_QStandardItemModel__setVerticalHeaderItem_int_QStandardItem(
    void *thisObj, int row, void *item_);
// QStandardItemModel::setVerticalHeaderLabels(const QList<QString > & labels)
void c_QStandardItemModel__setVerticalHeaderLabels_QList_QString(void *thisObj,
                                                                 void *labels_);
// QStandardItemModel::sibling(int row, int column, const QModelIndex & idx)
// const
void *c_QStandardItemModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column, void *idx_);
// QStandardItemModel::sort(int column, Qt::SortOrder order)
void c_QStandardItemModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order);
// QStandardItemModel::sortRole() const
int c_QStandardItemModel__sortRole(void *thisObj);
// QStandardItemModel::span(const QModelIndex & index) const
void *c_QStandardItemModel__span_QModelIndex(void *thisObj, void *index_);
// QStandardItemModel::submit()
bool c_QStandardItemModel__submit(void *thisObj);
// QStandardItemModel::takeColumn(int column)
void *c_QStandardItemModel__takeColumn_int(void *thisObj, int column);
// QStandardItemModel::takeHorizontalHeaderItem(int column)
void *c_QStandardItemModel__takeHorizontalHeaderItem_int(void *thisObj,
                                                         int column);
// QStandardItemModel::takeItem(int row, int column)
void *c_QStandardItemModel__takeItem_int_int(void *thisObj, int row,
                                             int column);
// QStandardItemModel::takeRow(int row)
void *c_QStandardItemModel__takeRow_int(void *thisObj, int row);
// QStandardItemModel::takeVerticalHeaderItem(int row)
void *c_QStandardItemModel__takeVerticalHeaderItem_int(void *thisObj, int row);
// QStandardItemModel::tr(const char * s, const char * c, int n)
void *c_static_QStandardItemModel__tr_char_char_int(const char *s,
                                                    const char *c, int n);
// QStandardItemModel::verticalHeaderItem(int row) const
void *c_QStandardItemModel__verticalHeaderItem_int(void *thisObj, int row);
void c_QStandardItemModel__destructor(void *thisObj);
void c_QStandardItemModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId);
void c_QStandardItemModel_Finalizer(
    void *cppObj); // QAbstractProxyModel::QAbstractProxyModel(QObject * parent)
void *c_QAbstractProxyModel__constructor_QObject(void *parent_);
// QAbstractProxyModel::buddy(const QModelIndex & index) const
void *c_QAbstractProxyModel__buddy_QModelIndex(void *thisObj, void *index_);
// QAbstractProxyModel::canFetchMore(const QModelIndex & parent) const
bool c_QAbstractProxyModel__canFetchMore_QModelIndex(void *thisObj,
                                                     void *parent_);
// QAbstractProxyModel::clearItemData(const QModelIndex & index)
bool c_QAbstractProxyModel__clearItemData_QModelIndex(void *thisObj,
                                                      void *index_);
// QAbstractProxyModel::columnCount(const QModelIndex & parent) const
int c_QAbstractProxyModel__columnCount_QModelIndex(void *thisObj,
                                                   void *parent_);
// QAbstractProxyModel::customEvent(QEvent * event)
void c_QAbstractProxyModel__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractProxyModel::data(const QModelIndex & proxyIndex, int role) const
void *c_QAbstractProxyModel__data_QModelIndex_int(void *thisObj,
                                                  void *proxyIndex_, int role);
// QAbstractProxyModel::event(QEvent * event)
bool c_QAbstractProxyModel__event_QEvent(void *thisObj, void *event_);
// QAbstractProxyModel::eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractProxyModel__eventFilter_QObject_QEvent(void *thisObj,
                                                       void *watched_,
                                                       void *event_);
// QAbstractProxyModel::fetchMore(const QModelIndex & parent)
void c_QAbstractProxyModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractProxyModel::hasChildren(const QModelIndex & parent) const
bool c_QAbstractProxyModel__hasChildren_QModelIndex(void *thisObj,
                                                    void *parent_);
// QAbstractProxyModel::headerData(int section, Qt::Orientation orientation, int
// role) const
void *c_QAbstractProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                            int section,
                                                            int orientation,
                                                            int role);
// QAbstractProxyModel::index(int row, int column, const QModelIndex & parent)
// const
void *c_QAbstractProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                       int column,
                                                       void *parent_);
// QAbstractProxyModel::insertColumns(int column, int count, const QModelIndex &
// parent)
bool c_QAbstractProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                              int column,
                                                              int count,
                                                              void *parent_);
// QAbstractProxyModel::insertRows(int row, int count, const QModelIndex &
// parent)
bool c_QAbstractProxyModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                           int row, int count,
                                                           void *parent_);
// QAbstractProxyModel::mapFromSource(const QModelIndex & sourceIndex) const
void *c_QAbstractProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                       void *sourceIndex_);
// QAbstractProxyModel::mapSelectionFromSource(const QItemSelection & selection)
// const
void *
c_QAbstractProxyModel__mapSelectionFromSource_QItemSelection(void *thisObj,
                                                             void *selection_);
// QAbstractProxyModel::mapSelectionToSource(const QItemSelection & selection)
// const
void *
c_QAbstractProxyModel__mapSelectionToSource_QItemSelection(void *thisObj,
                                                           void *selection_);
// QAbstractProxyModel::mapToSource(const QModelIndex & proxyIndex) const
void *c_QAbstractProxyModel__mapToSource_QModelIndex(void *thisObj,
                                                     void *proxyIndex_);
// QAbstractProxyModel::mimeTypes() const
void *c_QAbstractProxyModel__mimeTypes(void *thisObj);
// QAbstractProxyModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
bool c_QAbstractProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QAbstractProxyModel::moveRows(const QModelIndex & sourceParent, int
// sourceRow, int count, const QModelIndex & destinationParent, int
// destinationChild)
bool c_QAbstractProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QAbstractProxyModel::parent(const QModelIndex & child) const
void *c_QAbstractProxyModel__parentIndex_QModelIndex(void *thisObj,
                                                     void *child_);
// QAbstractProxyModel::removeColumns(int column, int count, const QModelIndex &
// parent)
bool c_QAbstractProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                              int column,
                                                              int count,
                                                              void *parent_);
// QAbstractProxyModel::removeRows(int row, int count, const QModelIndex &
// parent)
bool c_QAbstractProxyModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                           int row, int count,
                                                           void *parent_);
// QAbstractProxyModel::resetInternalData()
void c_QAbstractProxyModel__resetInternalData(void *thisObj);
// QAbstractProxyModel::revert()
void c_QAbstractProxyModel__revert(void *thisObj);
// QAbstractProxyModel::rowCount(const QModelIndex & parent) const
int c_QAbstractProxyModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractProxyModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
bool c_QAbstractProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                             void *index_,
                                                             void *value_,
                                                             int role);
// QAbstractProxyModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
bool c_QAbstractProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QAbstractProxyModel::setSourceModel(QAbstractItemModel * sourceModel)
void c_QAbstractProxyModel__setSourceModel_QAbstractItemModel(
    void *thisObj, void *sourceModel_);
// QAbstractProxyModel::sibling(int row, int column, const QModelIndex & idx)
// const
void *c_QAbstractProxyModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *idx_);
// QAbstractProxyModel::sort(int column, Qt::SortOrder order)
void c_QAbstractProxyModel__sort_int_SortOrder(void *thisObj, int column,
                                               int order);
// QAbstractProxyModel::sourceModel() const
void *c_QAbstractProxyModel__sourceModel(void *thisObj);
// QAbstractProxyModel::span(const QModelIndex & index) const
void *c_QAbstractProxyModel__span_QModelIndex(void *thisObj, void *index_);
// QAbstractProxyModel::submit()
bool c_QAbstractProxyModel__submit(void *thisObj);
// QAbstractProxyModel::tr(const char * s, const char * c, int n)
void *c_static_QAbstractProxyModel__tr_char_char_int(const char *s,
                                                     const char *c, int n);
void c_QAbstractProxyModel__destructor(void *thisObj);
void c_QAbstractProxyModel__registerVirtualMethodCallback(void *ptr,
                                                          void *callback,
                                                          int methodId);
void c_QAbstractProxyModel_Finalizer(void *cppObj); // QSortFilterProxyModel::QSortFilterProxyModel(QObject
                                                    // * parent)
void *c_QSortFilterProxyModel__constructor_QObject(void *parent_);
// QSortFilterProxyModel::autoAcceptChildRows() const
bool c_QSortFilterProxyModel__autoAcceptChildRows(void *thisObj);
// QSortFilterProxyModel::autoAcceptChildRowsChanged(bool autoAcceptChildRows)
void c_QSortFilterProxyModel__autoAcceptChildRowsChanged_bool(
    void *thisObj, bool autoAcceptChildRows);
void c_QSortFilterProxyModel__onAutoAcceptChildRowsChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::buddy(const QModelIndex & index)
                     // const
void *c_QSortFilterProxyModel__buddy_QModelIndex(void *thisObj, void *index_);
// QSortFilterProxyModel::canFetchMore(const QModelIndex & parent) const
bool c_QSortFilterProxyModel__canFetchMore_QModelIndex(void *thisObj,
                                                       void *parent_);
// QSortFilterProxyModel::clearItemData(const QModelIndex & index)
bool c_QSortFilterProxyModel__clearItemData_QModelIndex(void *thisObj,
                                                        void *index_);
// QSortFilterProxyModel::columnCount(const QModelIndex & parent) const
int c_QSortFilterProxyModel__columnCount_QModelIndex(void *thisObj,
                                                     void *parent_);
// QSortFilterProxyModel::customEvent(QEvent * event)
void c_QSortFilterProxyModel__customEvent_QEvent(void *thisObj, void *event_);
// QSortFilterProxyModel::data(const QModelIndex & index, int role) const
void *c_QSortFilterProxyModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                    int role);
// QSortFilterProxyModel::dynamicSortFilter() const
bool c_QSortFilterProxyModel__dynamicSortFilter(void *thisObj);
// QSortFilterProxyModel::dynamicSortFilterChanged(bool dynamicSortFilter)
void c_QSortFilterProxyModel__dynamicSortFilterChanged_bool(
    void *thisObj, bool dynamicSortFilter);
void c_QSortFilterProxyModel__onDynamicSortFilterChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::event(QEvent * event)
bool c_QSortFilterProxyModel__event_QEvent(void *thisObj, void *event_);
// QSortFilterProxyModel::eventFilter(QObject * watched, QEvent * event)
bool c_QSortFilterProxyModel__eventFilter_QObject_QEvent(void *thisObj,
                                                         void *watched_,
                                                         void *event_);
// QSortFilterProxyModel::fetchMore(const QModelIndex & parent)
void c_QSortFilterProxyModel__fetchMore_QModelIndex(void *thisObj,
                                                    void *parent_);
// QSortFilterProxyModel::filterAcceptsColumn(int source_column, const
// QModelIndex & source_parent) const
bool c_QSortFilterProxyModel__filterAcceptsColumn_int_QModelIndex(
    void *thisObj, int source_column, void *source_parent_);
// QSortFilterProxyModel::filterAcceptsRow(int source_row, const QModelIndex &
// source_parent) const
bool c_QSortFilterProxyModel__filterAcceptsRow_int_QModelIndex(
    void *thisObj, int source_row, void *source_parent_);
// QSortFilterProxyModel::filterKeyColumn() const
int c_QSortFilterProxyModel__filterKeyColumn(void *thisObj);
// QSortFilterProxyModel::filterRole() const
int c_QSortFilterProxyModel__filterRole(void *thisObj);
// QSortFilterProxyModel::filterRoleChanged(int filterRole)
void c_QSortFilterProxyModel__filterRoleChanged_int(void *thisObj,
                                                    int filterRole);
void c_QSortFilterProxyModel__onFilterRoleChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::hasChildren(const QModelIndex &
                     // parent) const
bool c_QSortFilterProxyModel__hasChildren_QModelIndex(void *thisObj,
                                                      void *parent_);
// QSortFilterProxyModel::headerData(int section, Qt::Orientation orientation,
// int role) const
void *c_QSortFilterProxyModel__headerData_int_Orientation_int(void *thisObj,
                                                              int section,
                                                              int orientation,
                                                              int role);
// QSortFilterProxyModel::index(int row, int column, const QModelIndex & parent)
// const
void *c_QSortFilterProxyModel__index_int_int_QModelIndex(void *thisObj, int row,
                                                         int column,
                                                         void *parent_);
// QSortFilterProxyModel::insertColumns(int column, int count, const QModelIndex
// & parent)
bool c_QSortFilterProxyModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                                int column,
                                                                int count,
                                                                void *parent_);
// QSortFilterProxyModel::insertRows(int row, int count, const QModelIndex &
// parent)
bool c_QSortFilterProxyModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                             int row, int count,
                                                             void *parent_);
// QSortFilterProxyModel::invalidate()
void c_QSortFilterProxyModel__invalidate(void *thisObj);
// QSortFilterProxyModel::invalidateColumnsFilter()
void c_QSortFilterProxyModel__invalidateColumnsFilter(void *thisObj);
// QSortFilterProxyModel::invalidateFilter()
void c_QSortFilterProxyModel__invalidateFilter(void *thisObj);
// QSortFilterProxyModel::invalidateRowsFilter()
void c_QSortFilterProxyModel__invalidateRowsFilter(void *thisObj);
// QSortFilterProxyModel::isRecursiveFilteringEnabled() const
bool c_QSortFilterProxyModel__isRecursiveFilteringEnabled(void *thisObj);
// QSortFilterProxyModel::isSortLocaleAware() const
bool c_QSortFilterProxyModel__isSortLocaleAware(void *thisObj);
// QSortFilterProxyModel::lessThan(const QModelIndex & source_left, const
// QModelIndex & source_right) const
bool c_QSortFilterProxyModel__lessThan_QModelIndex_QModelIndex(
    void *thisObj, void *source_left_, void *source_right_);
// QSortFilterProxyModel::mapFromSource(const QModelIndex & sourceIndex) const
void *c_QSortFilterProxyModel__mapFromSource_QModelIndex(void *thisObj,
                                                         void *sourceIndex_);
// QSortFilterProxyModel::mapSelectionFromSource(const QItemSelection &
// sourceSelection) const
void *c_QSortFilterProxyModel__mapSelectionFromSource_QItemSelection(
    void *thisObj, void *sourceSelection_);
// QSortFilterProxyModel::mapSelectionToSource(const QItemSelection &
// proxySelection) const
void *c_QSortFilterProxyModel__mapSelectionToSource_QItemSelection(
    void *thisObj, void *proxySelection_);
// QSortFilterProxyModel::mapToSource(const QModelIndex & proxyIndex) const
void *c_QSortFilterProxyModel__mapToSource_QModelIndex(void *thisObj,
                                                       void *proxyIndex_);
// QSortFilterProxyModel::mimeTypes() const
void *c_QSortFilterProxyModel__mimeTypes(void *thisObj);
// QSortFilterProxyModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
bool c_QSortFilterProxyModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QSortFilterProxyModel::moveRows(const QModelIndex & sourceParent, int
// sourceRow, int count, const QModelIndex & destinationParent, int
// destinationChild)
bool c_QSortFilterProxyModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QSortFilterProxyModel::parent(const QModelIndex & child) const
void *c_QSortFilterProxyModel__parentIndex_QModelIndex(void *thisObj,
                                                       void *child_);
// QSortFilterProxyModel::recursiveFilteringEnabledChanged(bool
// recursiveFilteringEnabled)
void c_QSortFilterProxyModel__recursiveFilteringEnabledChanged_bool(
    void *thisObj, bool recursiveFilteringEnabled);
void c_QSortFilterProxyModel__onRecursiveFilteringEnabledChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::removeColumns(int column, int
                     // count, const QModelIndex & parent)
bool c_QSortFilterProxyModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                                int column,
                                                                int count,
                                                                void *parent_);
// QSortFilterProxyModel::removeRows(int row, int count, const QModelIndex &
// parent)
bool c_QSortFilterProxyModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                             int row, int count,
                                                             void *parent_);
// QSortFilterProxyModel::resetInternalData()
void c_QSortFilterProxyModel__resetInternalData(void *thisObj);
// QSortFilterProxyModel::revert()
void c_QSortFilterProxyModel__revert(void *thisObj);
// QSortFilterProxyModel::rowCount(const QModelIndex & parent) const
int c_QSortFilterProxyModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QSortFilterProxyModel::setAutoAcceptChildRows(bool accept)
void c_QSortFilterProxyModel__setAutoAcceptChildRows_bool(void *thisObj,
                                                          bool accept);
// QSortFilterProxyModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
bool c_QSortFilterProxyModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                               void *index_,
                                                               void *value_,
                                                               int role);
// QSortFilterProxyModel::setDynamicSortFilter(bool enable)
void c_QSortFilterProxyModel__setDynamicSortFilter_bool(void *thisObj,
                                                        bool enable);
// QSortFilterProxyModel::setFilterFixedString(const QString & pattern)
void c_QSortFilterProxyModel__setFilterFixedString_QString(
    void *thisObj, const char *pattern_);
// QSortFilterProxyModel::setFilterKeyColumn(int column)
void c_QSortFilterProxyModel__setFilterKeyColumn_int(void *thisObj, int column);
// QSortFilterProxyModel::setFilterRegularExpression(const QString & pattern)
void c_QSortFilterProxyModel__setFilterRegularExpression_QString(
    void *thisObj, const char *pattern_);
// QSortFilterProxyModel::setFilterRole(int role)
void c_QSortFilterProxyModel__setFilterRole_int(void *thisObj, int role);
// QSortFilterProxyModel::setFilterWildcard(const QString & pattern)
void c_QSortFilterProxyModel__setFilterWildcard_QString(void *thisObj,
                                                        const char *pattern_);
// QSortFilterProxyModel::setHeaderData(int section, Qt::Orientation
// orientation, const QVariant & value, int role)
bool c_QSortFilterProxyModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QSortFilterProxyModel::setRecursiveFilteringEnabled(bool recursive)
void c_QSortFilterProxyModel__setRecursiveFilteringEnabled_bool(void *thisObj,
                                                                bool recursive);
// QSortFilterProxyModel::setSortLocaleAware(bool on)
void c_QSortFilterProxyModel__setSortLocaleAware_bool(void *thisObj, bool on);
// QSortFilterProxyModel::setSortRole(int role)
void c_QSortFilterProxyModel__setSortRole_int(void *thisObj, int role);
// QSortFilterProxyModel::setSourceModel(QAbstractItemModel * sourceModel)
void c_QSortFilterProxyModel__setSourceModel_QAbstractItemModel(
    void *thisObj, void *sourceModel_);
// QSortFilterProxyModel::sibling(int row, int column, const QModelIndex & idx)
// const
void *c_QSortFilterProxyModel__sibling_int_int_QModelIndex(void *thisObj,
                                                           int row, int column,
                                                           void *idx_);
// QSortFilterProxyModel::sort(int column, Qt::SortOrder order)
void c_QSortFilterProxyModel__sort_int_SortOrder(void *thisObj, int column,
                                                 int order);
// QSortFilterProxyModel::sortColumn() const
int c_QSortFilterProxyModel__sortColumn(void *thisObj);
// QSortFilterProxyModel::sortLocaleAwareChanged(bool sortLocaleAware)
void c_QSortFilterProxyModel__sortLocaleAwareChanged_bool(void *thisObj,
                                                          bool sortLocaleAware);
void c_QSortFilterProxyModel__onSortLocaleAwareChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::sortOrder() const
int c_QSortFilterProxyModel__sortOrder(void *thisObj);
// QSortFilterProxyModel::sortRole() const
int c_QSortFilterProxyModel__sortRole(void *thisObj);
// QSortFilterProxyModel::sortRoleChanged(int sortRole)
void c_QSortFilterProxyModel__sortRoleChanged_int(void *thisObj, int sortRole);
void c_QSortFilterProxyModel__onSortRoleChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QSortFilterProxyModel::span(const QModelIndex & index)
                     // const
void *c_QSortFilterProxyModel__span_QModelIndex(void *thisObj, void *index_);
// QSortFilterProxyModel::submit()
bool c_QSortFilterProxyModel__submit(void *thisObj);
// QSortFilterProxyModel::tr(const char * s, const char * c, int n)
void *c_static_QSortFilterProxyModel__tr_char_char_int(const char *s,
                                                       const char *c, int n);
void c_QSortFilterProxyModel__destructor(void *thisObj);
void c_QSortFilterProxyModel__registerVirtualMethodCallback(void *ptr,
                                                            void *callback,
                                                            int methodId);
void c_QSortFilterProxyModel_Finalizer(
    void *cppObj); // QAbstractListModel::QAbstractListModel(QObject * parent)
void *c_QAbstractListModel__constructor_QObject(void *parent_);
// QAbstractListModel::buddy(const QModelIndex & index) const
void *c_QAbstractListModel__buddy_QModelIndex(void *thisObj, void *index_);
// QAbstractListModel::canFetchMore(const QModelIndex & parent) const
bool c_QAbstractListModel__canFetchMore_QModelIndex(void *thisObj,
                                                    void *parent_);
// QAbstractListModel::clearItemData(const QModelIndex & index)
bool c_QAbstractListModel__clearItemData_QModelIndex(void *thisObj,
                                                     void *index_);
// QAbstractListModel::customEvent(QEvent * event)
void c_QAbstractListModel__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractListModel::data(const QModelIndex & index, int role) const
void *c_QAbstractListModel__data_QModelIndex_int(void *thisObj, void *index_,
                                                 int role);
// QAbstractListModel::event(QEvent * event)
bool c_QAbstractListModel__event_QEvent(void *thisObj, void *event_);
// QAbstractListModel::eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractListModel__eventFilter_QObject_QEvent(void *thisObj,
                                                      void *watched_,
                                                      void *event_);
// QAbstractListModel::fetchMore(const QModelIndex & parent)
void c_QAbstractListModel__fetchMore_QModelIndex(void *thisObj, void *parent_);
// QAbstractListModel::headerData(int section, Qt::Orientation orientation, int
// role) const
void *c_QAbstractListModel__headerData_int_Orientation_int(void *thisObj,
                                                           int section,
                                                           int orientation,
                                                           int role);
// QAbstractListModel::insertColumns(int column, int count, const QModelIndex &
// parent)
bool c_QAbstractListModel__insertColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_);
// QAbstractListModel::insertRows(int row, int count, const QModelIndex &
// parent)
bool c_QAbstractListModel__insertRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_);
// QAbstractListModel::mimeTypes() const
void *c_QAbstractListModel__mimeTypes(void *thisObj);
// QAbstractListModel::moveColumns(const QModelIndex & sourceParent, int
// sourceColumn, int count, const QModelIndex & destinationParent, int
// destinationChild)
bool c_QAbstractListModel__moveColumns_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceColumn, int count,
    void *destinationParent_, int destinationChild);
// QAbstractListModel::moveRows(const QModelIndex & sourceParent, int sourceRow,
// int count, const QModelIndex & destinationParent, int destinationChild)
bool c_QAbstractListModel__moveRows_QModelIndex_int_int_QModelIndex_int(
    void *thisObj, void *sourceParent_, int sourceRow, int count,
    void *destinationParent_, int destinationChild);
// QAbstractListModel::removeColumns(int column, int count, const QModelIndex &
// parent)
bool c_QAbstractListModel__removeColumns_int_int_QModelIndex(void *thisObj,
                                                             int column,
                                                             int count,
                                                             void *parent_);
// QAbstractListModel::removeRows(int row, int count, const QModelIndex &
// parent)
bool c_QAbstractListModel__removeRows_int_int_QModelIndex(void *thisObj,
                                                          int row, int count,
                                                          void *parent_);
// QAbstractListModel::resetInternalData()
void c_QAbstractListModel__resetInternalData(void *thisObj);
// QAbstractListModel::revert()
void c_QAbstractListModel__revert(void *thisObj);
// QAbstractListModel::rowCount(const QModelIndex & parent) const
int c_QAbstractListModel__rowCount_QModelIndex(void *thisObj, void *parent_);
// QAbstractListModel::setData(const QModelIndex & index, const QVariant &
// value, int role)
bool c_QAbstractListModel__setData_QModelIndex_QVariant_int(void *thisObj,
                                                            void *index_,
                                                            void *value_,
                                                            int role);
// QAbstractListModel::setHeaderData(int section, Qt::Orientation orientation,
// const QVariant & value, int role)
bool c_QAbstractListModel__setHeaderData_int_Orientation_QVariant_int(
    void *thisObj, int section, int orientation, void *value_, int role);
// QAbstractListModel::sibling(int row, int column, const QModelIndex & idx)
// const
void *c_QAbstractListModel__sibling_int_int_QModelIndex(void *thisObj, int row,
                                                        int column, void *idx_);
// QAbstractListModel::sort(int column, Qt::SortOrder order)
void c_QAbstractListModel__sort_int_SortOrder(void *thisObj, int column,
                                              int order);
// QAbstractListModel::span(const QModelIndex & index) const
void *c_QAbstractListModel__span_QModelIndex(void *thisObj, void *index_);
// QAbstractListModel::submit()
bool c_QAbstractListModel__submit(void *thisObj);
// QAbstractListModel::tr(const char * s, const char * c, int n)
void *c_static_QAbstractListModel__tr_char_char_int(const char *s,
                                                    const char *c, int n);
void c_QAbstractListModel__destructor(void *thisObj);
void c_QAbstractListModel__registerVirtualMethodCallback(void *ptr,
                                                         void *callback,
                                                         int methodId);
void c_QAbstractListModel_Finalizer(
    void *cppObj); // QAbstractButton::QAbstractButton(QWidget * parent)
void *c_QAbstractButton__constructor_QWidget(void *parent_);
// QAbstractButton::animateClick()
void c_QAbstractButton__animateClick(void *thisObj);
// QAbstractButton::autoExclusive() const
bool c_QAbstractButton__autoExclusive(void *thisObj);
// QAbstractButton::autoRepeat() const
bool c_QAbstractButton__autoRepeat(void *thisObj);
// QAbstractButton::autoRepeatDelay() const
int c_QAbstractButton__autoRepeatDelay(void *thisObj);
// QAbstractButton::autoRepeatInterval() const
int c_QAbstractButton__autoRepeatInterval(void *thisObj);
// QAbstractButton::changeEvent(QEvent * e)
void c_QAbstractButton__changeEvent_QEvent(void *thisObj, void *e_);
// QAbstractButton::checkStateSet()
void c_QAbstractButton__checkStateSet(void *thisObj);
// QAbstractButton::click()
void c_QAbstractButton__click(void *thisObj);
// QAbstractButton::clicked(bool checked)
void c_QAbstractButton__clicked_bool(void *thisObj, bool checked);
void c_QAbstractButton__onClicked_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractButton::customEvent(QEvent * event)
void c_QAbstractButton__customEvent_QEvent(void *thisObj, void *event_);
// QAbstractButton::devType() const
int c_QAbstractButton__devType(void *thisObj);
// QAbstractButton::event(QEvent * e)
bool c_QAbstractButton__event_QEvent(void *thisObj, void *e_);
// QAbstractButton::eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractButton__eventFilter_QObject_QEvent(void *thisObj,
                                                   void *watched_,
                                                   void *event_);
// QAbstractButton::focusNextPrevChild(bool next)
bool c_QAbstractButton__focusNextPrevChild_bool(void *thisObj, bool next);
// QAbstractButton::hasHeightForWidth() const
bool c_QAbstractButton__hasHeightForWidth(void *thisObj);
// QAbstractButton::heightForWidth(int arg__1) const
int c_QAbstractButton__heightForWidth_int(void *thisObj, int arg__1);
// QAbstractButton::hitButton(const QPoint & pos) const
bool c_QAbstractButton__hitButton_QPoint(void *thisObj, void *pos_);
// QAbstractButton::icon() const
void *c_QAbstractButton__icon(void *thisObj);
// QAbstractButton::iconSize() const
void *c_QAbstractButton__iconSize(void *thisObj);
// QAbstractButton::initPainter(QPainter * painter) const
void c_QAbstractButton__initPainter_QPainter(void *thisObj, void *painter_);
// QAbstractButton::isCheckable() const
bool c_QAbstractButton__isCheckable(void *thisObj);
// QAbstractButton::isChecked() const
bool c_QAbstractButton__isChecked(void *thisObj);
// QAbstractButton::isDown() const
bool c_QAbstractButton__isDown(void *thisObj);
// QAbstractButton::leaveEvent(QEvent * event)
void c_QAbstractButton__leaveEvent_QEvent(void *thisObj, void *event_);
// QAbstractButton::minimumSizeHint() const
void *c_QAbstractButton__minimumSizeHint(void *thisObj);
// QAbstractButton::mouseDoubleClickEvent(QMouseEvent * event)
void c_QAbstractButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                          void *event_);
// QAbstractButton::mouseMoveEvent(QMouseEvent * e)
void c_QAbstractButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QAbstractButton::mousePressEvent(QMouseEvent * e)
void c_QAbstractButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QAbstractButton::mouseReleaseEvent(QMouseEvent * e)
void c_QAbstractButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QAbstractButton::nextCheckState()
void c_QAbstractButton__nextCheckState(void *thisObj);
// QAbstractButton::paintEvent(QPaintEvent * e)
void c_QAbstractButton__paintEvent_QPaintEvent(void *thisObj, void *e_);
// QAbstractButton::pressed()
void c_QAbstractButton__pressed(void *thisObj);
void c_QAbstractButton__onPressed(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractButton::released()
void c_QAbstractButton__released(void *thisObj);
void c_QAbstractButton__onReleased(
    void *thisObj, void *contextQObject,
    void *callback); // QAbstractButton::setAutoExclusive(bool arg__1)
void c_QAbstractButton__setAutoExclusive_bool(void *thisObj, bool arg__1);
// QAbstractButton::setAutoRepeat(bool arg__1)
void c_QAbstractButton__setAutoRepeat_bool(void *thisObj, bool arg__1);
// QAbstractButton::setAutoRepeatDelay(int arg__1)
void c_QAbstractButton__setAutoRepeatDelay_int(void *thisObj, int arg__1);
// QAbstractButton::setAutoRepeatInterval(int arg__1)
void c_QAbstractButton__setAutoRepeatInterval_int(void *thisObj, int arg__1);
// QAbstractButton::setCheckable(bool arg__1)
void c_QAbstractButton__setCheckable_bool(void *thisObj, bool arg__1);
// QAbstractButton::setChecked(bool arg__1)
void c_QAbstractButton__setChecked_bool(void *thisObj, bool arg__1);
// QAbstractButton::setDown(bool arg__1)
void c_QAbstractButton__setDown_bool(void *thisObj, bool arg__1);
// QAbstractButton::setIcon(const QIcon & icon)
void c_QAbstractButton__setIcon_QIcon(void *thisObj, void *icon_);
// QAbstractButton::setIconSize(const QSize & size)
void c_QAbstractButton__setIconSize_QSize(void *thisObj, void *size_);
// QAbstractButton::setShortcut(const QKeySequence & key)
void c_QAbstractButton__setShortcut_QKeySequence(void *thisObj, void *key_);
// QAbstractButton::setText(const QString & text)
void c_QAbstractButton__setText_QString(void *thisObj, const char *text_);
// QAbstractButton::setVisible(bool visible)
void c_QAbstractButton__setVisible_bool(void *thisObj, bool visible);
// QAbstractButton::sharedPainter() const
void *c_QAbstractButton__sharedPainter(void *thisObj);
// QAbstractButton::shortcut() const
void *c_QAbstractButton__shortcut(void *thisObj);
// QAbstractButton::sizeHint() const
void *c_QAbstractButton__sizeHint(void *thisObj);
// QAbstractButton::text() const
void *c_QAbstractButton__text(void *thisObj);
// QAbstractButton::toggle()
void c_QAbstractButton__toggle(void *thisObj);
// QAbstractButton::toggled(bool checked)
void c_QAbstractButton__toggled_bool(void *thisObj, bool checked);
void c_QAbstractButton__onToggled_bool(
    void *thisObj, void *contextQObject,
    void *
        callback); // QAbstractButton::tr(const char * s, const char * c, int n)
void *c_static_QAbstractButton__tr_char_char_int(const char *s, const char *c,
                                                 int n);
void c_QAbstractButton__destructor(void *thisObj);
void c_QAbstractButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                                      int methodId);
void c_QAbstractButton_Finalizer(
    void *cppObj); // QPushButton::QPushButton(QWidget * parent)
void *c_QPushButton__constructor_QWidget(void *parent_);
// QPushButton::QPushButton(const QIcon & icon, const QString & text, QWidget *
// parent)
void *c_QPushButton__constructor_QIcon_QString_QWidget(void *icon_,
                                                       const char *text_,
                                                       void *parent_);
// QPushButton::QPushButton(const QString & text, QWidget * parent)
void *c_QPushButton__constructor_QString_QWidget(const char *text_,
                                                 void *parent_);
// QPushButton::autoDefault() const
bool c_QPushButton__autoDefault(void *thisObj);
// QPushButton::changeEvent(QEvent * e)
void c_QPushButton__changeEvent_QEvent(void *thisObj, void *e_);
// QPushButton::checkStateSet()
void c_QPushButton__checkStateSet(void *thisObj);
// QPushButton::customEvent(QEvent * event)
void c_QPushButton__customEvent_QEvent(void *thisObj, void *event_);
// QPushButton::devType() const
int c_QPushButton__devType(void *thisObj);
// QPushButton::event(QEvent * e)
bool c_QPushButton__event_QEvent(void *thisObj, void *e_);
// QPushButton::eventFilter(QObject * watched, QEvent * event)
bool c_QPushButton__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);
// QPushButton::focusNextPrevChild(bool next)
bool c_QPushButton__focusNextPrevChild_bool(void *thisObj, bool next);
// QPushButton::hasHeightForWidth() const
bool c_QPushButton__hasHeightForWidth(void *thisObj);
// QPushButton::heightForWidth(int arg__1) const
int c_QPushButton__heightForWidth_int(void *thisObj, int arg__1);
// QPushButton::hitButton(const QPoint & pos) const
bool c_QPushButton__hitButton_QPoint(void *thisObj, void *pos_);
// QPushButton::initPainter(QPainter * painter) const
void c_QPushButton__initPainter_QPainter(void *thisObj, void *painter_);
// QPushButton::isDefault() const
bool c_QPushButton__isDefault(void *thisObj);
// QPushButton::isFlat() const
bool c_QPushButton__isFlat(void *thisObj);
// QPushButton::leaveEvent(QEvent * event)
void c_QPushButton__leaveEvent_QEvent(void *thisObj, void *event_);
// QPushButton::menu() const
void *c_QPushButton__menu(void *thisObj);
// QPushButton::minimumSizeHint() const
void *c_QPushButton__minimumSizeHint(void *thisObj);
// QPushButton::mouseDoubleClickEvent(QMouseEvent * event)
void c_QPushButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *event_);
// QPushButton::mouseMoveEvent(QMouseEvent * arg__1)
void c_QPushButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QPushButton::mousePressEvent(QMouseEvent * e)
void c_QPushButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QPushButton::mouseReleaseEvent(QMouseEvent * e)
void c_QPushButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QPushButton::nextCheckState()
void c_QPushButton__nextCheckState(void *thisObj);
// QPushButton::paintEvent(QPaintEvent * arg__1)
void c_QPushButton__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QPushButton::setAutoDefault(bool arg__1)
void c_QPushButton__setAutoDefault_bool(void *thisObj, bool arg__1);
// QPushButton::setDefault(bool arg__1)
void c_QPushButton__setDefault_bool(void *thisObj, bool arg__1);
// QPushButton::setFlat(bool arg__1)
void c_QPushButton__setFlat_bool(void *thisObj, bool arg__1);
// QPushButton::setMenu(QMenu * menu)
void c_QPushButton__setMenu_QMenu(void *thisObj, void *menu_);
// QPushButton::setVisible(bool visible)
void c_QPushButton__setVisible_bool(void *thisObj, bool visible);
// QPushButton::sharedPainter() const
void *c_QPushButton__sharedPainter(void *thisObj);
// QPushButton::showMenu()
void c_QPushButton__showMenu(void *thisObj);
// QPushButton::sizeHint() const
void *c_QPushButton__sizeHint(void *thisObj);
// QPushButton::tr(const char * s, const char * c, int n)
void *c_static_QPushButton__tr_char_char_int(const char *s, const char *c,
                                             int n);
void c_QPushButton__destructor(void *thisObj);
void c_QPushButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
void c_QPushButton_Finalizer(
    void *cppObj); // QCheckBox::QCheckBox(QWidget * parent)
void *c_QCheckBox__constructor_QWidget(void *parent_);
// QCheckBox::QCheckBox(const QString & text, QWidget * parent)
void *c_QCheckBox__constructor_QString_QWidget(const char *text_,
                                               void *parent_);
// QCheckBox::changeEvent(QEvent * e)
void c_QCheckBox__changeEvent_QEvent(void *thisObj, void *e_);
// QCheckBox::checkStateSet()
void c_QCheckBox__checkStateSet(void *thisObj);
// QCheckBox::customEvent(QEvent * event)
void c_QCheckBox__customEvent_QEvent(void *thisObj, void *event_);
// QCheckBox::devType() const
int c_QCheckBox__devType(void *thisObj);
// QCheckBox::event(QEvent * e)
bool c_QCheckBox__event_QEvent(void *thisObj, void *e_);
// QCheckBox::eventFilter(QObject * watched, QEvent * event)
bool c_QCheckBox__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_);
// QCheckBox::focusNextPrevChild(bool next)
bool c_QCheckBox__focusNextPrevChild_bool(void *thisObj, bool next);
// QCheckBox::hasHeightForWidth() const
bool c_QCheckBox__hasHeightForWidth(void *thisObj);
// QCheckBox::heightForWidth(int arg__1) const
int c_QCheckBox__heightForWidth_int(void *thisObj, int arg__1);
// QCheckBox::hitButton(const QPoint & pos) const
bool c_QCheckBox__hitButton_QPoint(void *thisObj, void *pos_);
// QCheckBox::initPainter(QPainter * painter) const
void c_QCheckBox__initPainter_QPainter(void *thisObj, void *painter_);
// QCheckBox::isTristate() const
bool c_QCheckBox__isTristate(void *thisObj);
// QCheckBox::leaveEvent(QEvent * event)
void c_QCheckBox__leaveEvent_QEvent(void *thisObj, void *event_);
// QCheckBox::minimumSizeHint() const
void *c_QCheckBox__minimumSizeHint(void *thisObj);
// QCheckBox::mouseDoubleClickEvent(QMouseEvent * event)
void c_QCheckBox__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_);
// QCheckBox::mouseMoveEvent(QMouseEvent * arg__1)
void c_QCheckBox__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QCheckBox::mousePressEvent(QMouseEvent * e)
void c_QCheckBox__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QCheckBox::mouseReleaseEvent(QMouseEvent * e)
void c_QCheckBox__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QCheckBox::nextCheckState()
void c_QCheckBox__nextCheckState(void *thisObj);
// QCheckBox::paintEvent(QPaintEvent * arg__1)
void c_QCheckBox__paintEvent_QPaintEvent(void *thisObj, void *arg__1_);
// QCheckBox::setTristate(bool y)
void c_QCheckBox__setTristate_bool(void *thisObj, bool y);
// QCheckBox::setVisible(bool visible)
void c_QCheckBox__setVisible_bool(void *thisObj, bool visible);
// QCheckBox::sharedPainter() const
void *c_QCheckBox__sharedPainter(void *thisObj);
// QCheckBox::sizeHint() const
void *c_QCheckBox__sizeHint(void *thisObj);
// QCheckBox::stateChanged(int arg__1)
void c_QCheckBox__stateChanged_int(void *thisObj, int arg__1);
void c_QCheckBox__onStateChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QCheckBox::tr(const char * s, const char * c, int n)
void *c_static_QCheckBox__tr_char_char_int(const char *s, const char *c, int n);
void c_QCheckBox__destructor(void *thisObj);
void c_QCheckBox__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
void c_QCheckBox_Finalizer(void *cppObj);
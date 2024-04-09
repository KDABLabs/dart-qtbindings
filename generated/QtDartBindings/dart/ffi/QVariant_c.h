/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qline.h>
#include <qlist.h>
#include <qobject.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QVariant_wrapper : public ::QVariant {
public:
  ~QVariant_wrapper();
  QVariant_wrapper();
  QVariant_wrapper(bool b);
  QVariant_wrapper(const QByteArray &bytearray);
  QVariant_wrapper(const QLine &line);
  QVariant_wrapper(const QLineF &line);
  QVariant_wrapper(const QList<QString> &stringlist);
  QVariant_wrapper(const QList<QVariant> &list);
  QVariant_wrapper(const QModelIndex &modelIndex);
  QVariant_wrapper(const QPoint &pt);
  QVariant_wrapper(const QPointF &pt);
  QVariant_wrapper(const QRect &rect);
  QVariant_wrapper(const QRectF &rect);
  QVariant_wrapper(const QSize &size);
  QVariant_wrapper(const QSizeF &size);
  QVariant_wrapper(const QString &string);
  QVariant_wrapper(const char *str);
  QVariant_wrapper(double d);
  QVariant_wrapper(float f);
  QVariant_wrapper(int i);
  QVariant_wrapper(qint64 ll);
  void clear();
  void detach();
  bool equals(const QVariant &other) const;
  static QVariant fromObject(QObject *arg__1);
  bool isDetached() const;
  bool isNull() const;
  bool isValid() const;
  void setValue(const QVariant &avalue);
  bool toBool() const;
  QByteArray toByteArray() const;
  QLine toLine() const;
  QLineF toLineF() const;
  QList<QVariant> toList() const;
  QModelIndex toModelIndex() const;
  static QObject *toObject(QVariant arg__1);
  QPoint toPoint() const;
  QPointF toPointF() const;
  QRect toRect() const;
  QRectF toRectF() const;
  QSize toSize() const;
  QSizeF toSizeF() const;
  QList<QString> toStringList() const;
  int typeId() const;
  const char *typeName() const;
  int userType() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QVariant::QVariant()
QtDartBindings_EXPORT void *c_QVariant__constructor();
// QVariant::QVariant(bool b)
QtDartBindings_EXPORT void *c_QVariant__constructor_bool(bool b);
// QVariant::QVariant(const QByteArray & bytearray)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QByteArray(void *bytearray_);
// QVariant::QVariant(const QLine & line)
QtDartBindings_EXPORT void *c_QVariant__constructor_QLine(void *line_);
// QVariant::QVariant(const QLineF & line)
QtDartBindings_EXPORT void *c_QVariant__constructor_QLineF(void *line_);
// QVariant::QVariant(const QList<QString > & stringlist)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QList_QString(void *stringlist_);
// QVariant::QVariant(const QList<QVariant > & list)
QtDartBindings_EXPORT void *c_QVariant__constructor_QList_QVariant(void *list_);
// QVariant::QVariant(const QModelIndex & modelIndex)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QModelIndex(void *modelIndex_);
// QVariant::QVariant(const QPoint & pt)
QtDartBindings_EXPORT void *c_QVariant__constructor_QPoint(void *pt_);
// QVariant::QVariant(const QPointF & pt)
QtDartBindings_EXPORT void *c_QVariant__constructor_QPointF(void *pt_);
// QVariant::QVariant(const QRect & rect)
QtDartBindings_EXPORT void *c_QVariant__constructor_QRect(void *rect_);
// QVariant::QVariant(const QRectF & rect)
QtDartBindings_EXPORT void *c_QVariant__constructor_QRectF(void *rect_);
// QVariant::QVariant(const QSize & size)
QtDartBindings_EXPORT void *c_QVariant__constructor_QSize(void *size_);
// QVariant::QVariant(const QSizeF & size)
QtDartBindings_EXPORT void *c_QVariant__constructor_QSizeF(void *size_);
// QVariant::QVariant(const QString & string)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QString(const char *string_);
// QVariant::QVariant(const char * str)
QtDartBindings_EXPORT void *c_QVariant__constructor_char(const char *str);
// QVariant::QVariant(double d)
QtDartBindings_EXPORT void *c_QVariant__constructor_double(double d);
// QVariant::QVariant(float f)
QtDartBindings_EXPORT void *c_QVariant__constructor_float(float f);
// QVariant::QVariant(int i)
QtDartBindings_EXPORT void *c_QVariant__constructor_int(int i);
// QVariant::QVariant(qint64 ll)
QtDartBindings_EXPORT void *c_QVariant__constructor_qint64(qint64 ll);
// QVariant::clear()
QtDartBindings_EXPORT void c_QVariant__clear(void *thisObj);
// QVariant::detach()
QtDartBindings_EXPORT void c_QVariant__detach(void *thisObj);
// QVariant::equals(const QVariant & other) const
QtDartBindings_EXPORT bool c_QVariant__equals_QVariant(void *thisObj,
                                                       void *other_);
// QVariant::fromObject(QObject * arg__1)
QtDartBindings_EXPORT void *
c_static_QVariant__fromObject_QObject(void *arg__1_);
// QVariant::isDetached() const
QtDartBindings_EXPORT bool c_QVariant__isDetached(void *thisObj);
// QVariant::isNull() const
QtDartBindings_EXPORT bool c_QVariant__isNull(void *thisObj);
// QVariant::isValid() const
QtDartBindings_EXPORT bool c_QVariant__isValid(void *thisObj);
// QVariant::setValue(const QVariant & avalue)
QtDartBindings_EXPORT void c_QVariant__setValue_QVariant(void *thisObj,
                                                         void *avalue_);
// QVariant::toBool() const
QtDartBindings_EXPORT bool c_QVariant__toBool(void *thisObj);
// QVariant::toByteArray() const
QtDartBindings_EXPORT void *c_QVariant__toByteArray(void *thisObj);
// QVariant::toLine() const
QtDartBindings_EXPORT void *c_QVariant__toLine(void *thisObj);
// QVariant::toLineF() const
QtDartBindings_EXPORT void *c_QVariant__toLineF(void *thisObj);
// QVariant::toList() const
QtDartBindings_EXPORT void *c_QVariant__toList(void *thisObj);
// QVariant::toModelIndex() const
QtDartBindings_EXPORT void *c_QVariant__toModelIndex(void *thisObj);
// QVariant::toObject(QVariant arg__1)
QtDartBindings_EXPORT void *c_static_QVariant__toObject_QVariant(void *arg__1_);
// QVariant::toPoint() const
QtDartBindings_EXPORT void *c_QVariant__toPoint(void *thisObj);
// QVariant::toPointF() const
QtDartBindings_EXPORT void *c_QVariant__toPointF(void *thisObj);
// QVariant::toRect() const
QtDartBindings_EXPORT void *c_QVariant__toRect(void *thisObj);
// QVariant::toRectF() const
QtDartBindings_EXPORT void *c_QVariant__toRectF(void *thisObj);
// QVariant::toSize() const
QtDartBindings_EXPORT void *c_QVariant__toSize(void *thisObj);
// QVariant::toSizeF() const
QtDartBindings_EXPORT void *c_QVariant__toSizeF(void *thisObj);
// QVariant::toStringList() const
QtDartBindings_EXPORT void *c_QVariant__toStringList(void *thisObj);
// QVariant::typeId() const
QtDartBindings_EXPORT int c_QVariant__typeId(void *thisObj);
// QVariant::typeName() const
QtDartBindings_EXPORT const char *c_QVariant__typeName(void *thisObj);
// QVariant::userType() const
QtDartBindings_EXPORT int c_QVariant__userType(void *thisObj);
QtDartBindings_EXPORT void c_QVariant__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QVariant_Finalizer(void *cppObj);
}

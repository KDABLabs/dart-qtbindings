
// tag=1040
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
// tag=1043
class QVariant_wrapper : public ::QVariant {
public:
  ~QVariant_wrapper();
  // tag=1041
  QVariant_wrapper();
  // tag=1041
  QVariant_wrapper(bool b);
  // tag=1041
  QVariant_wrapper(const QByteArray &bytearray);
  // tag=1041
  QVariant_wrapper(const QLine &line);
  // tag=1041
  QVariant_wrapper(const QLineF &line);
  // tag=1041
  QVariant_wrapper(const QList<QString> &stringlist);
  // tag=1041
  QVariant_wrapper(const QList<QVariant> &list);
  // tag=1041
  QVariant_wrapper(const QModelIndex &modelIndex);
  // tag=1041
  QVariant_wrapper(const QPoint &pt);
  // tag=1041
  QVariant_wrapper(const QPointF &pt);
  // tag=1041
  QVariant_wrapper(const QRect &rect);
  // tag=1041
  QVariant_wrapper(const QRectF &rect);
  // tag=1041
  QVariant_wrapper(const QSize &size);
  // tag=1041
  QVariant_wrapper(const QSizeF &size);
  // tag=1041
  QVariant_wrapper(const QString &string);
  // tag=1041
  QVariant_wrapper(const char *str);
  // tag=1041
  QVariant_wrapper(double d);
  // tag=1041
  QVariant_wrapper(float f);
  // tag=1041
  QVariant_wrapper(int i);
  // tag=1041
  QVariant_wrapper(qint64 ll);
  // tag=1041
  void clear();
  // tag=1041
  void detach();
  // tag=1041
  bool equals(const QVariant &other) const;
  // tag=1041
  static QVariant fromObject(QObject *arg__1);
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  bool isValid() const;
  // tag=1041
  void setValue(const QVariant &avalue);
  // tag=1041
  bool toBool() const;
  // tag=1041
  QByteArray toByteArray() const;
  // tag=1041
  QLine toLine() const;
  // tag=1041
  QLineF toLineF() const;
  // tag=1041
  QList<QVariant> toList() const;
  // tag=1041
  QModelIndex toModelIndex() const;
  // tag=1041
  static QObject *toObject(QVariant arg__1);
  // tag=1041
  QPoint toPoint() const;
  // tag=1041
  QPointF toPointF() const;
  // tag=1041
  QRect toRect() const;
  // tag=1041
  QRectF toRectF() const;
  // tag=1041
  QSize toSize() const;
  // tag=1041
  QSizeF toSizeF() const;
  // tag=1041
  QList<QString> toStringList() const;
  // tag=1041
  int typeId() const;
  // tag=1041
  const char *typeName() const;
  // tag=1041
  int userType() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QVariant::QVariant()
QtDartBindings_EXPORT void *c_QVariant__constructor();

// tag=1067
//  QVariant::QVariant(bool b)
QtDartBindings_EXPORT void *c_QVariant__constructor_bool(bool b);

// tag=1067
//  QVariant::QVariant(const QByteArray & bytearray)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QByteArray(void *bytearray_);

// tag=1067
//  QVariant::QVariant(const QLine & line)
QtDartBindings_EXPORT void *c_QVariant__constructor_QLine(void *line_);

// tag=1067
//  QVariant::QVariant(const QLineF & line)
QtDartBindings_EXPORT void *c_QVariant__constructor_QLineF(void *line_);

// tag=1067
//  QVariant::QVariant(const QList<QString > & stringlist)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QList_QString(void *stringlist_);

// tag=1067
//  QVariant::QVariant(const QList<QVariant > & list)
QtDartBindings_EXPORT void *c_QVariant__constructor_QList_QVariant(void *list_);

// tag=1067
//  QVariant::QVariant(const QModelIndex & modelIndex)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QModelIndex(void *modelIndex_);

// tag=1067
//  QVariant::QVariant(const QPoint & pt)
QtDartBindings_EXPORT void *c_QVariant__constructor_QPoint(void *pt_);

// tag=1067
//  QVariant::QVariant(const QPointF & pt)
QtDartBindings_EXPORT void *c_QVariant__constructor_QPointF(void *pt_);

// tag=1067
//  QVariant::QVariant(const QRect & rect)
QtDartBindings_EXPORT void *c_QVariant__constructor_QRect(void *rect_);

// tag=1067
//  QVariant::QVariant(const QRectF & rect)
QtDartBindings_EXPORT void *c_QVariant__constructor_QRectF(void *rect_);

// tag=1067
//  QVariant::QVariant(const QSize & size)
QtDartBindings_EXPORT void *c_QVariant__constructor_QSize(void *size_);

// tag=1067
//  QVariant::QVariant(const QSizeF & size)
QtDartBindings_EXPORT void *c_QVariant__constructor_QSizeF(void *size_);

// tag=1067
//  QVariant::QVariant(const QString & string)
QtDartBindings_EXPORT void *
c_QVariant__constructor_QString(const char *string_);

// tag=1067
//  QVariant::QVariant(const char * str)
QtDartBindings_EXPORT void *c_QVariant__constructor_char(const char *str);

// tag=1067
//  QVariant::QVariant(double d)
QtDartBindings_EXPORT void *c_QVariant__constructor_double(double d);

// tag=1067
//  QVariant::QVariant(float f)
QtDartBindings_EXPORT void *c_QVariant__constructor_float(float f);

// tag=1067
//  QVariant::QVariant(int i)
QtDartBindings_EXPORT void *c_QVariant__constructor_int(int i);

// tag=1067
//  QVariant::QVariant(qint64 ll)
QtDartBindings_EXPORT void *c_QVariant__constructor_qint64(qint64 ll);

// tag=1067
//  QVariant::clear()
QtDartBindings_EXPORT void c_QVariant__clear(void *thisObj);

// tag=1067
//  QVariant::detach()
QtDartBindings_EXPORT void c_QVariant__detach(void *thisObj);

// tag=1067
//  QVariant::equals(const QVariant & other) const
QtDartBindings_EXPORT bool c_QVariant__equals_QVariant(void *thisObj,
                                                       void *other_);

// tag=1067
//  QVariant::fromObject(QObject * arg__1)
QtDartBindings_EXPORT void *
c_static_QVariant__fromObject_QObject(void *arg__1_);

// tag=1067
//  QVariant::isDetached() const
QtDartBindings_EXPORT bool c_QVariant__isDetached(void *thisObj);

// tag=1067
//  QVariant::isNull() const
QtDartBindings_EXPORT bool c_QVariant__isNull(void *thisObj);

// tag=1067
//  QVariant::isValid() const
QtDartBindings_EXPORT bool c_QVariant__isValid(void *thisObj);

// tag=1067
//  QVariant::setValue(const QVariant & avalue)
QtDartBindings_EXPORT void c_QVariant__setValue_QVariant(void *thisObj,
                                                         void *avalue_);

// tag=1067
//  QVariant::toBool() const
QtDartBindings_EXPORT bool c_QVariant__toBool(void *thisObj);

// tag=1067
//  QVariant::toByteArray() const
QtDartBindings_EXPORT void *c_QVariant__toByteArray(void *thisObj);

// tag=1067
//  QVariant::toLine() const
QtDartBindings_EXPORT void *c_QVariant__toLine(void *thisObj);

// tag=1067
//  QVariant::toLineF() const
QtDartBindings_EXPORT void *c_QVariant__toLineF(void *thisObj);

// tag=1067
//  QVariant::toList() const
QtDartBindings_EXPORT void *c_QVariant__toList(void *thisObj);

// tag=1067
//  QVariant::toModelIndex() const
QtDartBindings_EXPORT void *c_QVariant__toModelIndex(void *thisObj);

// tag=1067
//  QVariant::toObject(QVariant arg__1)
QtDartBindings_EXPORT void *c_static_QVariant__toObject_QVariant(void *arg__1_);

// tag=1067
//  QVariant::toPoint() const
QtDartBindings_EXPORT void *c_QVariant__toPoint(void *thisObj);

// tag=1067
//  QVariant::toPointF() const
QtDartBindings_EXPORT void *c_QVariant__toPointF(void *thisObj);

// tag=1067
//  QVariant::toRect() const
QtDartBindings_EXPORT void *c_QVariant__toRect(void *thisObj);

// tag=1067
//  QVariant::toRectF() const
QtDartBindings_EXPORT void *c_QVariant__toRectF(void *thisObj);

// tag=1067
//  QVariant::toSize() const
QtDartBindings_EXPORT void *c_QVariant__toSize(void *thisObj);

// tag=1067
//  QVariant::toSizeF() const
QtDartBindings_EXPORT void *c_QVariant__toSizeF(void *thisObj);

// tag=1067
//  QVariant::toStringList() const
QtDartBindings_EXPORT void *c_QVariant__toStringList(void *thisObj);

// tag=1067
//  QVariant::typeId() const
QtDartBindings_EXPORT int c_QVariant__typeId(void *thisObj);

// tag=1067
//  QVariant::typeName() const
QtDartBindings_EXPORT const char *c_QVariant__typeName(void *thisObj);

// tag=1067
//  QVariant::userType() const
QtDartBindings_EXPORT int c_QVariant__userType(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QVariant__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QVariant_Finalizer(void *, void *cppObj, void *);
}

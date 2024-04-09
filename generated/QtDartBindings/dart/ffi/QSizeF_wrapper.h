
// tag=1040
#include "QtDartBindings_exports.h"
#include <qsize.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QSizeF_wrapper : public ::QSizeF {
public:
  ~QSizeF_wrapper();
  // tag=1041
  QSizeF_wrapper();
  // tag=1041
  QSizeF_wrapper(const QSize &sz);
  // tag=1041
  QSizeF_wrapper(qreal w, qreal h);
  // tag=1041
  QSizeF boundedTo(const QSizeF &arg__1) const;
  // tag=1041
  QSizeF expandedTo(const QSizeF &arg__1) const;
  // tag=1041
  qreal height() const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  bool isValid() const;
  // tag=1041
  void setHeight(qreal h);
  // tag=1041
  void setWidth(qreal w);
  // tag=1041
  QSize toSize() const;
  // tag=1041
  void transpose();
  // tag=1041
  QSizeF transposed() const;
  // tag=1041
  qreal width() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QSizeF::QSizeF()
QtDartBindings_EXPORT void *c_QSizeF__constructor();

// tag=1067
//  QSizeF::QSizeF(const QSize & sz)
QtDartBindings_EXPORT void *c_QSizeF__constructor_QSize(void *sz_);

// tag=1067
//  QSizeF::QSizeF(qreal w, qreal h)
QtDartBindings_EXPORT void *c_QSizeF__constructor_qreal_qreal(qreal w, qreal h);

// tag=1067
//  QSizeF::boundedTo(const QSizeF & arg__1) const
QtDartBindings_EXPORT void *c_QSizeF__boundedTo_QSizeF(void *thisObj,
                                                       void *arg__1_);

// tag=1067
//  QSizeF::expandedTo(const QSizeF & arg__1) const
QtDartBindings_EXPORT void *c_QSizeF__expandedTo_QSizeF(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QSizeF::height() const
QtDartBindings_EXPORT qreal c_QSizeF__height(void *thisObj);

// tag=1067
//  QSizeF::isEmpty() const
QtDartBindings_EXPORT bool c_QSizeF__isEmpty(void *thisObj);

// tag=1067
//  QSizeF::isNull() const
QtDartBindings_EXPORT bool c_QSizeF__isNull(void *thisObj);

// tag=1067
//  QSizeF::isValid() const
QtDartBindings_EXPORT bool c_QSizeF__isValid(void *thisObj);

// tag=1067
//  QSizeF::setHeight(qreal h)
QtDartBindings_EXPORT void c_QSizeF__setHeight_qreal(void *thisObj, qreal h);

// tag=1067
//  QSizeF::setWidth(qreal w)
QtDartBindings_EXPORT void c_QSizeF__setWidth_qreal(void *thisObj, qreal w);

// tag=1067
//  QSizeF::toSize() const
QtDartBindings_EXPORT void *c_QSizeF__toSize(void *thisObj);

// tag=1067
//  QSizeF::transpose()
QtDartBindings_EXPORT void c_QSizeF__transpose(void *thisObj);

// tag=1067
//  QSizeF::transposed() const
QtDartBindings_EXPORT void *c_QSizeF__transposed(void *thisObj);

// tag=1067
//  QSizeF::width() const
QtDartBindings_EXPORT qreal c_QSizeF__width(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QSizeF__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QSizeF_Finalizer(void *, void *cppObj, void *);
}

/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qsize.h>

namespace QtDartBindings_wrappersNS {
class QSizeF_wrapper : public ::QSizeF {
public:
  ~QSizeF_wrapper();
  QSizeF_wrapper();
  QSizeF_wrapper(const QSize &sz);
  QSizeF_wrapper(qreal w, qreal h);
  QSizeF boundedTo(const QSizeF &arg__1) const;
  QSizeF expandedTo(const QSizeF &arg__1) const;
  qreal height() const;
  bool isEmpty() const;
  bool isNull() const;
  bool isValid() const;
  void setHeight(qreal h);
  void setWidth(qreal w);
  QSize toSize() const;
  void transpose();
  QSizeF transposed() const;
  qreal width() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QSizeF::QSizeF()
QtDartBindings_EXPORT void *c_QSizeF__constructor();
// QSizeF::QSizeF(const QSize & sz)
QtDartBindings_EXPORT void *c_QSizeF__constructor_QSize(void *sz_);
// QSizeF::QSizeF(qreal w, qreal h)
QtDartBindings_EXPORT void *c_QSizeF__constructor_qreal_qreal(qreal w, qreal h);
// QSizeF::boundedTo(const QSizeF & arg__1) const
QtDartBindings_EXPORT void *c_QSizeF__boundedTo_QSizeF(void *thisObj,
                                                       void *arg__1_);
// QSizeF::expandedTo(const QSizeF & arg__1) const
QtDartBindings_EXPORT void *c_QSizeF__expandedTo_QSizeF(void *thisObj,
                                                        void *arg__1_);
// QSizeF::height() const
QtDartBindings_EXPORT qreal c_QSizeF__height(void *thisObj);
// QSizeF::isEmpty() const
QtDartBindings_EXPORT bool c_QSizeF__isEmpty(void *thisObj);
// QSizeF::isNull() const
QtDartBindings_EXPORT bool c_QSizeF__isNull(void *thisObj);
// QSizeF::isValid() const
QtDartBindings_EXPORT bool c_QSizeF__isValid(void *thisObj);
// QSizeF::setHeight(qreal h)
QtDartBindings_EXPORT void c_QSizeF__setHeight_qreal(void *thisObj, qreal h);
// QSizeF::setWidth(qreal w)
QtDartBindings_EXPORT void c_QSizeF__setWidth_qreal(void *thisObj, qreal w);
// QSizeF::toSize() const
QtDartBindings_EXPORT void *c_QSizeF__toSize(void *thisObj);
// QSizeF::transpose()
QtDartBindings_EXPORT void c_QSizeF__transpose(void *thisObj);
// QSizeF::transposed() const
QtDartBindings_EXPORT void *c_QSizeF__transposed(void *thisObj);
// QSizeF::width() const
QtDartBindings_EXPORT qreal c_QSizeF__width(void *thisObj);
QtDartBindings_EXPORT void c_QSizeF__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QSizeF_Finalizer(void *cppObj);
}

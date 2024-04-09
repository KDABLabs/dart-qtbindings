/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qsize.h>

namespace QtDartBindings_wrappersNS {
class QSize_wrapper : public ::QSize {
public:
  ~QSize_wrapper();
  QSize_wrapper();
  QSize_wrapper(int w, int h);
  QSize boundedTo(const QSize &arg__1) const;
  QSize expandedTo(const QSize &arg__1) const;
  int height() const;
  bool isEmpty() const;
  bool isNull() const;
  bool isValid() const;
  void setHeight(int h);
  void setWidth(int w);
  QSizeF toSizeF() const;
  void transpose();
  QSize transposed() const;
  int width() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QSize::QSize()
QtDartBindings_EXPORT void *c_QSize__constructor();
// QSize::QSize(int w, int h)
QtDartBindings_EXPORT void *c_QSize__constructor_int_int(int w, int h);
// QSize::boundedTo(const QSize & arg__1) const
QtDartBindings_EXPORT void *c_QSize__boundedTo_QSize(void *thisObj,
                                                     void *arg__1_);
// QSize::expandedTo(const QSize & arg__1) const
QtDartBindings_EXPORT void *c_QSize__expandedTo_QSize(void *thisObj,
                                                      void *arg__1_);
// QSize::height() const
QtDartBindings_EXPORT int c_QSize__height(void *thisObj);
// QSize::isEmpty() const
QtDartBindings_EXPORT bool c_QSize__isEmpty(void *thisObj);
// QSize::isNull() const
QtDartBindings_EXPORT bool c_QSize__isNull(void *thisObj);
// QSize::isValid() const
QtDartBindings_EXPORT bool c_QSize__isValid(void *thisObj);
// QSize::setHeight(int h)
QtDartBindings_EXPORT void c_QSize__setHeight_int(void *thisObj, int h);
// QSize::setWidth(int w)
QtDartBindings_EXPORT void c_QSize__setWidth_int(void *thisObj, int w);
// QSize::toSizeF() const
QtDartBindings_EXPORT void *c_QSize__toSizeF(void *thisObj);
// QSize::transpose()
QtDartBindings_EXPORT void c_QSize__transpose(void *thisObj);
// QSize::transposed() const
QtDartBindings_EXPORT void *c_QSize__transposed(void *thisObj);
// QSize::width() const
QtDartBindings_EXPORT int c_QSize__width(void *thisObj);
QtDartBindings_EXPORT void c_QSize__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QSize_Finalizer(void *cppObj);
}

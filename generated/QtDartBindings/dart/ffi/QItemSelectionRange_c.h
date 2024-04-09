/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>

namespace QtDartBindings_wrappersNS {
class QItemSelectionRange_wrapper : public ::QItemSelectionRange {
public:
  ~QItemSelectionRange_wrapper();
  QItemSelectionRange_wrapper();
  QItemSelectionRange_wrapper(const QModelIndex &index);
  QItemSelectionRange_wrapper(const QModelIndex &topL,
                              const QModelIndex &bottomR);
  int bottom() const;
  bool contains(const QModelIndex &index) const;
  bool contains(int row, int column, const QModelIndex &parentIndex) const;
  int height() const;
  QList<QModelIndex> indexes() const;
  QItemSelectionRange intersected(const QItemSelectionRange &other) const;
  bool intersects(const QItemSelectionRange &other) const;
  bool isEmpty() const;
  bool isValid() const;
  int left() const;
  const QAbstractItemModel *model() const;
  QModelIndex parent() const;
  int right() const;
  int top() const;
  int width() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QItemSelectionRange::QItemSelectionRange()
QtDartBindings_EXPORT void *c_QItemSelectionRange__constructor();
// QItemSelectionRange::QItemSelectionRange(const QModelIndex & index)
QtDartBindings_EXPORT void *
c_QItemSelectionRange__constructor_QModelIndex(void *index_);
// QItemSelectionRange::QItemSelectionRange(const QModelIndex & topL, const
// QModelIndex & bottomR)
QtDartBindings_EXPORT void *
c_QItemSelectionRange__constructor_QModelIndex_QModelIndex(void *topL_,
                                                           void *bottomR_);
// QItemSelectionRange::bottom() const
QtDartBindings_EXPORT int c_QItemSelectionRange__bottom(void *thisObj);
// QItemSelectionRange::contains(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QItemSelectionRange__contains_QModelIndex(void *thisObj, void *index_);
// QItemSelectionRange::contains(int row, int column, const QModelIndex &
// parentIndex) const
QtDartBindings_EXPORT bool c_QItemSelectionRange__contains_int_int_QModelIndex(
    void *thisObj, int row, int column, void *parentIndex_);
// QItemSelectionRange::height() const
QtDartBindings_EXPORT int c_QItemSelectionRange__height(void *thisObj);
// QItemSelectionRange::indexes() const
QtDartBindings_EXPORT void *c_QItemSelectionRange__indexes(void *thisObj);
// QItemSelectionRange::intersected(const QItemSelectionRange & other) const
QtDartBindings_EXPORT void *
c_QItemSelectionRange__intersected_QItemSelectionRange(void *thisObj,
                                                       void *other_);
// QItemSelectionRange::intersects(const QItemSelectionRange & other) const
QtDartBindings_EXPORT bool
c_QItemSelectionRange__intersects_QItemSelectionRange(void *thisObj,
                                                      void *other_);
// QItemSelectionRange::isEmpty() const
QtDartBindings_EXPORT bool c_QItemSelectionRange__isEmpty(void *thisObj);
// QItemSelectionRange::isValid() const
QtDartBindings_EXPORT bool c_QItemSelectionRange__isValid(void *thisObj);
// QItemSelectionRange::left() const
QtDartBindings_EXPORT int c_QItemSelectionRange__left(void *thisObj);
// QItemSelectionRange::model() const
QtDartBindings_EXPORT void *c_QItemSelectionRange__model(void *thisObj);
// QItemSelectionRange::parent() const
QtDartBindings_EXPORT void *c_QItemSelectionRange__parent(void *thisObj);
// QItemSelectionRange::right() const
QtDartBindings_EXPORT int c_QItemSelectionRange__right(void *thisObj);
// QItemSelectionRange::top() const
QtDartBindings_EXPORT int c_QItemSelectionRange__top(void *thisObj);
// QItemSelectionRange::width() const
QtDartBindings_EXPORT int c_QItemSelectionRange__width(void *thisObj);
QtDartBindings_EXPORT void c_QItemSelectionRange__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QItemSelectionRange_Finalizer(void *cppObj);
}

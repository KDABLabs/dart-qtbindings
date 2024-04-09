/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QModelIndex_wrapper : public ::QModelIndex {
public:
  ~QModelIndex_wrapper();
  QModelIndex_wrapper();
  int column() const;
  QVariant data(int role = Qt::DisplayRole) const;
  bool isValid() const;
  const QAbstractItemModel *model() const;
  QModelIndex parent() const;
  int row() const;
  QModelIndex sibling(int row, int column) const;
  QModelIndex siblingAtColumn(int column) const;
  QModelIndex siblingAtRow(int row) const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QModelIndex::QModelIndex()
QtDartBindings_EXPORT void *c_QModelIndex__constructor();
// QModelIndex::column() const
QtDartBindings_EXPORT int c_QModelIndex__column(void *thisObj);
// QModelIndex::data(int role) const
QtDartBindings_EXPORT void *c_QModelIndex__data_int(void *thisObj, int role);
// QModelIndex::isValid() const
QtDartBindings_EXPORT bool c_QModelIndex__isValid(void *thisObj);
// QModelIndex::model() const
QtDartBindings_EXPORT void *c_QModelIndex__model(void *thisObj);
// QModelIndex::parent() const
QtDartBindings_EXPORT void *c_QModelIndex__parent(void *thisObj);
// QModelIndex::row() const
QtDartBindings_EXPORT int c_QModelIndex__row(void *thisObj);
// QModelIndex::sibling(int row, int column) const
QtDartBindings_EXPORT void *c_QModelIndex__sibling_int_int(void *thisObj,
                                                           int row, int column);
// QModelIndex::siblingAtColumn(int column) const
QtDartBindings_EXPORT void *c_QModelIndex__siblingAtColumn_int(void *thisObj,
                                                               int column);
// QModelIndex::siblingAtRow(int row) const
QtDartBindings_EXPORT void *c_QModelIndex__siblingAtRow_int(void *thisObj,
                                                            int row);
QtDartBindings_EXPORT void c_QModelIndex__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QModelIndex_Finalizer(void *cppObj);
}

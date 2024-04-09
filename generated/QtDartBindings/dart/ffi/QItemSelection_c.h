/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>

namespace QtDartBindings_wrappersNS {
class QItemSelection_wrapper : public ::QItemSelection {
public:
  ~QItemSelection_wrapper();
  QItemSelection_wrapper(const QModelIndex &topLeft,
                         const QModelIndex &bottomRight);
  void append(const QList<QItemSelectionRange> &l);
  const QItemSelectionRange &at(qsizetype i) const;
  QItemSelectionRange &back();
  qsizetype capacity() const;
  void clear();
  const QItemSelectionRange *constData() const;
  const QItemSelectionRange &constFirst() const;
  const QItemSelectionRange &constLast() const;
  bool contains(const QModelIndex &index) const;
  qsizetype count() const;
  QItemSelectionRange *data();
  void detach();
  bool empty() const;
  QItemSelectionRange &first();
  QList<QItemSelectionRange> first(qsizetype n) const;
  static QList<QItemSelectionRange>
  fromList(const QList<QItemSelectionRange> &list);
  static QList<QItemSelectionRange>
  fromVector(const QList<QItemSelectionRange> &vector);
  QItemSelectionRange &front();
  QList<QModelIndex> indexes() const;
  bool isDetached() const;
  bool isEmpty() const;
  bool isSharedWith(const QList<QItemSelectionRange> &other) const;
  QItemSelectionRange &last();
  QList<QItemSelectionRange> last(qsizetype n) const;
  qsizetype length() const;
  void merge(const QItemSelection &other,
             QFlags<QItemSelectionModel::SelectionFlag> command);
  QList<QItemSelectionRange> mid(qsizetype pos, qsizetype len = -1) const;
  void move(qsizetype from, qsizetype to);
  void pop_back();
  void pop_front();
  void remove(qsizetype i, qsizetype n = 1);
  void removeAt(qsizetype i);
  void removeFirst();
  void removeLast();
  void reserve(qsizetype size);
  void resize(qsizetype size);
  void select(const QModelIndex &topLeft, const QModelIndex &bottomRight);
  void shrink_to_fit();
  qsizetype size() const;
  QList<QItemSelectionRange> sliced(qsizetype pos) const;
  QList<QItemSelectionRange> sliced(qsizetype pos, qsizetype n) const;
  static void split(const QItemSelectionRange &range,
                    const QItemSelectionRange &other, QItemSelection *result);
  void squeeze();
  void swapItemsAt(qsizetype i, qsizetype j);
  QItemSelectionRange takeAt(qsizetype i);
  QList<QItemSelectionRange> toList() const;
  QList<QItemSelectionRange> toVector() const;
  QItemSelectionRange value(qsizetype i) const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QItemSelection::QItemSelection(const QModelIndex & topLeft, const QModelIndex
// & bottomRight)
QtDartBindings_EXPORT void *
c_QItemSelection__constructor_QModelIndex_QModelIndex(void *topLeft_,
                                                      void *bottomRight_);
// QItemSelection::append(const QList<QItemSelectionRange > & l)
QtDartBindings_EXPORT void
c_QItemSelection__append_QList_QItemSelectionRange(void *thisObj, void *l_);
// QItemSelection::at(qsizetype i) const
QtDartBindings_EXPORT void *c_QItemSelection__at_qsizetype(void *thisObj,
                                                           qsizetype i);
// QItemSelection::back()
QtDartBindings_EXPORT void *c_QItemSelection__back(void *thisObj);
// QItemSelection::capacity() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__capacity(void *thisObj);
// QItemSelection::clear()
QtDartBindings_EXPORT void c_QItemSelection__clear(void *thisObj);
// QItemSelection::constData() const
QtDartBindings_EXPORT void *c_QItemSelection__constData(void *thisObj);
// QItemSelection::constFirst() const
QtDartBindings_EXPORT void *c_QItemSelection__constFirst(void *thisObj);
// QItemSelection::constLast() const
QtDartBindings_EXPORT void *c_QItemSelection__constLast(void *thisObj);
// QItemSelection::contains(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QItemSelection__contains_QModelIndex(void *thisObj,
                                                                  void *index_);
// QItemSelection::count() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__count(void *thisObj);
// QItemSelection::data()
QtDartBindings_EXPORT void *c_QItemSelection__data(void *thisObj);
// QItemSelection::detach()
QtDartBindings_EXPORT void c_QItemSelection__detach(void *thisObj);
// QItemSelection::empty() const
QtDartBindings_EXPORT bool c_QItemSelection__empty(void *thisObj);
// QItemSelection::first()
QtDartBindings_EXPORT void *c_QItemSelection__first(void *thisObj);
// QItemSelection::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QItemSelection__first_qsizetype(void *thisObj,
                                                              qsizetype n);
// QItemSelection::fromList(const QList<QItemSelectionRange > & list)
QtDartBindings_EXPORT void *
c_static_QItemSelection__fromList_QList_QItemSelectionRange(void *list_);
// QItemSelection::fromVector(const QList<QItemSelectionRange > & vector)
QtDartBindings_EXPORT void *
c_static_QItemSelection__fromVector_QList_QItemSelectionRange(void *vector_);
// QItemSelection::front()
QtDartBindings_EXPORT void *c_QItemSelection__front(void *thisObj);
// QItemSelection::indexes() const
QtDartBindings_EXPORT void *c_QItemSelection__indexes(void *thisObj);
// QItemSelection::isDetached() const
QtDartBindings_EXPORT bool c_QItemSelection__isDetached(void *thisObj);
// QItemSelection::isEmpty() const
QtDartBindings_EXPORT bool c_QItemSelection__isEmpty(void *thisObj);
// QItemSelection::isSharedWith(const QList<QItemSelectionRange > & other) const
QtDartBindings_EXPORT bool
c_QItemSelection__isSharedWith_QList_QItemSelectionRange(void *thisObj,
                                                         void *other_);
// QItemSelection::last()
QtDartBindings_EXPORT void *c_QItemSelection__last(void *thisObj);
// QItemSelection::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QItemSelection__last_qsizetype(void *thisObj,
                                                             qsizetype n);
// QItemSelection::length() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__length(void *thisObj);
// QItemSelection::merge(const QItemSelection & other,
// QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelection__merge_QItemSelection_SelectionFlags(void *thisObj,
                                                      void *other_,
                                                      int command_);
// QItemSelection::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QItemSelection__mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                          qsizetype len);
// QItemSelection::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QItemSelection__move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                           qsizetype to);
// QItemSelection::pop_back()
QtDartBindings_EXPORT void c_QItemSelection__pop_back(void *thisObj);
// QItemSelection::pop_front()
QtDartBindings_EXPORT void c_QItemSelection__pop_front(void *thisObj);
// QItemSelection::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QItemSelection__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                             qsizetype n);
// QItemSelection::removeAt(qsizetype i)
QtDartBindings_EXPORT void c_QItemSelection__removeAt_qsizetype(void *thisObj,
                                                                qsizetype i);
// QItemSelection::removeFirst()
QtDartBindings_EXPORT void c_QItemSelection__removeFirst(void *thisObj);
// QItemSelection::removeLast()
QtDartBindings_EXPORT void c_QItemSelection__removeLast(void *thisObj);
// QItemSelection::reserve(qsizetype size)
QtDartBindings_EXPORT void c_QItemSelection__reserve_qsizetype(void *thisObj,
                                                               qsizetype size);
// QItemSelection::resize(qsizetype size)
QtDartBindings_EXPORT void c_QItemSelection__resize_qsizetype(void *thisObj,
                                                              qsizetype size);
// QItemSelection::select(const QModelIndex & topLeft, const QModelIndex &
// bottomRight)
QtDartBindings_EXPORT void
c_QItemSelection__select_QModelIndex_QModelIndex(void *thisObj, void *topLeft_,
                                                 void *bottomRight_);
// QItemSelection::shrink_to_fit()
QtDartBindings_EXPORT void c_QItemSelection__shrink_to_fit(void *thisObj);
// QItemSelection::size() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__size(void *thisObj);
// QItemSelection::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QItemSelection__sliced_qsizetype(void *thisObj,
                                                               qsizetype pos);
// QItemSelection::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QItemSelection__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                             qsizetype n);
// QItemSelection::split(const QItemSelectionRange & range, const
// QItemSelectionRange & other, QItemSelection * result)
QtDartBindings_EXPORT void
c_static_QItemSelection__split_QItemSelectionRange_QItemSelectionRange_QItemSelection(
    void *range_, void *other_, void *result_);
// QItemSelection::squeeze()
QtDartBindings_EXPORT void c_QItemSelection__squeeze(void *thisObj);
// QItemSelection::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QItemSelection__swapItemsAt_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype j);
// QItemSelection::takeAt(qsizetype i)
QtDartBindings_EXPORT void *c_QItemSelection__takeAt_qsizetype(void *thisObj,
                                                               qsizetype i);
// QItemSelection::toList() const
QtDartBindings_EXPORT void *c_QItemSelection__toList(void *thisObj);
// QItemSelection::toVector() const
QtDartBindings_EXPORT void *c_QItemSelection__toVector(void *thisObj);
// QItemSelection::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QItemSelection__value_qsizetype(void *thisObj,
                                                              qsizetype i);
QtDartBindings_EXPORT void c_QItemSelection__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QItemSelection_Finalizer(void *cppObj);
}

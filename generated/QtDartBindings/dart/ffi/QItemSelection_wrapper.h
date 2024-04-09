
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QItemSelection_wrapper : public ::QItemSelection {
public:
  ~QItemSelection_wrapper();
  // tag=1041
  QItemSelection_wrapper(const QModelIndex &topLeft,
                         const QModelIndex &bottomRight);
  // tag=1041
  void append(const QList<QItemSelectionRange> &l);
  // tag=1041
  const QItemSelectionRange &at(qsizetype i) const;
  // tag=1041
  QItemSelectionRange &back();
  // tag=1041
  qsizetype capacity() const;
  // tag=1041
  void clear();
  // tag=1041
  const QItemSelectionRange *constData() const;
  // tag=1041
  const QItemSelectionRange &constFirst() const;
  // tag=1041
  const QItemSelectionRange &constLast() const;
  // tag=1041
  bool contains(const QModelIndex &index) const;
  // tag=1041
  qsizetype count() const;
  // tag=1041
  QItemSelectionRange *data();
  // tag=1041
  void detach();
  // tag=1041
  bool empty() const;
  // tag=1041
  QItemSelectionRange &first();
  // tag=1041
  QList<QItemSelectionRange> first(qsizetype n) const;
  // tag=1041
  static QList<QItemSelectionRange>
  fromList(const QList<QItemSelectionRange> &list);
  // tag=1041
  static QList<QItemSelectionRange>
  fromVector(const QList<QItemSelectionRange> &vector);
  // tag=1041
  QItemSelectionRange &front();
  // tag=1041
  QList<QModelIndex> indexes() const;
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isSharedWith(const QList<QItemSelectionRange> &other) const;
  // tag=1041
  QItemSelectionRange &last();
  // tag=1041
  QList<QItemSelectionRange> last(qsizetype n) const;
  // tag=1041
  qsizetype length() const;
  // tag=1041
  void merge(const QItemSelection &other,
             QFlags<QItemSelectionModel::SelectionFlag> command);
  // tag=1041
  QList<QItemSelectionRange> mid(qsizetype pos, qsizetype len = -1) const;
  // tag=1041
  void move(qsizetype from, qsizetype to);
  // tag=1041
  void pop_back();
  // tag=1041
  void pop_front();
  // tag=1041
  void remove(qsizetype i, qsizetype n = 1);
  // tag=1041
  void removeAt(qsizetype i);
  // tag=1041
  void removeFirst();
  // tag=1041
  void removeLast();
  // tag=1041
  void reserve(qsizetype size);
  // tag=1041
  void resize(qsizetype size);
  // tag=1041
  void select(const QModelIndex &topLeft, const QModelIndex &bottomRight);
  // tag=1041
  void shrink_to_fit();
  // tag=1041
  qsizetype size() const;
  // tag=1041
  QList<QItemSelectionRange> sliced(qsizetype pos) const;
  // tag=1041
  QList<QItemSelectionRange> sliced(qsizetype pos, qsizetype n) const;
  // tag=1041
  static void split(const QItemSelectionRange &range,
                    const QItemSelectionRange &other, QItemSelection *result);
  // tag=1041
  void squeeze();
  // tag=1041
  void swapItemsAt(qsizetype i, qsizetype j);
  // tag=1041
  QItemSelectionRange takeAt(qsizetype i);
  // tag=1041
  QList<QItemSelectionRange> toList() const;
  // tag=1041
  QList<QItemSelectionRange> toVector() const;
  // tag=1041
  QItemSelectionRange value(qsizetype i) const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QItemSelection::QItemSelection(const QModelIndex & topLeft, const
//  QModelIndex & bottomRight)
QtDartBindings_EXPORT void *
c_QItemSelection__constructor_QModelIndex_QModelIndex(void *topLeft_,
                                                      void *bottomRight_);

// tag=1067
//  QItemSelection::append(const QList<QItemSelectionRange > & l)
QtDartBindings_EXPORT void
c_QItemSelection__append_QList_QItemSelectionRange(void *thisObj, void *l_);

// tag=1067
//  QItemSelection::at(qsizetype i) const
QtDartBindings_EXPORT void *c_QItemSelection__at_qsizetype(void *thisObj,
                                                           qsizetype i);

// tag=1067
//  QItemSelection::back()
QtDartBindings_EXPORT void *c_QItemSelection__back(void *thisObj);

// tag=1067
//  QItemSelection::capacity() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__capacity(void *thisObj);

// tag=1067
//  QItemSelection::clear()
QtDartBindings_EXPORT void c_QItemSelection__clear(void *thisObj);

// tag=1067
//  QItemSelection::constData() const
QtDartBindings_EXPORT void *c_QItemSelection__constData(void *thisObj);

// tag=1067
//  QItemSelection::constFirst() const
QtDartBindings_EXPORT void *c_QItemSelection__constFirst(void *thisObj);

// tag=1067
//  QItemSelection::constLast() const
QtDartBindings_EXPORT void *c_QItemSelection__constLast(void *thisObj);

// tag=1067
//  QItemSelection::contains(const QModelIndex & index) const
QtDartBindings_EXPORT bool c_QItemSelection__contains_QModelIndex(void *thisObj,
                                                                  void *index_);

// tag=1067
//  QItemSelection::count() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__count(void *thisObj);

// tag=1067
//  QItemSelection::data()
QtDartBindings_EXPORT void *c_QItemSelection__data(void *thisObj);

// tag=1067
//  QItemSelection::detach()
QtDartBindings_EXPORT void c_QItemSelection__detach(void *thisObj);

// tag=1067
//  QItemSelection::empty() const
QtDartBindings_EXPORT bool c_QItemSelection__empty(void *thisObj);

// tag=1067
//  QItemSelection::first()
QtDartBindings_EXPORT void *c_QItemSelection__first(void *thisObj);

// tag=1067
//  QItemSelection::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QItemSelection__first_qsizetype(void *thisObj,
                                                              qsizetype n);

// tag=1067
//  QItemSelection::fromList(const QList<QItemSelectionRange > & list)
QtDartBindings_EXPORT void *
c_static_QItemSelection__fromList_QList_QItemSelectionRange(void *list_);

// tag=1067
//  QItemSelection::fromVector(const QList<QItemSelectionRange > & vector)
QtDartBindings_EXPORT void *
c_static_QItemSelection__fromVector_QList_QItemSelectionRange(void *vector_);

// tag=1067
//  QItemSelection::front()
QtDartBindings_EXPORT void *c_QItemSelection__front(void *thisObj);

// tag=1067
//  QItemSelection::indexes() const
QtDartBindings_EXPORT void *c_QItemSelection__indexes(void *thisObj);

// tag=1067
//  QItemSelection::isDetached() const
QtDartBindings_EXPORT bool c_QItemSelection__isDetached(void *thisObj);

// tag=1067
//  QItemSelection::isEmpty() const
QtDartBindings_EXPORT bool c_QItemSelection__isEmpty(void *thisObj);

// tag=1067
//  QItemSelection::isSharedWith(const QList<QItemSelectionRange > & other)
//  const
QtDartBindings_EXPORT bool
c_QItemSelection__isSharedWith_QList_QItemSelectionRange(void *thisObj,
                                                         void *other_);

// tag=1067
//  QItemSelection::last()
QtDartBindings_EXPORT void *c_QItemSelection__last(void *thisObj);

// tag=1067
//  QItemSelection::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QItemSelection__last_qsizetype(void *thisObj,
                                                             qsizetype n);

// tag=1067
//  QItemSelection::length() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__length(void *thisObj);

// tag=1067
//  QItemSelection::merge(const QItemSelection & other,
//  QFlags<QItemSelectionModel::SelectionFlag> command)
QtDartBindings_EXPORT void
c_QItemSelection__merge_QItemSelection_SelectionFlags(void *thisObj,
                                                      void *other_,
                                                      int command_);

// tag=1067
//  QItemSelection::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QItemSelection__mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                          qsizetype len);

// tag=1067
//  QItemSelection::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QItemSelection__move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                           qsizetype to);

// tag=1067
//  QItemSelection::pop_back()
QtDartBindings_EXPORT void c_QItemSelection__pop_back(void *thisObj);

// tag=1067
//  QItemSelection::pop_front()
QtDartBindings_EXPORT void c_QItemSelection__pop_front(void *thisObj);

// tag=1067
//  QItemSelection::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QItemSelection__remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                             qsizetype n);

// tag=1067
//  QItemSelection::removeAt(qsizetype i)
QtDartBindings_EXPORT void c_QItemSelection__removeAt_qsizetype(void *thisObj,
                                                                qsizetype i);

// tag=1067
//  QItemSelection::removeFirst()
QtDartBindings_EXPORT void c_QItemSelection__removeFirst(void *thisObj);

// tag=1067
//  QItemSelection::removeLast()
QtDartBindings_EXPORT void c_QItemSelection__removeLast(void *thisObj);

// tag=1067
//  QItemSelection::reserve(qsizetype size)
QtDartBindings_EXPORT void c_QItemSelection__reserve_qsizetype(void *thisObj,
                                                               qsizetype size);

// tag=1067
//  QItemSelection::resize(qsizetype size)
QtDartBindings_EXPORT void c_QItemSelection__resize_qsizetype(void *thisObj,
                                                              qsizetype size);

// tag=1067
//  QItemSelection::select(const QModelIndex & topLeft, const QModelIndex &
//  bottomRight)
QtDartBindings_EXPORT void
c_QItemSelection__select_QModelIndex_QModelIndex(void *thisObj, void *topLeft_,
                                                 void *bottomRight_);

// tag=1067
//  QItemSelection::shrink_to_fit()
QtDartBindings_EXPORT void c_QItemSelection__shrink_to_fit(void *thisObj);

// tag=1067
//  QItemSelection::size() const
QtDartBindings_EXPORT qsizetype c_QItemSelection__size(void *thisObj);

// tag=1067
//  QItemSelection::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QItemSelection__sliced_qsizetype(void *thisObj,
                                                               qsizetype pos);

// tag=1067
//  QItemSelection::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QItemSelection__sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                             qsizetype n);

// tag=1067
//  QItemSelection::split(const QItemSelectionRange & range, const
//  QItemSelectionRange & other, QItemSelection * result)
QtDartBindings_EXPORT void
c_static_QItemSelection__split_QItemSelectionRange_QItemSelectionRange_QItemSelection(
    void *range_, void *other_, void *result_);

// tag=1067
//  QItemSelection::squeeze()
QtDartBindings_EXPORT void c_QItemSelection__squeeze(void *thisObj);

// tag=1067
//  QItemSelection::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QItemSelection__swapItemsAt_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype j);

// tag=1067
//  QItemSelection::takeAt(qsizetype i)
QtDartBindings_EXPORT void *c_QItemSelection__takeAt_qsizetype(void *thisObj,
                                                               qsizetype i);

// tag=1067
//  QItemSelection::toList() const
QtDartBindings_EXPORT void *c_QItemSelection__toList(void *thisObj);

// tag=1067
//  QItemSelection::toVector() const
QtDartBindings_EXPORT void *c_QItemSelection__toVector(void *thisObj);

// tag=1067
//  QItemSelection::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QItemSelection__value_qsizetype(void *thisObj,
                                                              qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QItemSelection__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QItemSelection_Finalizer(void *, void *cppObj,
                                                      void *);
}

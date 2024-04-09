
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qitemselectionmodel.h>
#include <qlist.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QItemSelectionRange_wrapper : public ::QItemSelectionRange {
public:
  ~QItemSelectionRange_wrapper();
  // tag=1041
  QItemSelectionRange_wrapper();
  // tag=1041
  QItemSelectionRange_wrapper(const QModelIndex &index);
  // tag=1041
  QItemSelectionRange_wrapper(const QModelIndex &topL,
                              const QModelIndex &bottomR);
  // tag=1041
  int bottom() const;
  // tag=1041
  bool contains(const QModelIndex &index) const;
  // tag=1041
  bool contains(int row, int column, const QModelIndex &parentIndex) const;
  // tag=1041
  int height() const;
  // tag=1041
  QList<QModelIndex> indexes() const;
  // tag=1041
  QItemSelectionRange intersected(const QItemSelectionRange &other) const;
  // tag=1041
  bool intersects(const QItemSelectionRange &other) const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isValid() const;
  // tag=1041
  int left() const;
  // tag=1041
  const QAbstractItemModel *model() const;
  // tag=1041
  QModelIndex parent() const;
  // tag=1041
  int right() const;
  // tag=1041
  int top() const;
  // tag=1041
  int width() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QItemSelectionRange::QItemSelectionRange()
QtDartBindings_EXPORT void *c_QItemSelectionRange__constructor();

// tag=1067
//  QItemSelectionRange::QItemSelectionRange(const QModelIndex & index)
QtDartBindings_EXPORT void *
c_QItemSelectionRange__constructor_QModelIndex(void *index_);

// tag=1067
//  QItemSelectionRange::QItemSelectionRange(const QModelIndex & topL, const
//  QModelIndex & bottomR)
QtDartBindings_EXPORT void *
c_QItemSelectionRange__constructor_QModelIndex_QModelIndex(void *topL_,
                                                           void *bottomR_);

// tag=1067
//  QItemSelectionRange::bottom() const
QtDartBindings_EXPORT int c_QItemSelectionRange__bottom(void *thisObj);

// tag=1067
//  QItemSelectionRange::contains(const QModelIndex & index) const
QtDartBindings_EXPORT bool
c_QItemSelectionRange__contains_QModelIndex(void *thisObj, void *index_);

// tag=1067
//  QItemSelectionRange::contains(int row, int column, const QModelIndex &
//  parentIndex) const
QtDartBindings_EXPORT bool c_QItemSelectionRange__contains_int_int_QModelIndex(
    void *thisObj, int row, int column, void *parentIndex_);

// tag=1067
//  QItemSelectionRange::height() const
QtDartBindings_EXPORT int c_QItemSelectionRange__height(void *thisObj);

// tag=1067
//  QItemSelectionRange::indexes() const
QtDartBindings_EXPORT void *c_QItemSelectionRange__indexes(void *thisObj);

// tag=1067
//  QItemSelectionRange::intersected(const QItemSelectionRange & other) const
QtDartBindings_EXPORT void *
c_QItemSelectionRange__intersected_QItemSelectionRange(void *thisObj,
                                                       void *other_);

// tag=1067
//  QItemSelectionRange::intersects(const QItemSelectionRange & other) const
QtDartBindings_EXPORT bool
c_QItemSelectionRange__intersects_QItemSelectionRange(void *thisObj,
                                                      void *other_);

// tag=1067
//  QItemSelectionRange::isEmpty() const
QtDartBindings_EXPORT bool c_QItemSelectionRange__isEmpty(void *thisObj);

// tag=1067
//  QItemSelectionRange::isValid() const
QtDartBindings_EXPORT bool c_QItemSelectionRange__isValid(void *thisObj);

// tag=1067
//  QItemSelectionRange::left() const
QtDartBindings_EXPORT int c_QItemSelectionRange__left(void *thisObj);

// tag=1067
//  QItemSelectionRange::model() const
QtDartBindings_EXPORT void *c_QItemSelectionRange__model(void *thisObj);

// tag=1067
//  QItemSelectionRange::parent() const
QtDartBindings_EXPORT void *c_QItemSelectionRange__parent(void *thisObj);

// tag=1067
//  QItemSelectionRange::right() const
QtDartBindings_EXPORT int c_QItemSelectionRange__right(void *thisObj);

// tag=1067
//  QItemSelectionRange::top() const
QtDartBindings_EXPORT int c_QItemSelectionRange__top(void *thisObj);

// tag=1067
//  QItemSelectionRange::width() const
QtDartBindings_EXPORT int c_QItemSelectionRange__width(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QItemSelectionRange__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QItemSelectionRange_Finalizer(void *, void *cppObj,
                                                           void *);
}

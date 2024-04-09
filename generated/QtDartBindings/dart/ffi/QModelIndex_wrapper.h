
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QModelIndex_wrapper : public ::QModelIndex {
public:
  ~QModelIndex_wrapper();
  // tag=1041
  QModelIndex_wrapper();
  // tag=1041
  int column() const;
  // tag=1041
  QVariant data(int role = Qt::DisplayRole) const;
  // tag=1041
  bool isValid() const;
  // tag=1041
  const QAbstractItemModel *model() const;
  // tag=1041
  QModelIndex parent() const;
  // tag=1041
  int row() const;
  // tag=1041
  QModelIndex sibling(int row, int column) const;
  // tag=1041
  QModelIndex siblingAtColumn(int column) const;
  // tag=1041
  QModelIndex siblingAtRow(int row) const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QModelIndex::QModelIndex()
QtDartBindings_EXPORT void *c_QModelIndex__constructor();

// tag=1067
//  QModelIndex::column() const
QtDartBindings_EXPORT int c_QModelIndex__column(void *thisObj);

// tag=1067
//  QModelIndex::data(int role) const
QtDartBindings_EXPORT void *c_QModelIndex__data_int(void *thisObj, int role);

// tag=1067
//  QModelIndex::isValid() const
QtDartBindings_EXPORT bool c_QModelIndex__isValid(void *thisObj);

// tag=1067
//  QModelIndex::model() const
QtDartBindings_EXPORT void *c_QModelIndex__model(void *thisObj);

// tag=1067
//  QModelIndex::parent() const
QtDartBindings_EXPORT void *c_QModelIndex__parent(void *thisObj);

// tag=1067
//  QModelIndex::row() const
QtDartBindings_EXPORT int c_QModelIndex__row(void *thisObj);

// tag=1067
//  QModelIndex::sibling(int row, int column) const
QtDartBindings_EXPORT void *c_QModelIndex__sibling_int_int(void *thisObj,
                                                           int row, int column);

// tag=1067
//  QModelIndex::siblingAtColumn(int column) const
QtDartBindings_EXPORT void *c_QModelIndex__siblingAtColumn_int(void *thisObj,
                                                               int column);

// tag=1067
//  QModelIndex::siblingAtRow(int row) const
QtDartBindings_EXPORT void *c_QModelIndex__siblingAtRow_int(void *thisObj,
                                                            int row);

// tag=1066
QtDartBindings_EXPORT void c_QModelIndex__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QModelIndex_Finalizer(void *, void *cppObj,
                                                   void *);
}

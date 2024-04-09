
// tag=1040
#include "QtDartBindings_exports.h"
#include <qabstractitemmodel.h>
#include <qaction.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qline.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstandarditemmodel.h>
#include <qstring.h>
#include <qstyle.h>
#include <qvariant.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
template <typename T> class QList_wrapper : public ::QList<T> {
public:
  ~QList_wrapper();
  // tag=1041
  QList_wrapper();
  // tag=1041
  QList_wrapper(qsizetype size);
  // tag=1041
  void append(const QList<T> &l);
  // tag=1041
  const T &at(qsizetype i) const;
  // tag=1041
  T &back();
  // tag=1041
  qsizetype capacity() const;
  // tag=1041
  void clear();
  // tag=1041
  const T &constFirst() const;
  // tag=1041
  const T &constLast() const;
  // tag=1041
  qsizetype count() const;
  // tag=1041
  void detach();
  // tag=1041
  bool empty() const;
  // tag=1041
  T &first();
  // tag=1041
  QList<T> first(qsizetype n) const;
  // tag=1041
  T &front();
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isSharedWith(const QList<T> &other) const;
  // tag=1041
  T &last();
  // tag=1041
  QList<T> last(qsizetype n) const;
  // tag=1041
  qsizetype length() const;
  // tag=1041
  QList<T> mid(qsizetype pos, qsizetype len = -1) const;
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
  void shrink_to_fit();
  // tag=1041
  qsizetype size() const;
  // tag=1041
  QList<T> sliced(qsizetype pos) const;
  // tag=1041
  QList<T> sliced(qsizetype pos, qsizetype n) const;
  // tag=1041
  void squeeze();
  // tag=1041
  void swapItemsAt(qsizetype i, qsizetype j);
  // tag=1041
  T takeAt(qsizetype i);
  // tag=1041
  QList<T> toList() const;
  // tag=1041
  QList<T> toVector() const;
  // tag=1041
  T value(qsizetype i) const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QVariant_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_QVariant_T___append_QList_T(void *thisObj,
                                                                 void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QVariant_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_QVariant_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QVariant_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QVariant_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QVariant_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QVariant_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QVariant_T___first_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QVariant_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QVariant_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QVariant_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___last_qsizetype(void *thisObj,
                                                                  qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QVariant_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QVariant_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                               qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QVariant_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QVariant_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QVariant_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QVariant_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QVariant_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QVariant_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QVariant_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QVariant_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QVariant_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QVariant_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QVariant_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QVariant_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *
c_QList_T_QVariant_T___value_qsizetype(void *thisObj, qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QVariant_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_QVariant_T__Finalizer(void *, void *cppObj,
                                                           void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QString_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QString_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_QString_T___append_QList_T(void *thisObj,
                                                                void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QString_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QString_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_QString_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QString_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QString_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QString_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QString_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QString_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QString_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QString_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QString_T___first_qsizetype(void *thisObj,
                                                                  qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QString_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QString_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QString_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QString_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QString_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QString_T___last_qsizetype(void *thisObj,
                                                                 qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QString_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QString_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                              qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QString_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                               qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QString_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QString_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QString_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                 qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QString_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QString_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QString_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QString_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QString_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_QString_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QString_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QString_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QString_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                 qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QString_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QString_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QString_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QString_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QString_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QList_T_QString_T___value_qsizetype(void *thisObj,
                                                                  qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QString_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_QString_T__Finalizer(void *, void *cppObj,
                                                          void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_unsigned_int_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_unsigned_int_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___append_QList_T(void *thisObj, void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const unsigned int
c_QList_T_unsigned_int_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT unsigned int
c_QList_T_unsigned_int_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype
c_QList_T_unsigned_int_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const unsigned int
c_QList_T_unsigned_int_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const unsigned int
c_QList_T_unsigned_int_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_unsigned_int_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_unsigned_int_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT unsigned int
c_QList_T_unsigned_int_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_unsigned_int_T___first_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT unsigned int
c_QList_T_unsigned_int_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_unsigned_int_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_unsigned_int_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_unsigned_int_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT unsigned int
c_QList_T_unsigned_int_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_unsigned_int_T___last_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype
c_QList_T_unsigned_int_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_unsigned_int_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___move_qsizetype_qsizetype(
    void *thisObj, qsizetype from, qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_unsigned_int_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_unsigned_int_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_unsigned_int_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype pos,
                                                      qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT unsigned int
c_QList_T_unsigned_int_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_unsigned_int_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_unsigned_int_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT unsigned int
c_QList_T_unsigned_int_T___value_qsizetype(void *thisObj, qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_unsigned_int_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void
c_QList_T_unsigned_int_T__Finalizer(void *, void *cppObj, void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QStandardItem_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___append_QList_T(void *thisObj, void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QStandardItem_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QStandardItem_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QStandardItem_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QStandardItem_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QStandardItem_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QStandardItem_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QStandardItem_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QStandardItem_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QStandardItem_T___first_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool
c_QList_T_QStandardItem_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QStandardItem_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QStandardItem_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QStandardItem_T___last_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QStandardItem_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___mid_qsizetype_qsizetype(
    void *thisObj, qsizetype pos, qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void c_QList_T_QStandardItem_T___move_qsizetype_qsizetype(
    void *thisObj, qsizetype from, qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QStandardItem_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QStandardItem_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___remove_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QStandardItem_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QStandardItem_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QStandardItem_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QStandardItem_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype i,
                                                            qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QStandardItem_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QStandardItem_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *
c_QList_T_QStandardItem_T___value_qsizetype(void *thisObj, qsizetype i);

// tag=1066
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void
c_QList_T_QStandardItem_T__Finalizer(void *, void *cppObj, void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_qreal_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_qreal_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_qreal_T___append_QList_T(void *thisObj,
                                                              void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const qreal
c_QList_T_qreal_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT qreal c_QList_T_qreal_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_qreal_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_qreal_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const qreal c_QList_T_qreal_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const qreal c_QList_T_qreal_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_qreal_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_qreal_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_qreal_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT qreal c_QList_T_qreal_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_qreal_T___first_qsizetype(void *thisObj,
                                                                qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT qreal c_QList_T_qreal_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_qreal_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_qreal_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_qreal_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT qreal c_QList_T_qreal_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_qreal_T___last_qsizetype(void *thisObj,
                                                               qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_qreal_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_qreal_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                            qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_qreal_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                             qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_qreal_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_qreal_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_qreal_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                               qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void c_QList_T_qreal_T___removeAt_qsizetype(void *thisObj,
                                                                  qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_qreal_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_qreal_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_qreal_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void c_QList_T_qreal_T___resize_qsizetype(void *thisObj,
                                                                qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_qreal_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_qreal_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QList_T_qreal_T___sliced_qsizetype(void *thisObj,
                                                                 qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_qreal_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                               qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_qreal_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_qreal_T___swapItemsAt_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT qreal c_QList_T_qreal_T___takeAt_qsizetype(void *thisObj,
                                                                 qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_qreal_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_qreal_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT qreal c_QList_T_qreal_T___value_qsizetype(void *thisObj,
                                                                qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_qreal_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_qreal_T__Finalizer(void *, void *cppObj,
                                                        void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QObject_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QObject_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_QObject_T___append_QList_T(void *thisObj,
                                                                void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QObject_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QObject_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_QObject_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QObject_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QObject_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QObject_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QObject_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QObject_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QObject_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QObject_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QObject_T___first_qsizetype(void *thisObj,
                                                                  qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QObject_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QObject_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QObject_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QObject_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QObject_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QObject_T___last_qsizetype(void *thisObj,
                                                                 qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QObject_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QObject_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                              qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QObject_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                               qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QObject_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QObject_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QObject_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                 qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QObject_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QObject_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QObject_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QObject_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QObject_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_QObject_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QObject_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QObject_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QObject_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                 qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QObject_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QObject_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QObject_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QObject_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QObject_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QList_T_QObject_T___value_qsizetype(void *thisObj,
                                                                  qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QObject_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_QObject_T__Finalizer(void *, void *cppObj,
                                                          void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QByteArray_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___append_QList_T(void *thisObj, void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QByteArray_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QByteArray_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QByteArray_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QByteArray_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QByteArray_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QByteArray_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QByteArray_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QByteArray_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___first_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QByteArray_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QByteArray_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QByteArray_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QByteArray_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QByteArray_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___last_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QByteArray_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                 qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                  qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QByteArray_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos, qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QByteArray_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QByteArray_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *
c_QList_T_QByteArray_T___value_qsizetype(void *thisObj, qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QByteArray_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void
c_QList_T_QByteArray_T__Finalizer(void *, void *cppObj, void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QAction_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QAction_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_QAction_T___append_QList_T(void *thisObj,
                                                                void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QAction_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QAction_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_QAction_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QAction_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QAction_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QAction_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QAction_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QAction_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QAction_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QAction_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QAction_T___first_qsizetype(void *thisObj,
                                                                  qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QAction_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QAction_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QAction_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QAction_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QAction_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QAction_T___last_qsizetype(void *thisObj,
                                                                 qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QAction_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QAction_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                              qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QAction_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                               qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QAction_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QAction_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QAction_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                 qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QAction_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QAction_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QAction_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QAction_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QAction_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_QAction_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QAction_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QAction_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QAction_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                 qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QAction_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QAction_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QAction_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QAction_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QAction_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QList_T_QAction_T___value_qsizetype(void *thisObj,
                                                                  qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QAction_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_QAction_T__Finalizer(void *, void *cppObj,
                                                          void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QKeySequence_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___append_QList_T(void *thisObj, void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QKeySequence_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QKeySequence_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QKeySequence_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QKeySequence_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QKeySequence_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QKeySequence_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QKeySequence_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QKeySequence_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___first_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QKeySequence_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QKeySequence_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QKeySequence_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QKeySequence_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QKeySequence_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___last_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QKeySequence_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___move_qsizetype_qsizetype(
    void *thisObj, qsizetype from, qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QKeySequence_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype pos,
                                                      qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QKeySequence_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QKeySequence_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *
c_QList_T_QKeySequence_T___value_qsizetype(void *thisObj, qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QKeySequence_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void
c_QList_T_QKeySequence_T__Finalizer(void *, void *cppObj, void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QModelIndex_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T___append_QList_T(void *thisObj, void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QModelIndex_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QModelIndex_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QModelIndex_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QModelIndex_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QModelIndex_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QModelIndex_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QModelIndex_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QModelIndex_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___first_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QModelIndex_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QModelIndex_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QModelIndex_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QModelIndex_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QModelIndex_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___last_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QModelIndex_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___move_qsizetype_qsizetype(
    void *thisObj, qsizetype from, qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                     qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QModelIndex_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype i,
                                                          qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QModelIndex_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QModelIndex_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *
c_QList_T_QModelIndex_T___value_qsizetype(void *thisObj, qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QModelIndex_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void
c_QList_T_QModelIndex_T__Finalizer(void *, void *cppObj, void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QItemSelectionRange_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___append_QList_T(void *thisObj, void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QItemSelectionRange_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QItemSelectionRange_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QItemSelectionRange_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QItemSelectionRange_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QItemSelectionRange_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool
c_QList_T_QItemSelectionRange_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___first_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool
c_QList_T_QItemSelectionRange_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool
c_QList_T_QItemSelectionRange_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QItemSelectionRange_T___isSharedWith_QList_T(void *thisObj,
                                                       void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___last_qsizetype(void *thisObj, qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QItemSelectionRange_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___mid_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype pos,
                                                          qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___move_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype from,
                                                           qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___remove_qsizetype_qsizetype(void *thisObj,
                                                             qsizetype i,
                                                             qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___removeAt_qsizetype(void *thisObj,
                                                     qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___reserve_qsizetype(void *thisObj,
                                                    qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___resize_qsizetype(void *thisObj,
                                                   qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype
c_QList_T_QItemSelectionRange_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___sliced_qsizetype(void *thisObj,
                                                   qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                             qsizetype pos,
                                                             qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                  qsizetype i,
                                                                  qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *
c_QList_T_QItemSelectionRange_T___value_qsizetype(void *thisObj, qsizetype i);

// tag=1066
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void
c_QList_T_QItemSelectionRange_T__Finalizer(void *, void *cppObj, void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QSize_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QSize_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_QSize_T___append_QList_T(void *thisObj,
                                                              void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QSize_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QSize_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_QSize_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QSize_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *c_QList_T_QSize_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *c_QList_T_QSize_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QSize_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QSize_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QSize_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QSize_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QSize_T___first_qsizetype(void *thisObj,
                                                                qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QSize_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QSize_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QSize_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QSize_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QSize_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QSize_T___last_qsizetype(void *thisObj,
                                                               qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QSize_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QSize_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                            qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QSize_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                             qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QSize_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QSize_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QSize_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                               qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void c_QList_T_QSize_T___removeAt_qsizetype(void *thisObj,
                                                                  qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QSize_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QSize_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QSize_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void c_QList_T_QSize_T___resize_qsizetype(void *thisObj,
                                                                qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_QSize_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QSize_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QList_T_QSize_T___sliced_qsizetype(void *thisObj,
                                                                 qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QSize_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                               qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QSize_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QSize_T___swapItemsAt_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *c_QList_T_QSize_T___takeAt_qsizetype(void *thisObj,
                                                                 qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QSize_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QSize_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QList_T_QSize_T___value_qsizetype(void *thisObj,
                                                                qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QSize_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_QSize_T__Finalizer(void *, void *cppObj,
                                                        void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_int_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_int_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_int_T___append_QList_T(void *thisObj,
                                                            void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const int c_QList_T_int_T___at_qsizetype(void *thisObj,
                                                               qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT int c_QList_T_int_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_int_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_int_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const int c_QList_T_int_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const int c_QList_T_int_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_int_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_int_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_int_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT int c_QList_T_int_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_int_T___first_qsizetype(void *thisObj,
                                                              qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT int c_QList_T_int_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_int_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_int_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool c_QList_T_int_T___isSharedWith_QList_T(void *thisObj,
                                                                  void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT int c_QList_T_int_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_int_T___last_qsizetype(void *thisObj,
                                                             qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_int_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_int_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                          qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_int_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                           qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_int_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_int_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_int_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                             qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void c_QList_T_int_T___removeAt_qsizetype(void *thisObj,
                                                                qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_int_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_int_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void c_QList_T_int_T___reserve_qsizetype(void *thisObj,
                                                               qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void c_QList_T_int_T___resize_qsizetype(void *thisObj,
                                                              qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_int_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_int_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *c_QList_T_int_T___sliced_qsizetype(void *thisObj,
                                                               qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_int_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                             qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_int_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT int c_QList_T_int_T___takeAt_qsizetype(void *thisObj,
                                                             qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_int_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_int_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT int c_QList_T_int_T___value_qsizetype(void *thisObj,
                                                            qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_int_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_int_T__Finalizer(void *, void *cppObj,
                                                      void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QWindow_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_QWindow_T___append_QList_T(void *thisObj,
                                                                void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QWindow_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWindow_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QWindow_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QWindow_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWindow_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QWindow_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___first_qsizetype(void *thisObj,
                                                                  qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QWindow_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QWindow_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QWindow_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___last_qsizetype(void *thisObj,
                                                                 qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWindow_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QWindow_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                              qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QWindow_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                               qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QWindow_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                 qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QWindow_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QWindow_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QWindow_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWindow_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QWindow_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QWindow_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                 qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QWindow_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QWindow_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QWindow_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QList_T_QWindow_T___value_qsizetype(void *thisObj,
                                                                  qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QWindow_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_QWindow_T__Finalizer(void *, void *cppObj,
                                                          void *);
}
extern "C" {

// tag=1067
//  QList::QList<T>()
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___constructor();

// tag=1067
//  QList::QList<T>(qsizetype size)
QtDartBindings_EXPORT void *
c_QList_T_QWidget_T___constructor_qsizetype(qsizetype size);

// tag=1067
//  QList::append(const QList<T > & l)
QtDartBindings_EXPORT void c_QList_T_QWidget_T___append_QList_T(void *thisObj,
                                                                void *l_);

// tag=1067
//  QList::at(qsizetype i) const
QtDartBindings_EXPORT const void *
c_QList_T_QWidget_T___at_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::back()
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___back(void *thisObj);

// tag=1067
//  QList::capacity() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWidget_T___capacity(void *thisObj);

// tag=1067
//  QList::clear()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___clear(void *thisObj);

// tag=1067
//  QList::constFirst() const
QtDartBindings_EXPORT const void *
c_QList_T_QWidget_T___constFirst(void *thisObj);

// tag=1067
//  QList::constLast() const
QtDartBindings_EXPORT const void *
c_QList_T_QWidget_T___constLast(void *thisObj);

// tag=1067
//  QList::count() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWidget_T___count(void *thisObj);

// tag=1067
//  QList::detach()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___detach(void *thisObj);

// tag=1067
//  QList::empty() const
QtDartBindings_EXPORT bool c_QList_T_QWidget_T___empty(void *thisObj);

// tag=1067
//  QList::first()
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___first(void *thisObj);

// tag=1067
//  QList::first(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___first_qsizetype(void *thisObj,
                                                                  qsizetype n);

// tag=1067
//  QList::front()
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___front(void *thisObj);

// tag=1067
//  QList::isDetached() const
QtDartBindings_EXPORT bool c_QList_T_QWidget_T___isDetached(void *thisObj);

// tag=1067
//  QList::isEmpty() const
QtDartBindings_EXPORT bool c_QList_T_QWidget_T___isEmpty(void *thisObj);

// tag=1067
//  QList::isSharedWith(const QList<T > & other) const
QtDartBindings_EXPORT bool
c_QList_T_QWidget_T___isSharedWith_QList_T(void *thisObj, void *other_);

// tag=1067
//  QList::last()
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___last(void *thisObj);

// tag=1067
//  QList::last(qsizetype n) const
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___last_qsizetype(void *thisObj,
                                                                 qsizetype n);

// tag=1067
//  QList::length() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWidget_T___length(void *thisObj);

// tag=1067
//  QList::mid(qsizetype pos, qsizetype len) const
QtDartBindings_EXPORT void *
c_QList_T_QWidget_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                              qsizetype len);

// tag=1067
//  QList::move(qsizetype from, qsizetype to)
QtDartBindings_EXPORT void
c_QList_T_QWidget_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                               qsizetype to);

// tag=1067
//  QList::pop_back()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___pop_back(void *thisObj);

// tag=1067
//  QList::pop_front()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___pop_front(void *thisObj);

// tag=1067
//  QList::remove(qsizetype i, qsizetype n)
QtDartBindings_EXPORT void
c_QList_T_QWidget_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                 qsizetype n);

// tag=1067
//  QList::removeAt(qsizetype i)
QtDartBindings_EXPORT void
c_QList_T_QWidget_T___removeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::removeFirst()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___removeFirst(void *thisObj);

// tag=1067
//  QList::removeLast()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___removeLast(void *thisObj);

// tag=1067
//  QList::reserve(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QWidget_T___reserve_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::resize(qsizetype size)
QtDartBindings_EXPORT void
c_QList_T_QWidget_T___resize_qsizetype(void *thisObj, qsizetype size);

// tag=1067
//  QList::shrink_to_fit()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___shrink_to_fit(void *thisObj);

// tag=1067
//  QList::size() const
QtDartBindings_EXPORT qsizetype c_QList_T_QWidget_T___size(void *thisObj);

// tag=1067
//  QList::sliced(qsizetype pos) const
QtDartBindings_EXPORT void *
c_QList_T_QWidget_T___sliced_qsizetype(void *thisObj, qsizetype pos);

// tag=1067
//  QList::sliced(qsizetype pos, qsizetype n) const
QtDartBindings_EXPORT void *
c_QList_T_QWidget_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                 qsizetype n);

// tag=1067
//  QList::squeeze()
QtDartBindings_EXPORT void c_QList_T_QWidget_T___squeeze(void *thisObj);

// tag=1067
//  QList::swapItemsAt(qsizetype i, qsizetype j)
QtDartBindings_EXPORT void
c_QList_T_QWidget_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i, qsizetype j);

// tag=1067
//  QList::takeAt(qsizetype i)
QtDartBindings_EXPORT void *
c_QList_T_QWidget_T___takeAt_qsizetype(void *thisObj, qsizetype i);

// tag=1067
//  QList::toList() const
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___toList(void *thisObj);

// tag=1067
//  QList::toVector() const
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___toVector(void *thisObj);

// tag=1067
//  QList::value(qsizetype i) const
QtDartBindings_EXPORT void *c_QList_T_QWidget_T___value_qsizetype(void *thisObj,
                                                                  qsizetype i);

// tag=1066
QtDartBindings_EXPORT void c_QList_T_QWidget_T___destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QList_T_QWidget_T__Finalizer(void *, void *cppObj,
                                                          void *);
}

#include "QList_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
template <typename T> QList_wrapper<T>::QList_wrapper() : ::QList<T>() {}

// tag=1006
template <typename T>
QList_wrapper<T>::QList_wrapper(qsizetype size) : ::QList<T>(size) {}
template <typename T> void QList_wrapper<T>::append(const QList<T> &l) {
  // tag=1000

  // tag=1004
  ::QList<T>::append(l);
}
template <typename T> const T &QList_wrapper<T>::at(qsizetype i) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::at(i);
}
template <typename T> T &QList_wrapper<T>::back() {
  // tag=1000

  // tag=1004
  return ::QList<T>::back();
}
template <typename T> qsizetype QList_wrapper<T>::capacity() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::capacity();
}
template <typename T> void QList_wrapper<T>::clear() {
  // tag=1000

  // tag=1004
  ::QList<T>::clear();
}
template <typename T> const T &QList_wrapper<T>::constFirst() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::constFirst();
}
template <typename T> const T &QList_wrapper<T>::constLast() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::constLast();
}
template <typename T> qsizetype QList_wrapper<T>::count() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::count();
}
template <typename T> void QList_wrapper<T>::detach() {
  // tag=1000

  // tag=1004
  ::QList<T>::detach();
}
template <typename T> bool QList_wrapper<T>::empty() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::empty();
}
template <typename T> T &QList_wrapper<T>::first() {
  // tag=1000

  // tag=1004
  return ::QList<T>::first();
}
template <typename T> QList<T> QList_wrapper<T>::first(qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::first(n);
}
template <typename T> T &QList_wrapper<T>::front() {
  // tag=1000

  // tag=1004
  return ::QList<T>::front();
}
template <typename T> bool QList_wrapper<T>::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::isDetached();
}
template <typename T> bool QList_wrapper<T>::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::isEmpty();
}
template <typename T>
bool QList_wrapper<T>::isSharedWith(const QList<T> &other) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::isSharedWith(other);
}
template <typename T> T &QList_wrapper<T>::last() {
  // tag=1000

  // tag=1004
  return ::QList<T>::last();
}
template <typename T> QList<T> QList_wrapper<T>::last(qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::last(n);
}
template <typename T> qsizetype QList_wrapper<T>::length() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::length();
}
template <typename T>
QList<T> QList_wrapper<T>::mid(qsizetype pos, qsizetype len) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::mid(pos, len);
}
template <typename T>
void QList_wrapper<T>::move(qsizetype from, qsizetype to) {
  // tag=1000

  // tag=1004
  ::QList<T>::move(from, to);
}
template <typename T> void QList_wrapper<T>::pop_back() {
  // tag=1000

  // tag=1004
  ::QList<T>::pop_back();
}
template <typename T> void QList_wrapper<T>::pop_front() {
  // tag=1000

  // tag=1004
  ::QList<T>::pop_front();
}
template <typename T> void QList_wrapper<T>::remove(qsizetype i, qsizetype n) {
  // tag=1000

  // tag=1004
  ::QList<T>::remove(i, n);
}
template <typename T> void QList_wrapper<T>::removeAt(qsizetype i) {
  // tag=1000

  // tag=1004
  ::QList<T>::removeAt(i);
}
template <typename T> void QList_wrapper<T>::removeFirst() {
  // tag=1000

  // tag=1004
  ::QList<T>::removeFirst();
}
template <typename T> void QList_wrapper<T>::removeLast() {
  // tag=1000

  // tag=1004
  ::QList<T>::removeLast();
}
template <typename T> void QList_wrapper<T>::reserve(qsizetype size) {
  // tag=1000

  // tag=1004
  ::QList<T>::reserve(size);
}
template <typename T> void QList_wrapper<T>::resize(qsizetype size) {
  // tag=1000

  // tag=1004
  ::QList<T>::resize(size);
}
template <typename T> void QList_wrapper<T>::shrink_to_fit() {
  // tag=1000

  // tag=1004
  ::QList<T>::shrink_to_fit();
}
template <typename T> qsizetype QList_wrapper<T>::size() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::size();
}
template <typename T> QList<T> QList_wrapper<T>::sliced(qsizetype pos) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::sliced(pos);
}
template <typename T>
QList<T> QList_wrapper<T>::sliced(qsizetype pos, qsizetype n) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::sliced(pos, n);
}
template <typename T> void QList_wrapper<T>::squeeze() {
  // tag=1000

  // tag=1004
  ::QList<T>::squeeze();
}
template <typename T>
void QList_wrapper<T>::swapItemsAt(qsizetype i, qsizetype j) {
  // tag=1000

  // tag=1004
  ::QList<T>::swapItemsAt(i, j);
}
template <typename T> T QList_wrapper<T>::takeAt(qsizetype i) {
  // tag=1000

  // tag=1004
  return ::QList<T>::takeAt(i);
}
template <typename T> QList<T> QList_wrapper<T>::toList() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::toList();
}
template <typename T> QList<T> QList_wrapper<T>::toVector() const {
  // tag=1000

  // tag=1004
  return ::QList<T>::toVector();
}
template <typename T> T QList_wrapper<T>::value(qsizetype i) const {
  // tag=1000

  // tag=1004
  return ::QList<T>::value(i);
}

// tag=1005
template <typename T> QList_wrapper<T>::~QList_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
template <typename T> static QList<T> *fromPtr(void *ptr) {
  return reinterpret_cast<QList<T> *>(ptr);
}
// tag=1014
template <typename T>
static QtDartBindings_wrappersNS::QList_wrapper<T> *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<T> *>(ptr);
}
extern "C" {

// tag=1049
void c_QList_T_QVariant_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<QVariant> *>(
      cppObj);
}
void *c_QList_T_QVariant_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QVariant>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QVariant_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QVariant>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QVariant_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QVariant> *>(l_);
  // tag=1010
  fromPtr<QVariant>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QVariant_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{fromPtr<QVariant>(thisObj)->at(i)};
}

// tag=1050
// back()
void *c_QList_T_QVariant_T___back(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{fromPtr<QVariant>(thisObj)->back()};
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QVariant_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QVariant_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QVariant_T___constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr<QVariant>(thisObj)->constFirst()};
}

// tag=1050
// constLast() const
const void *c_QList_T_QVariant_T___constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr<QVariant>(thisObj)->constLast()};
}

// tag=1050
// count() const
qsizetype c_QList_T_QVariant_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QVariant_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QVariant_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QVariant_T___first(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr<QVariant>(thisObj)->first()};
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QVariant_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{
          fromPtr<QVariant>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QVariant_T___front(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr<QVariant>(thisObj)->front()};
}

// tag=1050
// isDetached() const
bool c_QList_T_QVariant_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QVariant_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QVariant_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<QVariant> *>(other_);
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QVariant_T___last(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{fromPtr<QVariant>(thisObj)->last()};
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QVariant_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{
          fromPtr<QVariant>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QVariant_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QVariant_T___mid_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{
          fromPtr<QVariant>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QVariant_T___move_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype from,
                                                     qsizetype to) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QVariant_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QVariant_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QVariant_T___remove_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype n) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QVariant_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QVariant_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QVariant_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QVariant_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QVariant_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QVariant_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QVariant_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QVariant>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QVariant_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{
          fromPtr<QVariant>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QVariant_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype pos,
                                                        qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{
          fromPtr<QVariant>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QVariant_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QVariant_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype i,
                                                            qsizetype j) {
  // tag=1010
  fromPtr<QVariant>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QVariant_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr<QVariant>(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QList_T_QVariant_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{
          fromPtr<QVariant>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QVariant_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QVariant>>{
          fromPtr<QVariant>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QVariant_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{
          fromPtr<QVariant>(thisObj)->value(i)};
}
void c_QList_T_QVariant_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QVariant>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QString_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<QString> *>(
      cppObj);
}
void *c_QList_T_QString_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QString>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QString_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QString>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QString_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QString> *>(l_);
  // tag=1010
  fromPtr<QString>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QString_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->at(i)};
}

// tag=1050
// back()
void *c_QList_T_QString_T___back(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->back()};
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QString_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QString>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QString_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QString_T___constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr<QString>(thisObj)->constFirst()};
}

// tag=1050
// constLast() const
const void *c_QList_T_QString_T___constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr<QString>(thisObj)->constLast()};
}

// tag=1050
// count() const
qsizetype c_QList_T_QString_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QString>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QString_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QString_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QString>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QString_T___first(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->first()};
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QString_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr<QString>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QString_T___front(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->front()};
}

// tag=1050
// isDetached() const
bool c_QList_T_QString_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QString>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QString_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QString>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QString_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<QString> *>(other_);
  return
      // tag=1010
      fromPtr<QString>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QString_T___last(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->last()};
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QString_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr<QString>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QString_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QString>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QString_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr<QString>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QString_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  // tag=1010
  fromPtr<QString>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QString_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QString_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QString_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  // tag=1010
  fromPtr<QString>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QString_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QString>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QString_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QString_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QString_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QString>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QString_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QString>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QString_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QString_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QString>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QString_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr<QString>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QString_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr<QString>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QString_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QString>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QString_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  // tag=1010
  fromPtr<QString>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QString_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr<QString>(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QList_T_QString_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr<QString>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QString_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr<QString>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QString_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr<QString>(thisObj)->value(i)};
}
void c_QList_T_QString_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QString>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_unsigned_int_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<unsigned int> *>(cppObj);
}
void *c_QList_T_unsigned_int_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<unsigned int>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_unsigned_int_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<unsigned int>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_unsigned_int_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<unsigned int> *>(l_);
  // tag=1010
  fromPtr<unsigned int>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const unsigned int c_QList_T_unsigned_int_T___at_qsizetype(void *thisObj,
                                                           qsizetype i) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->at(i);
}

// tag=1050
// back()
unsigned int c_QList_T_unsigned_int_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_unsigned_int_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_unsigned_int_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const unsigned int c_QList_T_unsigned_int_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const unsigned int c_QList_T_unsigned_int_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_unsigned_int_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_unsigned_int_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_unsigned_int_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->empty();
}

// tag=1050
// first()
unsigned int c_QList_T_unsigned_int_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_unsigned_int_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<unsigned int>>{
          fromPtr<unsigned int>(thisObj)->first(n)};
}

// tag=1050
// front()
unsigned int c_QList_T_unsigned_int_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_unsigned_int_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_unsigned_int_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_unsigned_int_T___isSharedWith_QList_T(void *thisObj,
                                                     void *other_) {
  auto &other = *reinterpret_cast<QList<unsigned int> *>(other_);
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
unsigned int c_QList_T_unsigned_int_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_unsigned_int_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<unsigned int>>{
          fromPtr<unsigned int>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_unsigned_int_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_unsigned_int_T___mid_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype pos,
                                                         qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<unsigned int>>{
          fromPtr<unsigned int>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_unsigned_int_T___move_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype from,
                                                         qsizetype to) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_unsigned_int_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_unsigned_int_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_unsigned_int_T___remove_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype n) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_unsigned_int_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_unsigned_int_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_unsigned_int_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_unsigned_int_T___reserve_qsizetype(void *thisObj,
                                                  qsizetype size) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_unsigned_int_T___resize_qsizetype(void *thisObj,
                                                 qsizetype size) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_unsigned_int_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_unsigned_int_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_unsigned_int_T___sliced_qsizetype(void *thisObj,
                                                  qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<unsigned int>>{
          fromPtr<unsigned int>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_unsigned_int_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype pos,
                                                            qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<unsigned int>>{
          fromPtr<unsigned int>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_unsigned_int_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_unsigned_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype i,
                                                                qsizetype j) {
  // tag=1010
  fromPtr<unsigned int>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
unsigned int c_QList_T_unsigned_int_T___takeAt_qsizetype(void *thisObj,
                                                         qsizetype i) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_unsigned_int_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<unsigned int>>{
          fromPtr<unsigned int>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_unsigned_int_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<unsigned int>>{
          fromPtr<unsigned int>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
unsigned int c_QList_T_unsigned_int_T___value_qsizetype(void *thisObj,
                                                        qsizetype i) {
  return
      // tag=1010
      fromPtr<unsigned int>(thisObj)->value(i);
}
void c_QList_T_unsigned_int_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<unsigned int>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QStandardItem_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QStandardItem *> *>(cppObj);
}
void *c_QList_T_QStandardItem_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QStandardItem *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QStandardItem_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QList_wrapper<QStandardItem *>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QStandardItem_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QStandardItem *> *>(l_);
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QStandardItem_T___at_qsizetype(void *thisObj,
                                                     qsizetype i) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->at(i);
}

// tag=1050
// back()
void *c_QList_T_QStandardItem_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QStandardItem_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QStandardItem_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QStandardItem_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const void *c_QList_T_QStandardItem_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_QStandardItem_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QStandardItem_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QStandardItem_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QStandardItem_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QStandardItem_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr<QStandardItem *>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QStandardItem_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_QStandardItem_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QStandardItem_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QStandardItem_T___isSharedWith_QList_T(void *thisObj,
                                                      void *other_) {
  auto &other = *reinterpret_cast<QList<QStandardItem *> *>(other_);
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QStandardItem_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QStandardItem_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr<QStandardItem *>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QStandardItem_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QStandardItem_T___mid_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype pos,
                                                          qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr<QStandardItem *>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QStandardItem_T___move_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype from,
                                                          qsizetype to) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QStandardItem_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QStandardItem_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QStandardItem_T___remove_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype i,
                                                            qsizetype n) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QStandardItem_T___removeAt_qsizetype(void *thisObj,
                                                    qsizetype i) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QStandardItem_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QStandardItem_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QStandardItem_T___reserve_qsizetype(void *thisObj,
                                                   qsizetype size) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QStandardItem_T___resize_qsizetype(void *thisObj,
                                                  qsizetype size) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QStandardItem_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QStandardItem_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QStandardItem_T___sliced_qsizetype(void *thisObj,
                                                   qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr<QStandardItem *>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QStandardItem_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                             qsizetype pos,
                                                             qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr<QStandardItem *>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QStandardItem_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QStandardItem_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                 qsizetype i,
                                                                 qsizetype j) {
  // tag=1010
  fromPtr<QStandardItem *>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QStandardItem_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_QStandardItem_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr<QStandardItem *>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QStandardItem_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QStandardItem *>>{
          fromPtr<QStandardItem *>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QStandardItem_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QStandardItem *>(thisObj)->value(i);
}
void c_QList_T_QStandardItem_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QStandardItem *>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_qreal_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<qreal> *>(
      cppObj);
}
void *c_QList_T_qreal_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<qreal>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_qreal_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<qreal>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_qreal_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<qreal> *>(l_);
  // tag=1010
  fromPtr<qreal>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const qreal c_QList_T_qreal_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->at(i);
}

// tag=1050
// back()
qreal c_QList_T_qreal_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_qreal_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_qreal_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const qreal c_QList_T_qreal_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const qreal c_QList_T_qreal_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_qreal_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_qreal_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_qreal_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->empty();
}

// tag=1050
// first()
qreal c_QList_T_qreal_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_qreal_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr<qreal>(thisObj)->first(n)};
}

// tag=1050
// front()
qreal c_QList_T_qreal_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_qreal_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_qreal_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_qreal_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<qreal> *>(other_);
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
qreal c_QList_T_qreal_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_qreal_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr<qreal>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_qreal_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_qreal_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr<qreal>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_qreal_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                  qsizetype to) {
  // tag=1010
  fromPtr<qreal>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_qreal_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_qreal_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_qreal_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype n) {
  // tag=1010
  fromPtr<qreal>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_qreal_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<qreal>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_qreal_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_qreal_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_qreal_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<qreal>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_qreal_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<qreal>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_qreal_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_qreal_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_qreal_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr<qreal>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_qreal_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr<qreal>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_qreal_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<qreal>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_qreal_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype j) {
  // tag=1010
  fromPtr<qreal>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
qreal c_QList_T_qreal_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_qreal_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr<qreal>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_qreal_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<qreal>>{
          fromPtr<qreal>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
qreal c_QList_T_qreal_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<qreal>(thisObj)->value(i);
}
void c_QList_T_qreal_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<qreal>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QObject_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QObject *> *>(cppObj);
}
void *c_QList_T_QObject_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QObject *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QObject_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QObject *>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QObject_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QObject *> *>(l_);
  // tag=1010
  fromPtr<QObject *>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QObject_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->at(i);
}

// tag=1050
// back()
void *c_QList_T_QObject_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QObject_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QObject_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QObject_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const void *c_QList_T_QObject_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_QObject_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QObject_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QObject_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QObject_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QObject_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr<QObject *>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QObject_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_QObject_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QObject_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QObject_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<QObject *> *>(other_);
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QObject_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QObject_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr<QObject *>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QObject_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QObject_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr<QObject *>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QObject_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QObject_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QObject_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QObject_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QObject_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QObject_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QObject_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QObject_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QObject_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QObject_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QObject_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QObject_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr<QObject *>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QObject_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr<QObject *>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QObject_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QObject_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  // tag=1010
  fromPtr<QObject *>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QObject_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_QObject_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr<QObject *>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QObject_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr<QObject *>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QObject_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QObject *>(thisObj)->value(i);
}
void c_QList_T_QObject_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QObject *>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QByteArray_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QByteArray> *>(cppObj);
}
void *c_QList_T_QByteArray_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QByteArray>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QByteArray_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QByteArray>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QByteArray_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QByteArray> *>(l_);
  // tag=1010
  fromPtr<QByteArray>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QByteArray_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->at(i)};
}

// tag=1050
// back()
void *c_QList_T_QByteArray_T___back(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->back()};
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QByteArray_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QByteArray_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QByteArray_T___constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->constFirst()};
}

// tag=1050
// constLast() const
const void *c_QList_T_QByteArray_T___constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->constLast()};
}

// tag=1050
// count() const
qsizetype c_QList_T_QByteArray_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QByteArray_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QByteArray_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QByteArray_T___first(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->first()};
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QByteArray_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QByteArray>>{
          fromPtr<QByteArray>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QByteArray_T___front(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->front()};
}

// tag=1050
// isDetached() const
bool c_QList_T_QByteArray_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QByteArray_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QByteArray_T___isSharedWith_QList_T(void *thisObj,
                                                   void *other_) {
  auto &other = *reinterpret_cast<QList<QByteArray> *>(other_);
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QByteArray_T___last(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->last()};
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QByteArray_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QByteArray>>{
          fromPtr<QByteArray>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QByteArray_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QByteArray_T___mid_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QByteArray>>{
          fromPtr<QByteArray>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QByteArray_T___move_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype from,
                                                       qsizetype to) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QByteArray_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QByteArray_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QByteArray_T___remove_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype n) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QByteArray_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QByteArray_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QByteArray_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QByteArray_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QByteArray_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QByteArray_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QByteArray_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QByteArray>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QByteArray_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QByteArray>>{
          fromPtr<QByteArray>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QByteArray_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype pos,
                                                          qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QByteArray>>{
          fromPtr<QByteArray>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QByteArray_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QByteArray_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                              qsizetype i,
                                                              qsizetype j) {
  // tag=1010
  fromPtr<QByteArray>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QByteArray_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QList_T_QByteArray_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QByteArray>>{
          fromPtr<QByteArray>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QByteArray_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QByteArray>>{
          fromPtr<QByteArray>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QByteArray_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr<QByteArray>(thisObj)->value(i)};
}
void c_QList_T_QByteArray_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QByteArray>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QAction_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QAction *> *>(cppObj);
}
void *c_QList_T_QAction_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QAction *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QAction_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QAction *>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QAction_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QAction *> *>(l_);
  // tag=1010
  fromPtr<QAction *>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QAction_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->at(i);
}

// tag=1050
// back()
void *c_QList_T_QAction_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QAction_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QAction_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QAction_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const void *c_QList_T_QAction_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_QAction_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QAction_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QAction_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QAction_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QAction_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr<QAction *>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QAction_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_QAction_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QAction_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QAction_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<QAction *> *>(other_);
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QAction_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QAction_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr<QAction *>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QAction_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QAction_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr<QAction *>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QAction_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QAction_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QAction_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QAction_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QAction_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QAction_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QAction_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QAction_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QAction_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QAction_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QAction_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QAction_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr<QAction *>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QAction_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr<QAction *>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QAction_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QAction_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  // tag=1010
  fromPtr<QAction *>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QAction_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_QAction_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr<QAction *>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QAction_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QAction *>>{
          fromPtr<QAction *>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QAction_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QAction *>(thisObj)->value(i);
}
void c_QList_T_QAction_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QAction *>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QKeySequence_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QKeySequence> *>(cppObj);
}
void *c_QList_T_QKeySequence_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QKeySequence>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QKeySequence_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QKeySequence>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QKeySequence_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QKeySequence> *>(l_);
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QKeySequence_T___at_qsizetype(void *thisObj,
                                                    qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->at(i)};
}

// tag=1050
// back()
void *c_QList_T_QKeySequence_T___back(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->back()};
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QKeySequence_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QKeySequence_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QKeySequence_T___constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->constFirst()};
}

// tag=1050
// constLast() const
const void *c_QList_T_QKeySequence_T___constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->constLast()};
}

// tag=1050
// count() const
qsizetype c_QList_T_QKeySequence_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QKeySequence_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QKeySequence_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QKeySequence_T___first(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->first()};
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QKeySequence_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr<QKeySequence>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QKeySequence_T___front(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->front()};
}

// tag=1050
// isDetached() const
bool c_QList_T_QKeySequence_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QKeySequence_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QKeySequence_T___isSharedWith_QList_T(void *thisObj,
                                                     void *other_) {
  auto &other = *reinterpret_cast<QList<QKeySequence> *>(other_);
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QKeySequence_T___last(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->last()};
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QKeySequence_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr<QKeySequence>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QKeySequence_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QKeySequence_T___mid_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype pos,
                                                         qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr<QKeySequence>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QKeySequence_T___move_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype from,
                                                         qsizetype to) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QKeySequence_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QKeySequence_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QKeySequence_T___remove_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype n) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QKeySequence_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QKeySequence_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QKeySequence_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QKeySequence_T___reserve_qsizetype(void *thisObj,
                                                  qsizetype size) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QKeySequence_T___resize_qsizetype(void *thisObj,
                                                 qsizetype size) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QKeySequence_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QKeySequence_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QKeySequence>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QKeySequence_T___sliced_qsizetype(void *thisObj,
                                                  qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr<QKeySequence>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QKeySequence_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                            qsizetype pos,
                                                            qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr<QKeySequence>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QKeySequence_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QKeySequence_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype i,
                                                                qsizetype j) {
  // tag=1010
  fromPtr<QKeySequence>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QKeySequence_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QList_T_QKeySequence_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr<QKeySequence>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QKeySequence_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr<QKeySequence>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QKeySequence_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{
          fromPtr<QKeySequence>(thisObj)->value(i)};
}
void c_QList_T_QKeySequence_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QKeySequence>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QModelIndex_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QModelIndex> *>(cppObj);
}
void *c_QList_T_QModelIndex_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QModelIndex>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QModelIndex_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QModelIndex>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QModelIndex_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QModelIndex> *>(l_);
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QModelIndex_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->at(i)};
}

// tag=1050
// back()
void *c_QList_T_QModelIndex_T___back(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->back()};
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QModelIndex_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QModelIndex_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QModelIndex_T___constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->constFirst()};
}

// tag=1050
// constLast() const
const void *c_QList_T_QModelIndex_T___constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->constLast()};
}

// tag=1050
// count() const
qsizetype c_QList_T_QModelIndex_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QModelIndex_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QModelIndex_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QModelIndex_T___first(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->first()};
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QModelIndex_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr<QModelIndex>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QModelIndex_T___front(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->front()};
}

// tag=1050
// isDetached() const
bool c_QList_T_QModelIndex_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QModelIndex_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QModelIndex_T___isSharedWith_QList_T(void *thisObj,
                                                    void *other_) {
  auto &other = *reinterpret_cast<QList<QModelIndex> *>(other_);
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QModelIndex_T___last(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->last()};
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QModelIndex_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr<QModelIndex>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QModelIndex_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QModelIndex_T___mid_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype pos,
                                                        qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr<QModelIndex>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QModelIndex_T___move_qsizetype_qsizetype(void *thisObj,
                                                        qsizetype from,
                                                        qsizetype to) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QModelIndex_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QModelIndex_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QModelIndex_T___remove_qsizetype_qsizetype(void *thisObj,
                                                          qsizetype i,
                                                          qsizetype n) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QModelIndex_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QModelIndex_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QModelIndex_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QModelIndex_T___reserve_qsizetype(void *thisObj,
                                                 qsizetype size) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QModelIndex_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QModelIndex_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QModelIndex_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QModelIndex>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QModelIndex_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr<QModelIndex>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QModelIndex_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype pos,
                                                           qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr<QModelIndex>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QModelIndex_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QModelIndex_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                               qsizetype i,
                                                               qsizetype j) {
  // tag=1010
  fromPtr<QModelIndex>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QModelIndex_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QList_T_QModelIndex_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr<QModelIndex>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QModelIndex_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QModelIndex>>{
          fromPtr<QModelIndex>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QModelIndex_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QModelIndex>{
          fromPtr<QModelIndex>(thisObj)->value(i)};
}
void c_QList_T_QModelIndex_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QModelIndex>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QItemSelectionRange_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QItemSelectionRange> *>(cppObj);
}
void *c_QList_T_QItemSelectionRange_T___constructor() {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QList_wrapper<QItemSelectionRange>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QItemSelectionRange_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr =
      new QtDartBindings_wrappersNS::QList_wrapper<QItemSelectionRange>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QItemSelectionRange_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QItemSelectionRange> *>(l_);
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QItemSelectionRange_T___at_qsizetype(void *thisObj,
                                                           qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->at(i)};
}

// tag=1050
// back()
void *c_QList_T_QItemSelectionRange_T___back(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->back()};
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QItemSelectionRange_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QItemSelectionRange_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QItemSelectionRange_T___constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->constFirst()};
}

// tag=1050
// constLast() const
const void *c_QList_T_QItemSelectionRange_T___constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->constLast()};
}

// tag=1050
// count() const
qsizetype c_QList_T_QItemSelectionRange_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QItemSelectionRange_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QItemSelectionRange_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QItemSelectionRange_T___first(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->first()};
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___first_qsizetype(void *thisObj,
                                                        qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr<QItemSelectionRange>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QItemSelectionRange_T___front(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->front()};
}

// tag=1050
// isDetached() const
bool c_QList_T_QItemSelectionRange_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QItemSelectionRange_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QItemSelectionRange_T___isSharedWith_QList_T(void *thisObj,
                                                            void *other_) {
  auto &other = *reinterpret_cast<QList<QItemSelectionRange> *>(other_);
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QItemSelectionRange_T___last(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->last()};
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___last_qsizetype(void *thisObj,
                                                       qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr<QItemSelectionRange>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QItemSelectionRange_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QItemSelectionRange_T___mid_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype pos,
                                                                qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr<QItemSelectionRange>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QItemSelectionRange_T___move_qsizetype_qsizetype(void *thisObj,
                                                                qsizetype from,
                                                                qsizetype to) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QItemSelectionRange_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QItemSelectionRange_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QItemSelectionRange_T___remove_qsizetype_qsizetype(void *thisObj,
                                                                  qsizetype i,
                                                                  qsizetype n) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QItemSelectionRange_T___removeAt_qsizetype(void *thisObj,
                                                          qsizetype i) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QItemSelectionRange_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QItemSelectionRange_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QItemSelectionRange_T___reserve_qsizetype(void *thisObj,
                                                         qsizetype size) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QItemSelectionRange_T___resize_qsizetype(void *thisObj,
                                                        qsizetype size) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QItemSelectionRange_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QItemSelectionRange_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QItemSelectionRange>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QItemSelectionRange_T___sliced_qsizetype(void *thisObj,
                                                         qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr<QItemSelectionRange>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QItemSelectionRange_T___sliced_qsizetype_qsizetype(
    void *thisObj, qsizetype pos, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr<QItemSelectionRange>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QItemSelectionRange_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QItemSelectionRange_T___swapItemsAt_qsizetype_qsizetype(
    void *thisObj, qsizetype i, qsizetype j) {
  // tag=1010
  fromPtr<QItemSelectionRange>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QItemSelectionRange_T___takeAt_qsizetype(void *thisObj,
                                                         qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QList_T_QItemSelectionRange_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr<QItemSelectionRange>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QItemSelectionRange_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QItemSelectionRange>>{
          fromPtr<QItemSelectionRange>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QItemSelectionRange_T___value_qsizetype(void *thisObj,
                                                        qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QItemSelectionRange>{
          fromPtr<QItemSelectionRange>(thisObj)->value(i)};
}
void c_QList_T_QItemSelectionRange_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QItemSelectionRange>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QSize_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<QSize> *>(
      cppObj);
}
void *c_QList_T_QSize_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QSize>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QSize_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QSize>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QSize_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QSize> *>(l_);
  // tag=1010
  fromPtr<QSize>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QSize_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->at(i)};
}

// tag=1050
// back()
void *c_QList_T_QSize_T___back(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->back()};
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QSize_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QSize_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QSize_T___constFirst(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->constFirst()};
}

// tag=1050
// constLast() const
const void *c_QList_T_QSize_T___constLast(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->constLast()};
}

// tag=1050
// count() const
qsizetype c_QList_T_QSize_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QSize_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QSize_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QSize_T___first(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->first()};
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QSize_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr<QSize>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QSize_T___front(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->front()};
}

// tag=1050
// isDetached() const
bool c_QList_T_QSize_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QSize_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QSize_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<QSize> *>(other_);
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QSize_T___last(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->last()};
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QSize_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr<QSize>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QSize_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QSize_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                  qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr<QSize>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QSize_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                  qsizetype to) {
  // tag=1010
  fromPtr<QSize>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QSize_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QSize_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QSize_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                    qsizetype n) {
  // tag=1010
  fromPtr<QSize>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QSize_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QSize>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QSize_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QSize_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QSize_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QSize>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QSize_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QSize>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QSize_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QSize_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QSize>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QSize_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr<QSize>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QSize_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                     qsizetype pos,
                                                     qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr<QSize>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QSize_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QSize>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QSize_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                         qsizetype i,
                                                         qsizetype j) {
  // tag=1010
  fromPtr<QSize>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QSize_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->takeAt(i)};
}

// tag=1050
// toList() const
void *c_QList_T_QSize_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr<QSize>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QSize_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr<QSize>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QSize_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr<QSize>(thisObj)->value(i)};
}
void c_QList_T_QSize_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QSize>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_int_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QList_wrapper<int> *>(
      cppObj);
}
void *c_QList_T_int_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<int>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_int_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<int>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_int_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<int> *>(l_);
  // tag=1010
  fromPtr<int>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const int c_QList_T_int_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->at(i);
}

// tag=1050
// back()
int c_QList_T_int_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_int_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_int_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const int c_QList_T_int_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const int c_QList_T_int_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_int_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_int_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_int_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->empty();
}

// tag=1050
// first()
int c_QList_T_int_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_int_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr<int>(thisObj)->first(n)};
}

// tag=1050
// front()
int c_QList_T_int_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_int_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_int_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_int_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<int> *>(other_);
  return
      // tag=1010
      fromPtr<int>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
int c_QList_T_int_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_int_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr<int>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_int_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_int_T___mid_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{
          fromPtr<int>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_int_T___move_qsizetype_qsizetype(void *thisObj, qsizetype from,
                                                qsizetype to) {
  // tag=1010
  fromPtr<int>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_int_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_int_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_int_T___remove_qsizetype_qsizetype(void *thisObj, qsizetype i,
                                                  qsizetype n) {
  // tag=1010
  fromPtr<int>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_int_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<int>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_int_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_int_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_int_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<int>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_int_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<int>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_int_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_int_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_int_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{
          fromPtr<int>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_int_T___sliced_qsizetype_qsizetype(void *thisObj, qsizetype pos,
                                                   qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{
          fromPtr<int>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_int_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<int>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_int_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype i,
                                                       qsizetype j) {
  // tag=1010
  fromPtr<int>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
int c_QList_T_int_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_int_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr<int>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_int_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{
          fromPtr<int>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
int c_QList_T_int_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<int>(thisObj)->value(i);
}
void c_QList_T_int_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<int>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QWindow_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QWindow *> *>(cppObj);
}
void *c_QList_T_QWindow_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWindow *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QWindow_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWindow *>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QWindow_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QWindow *> *>(l_);
  // tag=1010
  fromPtr<QWindow *>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QWindow_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->at(i);
}

// tag=1050
// back()
void *c_QList_T_QWindow_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QWindow_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QWindow_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QWindow_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const void *c_QList_T_QWindow_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_QWindow_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QWindow_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QWindow_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QWindow_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QWindow_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          fromPtr<QWindow *>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QWindow_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_QWindow_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QWindow_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QWindow_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<QWindow *> *>(other_);
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QWindow_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QWindow_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          fromPtr<QWindow *>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QWindow_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QWindow_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          fromPtr<QWindow *>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QWindow_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QWindow_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QWindow_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QWindow_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QWindow_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QWindow_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QWindow_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QWindow_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QWindow_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QWindow_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QWindow_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QWindow_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          fromPtr<QWindow *>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QWindow_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          fromPtr<QWindow *>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QWindow_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QWindow_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  // tag=1010
  fromPtr<QWindow *>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QWindow_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_QWindow_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          fromPtr<QWindow *>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QWindow_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWindow *>>{
          fromPtr<QWindow *>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QWindow_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QWindow *>(thisObj)->value(i);
}
void c_QList_T_QWindow_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QWindow *>(thisObj);
}
}
extern "C" {

// tag=1049
void c_QList_T_QWidget_T__Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QList_wrapper<QWidget *> *>(cppObj);
}
void *c_QList_T_QWidget_T___constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWidget *>();
  return reinterpret_cast<void *>(ptr);
}
void *c_QList_T_QWidget_T___constructor_qsizetype(qsizetype size) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QList_wrapper<QWidget *>(size);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// append(const QList<T > & l)
void c_QList_T_QWidget_T___append_QList_T(void *thisObj, void *l_) {
  auto &l = *reinterpret_cast<QList<QWidget *> *>(l_);
  // tag=1010
  fromPtr<QWidget *>(thisObj)->append(l);
}

// tag=1050
// at(qsizetype i) const
const void *c_QList_T_QWidget_T___at_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->at(i);
}

// tag=1050
// back()
void *c_QList_T_QWidget_T___back(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->back();
}

// tag=1050
// capacity() const
qsizetype c_QList_T_QWidget_T___capacity(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->capacity();
}

// tag=1050
// clear()
void c_QList_T_QWidget_T___clear(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->clear();
}

// tag=1050
// constFirst() const
const void *c_QList_T_QWidget_T___constFirst(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->constFirst();
}

// tag=1050
// constLast() const
const void *c_QList_T_QWidget_T___constLast(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->constLast();
}

// tag=1050
// count() const
qsizetype c_QList_T_QWidget_T___count(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->count();
}

// tag=1050
// detach()
void c_QList_T_QWidget_T___detach(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->detach();
}

// tag=1050
// empty() const
bool c_QList_T_QWidget_T___empty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->empty();
}

// tag=1050
// first()
void *c_QList_T_QWidget_T___first(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->first();
}

// tag=1050
// first(qsizetype n) const
void *c_QList_T_QWidget_T___first_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          fromPtr<QWidget *>(thisObj)->first(n)};
}

// tag=1050
// front()
void *c_QList_T_QWidget_T___front(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->front();
}

// tag=1050
// isDetached() const
bool c_QList_T_QWidget_T___isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->isDetached();
}

// tag=1050
// isEmpty() const
bool c_QList_T_QWidget_T___isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->isEmpty();
}

// tag=1050
// isSharedWith(const QList<T > & other) const
bool c_QList_T_QWidget_T___isSharedWith_QList_T(void *thisObj, void *other_) {
  auto &other = *reinterpret_cast<QList<QWidget *> *>(other_);
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->isSharedWith(other);
}

// tag=1050
// last()
void *c_QList_T_QWidget_T___last(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->last();
}

// tag=1050
// last(qsizetype n) const
void *c_QList_T_QWidget_T___last_qsizetype(void *thisObj, qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          fromPtr<QWidget *>(thisObj)->last(n)};
}

// tag=1050
// length() const
qsizetype c_QList_T_QWidget_T___length(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->length();
}

// tag=1050
// mid(qsizetype pos, qsizetype len) const
void *c_QList_T_QWidget_T___mid_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype pos,
                                                    qsizetype len) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          fromPtr<QWidget *>(thisObj)->mid(pos, len)};
}

// tag=1050
// move(qsizetype from, qsizetype to)
void c_QList_T_QWidget_T___move_qsizetype_qsizetype(void *thisObj,
                                                    qsizetype from,
                                                    qsizetype to) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->move(from, to);
}

// tag=1050
// pop_back()
void c_QList_T_QWidget_T___pop_back(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->pop_back();
}

// tag=1050
// pop_front()
void c_QList_T_QWidget_T___pop_front(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->pop_front();
}

// tag=1050
// remove(qsizetype i, qsizetype n)
void c_QList_T_QWidget_T___remove_qsizetype_qsizetype(void *thisObj,
                                                      qsizetype i,
                                                      qsizetype n) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->remove(i, n);
}

// tag=1050
// removeAt(qsizetype i)
void c_QList_T_QWidget_T___removeAt_qsizetype(void *thisObj, qsizetype i) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->removeAt(i);
}

// tag=1050
// removeFirst()
void c_QList_T_QWidget_T___removeFirst(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->removeFirst();
}

// tag=1050
// removeLast()
void c_QList_T_QWidget_T___removeLast(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->removeLast();
}

// tag=1050
// reserve(qsizetype size)
void c_QList_T_QWidget_T___reserve_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->reserve(size);
}

// tag=1050
// resize(qsizetype size)
void c_QList_T_QWidget_T___resize_qsizetype(void *thisObj, qsizetype size) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->resize(size);
}

// tag=1050
// shrink_to_fit()
void c_QList_T_QWidget_T___shrink_to_fit(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->shrink_to_fit();
}

// tag=1050
// size() const
qsizetype c_QList_T_QWidget_T___size(void *thisObj) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->size();
}

// tag=1050
// sliced(qsizetype pos) const
void *c_QList_T_QWidget_T___sliced_qsizetype(void *thisObj, qsizetype pos) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          fromPtr<QWidget *>(thisObj)->sliced(pos)};
}

// tag=1050
// sliced(qsizetype pos, qsizetype n) const
void *c_QList_T_QWidget_T___sliced_qsizetype_qsizetype(void *thisObj,
                                                       qsizetype pos,
                                                       qsizetype n) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          fromPtr<QWidget *>(thisObj)->sliced(pos, n)};
}

// tag=1050
// squeeze()
void c_QList_T_QWidget_T___squeeze(void *thisObj) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->squeeze();
}

// tag=1050
// swapItemsAt(qsizetype i, qsizetype j)
void c_QList_T_QWidget_T___swapItemsAt_qsizetype_qsizetype(void *thisObj,
                                                           qsizetype i,
                                                           qsizetype j) {
  // tag=1010
  fromPtr<QWidget *>(thisObj)->swapItemsAt(i, j);
}

// tag=1050
// takeAt(qsizetype i)
void *c_QList_T_QWidget_T___takeAt_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->takeAt(i);
}

// tag=1050
// toList() const
void *c_QList_T_QWidget_T___toList(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          fromPtr<QWidget *>(thisObj)->toList()};
}

// tag=1050
// toVector() const
void *c_QList_T_QWidget_T___toVector(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QWidget *>>{
          fromPtr<QWidget *>(thisObj)->toVector()};
}

// tag=1050
// value(qsizetype i) const
void *c_QList_T_QWidget_T___value_qsizetype(void *thisObj, qsizetype i) {
  return
      // tag=1010
      fromPtr<QWidget *>(thisObj)->value(i);
}
void c_QList_T_QWidget_T___destructor(void *thisObj) {

  // tag=1055
  delete fromPtr<QWidget *>(thisObj);
}
}

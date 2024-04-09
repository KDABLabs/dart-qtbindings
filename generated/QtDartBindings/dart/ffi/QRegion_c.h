/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QRegion_wrapper : public ::QRegion {
public:
  ~QRegion_wrapper();
  QRegion_wrapper();
  QRegion_wrapper(const QRect &r);
  QRegion_wrapper(int x, int y, int w, int h);
  const QRect *begin() const;
  QRect boundingRect() const;
  const QRect *cbegin() const;
  const QRect *cend() const;
  bool contains(const QPoint &p) const;
  bool contains(const QRect &r) const;
  const QRect *end() const;
  QRegion intersected(const QRect &r) const;
  QRegion intersected(const QRegion &r) const;
  bool intersects(const QRect &r) const;
  bool intersects(const QRegion &r) const;
  bool isEmpty() const;
  bool isNull() const;
  int rectCount() const;
  void setRects(const QRect *rect, int num);
  QRegion subtracted(const QRegion &r) const;
  void translate(const QPoint &p);
  void translate(int dx, int dy);
  QRegion translated(const QPoint &p) const;
  QRegion translated(int dx, int dy) const;
  QRegion united(const QRect &r) const;
  QRegion united(const QRegion &r) const;
  QRegion xored(const QRegion &r) const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QRegion::QRegion()
QtDartBindings_EXPORT void *c_QRegion__constructor();
// QRegion::QRegion(const QRect & r)
QtDartBindings_EXPORT void *c_QRegion__constructor_QRect(void *r_);
// QRegion::QRegion(int x, int y, int w, int h)
QtDartBindings_EXPORT void *
c_QRegion__constructor_int_int_int_int(int x, int y, int w, int h);
// QRegion::begin() const
QtDartBindings_EXPORT void *c_QRegion__begin(void *thisObj);
// QRegion::boundingRect() const
QtDartBindings_EXPORT void *c_QRegion__boundingRect(void *thisObj);
// QRegion::cbegin() const
QtDartBindings_EXPORT void *c_QRegion__cbegin(void *thisObj);
// QRegion::cend() const
QtDartBindings_EXPORT void *c_QRegion__cend(void *thisObj);
// QRegion::contains(const QPoint & p) const
QtDartBindings_EXPORT bool c_QRegion__contains_QPoint(void *thisObj, void *p_);
// QRegion::contains(const QRect & r) const
QtDartBindings_EXPORT bool c_QRegion__contains_QRect(void *thisObj, void *r_);
// QRegion::end() const
QtDartBindings_EXPORT void *c_QRegion__end(void *thisObj);
// QRegion::intersected(const QRect & r) const
QtDartBindings_EXPORT void *c_QRegion__intersected_QRect(void *thisObj,
                                                         void *r_);
// QRegion::intersected(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__intersected_QRegion(void *thisObj,
                                                           void *r_);
// QRegion::intersects(const QRect & r) const
QtDartBindings_EXPORT bool c_QRegion__intersects_QRect(void *thisObj, void *r_);
// QRegion::intersects(const QRegion & r) const
QtDartBindings_EXPORT bool c_QRegion__intersects_QRegion(void *thisObj,
                                                         void *r_);
// QRegion::isEmpty() const
QtDartBindings_EXPORT bool c_QRegion__isEmpty(void *thisObj);
// QRegion::isNull() const
QtDartBindings_EXPORT bool c_QRegion__isNull(void *thisObj);
// QRegion::rectCount() const
QtDartBindings_EXPORT int c_QRegion__rectCount(void *thisObj);
// QRegion::setRects(const QRect * rect, int num)
QtDartBindings_EXPORT void c_QRegion__setRects_QRect_int(void *thisObj,
                                                         void *rect_, int num);
// QRegion::subtracted(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__subtracted_QRegion(void *thisObj,
                                                          void *r_);
// QRegion::translate(const QPoint & p)
QtDartBindings_EXPORT void c_QRegion__translate_QPoint(void *thisObj, void *p_);
// QRegion::translate(int dx, int dy)
QtDartBindings_EXPORT void c_QRegion__translate_int_int(void *thisObj, int dx,
                                                        int dy);
// QRegion::translated(const QPoint & p) const
QtDartBindings_EXPORT void *c_QRegion__translated_QPoint(void *thisObj,
                                                         void *p_);
// QRegion::translated(int dx, int dy) const
QtDartBindings_EXPORT void *c_QRegion__translated_int_int(void *thisObj, int dx,
                                                          int dy);
// QRegion::united(const QRect & r) const
QtDartBindings_EXPORT void *c_QRegion__united_QRect(void *thisObj, void *r_);
// QRegion::united(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__united_QRegion(void *thisObj, void *r_);
// QRegion::xored(const QRegion & r) const
QtDartBindings_EXPORT void *c_QRegion__xored_QRegion(void *thisObj, void *r_);
QtDartBindings_EXPORT void c_QRegion__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QRegion_Finalizer(void *cppObj);
}

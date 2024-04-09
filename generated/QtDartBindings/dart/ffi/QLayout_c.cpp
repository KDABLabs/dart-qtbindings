/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QLayout_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QLayout_wrapper::QLayout_wrapper(QWidget *parent) : ::QLayout(parent) {}
bool QLayout_wrapper::activate() { return ::QLayout::activate(); }
void QLayout_wrapper::addChildLayout(QLayout *l) {
  ::QLayout::addChildLayout(l);
}
void QLayout_wrapper::addChildWidget(QWidget *w) {
  ::QLayout::addChildWidget(w);
}
void QLayout_wrapper::addItem(QLayoutItem *arg__1) {
  if (m_addItemCallback) {
    const void *thisPtr = this;
    m_addItemCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    std::cerr << "addItem: Warning: Calling pure-virtual\n";
    return;
  }
}
void QLayout_wrapper::addItem_nocallback(QLayoutItem *arg__1) {
  std::cerr << "addItem: Warning: Calling pure-virtual\n";
  return;
}
void QLayout_wrapper::addWidget(QWidget *w) { ::QLayout::addWidget(w); }
bool QLayout_wrapper::adoptLayout(QLayout *layout) {
  return ::QLayout::adoptLayout(layout);
}
QRect QLayout_wrapper::alignmentRect(const QRect &arg__1) const {
  return ::QLayout::alignmentRect(arg__1);
}
QSize QLayout_wrapper::closestAcceptableSize(const QWidget *w, const QSize &s) {
  return ::QLayout::closestAcceptableSize(w, s);
}
QRect QLayout_wrapper::contentsRect() const {
  return ::QLayout::contentsRect();
}
int QLayout_wrapper::count() const {
  if (m_countCallback) {
    const void *thisPtr = this;
    return m_countCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "count: Warning: Calling pure-virtual\n";
    return {};
  }
}
int QLayout_wrapper::count_nocallback() const {
  std::cerr << "count: Warning: Calling pure-virtual\n";
  return {};
}
void QLayout_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QLayout::customEvent(event);
  }
}
void QLayout_wrapper::customEvent_nocallback(QEvent *event) {
  ::QLayout::customEvent(event);
}
bool QLayout_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QLayout::event(event);
  }
}
bool QLayout_wrapper::event_nocallback(QEvent *event) {
  return ::QLayout::event(event);
}
bool QLayout_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QLayout::eventFilter(watched, event);
  }
}
bool QLayout_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QLayout::eventFilter(watched, event);
}
QFlags<Qt::Orientation> QLayout_wrapper::expandingDirections() const {
  if (m_expandingDirectionsCallback) {
    const void *thisPtr = this;
    return m_expandingDirectionsCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::expandingDirections();
  }
}
QFlags<Qt::Orientation>
QLayout_wrapper::expandingDirections_nocallback() const {
  return ::QLayout::expandingDirections();
}
QRect QLayout_wrapper::geometry() const {
  if (m_geometryCallback) {
    const void *thisPtr = this;
    return *m_geometryCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::geometry();
  }
}
QRect QLayout_wrapper::geometry_nocallback() const {
  return ::QLayout::geometry();
}
bool QLayout_wrapper::hasHeightForWidth() const {
  if (m_hasHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::hasHeightForWidth();
  }
}
bool QLayout_wrapper::hasHeightForWidth_nocallback() const {
  return ::QLayout::hasHeightForWidth();
}
int QLayout_wrapper::heightForWidth(int arg__1) const {
  if (m_heightForWidthCallback) {
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLayout::heightForWidth(arg__1);
  }
}
int QLayout_wrapper::heightForWidth_nocallback(int arg__1) const {
  return ::QLayout::heightForWidth(arg__1);
}
int QLayout_wrapper::indexOf(const QLayoutItem *arg__1) const {
  if (m_indexOfCallback) {
    const void *thisPtr = this;
    return m_indexOfCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLayout::indexOf(arg__1);
  }
}
int QLayout_wrapper::indexOf_nocallback(const QLayoutItem *arg__1) const {
  return ::QLayout::indexOf(arg__1);
}
int QLayout_wrapper::indexOf(const QWidget *arg__1) const {
  if (m_indexOf_2Callback) {
    const void *thisPtr = this;
    return m_indexOf_2Callback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLayout::indexOf(arg__1);
  }
}
int QLayout_wrapper::indexOf_nocallback(const QWidget *arg__1) const {
  return ::QLayout::indexOf(arg__1);
}
void QLayout_wrapper::invalidate() {
  if (m_invalidateCallback) {
    const void *thisPtr = this;
    m_invalidateCallback(const_cast<void *>(thisPtr));
  } else {
    ::QLayout::invalidate();
  }
}
void QLayout_wrapper::invalidate_nocallback() { ::QLayout::invalidate(); }
bool QLayout_wrapper::isEmpty() const {
  if (m_isEmptyCallback) {
    const void *thisPtr = this;
    return m_isEmptyCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::isEmpty();
  }
}
bool QLayout_wrapper::isEmpty_nocallback() const {
  return ::QLayout::isEmpty();
}
bool QLayout_wrapper::isEnabled() const { return ::QLayout::isEnabled(); }
QLayoutItem *QLayout_wrapper::itemAt(int index) const {
  if (m_itemAtCallback) {
    const void *thisPtr = this;
    return m_itemAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    std::cerr << "itemAt: Warning: Calling pure-virtual\n";
    return {};
  }
}
QLayoutItem *QLayout_wrapper::itemAt_nocallback(int index) const {
  std::cerr << "itemAt: Warning: Calling pure-virtual\n";
  return {};
}
QLayout *QLayout_wrapper::layout() {
  if (m_layoutCallback) {
    const void *thisPtr = this;
    return m_layoutCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::layout();
  }
}
QLayout *QLayout_wrapper::layout_nocallback() { return ::QLayout::layout(); }
QSize QLayout_wrapper::maximumSize() const {
  if (m_maximumSizeCallback) {
    const void *thisPtr = this;
    return *m_maximumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::maximumSize();
  }
}
QSize QLayout_wrapper::maximumSize_nocallback() const {
  return ::QLayout::maximumSize();
}
QWidget *QLayout_wrapper::menuBar() const { return ::QLayout::menuBar(); }
int QLayout_wrapper::minimumHeightForWidth(int arg__1) const {
  if (m_minimumHeightForWidthCallback) {
    const void *thisPtr = this;
    return m_minimumHeightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QLayout::minimumHeightForWidth(arg__1);
  }
}
int QLayout_wrapper::minimumHeightForWidth_nocallback(int arg__1) const {
  return ::QLayout::minimumHeightForWidth(arg__1);
}
QSize QLayout_wrapper::minimumSize() const {
  if (m_minimumSizeCallback) {
    const void *thisPtr = this;
    return *m_minimumSizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::minimumSize();
  }
}
QSize QLayout_wrapper::minimumSize_nocallback() const {
  return ::QLayout::minimumSize();
}
QWidget *QLayout_wrapper::parentWidget() const {
  return ::QLayout::parentWidget();
}
void QLayout_wrapper::removeItem(QLayoutItem *arg__1) {
  ::QLayout::removeItem(arg__1);
}
void QLayout_wrapper::removeWidget(QWidget *w) { ::QLayout::removeWidget(w); }
void QLayout_wrapper::setContentsMargins(int left, int top, int right,
                                         int bottom) {
  ::QLayout::setContentsMargins(left, top, right, bottom);
}
void QLayout_wrapper::setEnabled(bool arg__1) { ::QLayout::setEnabled(arg__1); }
void QLayout_wrapper::setGeometry(const QRect &arg__1) {
  if (m_setGeometryCallback) {
    const void *thisPtr = this;
    m_setGeometryCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLayout::setGeometry(arg__1);
  }
}
void QLayout_wrapper::setGeometry_nocallback(const QRect &arg__1) {
  ::QLayout::setGeometry(arg__1);
}
void QLayout_wrapper::setMenuBar(QWidget *w) { ::QLayout::setMenuBar(w); }
void QLayout_wrapper::setSpacing(int arg__1) {
  if (m_setSpacingCallback) {
    const void *thisPtr = this;
    m_setSpacingCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    ::QLayout::setSpacing(arg__1);
  }
}
void QLayout_wrapper::setSpacing_nocallback(int arg__1) {
  ::QLayout::setSpacing(arg__1);
}
QSize QLayout_wrapper::sizeHint() const {
  if (m_sizeHintCallback) {
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    std::cerr << "sizeHint: Warning: Calling pure-virtual\n";
    return {};
  }
}
QSize QLayout_wrapper::sizeHint_nocallback() const {
  std::cerr << "sizeHint: Warning: Calling pure-virtual\n";
  return {};
}
int QLayout_wrapper::spacing() const {
  if (m_spacingCallback) {
    const void *thisPtr = this;
    return m_spacingCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::spacing();
  }
}
int QLayout_wrapper::spacing_nocallback() const { return ::QLayout::spacing(); }
QLayoutItem *QLayout_wrapper::takeAt(int index) {
  if (m_takeAtCallback) {
    const void *thisPtr = this;
    return m_takeAtCallback(const_cast<void *>(thisPtr), index);
  } else {
    std::cerr << "takeAt: Warning: Calling pure-virtual\n";
    return {};
  }
}
QLayoutItem *QLayout_wrapper::takeAt_nocallback(int index) {
  std::cerr << "takeAt: Warning: Calling pure-virtual\n";
  return {};
}
int QLayout_wrapper::totalHeightForWidth(int w) const {
  return ::QLayout::totalHeightForWidth(w);
}
QSize QLayout_wrapper::totalMaximumSize() const {
  return ::QLayout::totalMaximumSize();
}
int QLayout_wrapper::totalMinimumHeightForWidth(int w) const {
  return ::QLayout::totalMinimumHeightForWidth(w);
}
QSize QLayout_wrapper::totalMinimumSize() const {
  return ::QLayout::totalMinimumSize();
}
QSize QLayout_wrapper::totalSizeHint() const {
  return ::QLayout::totalSizeHint();
}
QString QLayout_wrapper::tr(const char *s, const char *c, int n) {
  return ::QLayout::tr(s, c, n);
}
void QLayout_wrapper::unsetContentsMargins() {
  ::QLayout::unsetContentsMargins();
}
void QLayout_wrapper::update() { ::QLayout::update(); }
QWidget *QLayout_wrapper::widget() const {
  if (m_widgetCallback) {
    const void *thisPtr = this;
    return m_widgetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QLayout::widget();
  }
}
QWidget *QLayout_wrapper::widget_nocallback() const {
  return ::QLayout::widget();
}
void QLayout_wrapper::widgetEvent(QEvent *arg__1) {
  ::QLayout::widgetEvent(arg__1);
}
QLayout_wrapper::~QLayout_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QLayout *fromPtr(void *ptr) { return reinterpret_cast<QLayout *>(ptr); }
static QtDartBindings_wrappersNS::QLayout_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(ptr);
}
extern "C" {
void c_QLayout_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(cppObj);
}
void *c_QLayout__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QLayout_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// activate()
bool c_QLayout__activate(void *thisObj) {
  const auto &result = fromPtr(thisObj)->activate();
  return result;
}
// addChildLayout(QLayout * l)
void c_QLayout__addChildLayout_QLayout(void *thisObj, void *l_) {
  auto l = reinterpret_cast<QLayout *>(l_);
  fromWrapperPtr(thisObj)->addChildLayout(l);
}
// addChildWidget(QWidget * w)
void c_QLayout__addChildWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  fromWrapperPtr(thisObj)->addChildWidget(w);
}
// addItem(QLayoutItem * arg__1)
void c_QLayout__addItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->addItem_nocallback(arg__1);
    } else {
      return targetPtr->addItem(arg__1);
    }
  }();
}
// addWidget(QWidget * w)
void c_QLayout__addWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  fromPtr(thisObj)->addWidget(w);
}
// adoptLayout(QLayout * layout)
bool c_QLayout__adoptLayout_QLayout(void *thisObj, void *layout_) {
  auto layout = reinterpret_cast<QLayout *>(layout_);
  const auto &result = fromWrapperPtr(thisObj)->adoptLayout(layout);
  return result;
}
// alignmentRect(const QRect & arg__1) const
void *c_QLayout__alignmentRect_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  const auto &result = new Dartagnan::ValueWrapper<QRect>{
      fromWrapperPtr(thisObj)->alignmentRect(arg__1)};
  return result;
}
// closestAcceptableSize(const QWidget * w, const QSize & s)
void *c_static_QLayout__closestAcceptableSize_QWidget_QSize(void *w_,
                                                            void *s_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  assert(s_);
  auto &s = *reinterpret_cast<QSize *>(s_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      QtDartBindings_wrappersNS::QLayout_wrapper::closestAcceptableSize(w, s)};
  return result;
}
// contentsRect() const
void *c_QLayout__contentsRect(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->contentsRect()};
  return result;
}
// count() const
int c_QLayout__count(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->count_nocallback();
    } else {
      return targetPtr->count();
    }
  }();
  return result;
}
// customEvent(QEvent * event)
void c_QLayout__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
void c_QLayout__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QLayout *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLayout::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * event)
bool c_QLayout__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QLayout__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// expandingDirections() const
int c_QLayout__expandingDirections(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->expandingDirections_nocallback();
    } else {
      return targetPtr->expandingDirections();
    }
  }();
  return result;
}
// geometry() const
void *c_QLayout__geometry(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QRect>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->geometry_nocallback();
    } else {
      return targetPtr->geometry();
    }
  }()};
  return result;
}
// hasHeightForWidth() const
bool c_QLayout__hasHeightForWidth(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->hasHeightForWidth_nocallback();
    } else {
      return targetPtr->hasHeightForWidth();
    }
  }();
  return result;
}
// heightForWidth(int arg__1) const
int c_QLayout__heightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->heightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->heightForWidth(arg__1);
    }
  }();
  return result;
}
// indexOf(const QLayoutItem * arg__1) const
int c_QLayout__indexOf_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexOf_nocallback(arg__1);
    } else {
      return targetPtr->indexOf(arg__1);
    }
  }();
  return result;
}
// indexOf(const QWidget * arg__1) const
int c_QLayout__indexOf_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->indexOf_nocallback(arg__1);
    } else {
      return targetPtr->indexOf(arg__1);
    }
  }();
  return result;
}
// invalidate()
void c_QLayout__invalidate(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->invalidate_nocallback();
    } else {
      return targetPtr->invalidate();
    }
  }();
}
// isEmpty() const
bool c_QLayout__isEmpty(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isEmpty_nocallback();
    } else {
      return targetPtr->isEmpty();
    }
  }();
  return result;
}
// isEnabled() const
bool c_QLayout__isEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEnabled();
  return result;
}
// itemAt(int index) const
void *c_QLayout__itemAt_int(void *thisObj, int index) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->itemAt_nocallback(index);
    } else {
      return targetPtr->itemAt(index);
    }
  }();
  return result;
}
// layout()
void *c_QLayout__layout(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->layout_nocallback();
    } else {
      return targetPtr->layout();
    }
  }();
  return result;
}
// maximumSize() const
void *c_QLayout__maximumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->maximumSize_nocallback();
    } else {
      return targetPtr->maximumSize();
    }
  }()};
  return result;
}
// menuBar() const
void *c_QLayout__menuBar(void *thisObj) {
  const auto &result = fromPtr(thisObj)->menuBar();
  return result;
}
// minimumHeightForWidth(int arg__1) const
int c_QLayout__minimumHeightForWidth_int(void *thisObj, int arg__1) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumHeightForWidth_nocallback(arg__1);
    } else {
      return targetPtr->minimumHeightForWidth(arg__1);
    }
  }();
  return result;
}
// minimumSize() const
void *c_QLayout__minimumSize(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->minimumSize_nocallback();
    } else {
      return targetPtr->minimumSize();
    }
  }()};
  return result;
}
// parentWidget() const
void *c_QLayout__parentWidget(void *thisObj) {
  const auto &result = fromPtr(thisObj)->parentWidget();
  return result;
}
// removeItem(QLayoutItem * arg__1)
void c_QLayout__removeItem_QLayoutItem(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QLayoutItem *>(arg__1_);
  fromPtr(thisObj)->removeItem(arg__1);
}
// removeWidget(QWidget * w)
void c_QLayout__removeWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  fromPtr(thisObj)->removeWidget(w);
}
// setContentsMargins(int left, int top, int right, int bottom)
void c_QLayout__setContentsMargins_int_int_int_int(void *thisObj, int left,
                                                   int top, int right,
                                                   int bottom) {
  fromPtr(thisObj)->setContentsMargins(left, top, right, bottom);
}
// setEnabled(bool arg__1)
void c_QLayout__setEnabled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setEnabled(arg__1);
}
// setGeometry(const QRect & arg__1)
void c_QLayout__setGeometry_QRect(void *thisObj, void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QRect *>(arg__1_);
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setGeometry_nocallback(arg__1);
    } else {
      return targetPtr->setGeometry(arg__1);
    }
  }();
}
// setMenuBar(QWidget * w)
void c_QLayout__setMenuBar_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  fromPtr(thisObj)->setMenuBar(w);
}
// setSpacing(int arg__1)
void c_QLayout__setSpacing_int(void *thisObj, int arg__1) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setSpacing_nocallback(arg__1);
    } else {
      return targetPtr->setSpacing(arg__1);
    }
  }();
}
// sizeHint() const
void *c_QLayout__sizeHint(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QSize>{[&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->sizeHint_nocallback();
    } else {
      return targetPtr->sizeHint();
    }
  }()};
  return result;
}
// spacing() const
int c_QLayout__spacing(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->spacing_nocallback();
    } else {
      return targetPtr->spacing();
    }
  }();
  return result;
}
// takeAt(int index)
void *c_QLayout__takeAt_int(void *thisObj, int index) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->takeAt_nocallback(index);
    } else {
      return targetPtr->takeAt(index);
    }
  }();
  return result;
}
// totalHeightForWidth(int w) const
int c_QLayout__totalHeightForWidth_int(void *thisObj, int w) {
  const auto &result = fromPtr(thisObj)->totalHeightForWidth(w);
  return result;
}
// totalMaximumSize() const
void *c_QLayout__totalMaximumSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->totalMaximumSize()};
  return result;
}
// totalMinimumHeightForWidth(int w) const
int c_QLayout__totalMinimumHeightForWidth_int(void *thisObj, int w) {
  const auto &result = fromPtr(thisObj)->totalMinimumHeightForWidth(w);
  return result;
}
// totalMinimumSize() const
void *c_QLayout__totalMinimumSize(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->totalMinimumSize()};
  return result;
}
// totalSizeHint() const
void *c_QLayout__totalSizeHint(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->totalSizeHint()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QLayout__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QLayout_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// unsetContentsMargins()
void c_QLayout__unsetContentsMargins(void *thisObj) {
  fromPtr(thisObj)->unsetContentsMargins();
}
// update()
void c_QLayout__update(void *thisObj) { fromPtr(thisObj)->update(); }
// widget() const
void *c_QLayout__widget(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLayout_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->widget_nocallback();
    } else {
      return targetPtr->widget();
    }
  }();
  return result;
}
// widgetEvent(QEvent * arg__1)
void c_QLayout__widgetEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  fromWrapperPtr(thisObj)->widgetEvent(arg__1);
}
void c_QLayout__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QLayout__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3187:
    wrapper->m_addItemCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_addItem>(callback);
    break;
  case 3195:
    wrapper->m_countCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_count>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3169:
    wrapper->m_expandingDirectionsCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper::
                             Callback_expandingDirections>(callback);
    break;
  case 3170:
    wrapper->m_geometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_geometry>(
        callback);
    break;
  case 3171:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 3172:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 3206:
    wrapper->m_indexOfCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_indexOf>(callback);
    break;
  case 3207:
    wrapper->m_indexOf_2Callback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_indexOf_2>(
        callback);
    break;
  case 3173:
    wrapper->m_invalidateCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_invalidate>(
        callback);
    break;
  case 3174:
    wrapper->m_isEmptyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_isEmpty>(callback);
    break;
  case 3214:
    wrapper->m_itemAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_itemAt>(callback);
    break;
  case 3175:
    wrapper->m_layoutCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_layout>(callback);
    break;
  case 3176:
    wrapper->m_maximumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_maximumSize>(
        callback);
    break;
  case 3177:
    wrapper->m_minimumHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLayout_wrapper::
                             Callback_minimumHeightForWidth>(callback);
    break;
  case 3178:
    wrapper->m_minimumSizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_minimumSize>(
        callback);
    break;
  case 3179:
    wrapper->m_setGeometryCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_setGeometry>(
        callback);
    break;
  case 3232:
    wrapper->m_setSpacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_setSpacing>(
        callback);
    break;
  case 3180:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_sizeHint>(
        callback);
    break;
  case 3234:
    wrapper->m_spacingCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_spacing>(callback);
    break;
  case 3236:
    wrapper->m_takeAtCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_takeAt>(callback);
    break;
  case 3181:
    wrapper->m_widgetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLayout_wrapper::Callback_widget>(callback);
    break;
  }
}
}

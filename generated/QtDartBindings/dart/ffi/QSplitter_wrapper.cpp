#include "QSplitter_wrapper.h"

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
QSplitter_wrapper::QSplitter_wrapper(QWidget *parent) : ::QSplitter(parent) {}

// tag=1006
QSplitter_wrapper::QSplitter_wrapper(Qt::Orientation arg__1, QWidget *parent)
    : ::QSplitter(arg__1, parent) {}
void QSplitter_wrapper::addWidget(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QSplitter::addWidget(widget);
}
void QSplitter_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QSplitter::changeEvent(arg__1);
  }
}
// tag=1009
void QSplitter_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QSplitter::changeEvent(arg__1);
}
bool QSplitter_wrapper::childrenCollapsible() const {
  // tag=1000

  // tag=1004
  return ::QSplitter::childrenCollapsible();
}
int QSplitter_wrapper::closestLegalPosition(int arg__1, int arg__2) {
  // tag=1000

  // tag=1004
  return ::QSplitter::closestLegalPosition(arg__1, arg__2);
}
int QSplitter_wrapper::count() const {
  // tag=1000

  // tag=1004
  return ::QSplitter::count();
}
void QSplitter_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QSplitter::customEvent(event);
  }
}
// tag=1009
void QSplitter_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QSplitter::customEvent(event);
}
int QSplitter_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSplitter::devType();
  }
}
// tag=1009
int QSplitter_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QSplitter::devType();
}
bool QSplitter_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QSplitter::event(arg__1);
  }
}
// tag=1009
bool QSplitter_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QSplitter::event(arg__1);
}
bool QSplitter_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QSplitter::eventFilter(watched, event);
  }
}
// tag=1009
bool QSplitter_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  // tag=1003
  return ::QSplitter::eventFilter(watched, event);
}
bool QSplitter_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QSplitter::focusNextPrevChild(next);
  }
}
// tag=1009
bool QSplitter_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QSplitter::focusNextPrevChild(next);
}
int QSplitter_wrapper::handleWidth() const {
  // tag=1000

  // tag=1004
  return ::QSplitter::handleWidth();
}
bool QSplitter_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSplitter::hasHeightForWidth();
  }
}
// tag=1009
bool QSplitter_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QSplitter::hasHeightForWidth();
}
int QSplitter_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QSplitter::heightForWidth(arg__1);
  }
}
// tag=1009
int QSplitter_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QSplitter::heightForWidth(arg__1);
}
int QSplitter_wrapper::indexOf(QWidget *w) const {
  // tag=1000

  // tag=1004
  return ::QSplitter::indexOf(w);
}
void QSplitter_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QSplitter::initPainter(painter);
  }
}
// tag=1009
void QSplitter_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QSplitter::initPainter(painter);
}
void QSplitter_wrapper::insertWidget(int index, QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QSplitter::insertWidget(index, widget);
}
bool QSplitter_wrapper::isCollapsible(int index) const {
  // tag=1000

  // tag=1004
  return ::QSplitter::isCollapsible(index);
}
void QSplitter_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QSplitter::leaveEvent(event);
  }
}
// tag=1009
void QSplitter_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QSplitter::leaveEvent(event);
}
QSize QSplitter_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSplitter::minimumSizeHint();
  }
}
// tag=1009
QSize QSplitter_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QSplitter::minimumSizeHint();
}
void QSplitter_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QSplitter::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QSplitter_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QSplitter::mouseDoubleClickEvent(event);
}
void QSplitter_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QSplitter::mouseMoveEvent(event);
  }
}
// tag=1009
void QSplitter_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QSplitter::mouseMoveEvent(event);
}
void QSplitter_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QSplitter::mousePressEvent(event);
  }
}
// tag=1009
void QSplitter_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QSplitter::mousePressEvent(event);
}
void QSplitter_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QSplitter::mouseReleaseEvent(event);
  }
}
// tag=1009
void QSplitter_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QSplitter::mouseReleaseEvent(event);
}
void QSplitter_wrapper::moveSplitter(int pos, int index) {
  // tag=1000

  // tag=1004
  ::QSplitter::moveSplitter(pos, index);
}
bool QSplitter_wrapper::opaqueResize() const {
  // tag=1000

  // tag=1004
  return ::QSplitter::opaqueResize();
}
Qt::Orientation QSplitter_wrapper::orientation() const {
  // tag=1000

  // tag=1004
  return ::QSplitter::orientation();
}
void QSplitter_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QSplitter::paintEvent(arg__1);
  }
}
// tag=1009
void QSplitter_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QSplitter::paintEvent(arg__1);
}
void QSplitter_wrapper::refresh() {
  // tag=1000

  // tag=1004
  ::QSplitter::refresh();
}
QWidget *QSplitter_wrapper::replaceWidget(int index, QWidget *widget) {
  // tag=1000

  // tag=1004
  return ::QSplitter::replaceWidget(index, widget);
}
bool QSplitter_wrapper::restoreState(const QByteArray &state) {
  // tag=1000

  // tag=1004
  return ::QSplitter::restoreState(state);
}
QByteArray QSplitter_wrapper::saveState() const {
  // tag=1000

  // tag=1004
  return ::QSplitter::saveState();
}
void QSplitter_wrapper::setChildrenCollapsible(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QSplitter::setChildrenCollapsible(arg__1);
}
void QSplitter_wrapper::setCollapsible(int index, bool arg__2) {
  // tag=1000

  // tag=1004
  ::QSplitter::setCollapsible(index, arg__2);
}
void QSplitter_wrapper::setHandleWidth(int arg__1) {
  // tag=1000

  // tag=1004
  ::QSplitter::setHandleWidth(arg__1);
}
void QSplitter_wrapper::setOpaqueResize(bool opaque) {
  // tag=1000

  // tag=1004
  ::QSplitter::setOpaqueResize(opaque);
}
void QSplitter_wrapper::setOrientation(Qt::Orientation arg__1) {
  // tag=1000

  // tag=1004
  ::QSplitter::setOrientation(arg__1);
}
void QSplitter_wrapper::setRubberBand(int position) {
  // tag=1000

  // tag=1004
  ::QSplitter::setRubberBand(position);
}
void QSplitter_wrapper::setSizes(const QList<int> &list) {
  // tag=1000

  // tag=1004
  ::QSplitter::setSizes(list);
}
void QSplitter_wrapper::setStretchFactor(int index, int stretch) {
  // tag=1000

  // tag=1004
  ::QSplitter::setStretchFactor(index, stretch);
}
void QSplitter_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QSplitter::setVisible(visible);
  }
}
// tag=1009
void QSplitter_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QSplitter::setVisible(visible);
}
QPainter *QSplitter_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSplitter::sharedPainter();
  }
}
// tag=1009
QPainter *QSplitter_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QSplitter::sharedPainter();
}
QSize QSplitter_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QSplitter::sizeHint();
  }
}
// tag=1009
QSize QSplitter_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QSplitter::sizeHint();
}
QList<int> QSplitter_wrapper::sizes() const {
  // tag=1000

  // tag=1004
  return ::QSplitter::sizes();
}
void QSplitter_wrapper::splitterMoved(int pos, int index) {
  // tag=1000

  // tag=1004
  ::QSplitter::splitterMoved(pos, index);
}
QString QSplitter_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QSplitter::tr(s, c, n);
}
QWidget *QSplitter_wrapper::widget(int index) const {
  // tag=1000

  // tag=1004
  return ::QSplitter::widget(index);
}

// tag=1005
QSplitter_wrapper::~QSplitter_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QSplitter *fromPtr(void *ptr) {
  return reinterpret_cast<QSplitter *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QSplitter_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QSplitter_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
      cppObj);
}
void *c_QSplitter__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QSplitter_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QSplitter__constructor_Orientation_QWidget(int arg__1, void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QSplitter_wrapper(
      static_cast<Qt::Orientation>(arg__1), parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// addWidget(QWidget * widget)
void c_QSplitter__addWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->addWidget(widget);
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QSplitter__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// childrenCollapsible() const
bool c_QSplitter__childrenCollapsible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->childrenCollapsible();
}

// tag=1050
// closestLegalPosition(int arg__1, int arg__2)
int c_QSplitter__closestLegalPosition_int_int(void *thisObj, int arg__1,
                                              int arg__2) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->closestLegalPosition(arg__1, arg__2);
}

// tag=1050
// count() const
int c_QSplitter__count(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->count();
}

// tag=1050
// customEvent(QEvent * event)
void c_QSplitter__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QSplitter__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// event(QEvent * arg__1)
bool c_QSplitter__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QSplitter__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QSplitter__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// handleWidth() const
int c_QSplitter__handleWidth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->handleWidth();
}

// tag=1050
// hasHeightForWidth() const
bool c_QSplitter__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QSplitter__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// indexOf(QWidget * w) const
int c_QSplitter__indexOf_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  return
      // tag=1010
      fromPtr(thisObj)->indexOf(w);
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QSplitter__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertWidget(int index, QWidget * widget)
void c_QSplitter__insertWidget_int_QWidget(void *thisObj, int index,
                                           void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->insertWidget(index, widget);
}

// tag=1050
// isCollapsible(int index) const
bool c_QSplitter__isCollapsible_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->isCollapsible(index);
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QSplitter__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QSplitter__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QSplitter__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                    void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QSplitter__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QSplitter__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QSplitter__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// moveSplitter(int pos, int index)
void c_QSplitter__moveSplitter_int_int(void *thisObj, int pos, int index) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->moveSplitter(pos, index);
}

// tag=1050
// opaqueResize() const
bool c_QSplitter__opaqueResize(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->opaqueResize();
}

// tag=1050
// orientation() const
int c_QSplitter__orientation(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->orientation();
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QSplitter__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// refresh()
void c_QSplitter__refresh(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->refresh();
}

// tag=1050
// replaceWidget(int index, QWidget * widget)
void *c_QSplitter__replaceWidget_int_QWidget(void *thisObj, int index,
                                             void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1010
      fromPtr(thisObj)->replaceWidget(index, widget);
}

// tag=1050
// restoreState(const QByteArray & state)
bool c_QSplitter__restoreState_QByteArray(void *thisObj, void *state_) {
  auto &state = *reinterpret_cast<QByteArray *>(state_);
  return
      // tag=1010
      fromPtr(thisObj)->restoreState(state);
}

// tag=1050
// saveState() const
void *c_QSplitter__saveState(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->saveState()};
}

// tag=1050
// setChildrenCollapsible(bool arg__1)
void c_QSplitter__setChildrenCollapsible_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setChildrenCollapsible(arg__1);
}

// tag=1050
// setCollapsible(int index, bool arg__2)
void c_QSplitter__setCollapsible_int_bool(void *thisObj, int index,
                                          bool arg__2) {
  // tag=1010
  fromPtr(thisObj)->setCollapsible(index, arg__2);
}

// tag=1050
// setHandleWidth(int arg__1)
void c_QSplitter__setHandleWidth_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setHandleWidth(arg__1);
}

// tag=1050
// setOpaqueResize(bool opaque)
void c_QSplitter__setOpaqueResize_bool(void *thisObj, bool opaque) {
  // tag=1010
  fromPtr(thisObj)->setOpaqueResize(opaque);
}

// tag=1050
// setOrientation(Qt::Orientation arg__1)
void c_QSplitter__setOrientation_Orientation(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setOrientation(static_cast<Qt::Orientation>(arg__1));
}

// tag=1050
// setRubberBand(int position)
void c_QSplitter__setRubberBand_int(void *thisObj, int position) {
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->setRubberBand(position);
}

// tag=1050
// setSizes(const QList<int > & list)
void c_QSplitter__setSizes_QList_int(void *thisObj, void *list_) {
  auto &list = *reinterpret_cast<QList<int> *>(list_);
  // tag=1010
  fromPtr(thisObj)->setSizes(list);
}

// tag=1050
// setStretchFactor(int index, int stretch)
void c_QSplitter__setStretchFactor_int_int(void *thisObj, int index,
                                           int stretch) {
  // tag=1010
  fromPtr(thisObj)->setStretchFactor(index, stretch);
}

// tag=1050
// setVisible(bool visible)
void c_QSplitter__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QSplitter__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QSplitter__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QSplitter_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// sizes() const
void *c_QSplitter__sizes(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<int>>{fromPtr(thisObj)->sizes()};
}

// tag=1050
// splitterMoved(int pos, int index)
void c_QSplitter__splitterMoved_int_int(void *thisObj, int pos, int index) {
  // tag=1010
  fromPtr(thisObj)->splitterMoved(pos, index);
}

// tag=1079
void c_QSplitter__onSplitterMoved_int_int(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QSplitter *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QSplitter::splitterMoved,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QSplitter__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QSplitter_wrapper::tr(s, c, n)};
}

// tag=1050
// widget(int index) const
void *c_QSplitter__widget_int(void *thisObj, int index) {
  return
      // tag=1010
      fromPtr(thisObj)->widget(index);
}
void c_QSplitter__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QSplitter__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QSplitter_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QSplitter_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}

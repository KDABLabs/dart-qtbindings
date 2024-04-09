#include "QToolBar_wrapper.h"

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
QToolBar_wrapper::QToolBar_wrapper(QWidget *parent) : ::QToolBar(parent) {}

// tag=1006
QToolBar_wrapper::QToolBar_wrapper(const QString &title, QWidget *parent)
    : ::QToolBar(title, parent) {}
QAction *QToolBar_wrapper::actionAt(const QPoint &p) const {
  // tag=1000

  // tag=1004
  return ::QToolBar::actionAt(p);
}
QAction *QToolBar_wrapper::actionAt(int x, int y) const {
  // tag=1000

  // tag=1004
  return ::QToolBar::actionAt(x, y);
}
QRect QToolBar_wrapper::actionGeometry(QAction *action) const {
  // tag=1000

  // tag=1004
  return ::QToolBar::actionGeometry(action);
}
void QToolBar_wrapper::actionTriggered(QAction *action) {
  // tag=1000

  // tag=1004
  ::QToolBar::actionTriggered(action);
}
QAction *QToolBar_wrapper::addSeparator() {
  // tag=1000

  // tag=1004
  return ::QToolBar::addSeparator();
}
QAction *QToolBar_wrapper::addWidget(QWidget *widget) {
  // tag=1000

  // tag=1004
  return ::QToolBar::addWidget(widget);
}
void QToolBar_wrapper::changeEvent(QEvent *event) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::changeEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::changeEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QToolBar::changeEvent(event);
}
void QToolBar_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QToolBar::clear();
}
void QToolBar_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::customEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QToolBar::customEvent(event);
}
int QToolBar_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QToolBar::devType();
  }
}
// tag=1009
int QToolBar_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QToolBar::devType();
}
bool QToolBar_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QToolBar::event(event);
  }
}
// tag=1009
bool QToolBar_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QToolBar::event(event);
}
bool QToolBar_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QToolBar::eventFilter(watched, event);
  }
}
// tag=1009
bool QToolBar_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QToolBar::eventFilter(watched, event);
}
bool QToolBar_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QToolBar::focusNextPrevChild(next);
  }
}
// tag=1009
bool QToolBar_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QToolBar::focusNextPrevChild(next);
}
bool QToolBar_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QToolBar::hasHeightForWidth();
  }
}
// tag=1009
bool QToolBar_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QToolBar::hasHeightForWidth();
}
int QToolBar_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QToolBar::heightForWidth(arg__1);
  }
}
// tag=1009
int QToolBar_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QToolBar::heightForWidth(arg__1);
}
QSize QToolBar_wrapper::iconSize() const {
  // tag=1000

  // tag=1004
  return ::QToolBar::iconSize();
}
void QToolBar_wrapper::iconSizeChanged(const QSize &iconSize) {
  // tag=1000

  // tag=1004
  ::QToolBar::iconSizeChanged(iconSize);
}
void QToolBar_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QToolBar::initPainter(painter);
  }
}
// tag=1009
void QToolBar_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QToolBar::initPainter(painter);
}
QAction *QToolBar_wrapper::insertSeparator(QAction *before) {
  // tag=1000

  // tag=1004
  return ::QToolBar::insertSeparator(before);
}
QAction *QToolBar_wrapper::insertWidget(QAction *before, QWidget *widget) {
  // tag=1000

  // tag=1004
  return ::QToolBar::insertWidget(before, widget);
}
bool QToolBar_wrapper::isFloatable() const {
  // tag=1000

  // tag=1004
  return ::QToolBar::isFloatable();
}
bool QToolBar_wrapper::isFloating() const {
  // tag=1000

  // tag=1004
  return ::QToolBar::isFloating();
}
bool QToolBar_wrapper::isMovable() const {
  // tag=1000

  // tag=1004
  return ::QToolBar::isMovable();
}
void QToolBar_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::leaveEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QToolBar::leaveEvent(event);
}
QSize QToolBar_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QToolBar::minimumSizeHint();
  }
}
// tag=1009
QSize QToolBar_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QToolBar::minimumSizeHint();
}
void QToolBar_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QToolBar::mouseDoubleClickEvent(event);
}
void QToolBar_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::mouseMoveEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QToolBar::mouseMoveEvent(event);
}
void QToolBar_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::mousePressEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QToolBar::mousePressEvent(event);
}
void QToolBar_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::mouseReleaseEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QToolBar::mouseReleaseEvent(event);
}
void QToolBar_wrapper::movableChanged(bool movable) {
  // tag=1000

  // tag=1004
  ::QToolBar::movableChanged(movable);
}
Qt::Orientation QToolBar_wrapper::orientation() const {
  // tag=1000

  // tag=1004
  return ::QToolBar::orientation();
}
void QToolBar_wrapper::orientationChanged(Qt::Orientation orientation) {
  // tag=1000

  // tag=1004
  ::QToolBar::orientationChanged(orientation);
}
void QToolBar_wrapper::paintEvent(QPaintEvent *event) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QToolBar::paintEvent(event);
  }
}
// tag=1009
void QToolBar_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  // tag=1003
  ::QToolBar::paintEvent(event);
}
void QToolBar_wrapper::setFloatable(bool floatable) {
  // tag=1000

  // tag=1004
  ::QToolBar::setFloatable(floatable);
}
void QToolBar_wrapper::setIconSize(const QSize &iconSize) {
  // tag=1000

  // tag=1004
  ::QToolBar::setIconSize(iconSize);
}
void QToolBar_wrapper::setMovable(bool movable) {
  // tag=1000

  // tag=1004
  ::QToolBar::setMovable(movable);
}
void QToolBar_wrapper::setOrientation(Qt::Orientation orientation) {
  // tag=1000

  // tag=1004
  ::QToolBar::setOrientation(orientation);
}
void QToolBar_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QToolBar::setVisible(visible);
  }
}
// tag=1009
void QToolBar_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QToolBar::setVisible(visible);
}
QPainter *QToolBar_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QToolBar::sharedPainter();
  }
}
// tag=1009
QPainter *QToolBar_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QToolBar::sharedPainter();
}
QSize QToolBar_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QToolBar::sizeHint();
  }
}
// tag=1009
QSize QToolBar_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QToolBar::sizeHint();
}
QAction *QToolBar_wrapper::toggleViewAction() const {
  // tag=1000

  // tag=1004
  return ::QToolBar::toggleViewAction();
}
void QToolBar_wrapper::topLevelChanged(bool topLevel) {
  // tag=1000

  // tag=1004
  ::QToolBar::topLevelChanged(topLevel);
}
QString QToolBar_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QToolBar::tr(s, c, n);
}
void QToolBar_wrapper::visibilityChanged(bool visible) {
  // tag=1000

  // tag=1004
  ::QToolBar::visibilityChanged(visible);
}
QWidget *QToolBar_wrapper::widgetForAction(QAction *action) const {
  // tag=1000

  // tag=1004
  return ::QToolBar::widgetForAction(action);
}

// tag=1005
QToolBar_wrapper::~QToolBar_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QToolBar *fromPtr(void *ptr) {
  return reinterpret_cast<QToolBar *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QToolBar_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QToolBar_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
      cppObj);
}
void *c_QToolBar__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QToolBar_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QToolBar__constructor_QString_QWidget(const char *title_,
                                              void *parent_) {
  const auto title = QString::fromUtf8(title_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QToolBar_wrapper(title, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// actionAt(const QPoint & p) const
void *c_QToolBar__actionAt_QPoint(void *thisObj, void *p_) {
  auto &p = *reinterpret_cast<QPoint *>(p_);
  return
      // tag=1010
      fromPtr(thisObj)->actionAt(p);
}

// tag=1050
// actionAt(int x, int y) const
void *c_QToolBar__actionAt_int_int(void *thisObj, int x, int y) {
  return
      // tag=1010
      fromPtr(thisObj)->actionAt(x, y);
}

// tag=1050
// actionGeometry(QAction * action) const
void *c_QToolBar__actionGeometry_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromPtr(thisObj)->actionGeometry(action)};
}

// tag=1050
// actionTriggered(QAction * action)
void c_QToolBar__actionTriggered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->actionTriggered(action);
}

// tag=1079
void c_QToolBar__onActionTriggered_QAction(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::actionTriggered,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// addSeparator()
void *c_QToolBar__addSeparator(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->addSeparator();
}

// tag=1050
// addWidget(QWidget * widget)
void *c_QToolBar__addWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1010
      fromPtr(thisObj)->addWidget(widget);
}

// tag=1050
// changeEvent(QEvent * event)
void c_QToolBar__changeEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(event);
}

// tag=1050
// clear()
void c_QToolBar__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1079
void c_QToolBar__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QToolBar__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QToolBar__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// event(QEvent * event)
bool c_QToolBar__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QToolBar__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                            void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
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
bool c_QToolBar__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QToolBar__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
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
int c_QToolBar__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// iconSize() const
void *c_QToolBar__iconSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
}

// tag=1050
// iconSizeChanged(const QSize & iconSize)
void c_QToolBar__iconSizeChanged_QSize(void *thisObj, void *iconSize_) {
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  // tag=1010
  fromPtr(thisObj)->iconSizeChanged(iconSize);
}

// tag=1079
void c_QToolBar__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QToolBar__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertSeparator(QAction * before)
void *c_QToolBar__insertSeparator_QAction(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QAction *>(before_);
  return
      // tag=1010
      fromPtr(thisObj)->insertSeparator(before);
}

// tag=1050
// insertWidget(QAction * before, QWidget * widget)
void *c_QToolBar__insertWidget_QAction_QWidget(void *thisObj, void *before_,
                                               void *widget_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto widget = reinterpret_cast<QWidget *>(widget_);
  return
      // tag=1010
      fromPtr(thisObj)->insertWidget(before, widget);
}

// tag=1050
// isFloatable() const
bool c_QToolBar__isFloatable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isFloatable();
}

// tag=1050
// isFloating() const
bool c_QToolBar__isFloating(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isFloating();
}

// tag=1050
// isMovable() const
bool c_QToolBar__isMovable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isMovable();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QToolBar__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QToolBar__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
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
void c_QToolBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                   void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QToolBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QToolBar__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QToolBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// movableChanged(bool movable)
void c_QToolBar__movableChanged_bool(void *thisObj, bool movable) {
  // tag=1010
  fromPtr(thisObj)->movableChanged(movable);
}

// tag=1079
void c_QToolBar__onMovableChanged_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::movableChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// orientation() const
int c_QToolBar__orientation(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->orientation();
}

// tag=1050
// orientationChanged(Qt::Orientation orientation)
void c_QToolBar__orientationChanged_Orientation(void *thisObj,
                                                int orientation) {
  // tag=1010
  fromPtr(thisObj)->orientationChanged(
      static_cast<Qt::Orientation>(orientation));
}

// tag=1079
void c_QToolBar__onOrientationChanged_Orientation(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::orientationChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// paintEvent(QPaintEvent * event)
void c_QToolBar__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}

// tag=1050
// setFloatable(bool floatable)
void c_QToolBar__setFloatable_bool(void *thisObj, bool floatable) {
  // tag=1010
  fromPtr(thisObj)->setFloatable(floatable);
}

// tag=1050
// setIconSize(const QSize & iconSize)
void c_QToolBar__setIconSize_QSize(void *thisObj, void *iconSize_) {
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  // tag=1010
  fromPtr(thisObj)->setIconSize(iconSize);
}

// tag=1050
// setMovable(bool movable)
void c_QToolBar__setMovable_bool(void *thisObj, bool movable) {
  // tag=1010
  fromPtr(thisObj)->setMovable(movable);
}

// tag=1050
// setOrientation(Qt::Orientation orientation)
void c_QToolBar__setOrientation_Orientation(void *thisObj, int orientation) {
  // tag=1010
  fromPtr(thisObj)->setOrientation(static_cast<Qt::Orientation>(orientation));
}

// tag=1050
// setVisible(bool visible)
void c_QToolBar__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QToolBar__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QToolBar__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QToolBar_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// toggleViewAction() const
void *c_QToolBar__toggleViewAction(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->toggleViewAction();
}

// tag=1050
// topLevelChanged(bool topLevel)
void c_QToolBar__topLevelChanged_bool(void *thisObj, bool topLevel) {
  // tag=1010
  fromPtr(thisObj)->topLevelChanged(topLevel);
}

// tag=1079
void c_QToolBar__onTopLevelChanged_bool(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::topLevelChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QToolBar__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QToolBar_wrapper::tr(s, c, n)};
}

// tag=1050
// visibilityChanged(bool visible)
void c_QToolBar__visibilityChanged_bool(void *thisObj, bool visible) {
  // tag=1010
  fromPtr(thisObj)->visibilityChanged(visible);
}

// tag=1079
void c_QToolBar__onVisibilityChanged_bool(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::visibilityChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// widgetForAction(QAction * action) const
void *c_QToolBar__widgetForAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  return
      // tag=1010
      fromPtr(thisObj)->widgetForAction(action);
}

// tag=1079
void c_QToolBar__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QToolBar__onWindowIconTextChanged_QString(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QToolBar__onWindowTitleChanged_QString(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QToolBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QToolBar::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QToolBar__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QToolBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QToolBar_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QToolBar_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}

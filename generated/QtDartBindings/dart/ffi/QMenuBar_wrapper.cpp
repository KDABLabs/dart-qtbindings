#include "QMenuBar_wrapper.h"

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
QMenuBar_wrapper::QMenuBar_wrapper(QWidget *parent) : ::QMenuBar(parent) {}
QAction *QMenuBar_wrapper::actionAt(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QMenuBar::actionAt(arg__1);
}
QRect QMenuBar_wrapper::actionGeometry(QAction *arg__1) const {
  // tag=1000

  // tag=1004
  return ::QMenuBar::actionGeometry(arg__1);
}
QAction *QMenuBar_wrapper::activeAction() const {
  // tag=1000

  // tag=1004
  return ::QMenuBar::activeAction();
}
QAction *QMenuBar_wrapper::addMenu(QMenu *menu) {
  // tag=1000

  // tag=1004
  return ::QMenuBar::addMenu(menu);
}
QMenu *QMenuBar_wrapper::addMenu(const QIcon &icon, const QString &title) {
  // tag=1000

  // tag=1004
  return ::QMenuBar::addMenu(icon, title);
}
QMenu *QMenuBar_wrapper::addMenu(const QString &title) {
  // tag=1000

  // tag=1004
  return ::QMenuBar::addMenu(title);
}
QAction *QMenuBar_wrapper::addSeparator() {
  // tag=1000

  // tag=1004
  return ::QMenuBar::addSeparator();
}
void QMenuBar_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenuBar::changeEvent(arg__1);
  }
}
// tag=1009
void QMenuBar_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QMenuBar::changeEvent(arg__1);
}
void QMenuBar_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QMenuBar::clear();
}
QWidget *QMenuBar_wrapper::cornerWidget() const {
  // tag=1000

  // tag=1004
  return ::QMenuBar::cornerWidget();
}
void QMenuBar_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMenuBar::customEvent(event);
  }
}
// tag=1009
void QMenuBar_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QMenuBar::customEvent(event);
}
int QMenuBar_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenuBar::devType();
  }
}
// tag=1009
int QMenuBar_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QMenuBar::devType();
}
bool QMenuBar_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QMenuBar::event(arg__1);
  }
}
// tag=1009
bool QMenuBar_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QMenuBar::event(arg__1);
}
bool QMenuBar_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QMenuBar::eventFilter(arg__1, arg__2);
  }
}
// tag=1009
bool QMenuBar_wrapper::eventFilter_nocallback(QObject *arg__1, QEvent *arg__2) {
  // tag=1003
  return ::QMenuBar::eventFilter(arg__1, arg__2);
}
bool QMenuBar_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QMenuBar::focusNextPrevChild(next);
  }
}
// tag=1009
bool QMenuBar_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QMenuBar::focusNextPrevChild(next);
}
bool QMenuBar_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenuBar::hasHeightForWidth();
  }
}
// tag=1009
bool QMenuBar_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QMenuBar::hasHeightForWidth();
}
int QMenuBar_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QMenuBar::heightForWidth(arg__1);
  }
}
// tag=1009
int QMenuBar_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QMenuBar::heightForWidth(arg__1);
}
void QMenuBar_wrapper::hovered(QAction *action) {
  // tag=1000

  // tag=1004
  ::QMenuBar::hovered(action);
}
void QMenuBar_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QMenuBar::initPainter(painter);
  }
}
// tag=1009
void QMenuBar_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QMenuBar::initPainter(painter);
}
QAction *QMenuBar_wrapper::insertMenu(QAction *before, QMenu *menu) {
  // tag=1000

  // tag=1004
  return ::QMenuBar::insertMenu(before, menu);
}
QAction *QMenuBar_wrapper::insertSeparator(QAction *before) {
  // tag=1000

  // tag=1004
  return ::QMenuBar::insertSeparator(before);
}
bool QMenuBar_wrapper::isDefaultUp() const {
  // tag=1000

  // tag=1004
  return ::QMenuBar::isDefaultUp();
}
bool QMenuBar_wrapper::isNativeMenuBar() const {
  // tag=1000

  // tag=1004
  return ::QMenuBar::isNativeMenuBar();
}
void QMenuBar_wrapper::leaveEvent(QEvent *arg__1) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenuBar::leaveEvent(arg__1);
  }
}
// tag=1009
void QMenuBar_wrapper::leaveEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QMenuBar::leaveEvent(arg__1);
}
QSize QMenuBar_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenuBar::minimumSizeHint();
  }
}
// tag=1009
QSize QMenuBar_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QMenuBar::minimumSizeHint();
}
void QMenuBar_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMenuBar::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QMenuBar_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QMenuBar::mouseDoubleClickEvent(event);
}
void QMenuBar_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenuBar::mouseMoveEvent(arg__1);
  }
}
// tag=1009
void QMenuBar_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QMenuBar::mouseMoveEvent(arg__1);
}
void QMenuBar_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenuBar::mousePressEvent(arg__1);
  }
}
// tag=1009
void QMenuBar_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QMenuBar::mousePressEvent(arg__1);
}
void QMenuBar_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenuBar::mouseReleaseEvent(arg__1);
  }
}
// tag=1009
void QMenuBar_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QMenuBar::mouseReleaseEvent(arg__1);
}
void QMenuBar_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenuBar::paintEvent(arg__1);
  }
}
// tag=1009
void QMenuBar_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QMenuBar::paintEvent(arg__1);
}
void QMenuBar_wrapper::setActiveAction(QAction *action) {
  // tag=1000

  // tag=1004
  ::QMenuBar::setActiveAction(action);
}
void QMenuBar_wrapper::setCornerWidget(QWidget *w) {
  // tag=1000

  // tag=1004
  ::QMenuBar::setCornerWidget(w);
}
void QMenuBar_wrapper::setDefaultUp(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QMenuBar::setDefaultUp(arg__1);
}
void QMenuBar_wrapper::setNativeMenuBar(bool nativeMenuBar) {
  // tag=1000

  // tag=1004
  ::QMenuBar::setNativeMenuBar(nativeMenuBar);
}
void QMenuBar_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QMenuBar::setVisible(visible);
  }
}
// tag=1009
void QMenuBar_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QMenuBar::setVisible(visible);
}
QPainter *QMenuBar_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenuBar::sharedPainter();
  }
}
// tag=1009
QPainter *QMenuBar_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QMenuBar::sharedPainter();
}
QSize QMenuBar_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenuBar::sizeHint();
  }
}
// tag=1009
QSize QMenuBar_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QMenuBar::sizeHint();
}
QString QMenuBar_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QMenuBar::tr(s, c, n);
}
void QMenuBar_wrapper::triggered(QAction *action) {
  // tag=1000

  // tag=1004
  ::QMenuBar::triggered(action);
}

// tag=1005
QMenuBar_wrapper::~QMenuBar_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QMenuBar *fromPtr(void *ptr) {
  return reinterpret_cast<QMenuBar *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QMenuBar_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QMenuBar_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(
      cppObj);
}
void *c_QMenuBar__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QMenuBar_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// actionAt(const QPoint & arg__1) const
void *c_QMenuBar__actionAt_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->actionAt(arg__1);
}

// tag=1050
// actionGeometry(QAction * arg__1) const
void *c_QMenuBar__actionGeometry_QAction(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QAction *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromPtr(thisObj)->actionGeometry(arg__1)};
}

// tag=1050
// activeAction() const
void *c_QMenuBar__activeAction(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->activeAction();
}

// tag=1050
// addMenu(QMenu * menu)
void *c_QMenuBar__addMenu_QMenu(void *thisObj, void *menu_) {
  auto menu = reinterpret_cast<QMenu *>(menu_);
  return
      // tag=1010
      fromPtr(thisObj)->addMenu(menu);
}

// tag=1050
// addMenu(const QIcon & icon, const QString & title)
void *c_QMenuBar__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                        const char *title_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto title = QString::fromUtf8(title_);
  return
      // tag=1010
      fromPtr(thisObj)->addMenu(icon, title);
}

// tag=1050
// addMenu(const QString & title)
void *c_QMenuBar__addMenu_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  return
      // tag=1010
      fromPtr(thisObj)->addMenu(title);
}

// tag=1050
// addSeparator()
void *c_QMenuBar__addSeparator(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->addSeparator();
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QMenuBar__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clear()
void c_QMenuBar__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// cornerWidget() const
void *c_QMenuBar__cornerWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cornerWidget();
}

// tag=1079
void c_QMenuBar__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QMenuBar__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QMenuBar__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(
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
bool c_QMenuBar__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QMenuBar__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                            void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QMenuBar__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QMenuBar__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(
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
int c_QMenuBar__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// hovered(QAction * action)
void c_QMenuBar__hovered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->hovered(action);
}

// tag=1079
void c_QMenuBar__onHovered_QAction(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::hovered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QMenuBar__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertMenu(QAction * before, QMenu * menu)
void *c_QMenuBar__insertMenu_QAction_QMenu(void *thisObj, void *before_,
                                           void *menu_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto menu = reinterpret_cast<QMenu *>(menu_);
  return
      // tag=1010
      fromPtr(thisObj)->insertMenu(before, menu);
}

// tag=1050
// insertSeparator(QAction * before)
void *c_QMenuBar__insertSeparator_QAction(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QAction *>(before_);
  return
      // tag=1010
      fromPtr(thisObj)->insertSeparator(before);
}

// tag=1050
// isDefaultUp() const
bool c_QMenuBar__isDefaultUp(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDefaultUp();
}

// tag=1050
// isNativeMenuBar() const
bool c_QMenuBar__isNativeMenuBar(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNativeMenuBar();
}

// tag=1050
// leaveEvent(QEvent * arg__1)
void c_QMenuBar__leaveEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(arg__1);
}

// tag=1050
// minimumSizeHint() const
void *c_QMenuBar__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(
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
void c_QMenuBar__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                   void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QMenuBar__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}

// tag=1050
// mousePressEvent(QMouseEvent * arg__1)
void c_QMenuBar__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QMenuBar__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QMenuBar__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// setActiveAction(QAction * action)
void c_QMenuBar__setActiveAction_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->setActiveAction(action);
}

// tag=1050
// setCornerWidget(QWidget * w)
void c_QMenuBar__setCornerWidget_QWidget(void *thisObj, void *w_) {
  auto w = reinterpret_cast<QWidget *>(w_);
  // tag=1010
  fromPtr(thisObj)->setCornerWidget(w);
}

// tag=1050
// setDefaultUp(bool arg__1)
void c_QMenuBar__setDefaultUp_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setDefaultUp(arg__1);
}

// tag=1050
// setNativeMenuBar(bool nativeMenuBar)
void c_QMenuBar__setNativeMenuBar_bool(void *thisObj, bool nativeMenuBar) {
  // tag=1010
  fromPtr(thisObj)->setNativeMenuBar(nativeMenuBar);
}

// tag=1050
// setVisible(bool visible)
void c_QMenuBar__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QMenuBar__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QMenuBar__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QMenuBar__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QMenuBar_wrapper::tr(s, c, n)};
}

// tag=1050
// triggered(QAction * action)
void c_QMenuBar__triggered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->triggered(action);
}

// tag=1079
void c_QMenuBar__onTriggered_QAction(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::triggered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMenuBar__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMenuBar__onWindowIconTextChanged_QString(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMenuBar__onWindowTitleChanged_QString(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QMenuBar *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenuBar::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenuBar__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QMenuBar__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenuBar_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenuBar_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}

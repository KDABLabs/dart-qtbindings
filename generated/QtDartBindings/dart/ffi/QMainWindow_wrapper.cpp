#include "QMainWindow_wrapper.h"

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
QMainWindow_wrapper::QMainWindow_wrapper(QWidget *parent)
    : ::QMainWindow(parent) {}
void QMainWindow_wrapper::addToolBar(QToolBar *toolbar) {
  // tag=1000

  // tag=1004
  ::QMainWindow::addToolBar(toolbar);
}
QToolBar *QMainWindow_wrapper::addToolBar(const QString &title) {
  // tag=1000

  // tag=1004
  return ::QMainWindow::addToolBar(title);
}
void QMainWindow_wrapper::addToolBarBreak() {
  // tag=1000

  // tag=1004
  ::QMainWindow::addToolBarBreak();
}
QWidget *QMainWindow_wrapper::centralWidget() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::centralWidget();
}
void QMainWindow_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMainWindow::changeEvent(arg__1);
  }
}
// tag=1009
void QMainWindow_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QMainWindow::changeEvent(arg__1);
}
QMenu *QMainWindow_wrapper::createPopupMenu() {
  // tag=1000
  if (m_createPopupMenuCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_createPopupMenuCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMainWindow::createPopupMenu();
  }
}
// tag=1009
QMenu *QMainWindow_wrapper::createPopupMenu_nocallback() {
  // tag=1003
  return ::QMainWindow::createPopupMenu();
}
void QMainWindow_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMainWindow::customEvent(event);
  }
}
// tag=1009
void QMainWindow_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QMainWindow::customEvent(event);
}
int QMainWindow_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMainWindow::devType();
  }
}
// tag=1009
int QMainWindow_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QMainWindow::devType();
}
bool QMainWindow_wrapper::documentMode() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::documentMode();
}
bool QMainWindow_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QMainWindow::event(event);
  }
}
// tag=1009
bool QMainWindow_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QMainWindow::event(event);
}
bool QMainWindow_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QMainWindow::eventFilter(watched, event);
  }
}
// tag=1009
bool QMainWindow_wrapper::eventFilter_nocallback(QObject *watched,
                                                 QEvent *event) {
  // tag=1003
  return ::QMainWindow::eventFilter(watched, event);
}
bool QMainWindow_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QMainWindow::focusNextPrevChild(next);
  }
}
// tag=1009
bool QMainWindow_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QMainWindow::focusNextPrevChild(next);
}
bool QMainWindow_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMainWindow::hasHeightForWidth();
  }
}
// tag=1009
bool QMainWindow_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QMainWindow::hasHeightForWidth();
}
int QMainWindow_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QMainWindow::heightForWidth(arg__1);
  }
}
// tag=1009
int QMainWindow_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QMainWindow::heightForWidth(arg__1);
}
QSize QMainWindow_wrapper::iconSize() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::iconSize();
}
void QMainWindow_wrapper::iconSizeChanged(const QSize &iconSize) {
  // tag=1000

  // tag=1004
  ::QMainWindow::iconSizeChanged(iconSize);
}
void QMainWindow_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QMainWindow::initPainter(painter);
  }
}
// tag=1009
void QMainWindow_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QMainWindow::initPainter(painter);
}
void QMainWindow_wrapper::insertToolBar(QToolBar *before, QToolBar *toolbar) {
  // tag=1000

  // tag=1004
  ::QMainWindow::insertToolBar(before, toolbar);
}
void QMainWindow_wrapper::insertToolBarBreak(QToolBar *before) {
  // tag=1000

  // tag=1004
  ::QMainWindow::insertToolBarBreak(before);
}
bool QMainWindow_wrapper::isAnimated() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::isAnimated();
}
bool QMainWindow_wrapper::isDockNestingEnabled() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::isDockNestingEnabled();
}
bool QMainWindow_wrapper::isSeparator(const QPoint &pos) const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::isSeparator(pos);
}
void QMainWindow_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMainWindow::leaveEvent(event);
  }
}
// tag=1009
void QMainWindow_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QMainWindow::leaveEvent(event);
}
QMenuBar *QMainWindow_wrapper::menuBar() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::menuBar();
}
QWidget *QMainWindow_wrapper::menuWidget() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::menuWidget();
}
QSize QMainWindow_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMainWindow::minimumSizeHint();
  }
}
// tag=1009
QSize QMainWindow_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QMainWindow::minimumSizeHint();
}
void QMainWindow_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMainWindow::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QMainWindow_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QMainWindow::mouseDoubleClickEvent(event);
}
void QMainWindow_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMainWindow::mouseMoveEvent(event);
  }
}
// tag=1009
void QMainWindow_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QMainWindow::mouseMoveEvent(event);
}
void QMainWindow_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMainWindow::mousePressEvent(event);
  }
}
// tag=1009
void QMainWindow_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QMainWindow::mousePressEvent(event);
}
void QMainWindow_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMainWindow::mouseReleaseEvent(event);
  }
}
// tag=1009
void QMainWindow_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QMainWindow::mouseReleaseEvent(event);
}
void QMainWindow_wrapper::paintEvent(QPaintEvent *event) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMainWindow::paintEvent(event);
  }
}
// tag=1009
void QMainWindow_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  // tag=1003
  ::QMainWindow::paintEvent(event);
}
void QMainWindow_wrapper::removeToolBar(QToolBar *toolbar) {
  // tag=1000

  // tag=1004
  ::QMainWindow::removeToolBar(toolbar);
}
void QMainWindow_wrapper::removeToolBarBreak(QToolBar *before) {
  // tag=1000

  // tag=1004
  ::QMainWindow::removeToolBarBreak(before);
}
bool QMainWindow_wrapper::restoreState(const QByteArray &state, int version) {
  // tag=1000

  // tag=1004
  return ::QMainWindow::restoreState(state, version);
}
QByteArray QMainWindow_wrapper::saveState(int version) const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::saveState(version);
}
void QMainWindow_wrapper::setAnimated(bool enabled) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setAnimated(enabled);
}
void QMainWindow_wrapper::setCentralWidget(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setCentralWidget(widget);
}
void QMainWindow_wrapper::setDockNestingEnabled(bool enabled) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setDockNestingEnabled(enabled);
}
void QMainWindow_wrapper::setDocumentMode(bool enabled) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setDocumentMode(enabled);
}
void QMainWindow_wrapper::setIconSize(const QSize &iconSize) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setIconSize(iconSize);
}
void QMainWindow_wrapper::setMenuBar(QMenuBar *menubar) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setMenuBar(menubar);
}
void QMainWindow_wrapper::setMenuWidget(QWidget *menubar) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setMenuWidget(menubar);
}
void QMainWindow_wrapper::setStatusBar(QStatusBar *statusbar) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setStatusBar(statusbar);
}
void QMainWindow_wrapper::setUnifiedTitleAndToolBarOnMac(bool set) {
  // tag=1000

  // tag=1004
  ::QMainWindow::setUnifiedTitleAndToolBarOnMac(set);
}
void QMainWindow_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QMainWindow::setVisible(visible);
  }
}
// tag=1009
void QMainWindow_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QMainWindow::setVisible(visible);
}
QPainter *QMainWindow_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMainWindow::sharedPainter();
  }
}
// tag=1009
QPainter *QMainWindow_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QMainWindow::sharedPainter();
}
QSize QMainWindow_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMainWindow::sizeHint();
  }
}
// tag=1009
QSize QMainWindow_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QMainWindow::sizeHint();
}
QStatusBar *QMainWindow_wrapper::statusBar() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::statusBar();
}
QWidget *QMainWindow_wrapper::takeCentralWidget() {
  // tag=1000

  // tag=1004
  return ::QMainWindow::takeCentralWidget();
}
bool QMainWindow_wrapper::toolBarBreak(QToolBar *toolbar) const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::toolBarBreak(toolbar);
}
QString QMainWindow_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QMainWindow::tr(s, c, n);
}
bool QMainWindow_wrapper::unifiedTitleAndToolBarOnMac() const {
  // tag=1000

  // tag=1004
  return ::QMainWindow::unifiedTitleAndToolBarOnMac();
}

// tag=1005
QMainWindow_wrapper::~QMainWindow_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QMainWindow *fromPtr(void *ptr) {
  return reinterpret_cast<QMainWindow *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QMainWindow_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QMainWindow_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
      cppObj);
}
void *c_QMainWindow__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QMainWindow_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// addToolBar(QToolBar * toolbar)
void c_QMainWindow__addToolBar_QToolBar(void *thisObj, void *toolbar_) {
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  // tag=1010
  fromPtr(thisObj)->addToolBar(toolbar);
}

// tag=1050
// addToolBar(const QString & title)
void *c_QMainWindow__addToolBar_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  return
      // tag=1010
      fromPtr(thisObj)->addToolBar(title);
}

// tag=1050
// addToolBarBreak()
void c_QMainWindow__addToolBarBreak(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->addToolBarBreak();
}

// tag=1050
// centralWidget() const
void *c_QMainWindow__centralWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->centralWidget();
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QMainWindow__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// createPopupMenu()
void *c_QMainWindow__createPopupMenu(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->createPopupMenu_nocallback();
        } else {
          return targetPtr->createPopupMenu();
        }
      }();
}

// tag=1079
void c_QMainWindow__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QMainWindow__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QMainWindow__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// documentMode() const
bool c_QMainWindow__documentMode(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->documentMode();
}

// tag=1050
// event(QEvent * event)
bool c_QMainWindow__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QMainWindow__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
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
bool c_QMainWindow__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QMainWindow__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
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
int c_QMainWindow__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
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
void *c_QMainWindow__iconSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
}

// tag=1050
// iconSizeChanged(const QSize & iconSize)
void c_QMainWindow__iconSizeChanged_QSize(void *thisObj, void *iconSize_) {
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  // tag=1010
  fromPtr(thisObj)->iconSizeChanged(iconSize);
}

// tag=1079
void c_QMainWindow__onIconSizeChanged_QSize(void *thisObj, void *contextQObject,
                                            void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::iconSizeChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QMainWindow__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertToolBar(QToolBar * before, QToolBar * toolbar)
void c_QMainWindow__insertToolBar_QToolBar_QToolBar(void *thisObj,
                                                    void *before_,
                                                    void *toolbar_) {
  auto before = reinterpret_cast<QToolBar *>(before_);
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  // tag=1010
  fromPtr(thisObj)->insertToolBar(before, toolbar);
}

// tag=1050
// insertToolBarBreak(QToolBar * before)
void c_QMainWindow__insertToolBarBreak_QToolBar(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QToolBar *>(before_);
  // tag=1010
  fromPtr(thisObj)->insertToolBarBreak(before);
}

// tag=1050
// isAnimated() const
bool c_QMainWindow__isAnimated(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isAnimated();
}

// tag=1050
// isDockNestingEnabled() const
bool c_QMainWindow__isDockNestingEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDockNestingEnabled();
}

// tag=1050
// isSeparator(const QPoint & pos) const
bool c_QMainWindow__isSeparator_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1010
      fromPtr(thisObj)->isSeparator(pos);
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QMainWindow__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// menuBar() const
void *c_QMainWindow__menuBar(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->menuBar();
}

// tag=1050
// menuWidget() const
void *c_QMainWindow__menuWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->menuWidget();
}

// tag=1050
// minimumSizeHint() const
void *c_QMainWindow__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
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
void c_QMainWindow__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                      void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QMainWindow__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QMainWindow__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QMainWindow__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// paintEvent(QPaintEvent * event)
void c_QMainWindow__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}

// tag=1050
// removeToolBar(QToolBar * toolbar)
void c_QMainWindow__removeToolBar_QToolBar(void *thisObj, void *toolbar_) {
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  // tag=1010
  fromPtr(thisObj)->removeToolBar(toolbar);
}

// tag=1050
// removeToolBarBreak(QToolBar * before)
void c_QMainWindow__removeToolBarBreak_QToolBar(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QToolBar *>(before_);
  // tag=1010
  fromPtr(thisObj)->removeToolBarBreak(before);
}

// tag=1050
// restoreState(const QByteArray & state, int version)
bool c_QMainWindow__restoreState_QByteArray_int(void *thisObj, void *state_,
                                                int version) {
  auto &state = *reinterpret_cast<QByteArray *>(state_);
  return
      // tag=1010
      fromPtr(thisObj)->restoreState(state, version);
}

// tag=1050
// saveState(int version) const
void *c_QMainWindow__saveState_int(void *thisObj, int version) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr(thisObj)->saveState(version)};
}

// tag=1050
// setAnimated(bool enabled)
void c_QMainWindow__setAnimated_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setAnimated(enabled);
}

// tag=1050
// setCentralWidget(QWidget * widget)
void c_QMainWindow__setCentralWidget_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->setCentralWidget(widget);
}

// tag=1050
// setDockNestingEnabled(bool enabled)
void c_QMainWindow__setDockNestingEnabled_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setDockNestingEnabled(enabled);
}

// tag=1050
// setDocumentMode(bool enabled)
void c_QMainWindow__setDocumentMode_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setDocumentMode(enabled);
}

// tag=1050
// setIconSize(const QSize & iconSize)
void c_QMainWindow__setIconSize_QSize(void *thisObj, void *iconSize_) {
  auto &iconSize = *reinterpret_cast<QSize *>(iconSize_);
  // tag=1010
  fromPtr(thisObj)->setIconSize(iconSize);
}

// tag=1050
// setMenuBar(QMenuBar * menubar)
void c_QMainWindow__setMenuBar_QMenuBar(void *thisObj, void *menubar_) {
  auto menubar = reinterpret_cast<QMenuBar *>(menubar_);
  // tag=1010
  fromPtr(thisObj)->setMenuBar(menubar);
}

// tag=1050
// setMenuWidget(QWidget * menubar)
void c_QMainWindow__setMenuWidget_QWidget(void *thisObj, void *menubar_) {
  auto menubar = reinterpret_cast<QWidget *>(menubar_);
  // tag=1010
  fromPtr(thisObj)->setMenuWidget(menubar);
}

// tag=1050
// setStatusBar(QStatusBar * statusbar)
void c_QMainWindow__setStatusBar_QStatusBar(void *thisObj, void *statusbar_) {
  auto statusbar = reinterpret_cast<QStatusBar *>(statusbar_);
  // tag=1010
  fromPtr(thisObj)->setStatusBar(statusbar);
}

// tag=1050
// setUnifiedTitleAndToolBarOnMac(bool set)
void c_QMainWindow__setUnifiedTitleAndToolBarOnMac_bool(void *thisObj,
                                                        bool set) {
  // tag=1010
  fromPtr(thisObj)->setUnifiedTitleAndToolBarOnMac(set);
}

// tag=1050
// setVisible(bool visible)
void c_QMainWindow__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QMainWindow__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QMainWindow__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// statusBar() const
void *c_QMainWindow__statusBar(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->statusBar();
}

// tag=1050
// takeCentralWidget()
void *c_QMainWindow__takeCentralWidget(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->takeCentralWidget();
}

// tag=1050
// toolBarBreak(QToolBar * toolbar) const
bool c_QMainWindow__toolBarBreak_QToolBar(void *thisObj, void *toolbar_) {
  auto toolbar = reinterpret_cast<QToolBar *>(toolbar_);
  return
      // tag=1010
      fromPtr(thisObj)->toolBarBreak(toolbar);
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QMainWindow__tr_char_char_int(const char *s, const char *c,
                                             int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QMainWindow_wrapper::tr(s, c, n)};
}

// tag=1050
// unifiedTitleAndToolBarOnMac() const
bool c_QMainWindow__unifiedTitleAndToolBarOnMac(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->unifiedTitleAndToolBarOnMac();
}

// tag=1079
void c_QMainWindow__onWindowIconChanged_QIcon(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMainWindow__onWindowIconTextChanged_QString(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMainWindow__onWindowTitleChanged_QString(void *thisObj,
                                                 void *contextQObject,
                                                 void *callback) {
  auto instance = reinterpret_cast<QMainWindow *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMainWindow::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMainWindow__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QMainWindow__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 2547:
    wrapper->m_createPopupMenuCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_createPopupMenu>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMainWindow_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMainWindow_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}

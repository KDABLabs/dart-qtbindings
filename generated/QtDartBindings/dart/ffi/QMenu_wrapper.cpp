#include "QMenu_wrapper.h"

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
QMenu_wrapper::QMenu_wrapper(QWidget *parent) : ::QMenu(parent) {}

// tag=1006
QMenu_wrapper::QMenu_wrapper(const QString &title, QWidget *parent)
    : ::QMenu(title, parent) {}
void QMenu_wrapper::aboutToHide() {
  // tag=1000

  // tag=1004
  ::QMenu::aboutToHide();
}
void QMenu_wrapper::aboutToShow() {
  // tag=1000

  // tag=1004
  ::QMenu::aboutToShow();
}
QAction *QMenu_wrapper::actionAt(const QPoint &arg__1) const {
  // tag=1000

  // tag=1004
  return ::QMenu::actionAt(arg__1);
}
QRect QMenu_wrapper::actionGeometry(QAction *arg__1) const {
  // tag=1000

  // tag=1004
  return ::QMenu::actionGeometry(arg__1);
}
QAction *QMenu_wrapper::activeAction() const {
  // tag=1000

  // tag=1004
  return ::QMenu::activeAction();
}
QAction *QMenu_wrapper::addMenu(QMenu *menu) {
  // tag=1000

  // tag=1004
  return ::QMenu::addMenu(menu);
}
QMenu *QMenu_wrapper::addMenu(const QIcon &icon, const QString &title) {
  // tag=1000

  // tag=1004
  return ::QMenu::addMenu(icon, title);
}
QMenu *QMenu_wrapper::addMenu(const QString &title) {
  // tag=1000

  // tag=1004
  return ::QMenu::addMenu(title);
}
QAction *QMenu_wrapper::addSection(const QIcon &icon, const QString &text) {
  // tag=1000

  // tag=1004
  return ::QMenu::addSection(icon, text);
}
QAction *QMenu_wrapper::addSection(const QString &text) {
  // tag=1000

  // tag=1004
  return ::QMenu::addSection(text);
}
QAction *QMenu_wrapper::addSeparator() {
  // tag=1000

  // tag=1004
  return ::QMenu::addSeparator();
}
void QMenu_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenu::changeEvent(arg__1);
  }
}
// tag=1009
void QMenu_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QMenu::changeEvent(arg__1);
}
void QMenu_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QMenu::clear();
}
int QMenu_wrapper::columnCount() const {
  // tag=1000

  // tag=1004
  return ::QMenu::columnCount();
}
void QMenu_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMenu::customEvent(event);
  }
}
// tag=1009
void QMenu_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QMenu::customEvent(event);
}
QAction *QMenu_wrapper::defaultAction() const {
  // tag=1000

  // tag=1004
  return ::QMenu::defaultAction();
}
int QMenu_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenu::devType();
  }
}
// tag=1009
int QMenu_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QMenu::devType();
}
bool QMenu_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QMenu::event(arg__1);
  }
}
// tag=1009
bool QMenu_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QMenu::event(arg__1);
}
bool QMenu_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QMenu::eventFilter(watched, event);
  }
}
// tag=1009
bool QMenu_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QMenu::eventFilter(watched, event);
}
QAction *QMenu_wrapper::exec() {
  // tag=1000

  // tag=1004
  return ::QMenu::exec();
}
QAction *QMenu_wrapper::exec(const QList<QAction *> &actions, const QPoint &pos,
                             QAction *at, QWidget *parent) {
  // tag=1000

  // tag=1004
  return ::QMenu::exec(actions, pos, at, parent);
}
QAction *QMenu_wrapper::exec(const QPoint &pos, QAction *at) {
  // tag=1000

  // tag=1004
  return ::QMenu::exec(pos, at);
}
bool QMenu_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QMenu::focusNextPrevChild(next);
  }
}
// tag=1009
bool QMenu_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QMenu::focusNextPrevChild(next);
}
bool QMenu_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenu::hasHeightForWidth();
  }
}
// tag=1009
bool QMenu_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QMenu::hasHeightForWidth();
}
int QMenu_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QMenu::heightForWidth(arg__1);
  }
}
// tag=1009
int QMenu_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QMenu::heightForWidth(arg__1);
}
void QMenu_wrapper::hideTearOffMenu() {
  // tag=1000

  // tag=1004
  ::QMenu::hideTearOffMenu();
}
void QMenu_wrapper::hovered(QAction *action) {
  // tag=1000

  // tag=1004
  ::QMenu::hovered(action);
}
QIcon QMenu_wrapper::icon() const {
  // tag=1000

  // tag=1004
  return ::QMenu::icon();
}
void QMenu_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QMenu::initPainter(painter);
  }
}
// tag=1009
void QMenu_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QMenu::initPainter(painter);
}
QAction *QMenu_wrapper::insertMenu(QAction *before, QMenu *menu) {
  // tag=1000

  // tag=1004
  return ::QMenu::insertMenu(before, menu);
}
QAction *QMenu_wrapper::insertSection(QAction *before, const QIcon &icon,
                                      const QString &text) {
  // tag=1000

  // tag=1004
  return ::QMenu::insertSection(before, icon, text);
}
QAction *QMenu_wrapper::insertSection(QAction *before, const QString &text) {
  // tag=1000

  // tag=1004
  return ::QMenu::insertSection(before, text);
}
QAction *QMenu_wrapper::insertSeparator(QAction *before) {
  // tag=1000

  // tag=1004
  return ::QMenu::insertSeparator(before);
}
bool QMenu_wrapper::isEmpty() const {
  // tag=1000

  // tag=1004
  return ::QMenu::isEmpty();
}
bool QMenu_wrapper::isTearOffEnabled() const {
  // tag=1000

  // tag=1004
  return ::QMenu::isTearOffEnabled();
}
bool QMenu_wrapper::isTearOffMenuVisible() const {
  // tag=1000

  // tag=1004
  return ::QMenu::isTearOffMenuVisible();
}
void QMenu_wrapper::leaveEvent(QEvent *arg__1) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenu::leaveEvent(arg__1);
  }
}
// tag=1009
void QMenu_wrapper::leaveEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QMenu::leaveEvent(arg__1);
}
QAction *QMenu_wrapper::menuAction() const {
  // tag=1000

  // tag=1004
  return ::QMenu::menuAction();
}
QMenu *QMenu_wrapper::menuInAction(const QAction *action) {
  // tag=1000

  // tag=1004
  return ::QMenu::menuInAction(action);
}
QSize QMenu_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenu::minimumSizeHint();
  }
}
// tag=1009
QSize QMenu_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QMenu::minimumSizeHint();
}
void QMenu_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QMenu::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QMenu_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QMenu::mouseDoubleClickEvent(event);
}
void QMenu_wrapper::mouseMoveEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenu::mouseMoveEvent(arg__1);
  }
}
// tag=1009
void QMenu_wrapper::mouseMoveEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QMenu::mouseMoveEvent(arg__1);
}
void QMenu_wrapper::mousePressEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenu::mousePressEvent(arg__1);
  }
}
// tag=1009
void QMenu_wrapper::mousePressEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QMenu::mousePressEvent(arg__1);
}
void QMenu_wrapper::mouseReleaseEvent(QMouseEvent *arg__1) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenu::mouseReleaseEvent(arg__1);
  }
}
// tag=1009
void QMenu_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *arg__1) {
  // tag=1003
  ::QMenu::mouseReleaseEvent(arg__1);
}
void QMenu_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QMenu::paintEvent(arg__1);
  }
}
// tag=1009
void QMenu_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QMenu::paintEvent(arg__1);
}
void QMenu_wrapper::popup(const QPoint &pos, QAction *at) {
  // tag=1000

  // tag=1004
  ::QMenu::popup(pos, at);
}
bool QMenu_wrapper::separatorsCollapsible() const {
  // tag=1000

  // tag=1004
  return ::QMenu::separatorsCollapsible();
}
void QMenu_wrapper::setActiveAction(QAction *act) {
  // tag=1000

  // tag=1004
  ::QMenu::setActiveAction(act);
}
void QMenu_wrapper::setDefaultAction(QAction *arg__1) {
  // tag=1000

  // tag=1004
  ::QMenu::setDefaultAction(arg__1);
}
void QMenu_wrapper::setIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QMenu::setIcon(icon);
}
void QMenu_wrapper::setNoReplayFor(QWidget *widget) {
  // tag=1000

  // tag=1004
  ::QMenu::setNoReplayFor(widget);
}
void QMenu_wrapper::setSeparatorsCollapsible(bool collapse) {
  // tag=1000

  // tag=1004
  ::QMenu::setSeparatorsCollapsible(collapse);
}
void QMenu_wrapper::setTearOffEnabled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QMenu::setTearOffEnabled(arg__1);
}
void QMenu_wrapper::setTitle(const QString &title) {
  // tag=1000

  // tag=1004
  ::QMenu::setTitle(title);
}
void QMenu_wrapper::setToolTipsVisible(bool visible) {
  // tag=1000

  // tag=1004
  ::QMenu::setToolTipsVisible(visible);
}
void QMenu_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QMenu::setVisible(visible);
  }
}
// tag=1009
void QMenu_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QMenu::setVisible(visible);
}
QPainter *QMenu_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenu::sharedPainter();
  }
}
// tag=1009
QPainter *QMenu_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QMenu::sharedPainter();
}
void QMenu_wrapper::showTearOffMenu() {
  // tag=1000

  // tag=1004
  ::QMenu::showTearOffMenu();
}
void QMenu_wrapper::showTearOffMenu(const QPoint &pos) {
  // tag=1000

  // tag=1004
  ::QMenu::showTearOffMenu(pos);
}
QSize QMenu_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QMenu::sizeHint();
  }
}
// tag=1009
QSize QMenu_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QMenu::sizeHint();
}
QString QMenu_wrapper::title() const {
  // tag=1000

  // tag=1004
  return ::QMenu::title();
}
bool QMenu_wrapper::toolTipsVisible() const {
  // tag=1000

  // tag=1004
  return ::QMenu::toolTipsVisible();
}
QString QMenu_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QMenu::tr(s, c, n);
}
void QMenu_wrapper::triggered(QAction *action) {
  // tag=1000

  // tag=1004
  ::QMenu::triggered(action);
}

// tag=1005
QMenu_wrapper::~QMenu_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QMenu *fromPtr(void *ptr) { return reinterpret_cast<QMenu *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QMenu_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QMenu_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(cppObj);
}
void *c_QMenu__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QMenu_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QMenu__constructor_QString_QWidget(const char *title_, void *parent_) {
  const auto title = QString::fromUtf8(title_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QMenu_wrapper(title, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// aboutToHide()
void c_QMenu__aboutToHide(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->aboutToHide();
}

// tag=1079
void c_QMenu__onAboutToHide(void *thisObj, void *contextQObject,
                            void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::aboutToHide, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// aboutToShow()
void c_QMenu__aboutToShow(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->aboutToShow();
}

// tag=1079
void c_QMenu__onAboutToShow(void *thisObj, void *contextQObject,
                            void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::aboutToShow, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// actionAt(const QPoint & arg__1) const
void *c_QMenu__actionAt_QPoint(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPoint *>(arg__1_);
  return
      // tag=1010
      fromPtr(thisObj)->actionAt(arg__1);
}

// tag=1050
// actionGeometry(QAction * arg__1) const
void *c_QMenu__actionGeometry_QAction(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QAction *>(arg__1_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{
          fromPtr(thisObj)->actionGeometry(arg__1)};
}

// tag=1050
// activeAction() const
void *c_QMenu__activeAction(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->activeAction();
}

// tag=1050
// addMenu(QMenu * menu)
void *c_QMenu__addMenu_QMenu(void *thisObj, void *menu_) {
  auto menu = reinterpret_cast<QMenu *>(menu_);
  return
      // tag=1010
      fromPtr(thisObj)->addMenu(menu);
}

// tag=1050
// addMenu(const QIcon & icon, const QString & title)
void *c_QMenu__addMenu_QIcon_QString(void *thisObj, void *icon_,
                                     const char *title_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto title = QString::fromUtf8(title_);
  return
      // tag=1010
      fromPtr(thisObj)->addMenu(icon, title);
}

// tag=1050
// addMenu(const QString & title)
void *c_QMenu__addMenu_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  return
      // tag=1010
      fromPtr(thisObj)->addMenu(title);
}

// tag=1050
// addSection(const QIcon & icon, const QString & text)
void *c_QMenu__addSection_QIcon_QString(void *thisObj, void *icon_,
                                        const char *text_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->addSection(icon, text);
}

// tag=1050
// addSection(const QString & text)
void *c_QMenu__addSection_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->addSection(text);
}

// tag=1050
// addSeparator()
void *c_QMenu__addSeparator(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->addSeparator();
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QMenu__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clear()
void c_QMenu__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// columnCount() const
int c_QMenu__columnCount(void *thisObj) {
  return
      // tag=1011

      // tag=1073
      fromWrapperPtr(thisObj)->columnCount();
}

// tag=1079
void c_QMenu__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QMenu__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// defaultAction() const
void *c_QMenu__defaultAction(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->defaultAction();
}

// tag=1050
// devType() const
int c_QMenu__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// event(QEvent * arg__1)
bool c_QMenu__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QMenu__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                         void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// exec()
void *c_QMenu__exec(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->exec();
}

// tag=1050
// exec(const QList<QAction* > & actions, const QPoint & pos, QAction * at,
// QWidget * parent)
void *c_static_QMenu__exec_QList_QAction_QPoint_QAction_QWidget(void *actions_,
                                                                void *pos_,
                                                                void *at_,
                                                                void *parent_) {
  auto &actions = *reinterpret_cast<QList<QAction *> *>(actions_);
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  auto at = reinterpret_cast<QAction *>(at_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QMenu_wrapper::exec(actions, pos, at, parent);
}

// tag=1050
// exec(const QPoint & pos, QAction * at)
void *c_QMenu__exec_QPoint_QAction(void *thisObj, void *pos_, void *at_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  auto at = reinterpret_cast<QAction *>(at_);
  return
      // tag=1010
      fromPtr(thisObj)->exec(pos, at);
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QMenu__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QMenu__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QMenu__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// hideTearOffMenu()
void c_QMenu__hideTearOffMenu(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->hideTearOffMenu();
}

// tag=1050
// hovered(QAction * action)
void c_QMenu__hovered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->hovered(action);
}

// tag=1079
void c_QMenu__onHovered_QAction(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::hovered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// icon() const
void *c_QMenu__icon(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QMenu__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// insertMenu(QAction * before, QMenu * menu)
void *c_QMenu__insertMenu_QAction_QMenu(void *thisObj, void *before_,
                                        void *menu_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto menu = reinterpret_cast<QMenu *>(menu_);
  return
      // tag=1010
      fromPtr(thisObj)->insertMenu(before, menu);
}

// tag=1050
// insertSection(QAction * before, const QIcon & icon, const QString & text)
void *c_QMenu__insertSection_QAction_QIcon_QString(void *thisObj, void *before_,
                                                   void *icon_,
                                                   const char *text_) {
  auto before = reinterpret_cast<QAction *>(before_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->insertSection(before, icon, text);
}

// tag=1050
// insertSection(QAction * before, const QString & text)
void *c_QMenu__insertSection_QAction_QString(void *thisObj, void *before_,
                                             const char *text_) {
  auto before = reinterpret_cast<QAction *>(before_);
  const auto text = QString::fromUtf8(text_);
  return
      // tag=1010
      fromPtr(thisObj)->insertSection(before, text);
}

// tag=1050
// insertSeparator(QAction * before)
void *c_QMenu__insertSeparator_QAction(void *thisObj, void *before_) {
  auto before = reinterpret_cast<QAction *>(before_);
  return
      // tag=1010
      fromPtr(thisObj)->insertSeparator(before);
}

// tag=1050
// isEmpty() const
bool c_QMenu__isEmpty(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEmpty();
}

// tag=1050
// isTearOffEnabled() const
bool c_QMenu__isTearOffEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isTearOffEnabled();
}

// tag=1050
// isTearOffMenuVisible() const
bool c_QMenu__isTearOffMenuVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isTearOffMenuVisible();
}

// tag=1050
// leaveEvent(QEvent * arg__1)
void c_QMenu__leaveEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(arg__1);
}

// tag=1050
// menuAction() const
void *c_QMenu__menuAction(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->menuAction();
}

// tag=1050
// menuInAction(const QAction * action)
void *c_static_QMenu__menuInAction_QAction(void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QMenu_wrapper::menuInAction(action);
}

// tag=1050
// minimumSizeHint() const
void *c_QMenu__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->minimumSizeHint_nocallback();
        } else {
          return targetPtr->minimumSizeHint();
        }
      }()};
}

// tag=1050
// mouseDoubleClickEvent(QMouseEvent * event)
void c_QMenu__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * arg__1)
void c_QMenu__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(arg__1);
}

// tag=1050
// mousePressEvent(QMouseEvent * arg__1)
void c_QMenu__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(arg__1);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * arg__1)
void c_QMenu__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QMouseEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(arg__1);
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QMenu__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// popup(const QPoint & pos, QAction * at)
void c_QMenu__popup_QPoint_QAction(void *thisObj, void *pos_, void *at_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  auto at = reinterpret_cast<QAction *>(at_);
  // tag=1010
  fromPtr(thisObj)->popup(pos, at);
}

// tag=1050
// separatorsCollapsible() const
bool c_QMenu__separatorsCollapsible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->separatorsCollapsible();
}

// tag=1050
// setActiveAction(QAction * act)
void c_QMenu__setActiveAction_QAction(void *thisObj, void *act_) {
  auto act = reinterpret_cast<QAction *>(act_);
  // tag=1010
  fromPtr(thisObj)->setActiveAction(act);
}

// tag=1050
// setDefaultAction(QAction * arg__1)
void c_QMenu__setDefaultAction_QAction(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QAction *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setDefaultAction(arg__1);
}

// tag=1050
// setIcon(const QIcon & icon)
void c_QMenu__setIcon_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1010
  fromPtr(thisObj)->setIcon(icon);
}

// tag=1050
// setNoReplayFor(QWidget * widget)
void c_QMenu__setNoReplayFor_QWidget(void *thisObj, void *widget_) {
  auto widget = reinterpret_cast<QWidget *>(widget_);
  // tag=1010
  fromPtr(thisObj)->setNoReplayFor(widget);
}

// tag=1050
// setSeparatorsCollapsible(bool collapse)
void c_QMenu__setSeparatorsCollapsible_bool(void *thisObj, bool collapse) {
  // tag=1010
  fromPtr(thisObj)->setSeparatorsCollapsible(collapse);
}

// tag=1050
// setTearOffEnabled(bool arg__1)
void c_QMenu__setTearOffEnabled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setTearOffEnabled(arg__1);
}

// tag=1050
// setTitle(const QString & title)
void c_QMenu__setTitle_QString(void *thisObj, const char *title_) {
  const auto title = QString::fromUtf8(title_);
  // tag=1010
  fromPtr(thisObj)->setTitle(title);
}

// tag=1050
// setToolTipsVisible(bool visible)
void c_QMenu__setToolTipsVisible_bool(void *thisObj, bool visible) {
  // tag=1010
  fromPtr(thisObj)->setToolTipsVisible(visible);
}

// tag=1050
// setVisible(bool visible)
void c_QMenu__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QMenu__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// showTearOffMenu()
void c_QMenu__showTearOffMenu(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->showTearOffMenu();
}

// tag=1050
// showTearOffMenu(const QPoint & pos)
void c_QMenu__showTearOffMenu_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  // tag=1010
  fromPtr(thisObj)->showTearOffMenu(pos);
}

// tag=1050
// sizeHint() const
void *c_QMenu__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QMenu_wrapper *>(targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// title() const
void *c_QMenu__title(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->title()};
}

// tag=1050
// toolTipsVisible() const
bool c_QMenu__toolTipsVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->toolTipsVisible();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QMenu__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QMenu_wrapper::tr(s, c, n)};
}

// tag=1050
// triggered(QAction * action)
void c_QMenu__triggered_QAction(void *thisObj, void *action_) {
  auto action = reinterpret_cast<QAction *>(action_);
  // tag=1010
  fromPtr(thisObj)->triggered(action);
}

// tag=1079
void c_QMenu__onTriggered_QAction(void *thisObj, void *contextQObject,
                                  void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::triggered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMenu__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMenu__onWindowIconTextChanged_QString(void *thisObj,
                                              void *contextQObject,
                                              void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QMenu__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                           void *callback) {
  auto instance = reinterpret_cast<QMenu *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QMenu::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QMenu__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QMenu__registerVirtualMethodCallback(void *ptr, void *callback,
                                            int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_devType>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_focusNextPrevChild>(
        callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QMenu_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QMenu_wrapper::Callback_sizeHint>(callback);
    break;
  }
}
}

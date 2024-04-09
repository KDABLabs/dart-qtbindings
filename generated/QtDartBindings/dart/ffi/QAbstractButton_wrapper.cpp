#include "QAbstractButton_wrapper.h"

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
QAbstractButton_wrapper::QAbstractButton_wrapper(QWidget *parent)
    : ::QAbstractButton(parent) {}
void QAbstractButton_wrapper::animateClick() {
  // tag=1000

  // tag=1004
  ::QAbstractButton::animateClick();
}
bool QAbstractButton_wrapper::autoExclusive() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::autoExclusive();
}
bool QAbstractButton_wrapper::autoRepeat() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::autoRepeat();
}
int QAbstractButton_wrapper::autoRepeatDelay() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::autoRepeatDelay();
}
int QAbstractButton_wrapper::autoRepeatInterval() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::autoRepeatInterval();
}
void QAbstractButton_wrapper::changeEvent(QEvent *e) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QAbstractButton::changeEvent(e);
  }
}
// tag=1009
void QAbstractButton_wrapper::changeEvent_nocallback(QEvent *e) {
  // tag=1003
  ::QAbstractButton::changeEvent(e);
}
void QAbstractButton_wrapper::checkStateSet() {
  // tag=1000
  if (m_checkStateSetCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_checkStateSetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractButton::checkStateSet();
  }
}
// tag=1009
void QAbstractButton_wrapper::checkStateSet_nocallback() {
  // tag=1003
  ::QAbstractButton::checkStateSet();
}
void QAbstractButton_wrapper::click() {
  // tag=1000

  // tag=1004
  ::QAbstractButton::click();
}
void QAbstractButton_wrapper::clicked(bool checked) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::clicked(checked);
}
void QAbstractButton_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractButton::customEvent(event);
  }
}
// tag=1009
void QAbstractButton_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractButton::customEvent(event);
}
int QAbstractButton_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractButton::devType();
  }
}
// tag=1009
int QAbstractButton_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QAbstractButton::devType();
}
bool QAbstractButton_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QAbstractButton::event(e);
  }
}
// tag=1009
bool QAbstractButton_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QAbstractButton::event(e);
}
bool QAbstractButton_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QAbstractButton::eventFilter(watched, event);
  }
}
// tag=1009
bool QAbstractButton_wrapper::eventFilter_nocallback(QObject *watched,
                                                     QEvent *event) {
  // tag=1003
  return ::QAbstractButton::eventFilter(watched, event);
}
bool QAbstractButton_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QAbstractButton::focusNextPrevChild(next);
  }
}
// tag=1009
bool QAbstractButton_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QAbstractButton::focusNextPrevChild(next);
}
bool QAbstractButton_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractButton::hasHeightForWidth();
  }
}
// tag=1009
bool QAbstractButton_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QAbstractButton::hasHeightForWidth();
}
int QAbstractButton_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QAbstractButton::heightForWidth(arg__1);
  }
}
// tag=1009
int QAbstractButton_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QAbstractButton::heightForWidth(arg__1);
}
bool QAbstractButton_wrapper::hitButton(const QPoint &pos) const {
  // tag=1000
  if (m_hitButtonCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hitButtonCallback(const_cast<void *>(thisPtr), pos);
  } else {
    // tag=1002
    return ::QAbstractButton::hitButton(pos);
  }
}
// tag=1009
bool QAbstractButton_wrapper::hitButton_nocallback(const QPoint &pos) const {
  // tag=1003
  return ::QAbstractButton::hitButton(pos);
}
QIcon QAbstractButton_wrapper::icon() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::icon();
}
QSize QAbstractButton_wrapper::iconSize() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::iconSize();
}
void QAbstractButton_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QAbstractButton::initPainter(painter);
  }
}
// tag=1009
void QAbstractButton_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QAbstractButton::initPainter(painter);
}
bool QAbstractButton_wrapper::isCheckable() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::isCheckable();
}
bool QAbstractButton_wrapper::isChecked() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::isChecked();
}
bool QAbstractButton_wrapper::isDown() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::isDown();
}
void QAbstractButton_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractButton::leaveEvent(event);
  }
}
// tag=1009
void QAbstractButton_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAbstractButton::leaveEvent(event);
}
QSize QAbstractButton_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractButton::minimumSizeHint();
  }
}
// tag=1009
QSize QAbstractButton_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractButton::minimumSizeHint();
}
void QAbstractButton_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAbstractButton::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QAbstractButton_wrapper::mouseDoubleClickEvent_nocallback(
    QMouseEvent *event) {
  // tag=1003
  ::QAbstractButton::mouseDoubleClickEvent(event);
}
void QAbstractButton_wrapper::mouseMoveEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QAbstractButton::mouseMoveEvent(e);
  }
}
// tag=1009
void QAbstractButton_wrapper::mouseMoveEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QAbstractButton::mouseMoveEvent(e);
}
void QAbstractButton_wrapper::mousePressEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QAbstractButton::mousePressEvent(e);
  }
}
// tag=1009
void QAbstractButton_wrapper::mousePressEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QAbstractButton::mousePressEvent(e);
}
void QAbstractButton_wrapper::mouseReleaseEvent(QMouseEvent *e) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    ::QAbstractButton::mouseReleaseEvent(e);
  }
}
// tag=1009
void QAbstractButton_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *e) {
  // tag=1003
  ::QAbstractButton::mouseReleaseEvent(e);
}
void QAbstractButton_wrapper::nextCheckState() {
  // tag=1000
  if (m_nextCheckStateCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_nextCheckStateCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QAbstractButton::nextCheckState();
  }
}
// tag=1009
void QAbstractButton_wrapper::nextCheckState_nocallback() {
  // tag=1003
  ::QAbstractButton::nextCheckState();
}
void QAbstractButton_wrapper::paintEvent(QPaintEvent *e) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return;
  }
}
// tag=1009
void QAbstractButton_wrapper::paintEvent_nocallback(QPaintEvent *e) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return;
}
void QAbstractButton_wrapper::pressed() {
  // tag=1000

  // tag=1004
  ::QAbstractButton::pressed();
}
void QAbstractButton_wrapper::released() {
  // tag=1000

  // tag=1004
  ::QAbstractButton::released();
}
void QAbstractButton_wrapper::setAutoExclusive(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setAutoExclusive(arg__1);
}
void QAbstractButton_wrapper::setAutoRepeat(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setAutoRepeat(arg__1);
}
void QAbstractButton_wrapper::setAutoRepeatDelay(int arg__1) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setAutoRepeatDelay(arg__1);
}
void QAbstractButton_wrapper::setAutoRepeatInterval(int arg__1) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setAutoRepeatInterval(arg__1);
}
void QAbstractButton_wrapper::setCheckable(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setCheckable(arg__1);
}
void QAbstractButton_wrapper::setChecked(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setChecked(arg__1);
}
void QAbstractButton_wrapper::setDown(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setDown(arg__1);
}
void QAbstractButton_wrapper::setIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setIcon(icon);
}
void QAbstractButton_wrapper::setIconSize(const QSize &size) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setIconSize(size);
}
void QAbstractButton_wrapper::setShortcut(const QKeySequence &key) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setShortcut(key);
}
void QAbstractButton_wrapper::setText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::setText(text);
}
void QAbstractButton_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QAbstractButton::setVisible(visible);
  }
}
// tag=1009
void QAbstractButton_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QAbstractButton::setVisible(visible);
}
QPainter *QAbstractButton_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractButton::sharedPainter();
  }
}
// tag=1009
QPainter *QAbstractButton_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QAbstractButton::sharedPainter();
}
QKeySequence QAbstractButton_wrapper::shortcut() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::shortcut();
}
QSize QAbstractButton_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QAbstractButton::sizeHint();
  }
}
// tag=1009
QSize QAbstractButton_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QAbstractButton::sizeHint();
}
QString QAbstractButton_wrapper::text() const {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::text();
}
void QAbstractButton_wrapper::toggle() {
  // tag=1000

  // tag=1004
  ::QAbstractButton::toggle();
}
void QAbstractButton_wrapper::toggled(bool checked) {
  // tag=1000

  // tag=1004
  ::QAbstractButton::toggled(checked);
}
QString QAbstractButton_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QAbstractButton::tr(s, c, n);
}

// tag=1005
QAbstractButton_wrapper::~QAbstractButton_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QAbstractButton *fromPtr(void *ptr) {
  return reinterpret_cast<QAbstractButton *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QAbstractButton_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
      ptr);
}
extern "C" {

// tag=1049
void c_QAbstractButton_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
      cppObj);
}
void *c_QAbstractButton__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAbstractButton_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// animateClick()
void c_QAbstractButton__animateClick(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->animateClick();
}

// tag=1050
// autoExclusive() const
bool c_QAbstractButton__autoExclusive(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoExclusive();
}

// tag=1050
// autoRepeat() const
bool c_QAbstractButton__autoRepeat(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoRepeat();
}

// tag=1050
// autoRepeatDelay() const
int c_QAbstractButton__autoRepeatDelay(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoRepeatDelay();
}

// tag=1050
// autoRepeatInterval() const
int c_QAbstractButton__autoRepeatInterval(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoRepeatInterval();
}

// tag=1050
// changeEvent(QEvent * e)
void c_QAbstractButton__changeEvent_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(e);
}

// tag=1050
// checkStateSet()
void c_QAbstractButton__checkStateSet(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->checkStateSet_nocallback();
}

// tag=1050
// click()
void c_QAbstractButton__click(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->click();
}

// tag=1050
// clicked(bool checked)
void c_QAbstractButton__clicked_bool(void *thisObj, bool checked) {
  // tag=1010
  fromPtr(thisObj)->clicked(checked);
}

// tag=1079
void c_QAbstractButton__onClicked_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::clicked,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QAbstractButton__onCustomContextMenuRequested_QPoint(
    void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QAbstractButton__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QAbstractButton__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// event(QEvent * e)
bool c_QAbstractButton__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QAbstractButton__eventFilter_QObject_QEvent(void *thisObj,
                                                   void *watched_,
                                                   void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
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
bool c_QAbstractButton__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QAbstractButton__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
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
int c_QAbstractButton__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// hitButton(const QPoint & pos) const
bool c_QAbstractButton__hitButton_QPoint(void *thisObj, void *pos_) {
  auto &pos = *reinterpret_cast<QPoint *>(pos_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->hitButton_nocallback(pos);
}

// tag=1050
// icon() const
void *c_QAbstractButton__icon(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
}

// tag=1050
// iconSize() const
void *c_QAbstractButton__iconSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->iconSize()};
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QAbstractButton__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// isCheckable() const
bool c_QAbstractButton__isCheckable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isCheckable();
}

// tag=1050
// isChecked() const
bool c_QAbstractButton__isChecked(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isChecked();
}

// tag=1050
// isDown() const
bool c_QAbstractButton__isDown(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDown();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QAbstractButton__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QAbstractButton__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
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
void c_QAbstractButton__mouseDoubleClickEvent_QMouseEvent(void *thisObj,
                                                          void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * e)
void c_QAbstractButton__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(e);
}

// tag=1050
// mousePressEvent(QMouseEvent * e)
void c_QAbstractButton__mousePressEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(e);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * e)
void c_QAbstractButton__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QMouseEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(e);
}

// tag=1050
// nextCheckState()
void c_QAbstractButton__nextCheckState(void *thisObj) {
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->nextCheckState_nocallback();
}

// tag=1050
// paintEvent(QPaintEvent * e)
void c_QAbstractButton__paintEvent_QPaintEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QPaintEvent *>(e_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(e);
}

// tag=1050
// pressed()
void c_QAbstractButton__pressed(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->pressed();
}

// tag=1079
void c_QAbstractButton__onPressed(void *thisObj, void *contextQObject,
                                  void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::pressed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// released()
void c_QAbstractButton__released(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->released();
}

// tag=1079
void c_QAbstractButton__onReleased(void *thisObj, void *contextQObject,
                                   void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::released,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// setAutoExclusive(bool arg__1)
void c_QAbstractButton__setAutoExclusive_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setAutoExclusive(arg__1);
}

// tag=1050
// setAutoRepeat(bool arg__1)
void c_QAbstractButton__setAutoRepeat_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setAutoRepeat(arg__1);
}

// tag=1050
// setAutoRepeatDelay(int arg__1)
void c_QAbstractButton__setAutoRepeatDelay_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setAutoRepeatDelay(arg__1);
}

// tag=1050
// setAutoRepeatInterval(int arg__1)
void c_QAbstractButton__setAutoRepeatInterval_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setAutoRepeatInterval(arg__1);
}

// tag=1050
// setCheckable(bool arg__1)
void c_QAbstractButton__setCheckable_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setCheckable(arg__1);
}

// tag=1050
// setChecked(bool arg__1)
void c_QAbstractButton__setChecked_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setChecked(arg__1);
}

// tag=1050
// setDown(bool arg__1)
void c_QAbstractButton__setDown_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setDown(arg__1);
}

// tag=1050
// setIcon(const QIcon & icon)
void c_QAbstractButton__setIcon_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1010
  fromPtr(thisObj)->setIcon(icon);
}

// tag=1050
// setIconSize(const QSize & size)
void c_QAbstractButton__setIconSize_QSize(void *thisObj, void *size_) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->setIconSize(size);
}

// tag=1050
// setShortcut(const QKeySequence & key)
void c_QAbstractButton__setShortcut_QKeySequence(void *thisObj, void *key_) {
  auto &key = *reinterpret_cast<QKeySequence *>(key_);
  // tag=1010
  fromPtr(thisObj)->setShortcut(key);
}

// tag=1050
// setText(const QString & text)
void c_QAbstractButton__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setText(text);
}

// tag=1050
// setVisible(bool visible)
void c_QAbstractButton__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
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
void *c_QAbstractButton__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// shortcut() const
void *c_QAbstractButton__shortcut(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{fromPtr(thisObj)->shortcut()};
}

// tag=1050
// sizeHint() const
void *c_QAbstractButton__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->sizeHint_nocallback();
        } else {
          return targetPtr->sizeHint();
        }
      }()};
}

// tag=1050
// text() const
void *c_QAbstractButton__text(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
}

// tag=1050
// toggle()
void c_QAbstractButton__toggle(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->toggle();
}

// tag=1050
// toggled(bool checked)
void c_QAbstractButton__toggled_bool(void *thisObj, bool checked) {
  // tag=1010
  fromPtr(thisObj)->toggled(checked);
}

// tag=1079
void c_QAbstractButton__onToggled_bool(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::toggled,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QAbstractButton__tr_char_char_int(const char *s, const char *c,
                                                 int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QAbstractButton_wrapper::tr(s, c, n)};
}

// tag=1079
void c_QAbstractButton__onWindowIconChanged_QIcon(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QAbstractButton__onWindowIconTextChanged_QString(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QAbstractButton__onWindowTitleChanged_QString(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QAbstractButton *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAbstractButton::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QAbstractButton__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QAbstractButton__registerVirtualMethodCallback(void *ptr, void *callback,
                                                      int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_changeEvent>(callback);
    break;
  case 6020:
    wrapper->m_checkStateSetCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_checkStateSet>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_devType>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_hasHeightForWidth>(callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_heightForWidth>(callback);
    break;
  case 6055:
    wrapper->m_hitButtonCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_hitButton>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_initPainter>(callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_leaveEvent>(callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_minimumSizeHint>(callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mouseMoveEvent>(callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mousePressEvent>(callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_mouseReleaseEvent>(callback);
    break;
  case 6105:
    wrapper->m_nextCheckStateCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_nextCheckState>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_paintEvent>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_setVisible>(callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QAbstractButton_wrapper::
                             Callback_sharedPainter>(callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAbstractButton_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}

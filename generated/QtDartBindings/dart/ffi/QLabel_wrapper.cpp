#include "QLabel_wrapper.h"

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
QLabel_wrapper::QLabel_wrapper(QWidget *parent) : ::QLabel(parent) {}

// tag=1006
QLabel_wrapper::QLabel_wrapper(const QString &text, QWidget *parent)
    : ::QLabel(text, parent) {}
QWidget *QLabel_wrapper::buddy() const {
  // tag=1000

  // tag=1004
  return ::QLabel::buddy();
}
void QLabel_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLabel::changeEvent(arg__1);
  }
}
// tag=1009
void QLabel_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QLabel::changeEvent(arg__1);
}
void QLabel_wrapper::clear() {
  // tag=1000

  // tag=1004
  ::QLabel::clear();
}
void QLabel_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QLabel::customEvent(event);
  }
}
// tag=1009
void QLabel_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QLabel::customEvent(event);
}
int QLabel_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLabel::devType();
  }
}
// tag=1009
int QLabel_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QLabel::devType();
}
bool QLabel_wrapper::event(QEvent *e) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), e);
  } else {
    // tag=1002
    return ::QLabel::event(e);
  }
}
// tag=1009
bool QLabel_wrapper::event_nocallback(QEvent *e) {
  // tag=1003
  return ::QLabel::event(e);
}
bool QLabel_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QLabel::eventFilter(watched, event);
  }
}
// tag=1009
bool QLabel_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QLabel::eventFilter(watched, event);
}
bool QLabel_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QLabel::focusNextPrevChild(next);
  }
}
// tag=1009
bool QLabel_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QLabel::focusNextPrevChild(next);
}
bool QLabel_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLabel::hasHeightForWidth();
  }
}
// tag=1009
bool QLabel_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QLabel::hasHeightForWidth();
}
bool QLabel_wrapper::hasScaledContents() const {
  // tag=1000

  // tag=1004
  return ::QLabel::hasScaledContents();
}
bool QLabel_wrapper::hasSelectedText() const {
  // tag=1000

  // tag=1004
  return ::QLabel::hasSelectedText();
}
int QLabel_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QLabel::heightForWidth(arg__1);
  }
}
// tag=1009
int QLabel_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QLabel::heightForWidth(arg__1);
}
int QLabel_wrapper::indent() const {
  // tag=1000

  // tag=1004
  return ::QLabel::indent();
}
void QLabel_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QLabel::initPainter(painter);
  }
}
// tag=1009
void QLabel_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QLabel::initPainter(painter);
}
void QLabel_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QLabel::leaveEvent(event);
  }
}
// tag=1009
void QLabel_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QLabel::leaveEvent(event);
}
void QLabel_wrapper::linkActivated(const QString &link) {
  // tag=1000

  // tag=1004
  ::QLabel::linkActivated(link);
}
void QLabel_wrapper::linkHovered(const QString &link) {
  // tag=1000

  // tag=1004
  ::QLabel::linkHovered(link);
}
int QLabel_wrapper::margin() const {
  // tag=1000

  // tag=1004
  return ::QLabel::margin();
}
QSize QLabel_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLabel::minimumSizeHint();
  }
}
// tag=1009
QSize QLabel_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QLabel::minimumSizeHint();
}
void QLabel_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QLabel::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QLabel_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QLabel::mouseDoubleClickEvent(event);
}
void QLabel_wrapper::mouseMoveEvent(QMouseEvent *ev) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), ev);
  } else {
    // tag=1002
    ::QLabel::mouseMoveEvent(ev);
  }
}
// tag=1009
void QLabel_wrapper::mouseMoveEvent_nocallback(QMouseEvent *ev) {
  // tag=1003
  ::QLabel::mouseMoveEvent(ev);
}
void QLabel_wrapper::mousePressEvent(QMouseEvent *ev) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), ev);
  } else {
    // tag=1002
    ::QLabel::mousePressEvent(ev);
  }
}
// tag=1009
void QLabel_wrapper::mousePressEvent_nocallback(QMouseEvent *ev) {
  // tag=1003
  ::QLabel::mousePressEvent(ev);
}
void QLabel_wrapper::mouseReleaseEvent(QMouseEvent *ev) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), ev);
  } else {
    // tag=1002
    ::QLabel::mouseReleaseEvent(ev);
  }
}
// tag=1009
void QLabel_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *ev) {
  // tag=1003
  ::QLabel::mouseReleaseEvent(ev);
}
bool QLabel_wrapper::openExternalLinks() const {
  // tag=1000

  // tag=1004
  return ::QLabel::openExternalLinks();
}
void QLabel_wrapper::paintEvent(QPaintEvent *arg__1) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QLabel::paintEvent(arg__1);
  }
}
// tag=1009
void QLabel_wrapper::paintEvent_nocallback(QPaintEvent *arg__1) {
  // tag=1003
  ::QLabel::paintEvent(arg__1);
}
QPixmap QLabel_wrapper::pixmap() const {
  // tag=1000

  // tag=1004
  return ::QLabel::pixmap();
}
QString QLabel_wrapper::selectedText() const {
  // tag=1000

  // tag=1004
  return ::QLabel::selectedText();
}
int QLabel_wrapper::selectionStart() const {
  // tag=1000

  // tag=1004
  return ::QLabel::selectionStart();
}
void QLabel_wrapper::setBuddy(QWidget *arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setBuddy(arg__1);
}
void QLabel_wrapper::setIndent(int arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setIndent(arg__1);
}
void QLabel_wrapper::setMargin(int arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setMargin(arg__1);
}
void QLabel_wrapper::setNum(double arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setNum(arg__1);
}
void QLabel_wrapper::setNum(int arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setNum(arg__1);
}
void QLabel_wrapper::setOpenExternalLinks(bool open) {
  // tag=1000

  // tag=1004
  ::QLabel::setOpenExternalLinks(open);
}
void QLabel_wrapper::setPixmap(const QPixmap &arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setPixmap(arg__1);
}
void QLabel_wrapper::setScaledContents(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setScaledContents(arg__1);
}
void QLabel_wrapper::setSelection(int arg__1, int arg__2) {
  // tag=1000

  // tag=1004
  ::QLabel::setSelection(arg__1, arg__2);
}
void QLabel_wrapper::setText(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QLabel::setText(arg__1);
}
void QLabel_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QLabel::setVisible(visible);
  }
}
// tag=1009
void QLabel_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QLabel::setVisible(visible);
}
void QLabel_wrapper::setWordWrap(bool on) {
  // tag=1000

  // tag=1004
  ::QLabel::setWordWrap(on);
}
QPainter *QLabel_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLabel::sharedPainter();
  }
}
// tag=1009
QPainter *QLabel_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QLabel::sharedPainter();
}
QSize QLabel_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QLabel::sizeHint();
  }
}
// tag=1009
QSize QLabel_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QLabel::sizeHint();
}
QString QLabel_wrapper::text() const {
  // tag=1000

  // tag=1004
  return ::QLabel::text();
}
QString QLabel_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QLabel::tr(s, c, n);
}
bool QLabel_wrapper::wordWrap() const {
  // tag=1000

  // tag=1004
  return ::QLabel::wordWrap();
}

// tag=1005
QLabel_wrapper::~QLabel_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QLabel *fromPtr(void *ptr) { return reinterpret_cast<QLabel *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QLabel_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QLabel_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(cppObj);
}
void *c_QLabel__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLabel_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QLabel__constructor_QString_QWidget(const char *text_, void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QLabel_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// buddy() const
void *c_QLabel__buddy(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->buddy();
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QLabel__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1050
// clear()
void c_QLabel__clear(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->clear();
}

// tag=1050
// customEvent(QEvent * event)
void c_QLabel__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QLabel__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(
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
bool c_QLabel__event_QEvent(void *thisObj, void *e_) {
  auto e = reinterpret_cast<QEvent *>(e_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(e);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QLabel__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                          void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(
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
bool c_QLabel__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QLabel__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->hasHeightForWidth_nocallback();
        } else {
          return targetPtr->hasHeightForWidth();
        }
      }();
}

// tag=1050
// hasScaledContents() const
bool c_QLabel__hasScaledContents(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasScaledContents();
}

// tag=1050
// hasSelectedText() const
bool c_QLabel__hasSelectedText(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasSelectedText();
}

// tag=1050
// heightForWidth(int arg__1) const
int c_QLabel__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// indent() const
int c_QLabel__indent(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->indent();
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QLabel__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QLabel__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// linkActivated(const QString & link)
void c_QLabel__linkActivated_QString(void *thisObj, const char *link_) {
  const auto link = QString::fromUtf8(link_);
  // tag=1010
  fromPtr(thisObj)->linkActivated(link);
}

// tag=1079
void c_QLabel__onLinkActivated_QString(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QLabel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLabel::linkActivated,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// linkHovered(const QString & link)
void c_QLabel__linkHovered_QString(void *thisObj, const char *link_) {
  const auto link = QString::fromUtf8(link_);
  // tag=1010
  fromPtr(thisObj)->linkHovered(link);
}

// tag=1079
void c_QLabel__onLinkHovered_QString(void *thisObj, void *contextQObject,
                                     void *callback) {
  auto instance = reinterpret_cast<QLabel *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QLabel::linkHovered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// margin() const
int c_QLabel__margin(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->margin();
}

// tag=1050
// minimumSizeHint() const
void *c_QLabel__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(
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
void c_QLabel__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * ev)
void c_QLabel__mouseMoveEvent_QMouseEvent(void *thisObj, void *ev_) {
  auto ev = reinterpret_cast<QMouseEvent *>(ev_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(ev);
}

// tag=1050
// mousePressEvent(QMouseEvent * ev)
void c_QLabel__mousePressEvent_QMouseEvent(void *thisObj, void *ev_) {
  auto ev = reinterpret_cast<QMouseEvent *>(ev_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(ev);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * ev)
void c_QLabel__mouseReleaseEvent_QMouseEvent(void *thisObj, void *ev_) {
  auto ev = reinterpret_cast<QMouseEvent *>(ev_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(ev);
}

// tag=1050
// openExternalLinks() const
bool c_QLabel__openExternalLinks(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->openExternalLinks();
}

// tag=1050
// paintEvent(QPaintEvent * arg__1)
void c_QLabel__paintEvent_QPaintEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QPaintEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(arg__1);
}

// tag=1050
// pixmap() const
void *c_QLabel__pixmap(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->pixmap()};
}

// tag=1050
// selectedText() const
void *c_QLabel__selectedText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->selectedText()};
}

// tag=1050
// selectionStart() const
int c_QLabel__selectionStart(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->selectionStart();
}

// tag=1050
// setBuddy(QWidget * arg__1)
void c_QLabel__setBuddy_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setBuddy(arg__1);
}

// tag=1050
// setIndent(int arg__1)
void c_QLabel__setIndent_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setIndent(arg__1);
}

// tag=1050
// setMargin(int arg__1)
void c_QLabel__setMargin_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setMargin(arg__1);
}

// tag=1050
// setNum(double arg__1)
void c_QLabel__setNum_double(void *thisObj, double arg__1) {
  // tag=1010
  fromPtr(thisObj)->setNum(arg__1);
}

// tag=1050
// setNum(int arg__1)
void c_QLabel__setNum_int(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setNum(arg__1);
}

// tag=1050
// setOpenExternalLinks(bool open)
void c_QLabel__setOpenExternalLinks_bool(void *thisObj, bool open) {
  // tag=1010
  fromPtr(thisObj)->setOpenExternalLinks(open);
}

// tag=1050
// setPixmap(const QPixmap & arg__1)
void c_QLabel__setPixmap_QPixmap(void *thisObj, void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QPixmap *>(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setPixmap(arg__1);
}

// tag=1050
// setScaledContents(bool arg__1)
void c_QLabel__setScaledContents_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setScaledContents(arg__1);
}

// tag=1050
// setSelection(int arg__1, int arg__2)
void c_QLabel__setSelection_int_int(void *thisObj, int arg__1, int arg__2) {
  // tag=1010
  fromPtr(thisObj)->setSelection(arg__1, arg__2);
}

// tag=1050
// setText(const QString & arg__1)
void c_QLabel__setText_QString(void *thisObj, const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1010
  fromPtr(thisObj)->setText(arg__1);
}

// tag=1050
// setVisible(bool visible)
void c_QLabel__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// setWordWrap(bool on)
void c_QLabel__setWordWrap_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setWordWrap(on);
}

// tag=1050
// sharedPainter() const
void *c_QLabel__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QLabel__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QLabel_wrapper *>(
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
void *c_QLabel__text(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QLabel__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QLabel_wrapper::tr(s, c, n)};
}

// tag=1050
// wordWrap() const
bool c_QLabel__wordWrap(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->wordWrap();
}
void c_QLabel__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QLabel__registerVirtualMethodCallback(void *ptr, void *callback,
                                             int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_devType>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_focusNextPrevChild>(
        callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QLabel_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QLabel_wrapper::Callback_sizeHint>(callback);
    break;
  }
}
}

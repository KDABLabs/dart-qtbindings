#include "QDialog_wrapper.h"

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
QDialog_wrapper::QDialog_wrapper(QWidget *parent) : ::QDialog(parent) {}
void QDialog_wrapper::accept() {
  // tag=1000
  if (m_acceptCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_acceptCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QDialog::accept();
  }
}
// tag=1009
void QDialog_wrapper::accept_nocallback() {
  // tag=1003
  ::QDialog::accept();
}
void QDialog_wrapper::accepted() {
  // tag=1000

  // tag=1004
  ::QDialog::accepted();
}
void QDialog_wrapper::adjustPosition(QWidget *arg__1) {
  // tag=1000

  // tag=1004
  ::QDialog::adjustPosition(arg__1);
}
void QDialog_wrapper::changeEvent(QEvent *arg__1) {
  // tag=1000
  if (m_changeEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_changeEventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QDialog::changeEvent(arg__1);
  }
}
// tag=1009
void QDialog_wrapper::changeEvent_nocallback(QEvent *arg__1) {
  // tag=1003
  ::QDialog::changeEvent(arg__1);
}
void QDialog_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QDialog::customEvent(event);
  }
}
// tag=1009
void QDialog_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QDialog::customEvent(event);
}
int QDialog_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QDialog::devType();
  }
}
// tag=1009
int QDialog_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QDialog::devType();
}
void QDialog_wrapper::done(int arg__1) {
  // tag=1000
  if (m_doneCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_doneCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    ::QDialog::done(arg__1);
  }
}
// tag=1009
void QDialog_wrapper::done_nocallback(int arg__1) {
  // tag=1003
  ::QDialog::done(arg__1);
}
bool QDialog_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QDialog::event(event);
  }
}
// tag=1009
bool QDialog_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QDialog::event(event);
}
bool QDialog_wrapper::eventFilter(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QDialog::eventFilter(arg__1, arg__2);
  }
}
// tag=1009
bool QDialog_wrapper::eventFilter_nocallback(QObject *arg__1, QEvent *arg__2) {
  // tag=1003
  return ::QDialog::eventFilter(arg__1, arg__2);
}
int QDialog_wrapper::exec() {
  // tag=1000
  if (m_execCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_execCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QDialog::exec();
  }
}
// tag=1009
int QDialog_wrapper::exec_nocallback() {
  // tag=1003
  return ::QDialog::exec();
}
void QDialog_wrapper::finished(int result) {
  // tag=1000

  // tag=1004
  ::QDialog::finished(result);
}
bool QDialog_wrapper::focusNextPrevChild(bool next) {
  // tag=1000
  if (m_focusNextPrevChildCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_focusNextPrevChildCallback(const_cast<void *>(thisPtr), next);
  } else {
    // tag=1002
    return ::QDialog::focusNextPrevChild(next);
  }
}
// tag=1009
bool QDialog_wrapper::focusNextPrevChild_nocallback(bool next) {
  // tag=1003
  return ::QDialog::focusNextPrevChild(next);
}
bool QDialog_wrapper::hasHeightForWidth() const {
  // tag=1000
  if (m_hasHeightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_hasHeightForWidthCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QDialog::hasHeightForWidth();
  }
}
// tag=1009
bool QDialog_wrapper::hasHeightForWidth_nocallback() const {
  // tag=1003
  return ::QDialog::hasHeightForWidth();
}
int QDialog_wrapper::heightForWidth(int arg__1) const {
  // tag=1000
  if (m_heightForWidthCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_heightForWidthCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QDialog::heightForWidth(arg__1);
  }
}
// tag=1009
int QDialog_wrapper::heightForWidth_nocallback(int arg__1) const {
  // tag=1003
  return ::QDialog::heightForWidth(arg__1);
}
void QDialog_wrapper::initPainter(QPainter *painter) const {
  // tag=1000
  if (m_initPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_initPainterCallback(const_cast<void *>(thisPtr), painter);
  } else {
    // tag=1002
    ::QDialog::initPainter(painter);
  }
}
// tag=1009
void QDialog_wrapper::initPainter_nocallback(QPainter *painter) const {
  // tag=1003
  ::QDialog::initPainter(painter);
}
bool QDialog_wrapper::isSizeGripEnabled() const {
  // tag=1000

  // tag=1004
  return ::QDialog::isSizeGripEnabled();
}
void QDialog_wrapper::leaveEvent(QEvent *event) {
  // tag=1000
  if (m_leaveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_leaveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QDialog::leaveEvent(event);
  }
}
// tag=1009
void QDialog_wrapper::leaveEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QDialog::leaveEvent(event);
}
QSize QDialog_wrapper::minimumSizeHint() const {
  // tag=1000
  if (m_minimumSizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_minimumSizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QDialog::minimumSizeHint();
  }
}
// tag=1009
QSize QDialog_wrapper::minimumSizeHint_nocallback() const {
  // tag=1003
  return ::QDialog::minimumSizeHint();
}
void QDialog_wrapper::mouseDoubleClickEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseDoubleClickEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseDoubleClickEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QDialog::mouseDoubleClickEvent(event);
  }
}
// tag=1009
void QDialog_wrapper::mouseDoubleClickEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QDialog::mouseDoubleClickEvent(event);
}
void QDialog_wrapper::mouseMoveEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseMoveEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseMoveEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QDialog::mouseMoveEvent(event);
  }
}
// tag=1009
void QDialog_wrapper::mouseMoveEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QDialog::mouseMoveEvent(event);
}
void QDialog_wrapper::mousePressEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mousePressEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mousePressEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QDialog::mousePressEvent(event);
  }
}
// tag=1009
void QDialog_wrapper::mousePressEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QDialog::mousePressEvent(event);
}
void QDialog_wrapper::mouseReleaseEvent(QMouseEvent *event) {
  // tag=1000
  if (m_mouseReleaseEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_mouseReleaseEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QDialog::mouseReleaseEvent(event);
  }
}
// tag=1009
void QDialog_wrapper::mouseReleaseEvent_nocallback(QMouseEvent *event) {
  // tag=1003
  ::QDialog::mouseReleaseEvent(event);
}
void QDialog_wrapper::open() {
  // tag=1000
  if (m_openCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_openCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QDialog::open();
  }
}
// tag=1009
void QDialog_wrapper::open_nocallback() {
  // tag=1003
  ::QDialog::open();
}
void QDialog_wrapper::paintEvent(QPaintEvent *event) {
  // tag=1000
  if (m_paintEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_paintEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QDialog::paintEvent(event);
  }
}
// tag=1009
void QDialog_wrapper::paintEvent_nocallback(QPaintEvent *event) {
  // tag=1003
  ::QDialog::paintEvent(event);
}
void QDialog_wrapper::reject() {
  // tag=1000
  if (m_rejectCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_rejectCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QDialog::reject();
  }
}
// tag=1009
void QDialog_wrapper::reject_nocallback() {
  // tag=1003
  ::QDialog::reject();
}
void QDialog_wrapper::rejected() {
  // tag=1000

  // tag=1004
  ::QDialog::rejected();
}
int QDialog_wrapper::result() const {
  // tag=1000

  // tag=1004
  return ::QDialog::result();
}
void QDialog_wrapper::setModal(bool modal) {
  // tag=1000

  // tag=1004
  ::QDialog::setModal(modal);
}
void QDialog_wrapper::setResult(int r) {
  // tag=1000

  // tag=1004
  ::QDialog::setResult(r);
}
void QDialog_wrapper::setSizeGripEnabled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QDialog::setSizeGripEnabled(arg__1);
}
void QDialog_wrapper::setVisible(bool visible) {
  // tag=1000
  if (m_setVisibleCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_setVisibleCallback(const_cast<void *>(thisPtr), visible);
  } else {
    // tag=1002
    ::QDialog::setVisible(visible);
  }
}
// tag=1009
void QDialog_wrapper::setVisible_nocallback(bool visible) {
  // tag=1003
  ::QDialog::setVisible(visible);
}
QPainter *QDialog_wrapper::sharedPainter() const {
  // tag=1000
  if (m_sharedPainterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sharedPainterCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QDialog::sharedPainter();
  }
}
// tag=1009
QPainter *QDialog_wrapper::sharedPainter_nocallback() const {
  // tag=1003
  return ::QDialog::sharedPainter();
}
QSize QDialog_wrapper::sizeHint() const {
  // tag=1000
  if (m_sizeHintCallback) {
    // tag=1001
    const void *thisPtr = this;
    return *m_sizeHintCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QDialog::sizeHint();
  }
}
// tag=1009
QSize QDialog_wrapper::sizeHint_nocallback() const {
  // tag=1003
  return ::QDialog::sizeHint();
}
QString QDialog_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QDialog::tr(s, c, n);
}

// tag=1005
QDialog_wrapper::~QDialog_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QDialog *fromPtr(void *ptr) { return reinterpret_cast<QDialog *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QDialog_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QDialog_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(cppObj);
}
void *c_QDialog__constructor_QWidget(void *parent_) {
  auto parent = reinterpret_cast<QWidget *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QDialog_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// accept()
void c_QDialog__accept(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->accept_nocallback();
    } else {
      return targetPtr->accept();
    }
  }();
}

// tag=1050
// accepted()
void c_QDialog__accepted(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->accepted();
}

// tag=1079
void c_QDialog__onAccepted(void *thisObj, void *contextQObject,
                           void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::accepted, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// adjustPosition(QWidget * arg__1)
void c_QDialog__adjustPosition_QWidget(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QWidget *>(arg__1_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->adjustPosition(arg__1);
}

// tag=1050
// changeEvent(QEvent * arg__1)
void c_QDialog__changeEvent_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->changeEvent_nocallback(arg__1);
}

// tag=1079
void c_QDialog__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                    void *contextQObject,
                                                    void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::customContextMenuRequested,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// customEvent(QEvent * event)
void c_QDialog__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// devType() const
int c_QDialog__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// done(int arg__1)
void c_QDialog__done_int(void *thisObj, int arg__1) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->done_nocallback(arg__1);
    } else {
      return targetPtr->done(arg__1);
    }
  }();
}

// tag=1050
// event(QEvent * event)
bool c_QDialog__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(event);
}

// tag=1050
// eventFilter(QObject * arg__1, QEvent * arg__2)
bool c_QDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->eventFilter_nocallback(arg__1, arg__2);
}

// tag=1050
// exec()
int c_QDialog__exec(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->exec_nocallback();
        } else {
          return targetPtr->exec();
        }
      }();
}

// tag=1050
// finished(int result)
void c_QDialog__finished_int(void *thisObj, int result) {
  // tag=1010
  fromPtr(thisObj)->finished(result);
}

// tag=1079
void c_QDialog__onFinished_int(void *thisObj, void *contextQObject,
                               void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::finished, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// focusNextPrevChild(bool next)
bool c_QDialog__focusNextPrevChild_bool(void *thisObj, bool next) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->focusNextPrevChild_nocallback(next);
}

// tag=1050
// hasHeightForWidth() const
bool c_QDialog__hasHeightForWidth(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(
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
int c_QDialog__heightForWidth_int(void *thisObj, int arg__1) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->heightForWidth_nocallback(arg__1);
        } else {
          return targetPtr->heightForWidth(arg__1);
        }
      }();
}

// tag=1050
// initPainter(QPainter * painter) const
void c_QDialog__initPainter_QPainter(void *thisObj, void *painter_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->initPainter_nocallback(painter);
}

// tag=1050
// isSizeGripEnabled() const
bool c_QDialog__isSizeGripEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSizeGripEnabled();
}

// tag=1050
// leaveEvent(QEvent * event)
void c_QDialog__leaveEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->leaveEvent_nocallback(event);
}

// tag=1050
// minimumSizeHint() const
void *c_QDialog__minimumSizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(
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
void c_QDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseDoubleClickEvent_nocallback(event);
}

// tag=1050
// mouseMoveEvent(QMouseEvent * event)
void c_QDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseMoveEvent_nocallback(event);
}

// tag=1050
// mousePressEvent(QMouseEvent * event)
void c_QDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mousePressEvent_nocallback(event);
}

// tag=1050
// mouseReleaseEvent(QMouseEvent * event)
void c_QDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QMouseEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->mouseReleaseEvent_nocallback(event);
}

// tag=1050
// open()
void c_QDialog__open(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->open_nocallback();
    } else {
      return targetPtr->open();
    }
  }();
}

// tag=1050
// paintEvent(QPaintEvent * event)
void c_QDialog__paintEvent_QPaintEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QPaintEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->paintEvent_nocallback(event);
}

// tag=1050
// reject()
void c_QDialog__reject(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reject_nocallback();
    } else {
      return targetPtr->reject();
    }
  }();
}

// tag=1050
// rejected()
void c_QDialog__rejected(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->rejected();
}

// tag=1079
void c_QDialog__onRejected(void *thisObj, void *contextQObject,
                           void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::rejected, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// result() const
int c_QDialog__result(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->result();
}

// tag=1050
// setModal(bool modal)
void c_QDialog__setModal_bool(void *thisObj, bool modal) {
  // tag=1010
  fromPtr(thisObj)->setModal(modal);
}

// tag=1050
// setResult(int r)
void c_QDialog__setResult_int(void *thisObj, int r) {
  // tag=1010
  fromPtr(thisObj)->setResult(r);
}

// tag=1050
// setSizeGripEnabled(bool arg__1)
void c_QDialog__setSizeGripEnabled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setSizeGripEnabled(arg__1);
}

// tag=1050
// setVisible(bool visible)
void c_QDialog__setVisible_bool(void *thisObj, bool visible) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->setVisible_nocallback(visible);
    } else {
      return targetPtr->setVisible(visible);
    }
  }();
}

// tag=1050
// sharedPainter() const
void *c_QDialog__sharedPainter(void *thisObj) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->sharedPainter_nocallback();
}

// tag=1050
// sizeHint() const
void *c_QDialog__sizeHint(void *thisObj) {
  return
      // tag=1016

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{[&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QDialog_wrapper *>(
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
void *c_static_QDialog__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QDialog_wrapper::tr(s, c, n)};
}

// tag=1079
void c_QDialog__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                          void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::windowIconChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QDialog__onWindowIconTextChanged_QString(void *thisObj,
                                                void *contextQObject,
                                                void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::windowIconTextChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1079
void c_QDialog__onWindowTitleChanged_QString(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QDialog *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QDialog::windowTitleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QDialog__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 4218:
    wrapper->m_acceptCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_accept>(callback);
    break;
  case 1124:
    wrapper->m_changeEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_changeEvent>(
        callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_customEvent>(
        callback);
    break;
  case 1141:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_devType>(callback);
    break;
  case 4253:
    wrapper->m_doneCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_done>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 4255:
    wrapper->m_execCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_exec>(callback);
    break;
  case 1150:
    wrapper->m_focusNextPrevChildCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper::
                             Callback_focusNextPrevChild>(callback);
    break;
  case 1164:
    wrapper->m_hasHeightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_hasHeightForWidth>(
        callback);
    break;
  case 1168:
    wrapper->m_heightForWidthCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_heightForWidth>(
        callback);
    break;
  case 1171:
    wrapper->m_initPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_initPainter>(
        callback);
    break;
  case 1196:
    wrapper->m_leaveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_leaveEvent>(
        callback);
    break;
  case 1216:
    wrapper->m_minimumSizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_minimumSizeHint>(
        callback);
    break;
  case 1218:
    wrapper->m_mouseDoubleClickEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QDialog_wrapper::
                             Callback_mouseDoubleClickEvent>(callback);
    break;
  case 1220:
    wrapper->m_mouseMoveEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_mouseMoveEvent>(
        callback);
    break;
  case 1221:
    wrapper->m_mousePressEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_mousePressEvent>(
        callback);
    break;
  case 1222:
    wrapper->m_mouseReleaseEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_mouseReleaseEvent>(
        callback);
    break;
  case 4322:
    wrapper->m_openCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_open>(callback);
    break;
  case 1229:
    wrapper->m_paintEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_paintEvent>(
        callback);
    break;
  case 4329:
    wrapper->m_rejectCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_reject>(callback);
    break;
  case 1309:
    wrapper->m_setVisibleCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_setVisible>(
        callback);
    break;
  case 1318:
    wrapper->m_sharedPainterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_sharedPainter>(
        callback);
    break;
  case 1326:
    wrapper->m_sizeHintCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QDialog_wrapper::Callback_sizeHint>(
        callback);
    break;
  }
}
}

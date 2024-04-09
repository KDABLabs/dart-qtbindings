#include "QIODevice_wrapper.h"

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
QIODevice_wrapper::QIODevice_wrapper() : ::QIODevice() {}

// tag=1006
QIODevice_wrapper::QIODevice_wrapper(QObject *parent) : ::QIODevice(parent) {}
void QIODevice_wrapper::aboutToClose() {
  // tag=1000

  // tag=1004
  ::QIODevice::aboutToClose();
}
bool QIODevice_wrapper::atEnd() const {
  // tag=1000
  if (m_atEndCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_atEndCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::atEnd();
  }
}
// tag=1009
bool QIODevice_wrapper::atEnd_nocallback() const {
  // tag=1003
  return ::QIODevice::atEnd();
}
qint64 QIODevice_wrapper::bytesAvailable() const {
  // tag=1000
  if (m_bytesAvailableCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_bytesAvailableCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::bytesAvailable();
  }
}
// tag=1009
qint64 QIODevice_wrapper::bytesAvailable_nocallback() const {
  // tag=1003
  return ::QIODevice::bytesAvailable();
}
qint64 QIODevice_wrapper::bytesToWrite() const {
  // tag=1000
  if (m_bytesToWriteCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_bytesToWriteCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::bytesToWrite();
  }
}
// tag=1009
qint64 QIODevice_wrapper::bytesToWrite_nocallback() const {
  // tag=1003
  return ::QIODevice::bytesToWrite();
}
void QIODevice_wrapper::bytesWritten(qint64 bytes) {
  // tag=1000

  // tag=1004
  ::QIODevice::bytesWritten(bytes);
}
bool QIODevice_wrapper::canReadLine() const {
  // tag=1000
  if (m_canReadLineCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_canReadLineCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::canReadLine();
  }
}
// tag=1009
bool QIODevice_wrapper::canReadLine_nocallback() const {
  // tag=1003
  return ::QIODevice::canReadLine();
}
void QIODevice_wrapper::channelBytesWritten(int channel, qint64 bytes) {
  // tag=1000

  // tag=1004
  ::QIODevice::channelBytesWritten(channel, bytes);
}
void QIODevice_wrapper::channelReadyRead(int channel) {
  // tag=1000

  // tag=1004
  ::QIODevice::channelReadyRead(channel);
}
void QIODevice_wrapper::close() {
  // tag=1000
  if (m_closeCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_closeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QIODevice::close();
  }
}
// tag=1009
void QIODevice_wrapper::close_nocallback() {
  // tag=1003
  ::QIODevice::close();
}
void QIODevice_wrapper::commitTransaction() {
  // tag=1000

  // tag=1004
  ::QIODevice::commitTransaction();
}
int QIODevice_wrapper::currentReadChannel() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::currentReadChannel();
}
int QIODevice_wrapper::currentWriteChannel() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::currentWriteChannel();
}
void QIODevice_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QIODevice::customEvent(event);
  }
}
// tag=1009
void QIODevice_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QIODevice::customEvent(event);
}
QString QIODevice_wrapper::errorString() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::errorString();
}
bool QIODevice_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QIODevice::event(event);
  }
}
// tag=1009
bool QIODevice_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QIODevice::event(event);
}
bool QIODevice_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QIODevice::eventFilter(watched, event);
  }
}
// tag=1009
bool QIODevice_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  // tag=1003
  return ::QIODevice::eventFilter(watched, event);
}
bool QIODevice_wrapper::getChar(char *c) {
  // tag=1000

  // tag=1004
  return ::QIODevice::getChar(c);
}
bool QIODevice_wrapper::isOpen() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::isOpen();
}
bool QIODevice_wrapper::isReadable() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::isReadable();
}
bool QIODevice_wrapper::isSequential() const {
  // tag=1000
  if (m_isSequentialCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isSequentialCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::isSequential();
  }
}
// tag=1009
bool QIODevice_wrapper::isSequential_nocallback() const {
  // tag=1003
  return ::QIODevice::isSequential();
}
bool QIODevice_wrapper::isTextModeEnabled() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::isTextModeEnabled();
}
bool QIODevice_wrapper::isTransactionStarted() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::isTransactionStarted();
}
bool QIODevice_wrapper::isWritable() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::isWritable();
}
qint64 QIODevice_wrapper::peek(char *data, qint64 maxlen) {
  // tag=1000

  // tag=1004
  return ::QIODevice::peek(data, maxlen);
}
QByteArray QIODevice_wrapper::peek(qint64 maxlen) {
  // tag=1000

  // tag=1004
  return ::QIODevice::peek(maxlen);
}
qint64 QIODevice_wrapper::pos() const {
  // tag=1000
  if (m_posCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_posCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::pos();
  }
}
// tag=1009
qint64 QIODevice_wrapper::pos_nocallback() const {
  // tag=1003
  return ::QIODevice::pos();
}
qint64 QIODevice_wrapper::read(char *data, qint64 maxlen) {
  // tag=1000

  // tag=1004
  return ::QIODevice::read(data, maxlen);
}
QByteArray QIODevice_wrapper::read(qint64 maxlen) {
  // tag=1000

  // tag=1004
  return ::QIODevice::read(maxlen);
}
QByteArray QIODevice_wrapper::readAll() {
  // tag=1000

  // tag=1004
  return ::QIODevice::readAll();
}
int QIODevice_wrapper::readChannelCount() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::readChannelCount();
}
void QIODevice_wrapper::readChannelFinished() {
  // tag=1000

  // tag=1004
  ::QIODevice::readChannelFinished();
}
qint64 QIODevice_wrapper::readData(char *data, qint64 maxlen) {
  // tag=1000
  if (m_readDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_readDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
qint64 QIODevice_wrapper::readData_nocallback(char *data, qint64 maxlen) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}
qint64 QIODevice_wrapper::readLine(char *data, qint64 maxlen) {
  // tag=1000

  // tag=1004
  return ::QIODevice::readLine(data, maxlen);
}
QByteArray QIODevice_wrapper::readLine(qint64 maxlen) {
  // tag=1000

  // tag=1004
  return ::QIODevice::readLine(maxlen);
}
qint64 QIODevice_wrapper::readLineData(char *data, qint64 maxlen) {
  // tag=1000
  if (m_readLineDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_readLineDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    // tag=1002
    return ::QIODevice::readLineData(data, maxlen);
  }
}
// tag=1009
qint64 QIODevice_wrapper::readLineData_nocallback(char *data, qint64 maxlen) {
  // tag=1003
  return ::QIODevice::readLineData(data, maxlen);
}
void QIODevice_wrapper::readyRead() {
  // tag=1000

  // tag=1004
  ::QIODevice::readyRead();
}
bool QIODevice_wrapper::reset() {
  // tag=1000
  if (m_resetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::reset();
  }
}
// tag=1009
bool QIODevice_wrapper::reset_nocallback() {
  // tag=1003
  return ::QIODevice::reset();
}
void QIODevice_wrapper::rollbackTransaction() {
  // tag=1000

  // tag=1004
  ::QIODevice::rollbackTransaction();
}
bool QIODevice_wrapper::seek(qint64 pos) {
  // tag=1000
  if (m_seekCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_seekCallback(const_cast<void *>(thisPtr), pos);
  } else {
    // tag=1002
    return ::QIODevice::seek(pos);
  }
}
// tag=1009
bool QIODevice_wrapper::seek_nocallback(qint64 pos) {
  // tag=1003
  return ::QIODevice::seek(pos);
}
void QIODevice_wrapper::setCurrentReadChannel(int channel) {
  // tag=1000

  // tag=1004
  ::QIODevice::setCurrentReadChannel(channel);
}
void QIODevice_wrapper::setCurrentWriteChannel(int channel) {
  // tag=1000

  // tag=1004
  ::QIODevice::setCurrentWriteChannel(channel);
}
void QIODevice_wrapper::setErrorString(const QString &errorString) {
  // tag=1000

  // tag=1004
  ::QIODevice::setErrorString(errorString);
}
void QIODevice_wrapper::setTextModeEnabled(bool enabled) {
  // tag=1000

  // tag=1004
  ::QIODevice::setTextModeEnabled(enabled);
}
qint64 QIODevice_wrapper::size() const {
  // tag=1000
  if (m_sizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QIODevice::size();
  }
}
// tag=1009
qint64 QIODevice_wrapper::size_nocallback() const {
  // tag=1003
  return ::QIODevice::size();
}
qint64 QIODevice_wrapper::skip(qint64 maxSize) {
  // tag=1000

  // tag=1004
  return ::QIODevice::skip(maxSize);
}
qint64 QIODevice_wrapper::skipData(qint64 maxSize) {
  // tag=1000
  if (m_skipDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_skipDataCallback(const_cast<void *>(thisPtr), maxSize);
  } else {
    // tag=1002
    return ::QIODevice::skipData(maxSize);
  }
}
// tag=1009
qint64 QIODevice_wrapper::skipData_nocallback(qint64 maxSize) {
  // tag=1003
  return ::QIODevice::skipData(maxSize);
}
void QIODevice_wrapper::startTransaction() {
  // tag=1000

  // tag=1004
  ::QIODevice::startTransaction();
}
QString QIODevice_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QIODevice::tr(s, c, n);
}
bool QIODevice_wrapper::waitForBytesWritten(int msecs) {
  // tag=1000
  if (m_waitForBytesWrittenCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_waitForBytesWrittenCallback(const_cast<void *>(thisPtr), msecs);
  } else {
    // tag=1002
    return ::QIODevice::waitForBytesWritten(msecs);
  }
}
// tag=1009
bool QIODevice_wrapper::waitForBytesWritten_nocallback(int msecs) {
  // tag=1003
  return ::QIODevice::waitForBytesWritten(msecs);
}
bool QIODevice_wrapper::waitForReadyRead(int msecs) {
  // tag=1000
  if (m_waitForReadyReadCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_waitForReadyReadCallback(const_cast<void *>(thisPtr), msecs);
  } else {
    // tag=1002
    return ::QIODevice::waitForReadyRead(msecs);
  }
}
// tag=1009
bool QIODevice_wrapper::waitForReadyRead_nocallback(int msecs) {
  // tag=1003
  return ::QIODevice::waitForReadyRead(msecs);
}
qint64 QIODevice_wrapper::write(const QByteArray &data) {
  // tag=1000

  // tag=1004
  return ::QIODevice::write(data);
}
qint64 QIODevice_wrapper::write(const char *data) {
  // tag=1000

  // tag=1004
  return ::QIODevice::write(data);
}
qint64 QIODevice_wrapper::write(const char *data, qint64 len) {
  // tag=1000

  // tag=1004
  return ::QIODevice::write(data, len);
}
int QIODevice_wrapper::writeChannelCount() const {
  // tag=1000

  // tag=1004
  return ::QIODevice::writeChannelCount();
}
qint64 QIODevice_wrapper::writeData(const char *data, qint64 len) {
  // tag=1000
  if (m_writeDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_writeDataCallback(const_cast<void *>(thisPtr), data, len);
  } else {
    // tag=1015
    qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
    return {};
  }
}
// tag=1009
qint64 QIODevice_wrapper::writeData_nocallback(const char *data, qint64 len) {
  // tag=1003

  // tag=1007
  qWarning() << Q_FUNC_INFO << "Warning: Calling pure-virtual";
  return {};
}

// tag=1005
QIODevice_wrapper::~QIODevice_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QIODevice *fromPtr(void *ptr) {
  return reinterpret_cast<QIODevice *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QIODevice_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QIODevice_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
      cppObj);
}
void *c_QIODevice__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QIODevice_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QIODevice__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QIODevice_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// aboutToClose()
void c_QIODevice__aboutToClose(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->aboutToClose();
}

// tag=1079
void c_QIODevice__onAboutToClose(void *thisObj, void *contextQObject,
                                 void *callback) {
  auto instance = reinterpret_cast<QIODevice *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QIODevice::aboutToClose,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// atEnd() const
bool c_QIODevice__atEnd(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->atEnd_nocallback();
        } else {
          return targetPtr->atEnd();
        }
      }();
}

// tag=1050
// bytesAvailable() const
qint64 c_QIODevice__bytesAvailable(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->bytesAvailable_nocallback();
        } else {
          return targetPtr->bytesAvailable();
        }
      }();
}

// tag=1050
// bytesToWrite() const
qint64 c_QIODevice__bytesToWrite(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->bytesToWrite_nocallback();
        } else {
          return targetPtr->bytesToWrite();
        }
      }();
}

// tag=1050
// bytesWritten(qint64 bytes)
void c_QIODevice__bytesWritten_qint64(void *thisObj, qint64 bytes) {
  // tag=1010
  fromPtr(thisObj)->bytesWritten(bytes);
}

// tag=1079
void c_QIODevice__onBytesWritten_qint64(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QIODevice *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QIODevice::bytesWritten,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// canReadLine() const
bool c_QIODevice__canReadLine(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->canReadLine_nocallback();
        } else {
          return targetPtr->canReadLine();
        }
      }();
}

// tag=1050
// channelBytesWritten(int channel, qint64 bytes)
void c_QIODevice__channelBytesWritten_int_qint64(void *thisObj, int channel,
                                                 qint64 bytes) {
  // tag=1010
  fromPtr(thisObj)->channelBytesWritten(channel, bytes);
}

// tag=1079
void c_QIODevice__onChannelBytesWritten_int_qint64(void *thisObj,
                                                   void *contextQObject,
                                                   void *callback) {
  auto instance = reinterpret_cast<QIODevice *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QIODevice::channelBytesWritten,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// channelReadyRead(int channel)
void c_QIODevice__channelReadyRead_int(void *thisObj, int channel) {
  // tag=1010
  fromPtr(thisObj)->channelReadyRead(channel);
}

// tag=1079
void c_QIODevice__onChannelReadyRead_int(void *thisObj, void *contextQObject,
                                         void *callback) {
  auto instance = reinterpret_cast<QIODevice *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QIODevice::channelReadyRead,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// close()
void c_QIODevice__close(void *thisObj) {
  // tag=1016
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->close_nocallback();
    } else {
      return targetPtr->close();
    }
  }();
}

// tag=1050
// commitTransaction()
void c_QIODevice__commitTransaction(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->commitTransaction();
}

// tag=1050
// currentReadChannel() const
int c_QIODevice__currentReadChannel(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->currentReadChannel();
}

// tag=1050
// currentWriteChannel() const
int c_QIODevice__currentWriteChannel(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->currentWriteChannel();
}

// tag=1050
// customEvent(QEvent * event)
void c_QIODevice__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1079
void c_QIODevice__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                      void *callback) {
  auto instance = reinterpret_cast<QIODevice *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QIODevice::destroyed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// errorString() const
void *c_QIODevice__errorString(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->errorString()};
}

// tag=1050
// event(QEvent * event)
bool c_QIODevice__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->event_nocallback(event);
        } else {
          return targetPtr->event(event);
        }
      }();
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QIODevice__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// getChar(char * c)
bool c_QIODevice__getChar_char(void *thisObj, char *c) {
  return
      // tag=1010
      fromPtr(thisObj)->getChar(c);
}

// tag=1050
// isOpen() const
bool c_QIODevice__isOpen(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isOpen();
}

// tag=1050
// isReadable() const
bool c_QIODevice__isReadable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isReadable();
}

// tag=1050
// isSequential() const
bool c_QIODevice__isSequential(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isSequential_nocallback();
        } else {
          return targetPtr->isSequential();
        }
      }();
}

// tag=1050
// isTextModeEnabled() const
bool c_QIODevice__isTextModeEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isTextModeEnabled();
}

// tag=1050
// isTransactionStarted() const
bool c_QIODevice__isTransactionStarted(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isTransactionStarted();
}

// tag=1050
// isWritable() const
bool c_QIODevice__isWritable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isWritable();
}

// tag=1050
// peek(char * data, qint64 maxlen)
qint64 c_QIODevice__peek_char_qint64(void *thisObj, char *data, qint64 maxlen) {
  return
      // tag=1010
      fromPtr(thisObj)->peek(data, maxlen);
}

// tag=1050
// peek(qint64 maxlen)
void *c_QIODevice__peek_qint64(void *thisObj, qint64 maxlen) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->peek(maxlen)};
}

// tag=1050
// pos() const
qint64 c_QIODevice__pos(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->pos_nocallback();
        } else {
          return targetPtr->pos();
        }
      }();
}

// tag=1050
// read(char * data, qint64 maxlen)
qint64 c_QIODevice__read_char_qint64(void *thisObj, char *data, qint64 maxlen) {
  return
      // tag=1010
      fromPtr(thisObj)->read(data, maxlen);
}

// tag=1050
// read(qint64 maxlen)
void *c_QIODevice__read_qint64(void *thisObj, qint64 maxlen) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->read(maxlen)};
}

// tag=1050
// readAll()
void *c_QIODevice__readAll(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->readAll()};
}

// tag=1050
// readChannelCount() const
int c_QIODevice__readChannelCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->readChannelCount();
}

// tag=1050
// readChannelFinished()
void c_QIODevice__readChannelFinished(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->readChannelFinished();
}

// tag=1079
void c_QIODevice__onReadChannelFinished(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QIODevice *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QIODevice::readChannelFinished,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// readData(char * data, qint64 maxlen)
qint64 c_QIODevice__readData_char_qint64(void *thisObj, char *data,
                                         qint64 maxlen) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->readData_nocallback(data, maxlen);
}

// tag=1050
// readLine(char * data, qint64 maxlen)
qint64 c_QIODevice__readLine_char_qint64(void *thisObj, char *data,
                                         qint64 maxlen) {
  return
      // tag=1010
      fromPtr(thisObj)->readLine(data, maxlen);
}

// tag=1050
// readLine(qint64 maxlen)
void *c_QIODevice__readLine_qint64(void *thisObj, qint64 maxlen) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr(thisObj)->readLine(maxlen)};
}

// tag=1050
// readLineData(char * data, qint64 maxlen)
qint64 c_QIODevice__readLineData_char_qint64(void *thisObj, char *data,
                                             qint64 maxlen) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->readLineData_nocallback(data, maxlen);
}

// tag=1050
// readyRead()
void c_QIODevice__readyRead(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->readyRead();
}

// tag=1079
void c_QIODevice__onReadyRead(void *thisObj, void *contextQObject,
                              void *callback) {
  auto instance = reinterpret_cast<QIODevice *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QIODevice::readyRead,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}

// tag=1050
// reset()
bool c_QIODevice__reset(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->reset_nocallback();
        } else {
          return targetPtr->reset();
        }
      }();
}

// tag=1050
// rollbackTransaction()
void c_QIODevice__rollbackTransaction(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->rollbackTransaction();
}

// tag=1050
// seek(qint64 pos)
bool c_QIODevice__seek_qint64(void *thisObj, qint64 pos) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->seek_nocallback(pos);
        } else {
          return targetPtr->seek(pos);
        }
      }();
}

// tag=1050
// setCurrentReadChannel(int channel)
void c_QIODevice__setCurrentReadChannel_int(void *thisObj, int channel) {
  // tag=1010
  fromPtr(thisObj)->setCurrentReadChannel(channel);
}

// tag=1050
// setCurrentWriteChannel(int channel)
void c_QIODevice__setCurrentWriteChannel_int(void *thisObj, int channel) {
  // tag=1010
  fromPtr(thisObj)->setCurrentWriteChannel(channel);
}

// tag=1050
// setErrorString(const QString & errorString)
void c_QIODevice__setErrorString_QString(void *thisObj,
                                         const char *errorString_) {
  const auto errorString = QString::fromUtf8(errorString_);
  // tag=1011

  // tag=1073
  fromWrapperPtr(thisObj)->setErrorString(errorString);
}

// tag=1050
// setTextModeEnabled(bool enabled)
void c_QIODevice__setTextModeEnabled_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->setTextModeEnabled(enabled);
}

// tag=1050
// size() const
qint64 c_QIODevice__size(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->size_nocallback();
        } else {
          return targetPtr->size();
        }
      }();
}

// tag=1050
// skip(qint64 maxSize)
qint64 c_QIODevice__skip_qint64(void *thisObj, qint64 maxSize) {
  return
      // tag=1010
      fromPtr(thisObj)->skip(maxSize);
}

// tag=1050
// skipData(qint64 maxSize)
qint64 c_QIODevice__skipData_qint64(void *thisObj, qint64 maxSize) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->skipData_nocallback(maxSize);
}

// tag=1050
// startTransaction()
void c_QIODevice__startTransaction(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->startTransaction();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QIODevice__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QIODevice_wrapper::tr(s, c, n)};
}

// tag=1050
// waitForBytesWritten(int msecs)
bool c_QIODevice__waitForBytesWritten_int(void *thisObj, int msecs) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->waitForBytesWritten_nocallback(msecs);
        } else {
          return targetPtr->waitForBytesWritten(msecs);
        }
      }();
}

// tag=1050
// waitForReadyRead(int msecs)
bool c_QIODevice__waitForReadyRead_int(void *thisObj, int msecs) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->waitForReadyRead_nocallback(msecs);
        } else {
          return targetPtr->waitForReadyRead(msecs);
        }
      }();
}

// tag=1050
// write(const QByteArray & data)
qint64 c_QIODevice__write_QByteArray(void *thisObj, void *data_) {
  auto &data = *reinterpret_cast<QByteArray *>(data_);
  return
      // tag=1010
      fromPtr(thisObj)->write(data);
}

// tag=1050
// write(const char * data)
qint64 c_QIODevice__write_char(void *thisObj, const char *data) {
  return
      // tag=1010
      fromPtr(thisObj)->write(data);
}

// tag=1050
// write(const char * data, qint64 len)
qint64 c_QIODevice__write_char_qint64(void *thisObj, const char *data,
                                      qint64 len) {
  return
      // tag=1010
      fromPtr(thisObj)->write(data, len);
}

// tag=1050
// writeChannelCount() const
int c_QIODevice__writeChannelCount(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->writeChannelCount();
}

// tag=1050
// writeData(const char * data, qint64 len)
qint64 c_QIODevice__writeData_char_qint64(void *thisObj, const char *data,
                                          qint64 len) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->writeData_nocallback(data, len);
}
void c_QIODevice__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QIODevice__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3449:
    wrapper->m_atEndCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_atEnd>(callback);
    break;
  case 3451:
    wrapper->m_bytesAvailableCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_bytesAvailable>(
        callback);
    break;
  case 3452:
    wrapper->m_bytesToWriteCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_bytesToWrite>(
        callback);
    break;
  case 3454:
    wrapper->m_canReadLineCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_canReadLine>(
        callback);
    break;
  case 3458:
    wrapper->m_closeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_close>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3476:
    wrapper->m_isSequentialCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_isSequential>(
        callback);
    break;
  case 3487:
    wrapper->m_posCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_pos>(callback);
    break;
  case 3495:
    wrapper->m_readDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_readData>(
        callback);
    break;
  case 3498:
    wrapper->m_readLineDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_readLineData>(
        callback);
    break;
  case 3502:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_reset>(callback);
    break;
  case 3504:
    wrapper->m_seekCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_seek>(callback);
    break;
  case 3515:
    wrapper->m_sizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_size>(callback);
    break;
  case 3517:
    wrapper->m_skipDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_skipData>(
        callback);
    break;
  case 3522:
    wrapper->m_waitForBytesWrittenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper::
                             Callback_waitForBytesWritten>(callback);
    break;
  case 3523:
    wrapper->m_waitForReadyReadCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper::
                             Callback_waitForReadyRead>(callback);
    break;
  case 3528:
    wrapper->m_writeDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_writeData>(
        callback);
    break;
  }
}
}

/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QIODevice_c.h"

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
QIODevice_wrapper::QIODevice_wrapper() : ::QIODevice() {}
QIODevice_wrapper::QIODevice_wrapper(QObject *parent) : ::QIODevice(parent) {}
void QIODevice_wrapper::aboutToClose() { ::QIODevice::aboutToClose(); }
bool QIODevice_wrapper::atEnd() const {
  if (m_atEndCallback) {
    const void *thisPtr = this;
    return m_atEndCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::atEnd();
  }
}
bool QIODevice_wrapper::atEnd_nocallback() const {
  return ::QIODevice::atEnd();
}
qint64 QIODevice_wrapper::bytesAvailable() const {
  if (m_bytesAvailableCallback) {
    const void *thisPtr = this;
    return m_bytesAvailableCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::bytesAvailable();
  }
}
qint64 QIODevice_wrapper::bytesAvailable_nocallback() const {
  return ::QIODevice::bytesAvailable();
}
qint64 QIODevice_wrapper::bytesToWrite() const {
  if (m_bytesToWriteCallback) {
    const void *thisPtr = this;
    return m_bytesToWriteCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::bytesToWrite();
  }
}
qint64 QIODevice_wrapper::bytesToWrite_nocallback() const {
  return ::QIODevice::bytesToWrite();
}
void QIODevice_wrapper::bytesWritten(qint64 bytes) {
  ::QIODevice::bytesWritten(bytes);
}
bool QIODevice_wrapper::canReadLine() const {
  if (m_canReadLineCallback) {
    const void *thisPtr = this;
    return m_canReadLineCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::canReadLine();
  }
}
bool QIODevice_wrapper::canReadLine_nocallback() const {
  return ::QIODevice::canReadLine();
}
void QIODevice_wrapper::channelBytesWritten(int channel, qint64 bytes) {
  ::QIODevice::channelBytesWritten(channel, bytes);
}
void QIODevice_wrapper::channelReadyRead(int channel) {
  ::QIODevice::channelReadyRead(channel);
}
void QIODevice_wrapper::close() {
  if (m_closeCallback) {
    const void *thisPtr = this;
    m_closeCallback(const_cast<void *>(thisPtr));
  } else {
    ::QIODevice::close();
  }
}
void QIODevice_wrapper::close_nocallback() { ::QIODevice::close(); }
void QIODevice_wrapper::commitTransaction() {
  ::QIODevice::commitTransaction();
}
int QIODevice_wrapper::currentReadChannel() const {
  return ::QIODevice::currentReadChannel();
}
int QIODevice_wrapper::currentWriteChannel() const {
  return ::QIODevice::currentWriteChannel();
}
void QIODevice_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QIODevice::customEvent(event);
  }
}
void QIODevice_wrapper::customEvent_nocallback(QEvent *event) {
  ::QIODevice::customEvent(event);
}
QString QIODevice_wrapper::errorString() const {
  return ::QIODevice::errorString();
}
bool QIODevice_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QIODevice::event(event);
  }
}
bool QIODevice_wrapper::event_nocallback(QEvent *event) {
  return ::QIODevice::event(event);
}
bool QIODevice_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QIODevice::eventFilter(watched, event);
  }
}
bool QIODevice_wrapper::eventFilter_nocallback(QObject *watched,
                                               QEvent *event) {
  return ::QIODevice::eventFilter(watched, event);
}
bool QIODevice_wrapper::getChar(char *c) { return ::QIODevice::getChar(c); }
bool QIODevice_wrapper::isOpen() const { return ::QIODevice::isOpen(); }
bool QIODevice_wrapper::isReadable() const { return ::QIODevice::isReadable(); }
bool QIODevice_wrapper::isSequential() const {
  if (m_isSequentialCallback) {
    const void *thisPtr = this;
    return m_isSequentialCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::isSequential();
  }
}
bool QIODevice_wrapper::isSequential_nocallback() const {
  return ::QIODevice::isSequential();
}
bool QIODevice_wrapper::isTextModeEnabled() const {
  return ::QIODevice::isTextModeEnabled();
}
bool QIODevice_wrapper::isTransactionStarted() const {
  return ::QIODevice::isTransactionStarted();
}
bool QIODevice_wrapper::isWritable() const { return ::QIODevice::isWritable(); }
qint64 QIODevice_wrapper::peek(char *data, qint64 maxlen) {
  return ::QIODevice::peek(data, maxlen);
}
QByteArray QIODevice_wrapper::peek(qint64 maxlen) {
  return ::QIODevice::peek(maxlen);
}
qint64 QIODevice_wrapper::pos() const {
  if (m_posCallback) {
    const void *thisPtr = this;
    return m_posCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::pos();
  }
}
qint64 QIODevice_wrapper::pos_nocallback() const { return ::QIODevice::pos(); }
qint64 QIODevice_wrapper::read(char *data, qint64 maxlen) {
  return ::QIODevice::read(data, maxlen);
}
QByteArray QIODevice_wrapper::read(qint64 maxlen) {
  return ::QIODevice::read(maxlen);
}
QByteArray QIODevice_wrapper::readAll() { return ::QIODevice::readAll(); }
int QIODevice_wrapper::readChannelCount() const {
  return ::QIODevice::readChannelCount();
}
void QIODevice_wrapper::readChannelFinished() {
  ::QIODevice::readChannelFinished();
}
qint64 QIODevice_wrapper::readData(char *data, qint64 maxlen) {
  if (m_readDataCallback) {
    const void *thisPtr = this;
    return m_readDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    std::cerr << "readData: Warning: Calling pure-virtual\n";
    return {};
  }
}
qint64 QIODevice_wrapper::readData_nocallback(char *data, qint64 maxlen) {
  std::cerr << "readData: Warning: Calling pure-virtual\n";
  return {};
}
qint64 QIODevice_wrapper::readLine(char *data, qint64 maxlen) {
  return ::QIODevice::readLine(data, maxlen);
}
QByteArray QIODevice_wrapper::readLine(qint64 maxlen) {
  return ::QIODevice::readLine(maxlen);
}
qint64 QIODevice_wrapper::readLineData(char *data, qint64 maxlen) {
  if (m_readLineDataCallback) {
    const void *thisPtr = this;
    return m_readLineDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    return ::QIODevice::readLineData(data, maxlen);
  }
}
qint64 QIODevice_wrapper::readLineData_nocallback(char *data, qint64 maxlen) {
  return ::QIODevice::readLineData(data, maxlen);
}
void QIODevice_wrapper::readyRead() { ::QIODevice::readyRead(); }
bool QIODevice_wrapper::reset() {
  if (m_resetCallback) {
    const void *thisPtr = this;
    return m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::reset();
  }
}
bool QIODevice_wrapper::reset_nocallback() { return ::QIODevice::reset(); }
void QIODevice_wrapper::rollbackTransaction() {
  ::QIODevice::rollbackTransaction();
}
bool QIODevice_wrapper::seek(qint64 pos) {
  if (m_seekCallback) {
    const void *thisPtr = this;
    return m_seekCallback(const_cast<void *>(thisPtr), pos);
  } else {
    return ::QIODevice::seek(pos);
  }
}
bool QIODevice_wrapper::seek_nocallback(qint64 pos) {
  return ::QIODevice::seek(pos);
}
void QIODevice_wrapper::setCurrentReadChannel(int channel) {
  ::QIODevice::setCurrentReadChannel(channel);
}
void QIODevice_wrapper::setCurrentWriteChannel(int channel) {
  ::QIODevice::setCurrentWriteChannel(channel);
}
void QIODevice_wrapper::setErrorString(const QString &errorString) {
  ::QIODevice::setErrorString(errorString);
}
void QIODevice_wrapper::setTextModeEnabled(bool enabled) {
  ::QIODevice::setTextModeEnabled(enabled);
}
qint64 QIODevice_wrapper::size() const {
  if (m_sizeCallback) {
    const void *thisPtr = this;
    return m_sizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QIODevice::size();
  }
}
qint64 QIODevice_wrapper::size_nocallback() const {
  return ::QIODevice::size();
}
qint64 QIODevice_wrapper::skip(qint64 maxSize) {
  return ::QIODevice::skip(maxSize);
}
qint64 QIODevice_wrapper::skipData(qint64 maxSize) {
  if (m_skipDataCallback) {
    const void *thisPtr = this;
    return m_skipDataCallback(const_cast<void *>(thisPtr), maxSize);
  } else {
    return ::QIODevice::skipData(maxSize);
  }
}
qint64 QIODevice_wrapper::skipData_nocallback(qint64 maxSize) {
  return ::QIODevice::skipData(maxSize);
}
void QIODevice_wrapper::startTransaction() { ::QIODevice::startTransaction(); }
QString QIODevice_wrapper::tr(const char *s, const char *c, int n) {
  return ::QIODevice::tr(s, c, n);
}
bool QIODevice_wrapper::waitForBytesWritten(int msecs) {
  if (m_waitForBytesWrittenCallback) {
    const void *thisPtr = this;
    return m_waitForBytesWrittenCallback(const_cast<void *>(thisPtr), msecs);
  } else {
    return ::QIODevice::waitForBytesWritten(msecs);
  }
}
bool QIODevice_wrapper::waitForBytesWritten_nocallback(int msecs) {
  return ::QIODevice::waitForBytesWritten(msecs);
}
bool QIODevice_wrapper::waitForReadyRead(int msecs) {
  if (m_waitForReadyReadCallback) {
    const void *thisPtr = this;
    return m_waitForReadyReadCallback(const_cast<void *>(thisPtr), msecs);
  } else {
    return ::QIODevice::waitForReadyRead(msecs);
  }
}
bool QIODevice_wrapper::waitForReadyRead_nocallback(int msecs) {
  return ::QIODevice::waitForReadyRead(msecs);
}
qint64 QIODevice_wrapper::write(const QByteArray &data) {
  return ::QIODevice::write(data);
}
qint64 QIODevice_wrapper::write(const char *data) {
  return ::QIODevice::write(data);
}
qint64 QIODevice_wrapper::write(const char *data, qint64 len) {
  return ::QIODevice::write(data, len);
}
int QIODevice_wrapper::writeChannelCount() const {
  return ::QIODevice::writeChannelCount();
}
qint64 QIODevice_wrapper::writeData(const char *data, qint64 len) {
  if (m_writeDataCallback) {
    const void *thisPtr = this;
    return m_writeDataCallback(const_cast<void *>(thisPtr), data, len);
  } else {
    std::cerr << "writeData: Warning: Calling pure-virtual\n";
    return {};
  }
}
qint64 QIODevice_wrapper::writeData_nocallback(const char *data, qint64 len) {
  std::cerr << "writeData: Warning: Calling pure-virtual\n";
  return {};
}
QIODevice_wrapper::~QIODevice_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QIODevice *fromPtr(void *ptr) {
  return reinterpret_cast<QIODevice *>(ptr);
}
static QtDartBindings_wrappersNS::QIODevice_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(ptr);
}
extern "C" {
void c_QIODevice_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(
      cppObj);
}
void *c_QIODevice__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QIODevice_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QIODevice__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QIODevice_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
// aboutToClose()
void c_QIODevice__aboutToClose(void *thisObj) {
  fromPtr(thisObj)->aboutToClose();
}
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
// atEnd() const
bool c_QIODevice__atEnd(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->atEnd_nocallback();
    } else {
      return targetPtr->atEnd();
    }
  }();
  return result;
}
// bytesAvailable() const
qint64 c_QIODevice__bytesAvailable(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->bytesAvailable_nocallback();
    } else {
      return targetPtr->bytesAvailable();
    }
  }();
  return result;
}
// bytesToWrite() const
qint64 c_QIODevice__bytesToWrite(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->bytesToWrite_nocallback();
    } else {
      return targetPtr->bytesToWrite();
    }
  }();
  return result;
}
// bytesWritten(qint64 bytes)
void c_QIODevice__bytesWritten_qint64(void *thisObj, qint64 bytes) {
  fromPtr(thisObj)->bytesWritten(bytes);
}
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
// canReadLine() const
bool c_QIODevice__canReadLine(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->canReadLine_nocallback();
    } else {
      return targetPtr->canReadLine();
    }
  }();
  return result;
}
// channelBytesWritten(int channel, qint64 bytes)
void c_QIODevice__channelBytesWritten_int_qint64(void *thisObj, int channel,
                                                 qint64 bytes) {
  fromPtr(thisObj)->channelBytesWritten(channel, bytes);
}
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
// channelReadyRead(int channel)
void c_QIODevice__channelReadyRead_int(void *thisObj, int channel) {
  fromPtr(thisObj)->channelReadyRead(channel);
}
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
// close()
void c_QIODevice__close(void *thisObj) {
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
// commitTransaction()
void c_QIODevice__commitTransaction(void *thisObj) {
  fromPtr(thisObj)->commitTransaction();
}
// currentReadChannel() const
int c_QIODevice__currentReadChannel(void *thisObj) {
  const auto &result = fromPtr(thisObj)->currentReadChannel();
  return result;
}
// currentWriteChannel() const
int c_QIODevice__currentWriteChannel(void *thisObj) {
  const auto &result = fromPtr(thisObj)->currentWriteChannel();
  return result;
}
// customEvent(QEvent * event)
void c_QIODevice__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
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
// errorString() const
void *c_QIODevice__errorString(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->errorString()};
  return result;
}
// event(QEvent * event)
bool c_QIODevice__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QIODevice__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                             void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// getChar(char * c)
bool c_QIODevice__getChar_char(void *thisObj, char *c) {
  const auto &result = fromPtr(thisObj)->getChar(c);
  free((char *)c);
  return result;
}
// isOpen() const
bool c_QIODevice__isOpen(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isOpen();
  return result;
}
// isReadable() const
bool c_QIODevice__isReadable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isReadable();
  return result;
}
// isSequential() const
bool c_QIODevice__isSequential(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isSequential_nocallback();
    } else {
      return targetPtr->isSequential();
    }
  }();
  return result;
}
// isTextModeEnabled() const
bool c_QIODevice__isTextModeEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isTextModeEnabled();
  return result;
}
// isTransactionStarted() const
bool c_QIODevice__isTransactionStarted(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isTransactionStarted();
  return result;
}
// isWritable() const
bool c_QIODevice__isWritable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isWritable();
  return result;
}
// peek(char * data, qint64 maxlen)
qint64 c_QIODevice__peek_char_qint64(void *thisObj, char *data, qint64 maxlen) {
  const auto &result = fromPtr(thisObj)->peek(data, maxlen);
  free((char *)data);
  return result;
}
// peek(qint64 maxlen)
void *c_QIODevice__peek_qint64(void *thisObj, qint64 maxlen) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->peek(maxlen)};
  return result;
}
// pos() const
qint64 c_QIODevice__pos(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->pos_nocallback();
    } else {
      return targetPtr->pos();
    }
  }();
  return result;
}
// read(char * data, qint64 maxlen)
qint64 c_QIODevice__read_char_qint64(void *thisObj, char *data, qint64 maxlen) {
  const auto &result = fromPtr(thisObj)->read(data, maxlen);
  free((char *)data);
  return result;
}
// read(qint64 maxlen)
void *c_QIODevice__read_qint64(void *thisObj, qint64 maxlen) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->read(maxlen)};
  return result;
}
// readAll()
void *c_QIODevice__readAll(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QByteArray>{fromPtr(thisObj)->readAll()};
  return result;
}
// readChannelCount() const
int c_QIODevice__readChannelCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->readChannelCount();
  return result;
}
// readChannelFinished()
void c_QIODevice__readChannelFinished(void *thisObj) {
  fromPtr(thisObj)->readChannelFinished();
}
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
// readData(char * data, qint64 maxlen)
qint64 c_QIODevice__readData_char_qint64(void *thisObj, char *data,
                                         qint64 maxlen) {
  const auto &result =
      fromWrapperPtr(thisObj)->readData_nocallback(data, maxlen);
  free((char *)data);
  return result;
}
// readLine(char * data, qint64 maxlen)
qint64 c_QIODevice__readLine_char_qint64(void *thisObj, char *data,
                                         qint64 maxlen) {
  const auto &result = fromPtr(thisObj)->readLine(data, maxlen);
  free((char *)data);
  return result;
}
// readLine(qint64 maxlen)
void *c_QIODevice__readLine_qint64(void *thisObj, qint64 maxlen) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr(thisObj)->readLine(maxlen)};
  return result;
}
// readLineData(char * data, qint64 maxlen)
qint64 c_QIODevice__readLineData_char_qint64(void *thisObj, char *data,
                                             qint64 maxlen) {
  const auto &result =
      fromWrapperPtr(thisObj)->readLineData_nocallback(data, maxlen);
  free((char *)data);
  return result;
}
// readyRead()
void c_QIODevice__readyRead(void *thisObj) { fromPtr(thisObj)->readyRead(); }
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
// reset()
bool c_QIODevice__reset(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reset_nocallback();
    } else {
      return targetPtr->reset();
    }
  }();
  return result;
}
// rollbackTransaction()
void c_QIODevice__rollbackTransaction(void *thisObj) {
  fromPtr(thisObj)->rollbackTransaction();
}
// seek(qint64 pos)
bool c_QIODevice__seek_qint64(void *thisObj, qint64 pos) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->seek_nocallback(pos);
    } else {
      return targetPtr->seek(pos);
    }
  }();
  return result;
}
// setCurrentReadChannel(int channel)
void c_QIODevice__setCurrentReadChannel_int(void *thisObj, int channel) {
  fromPtr(thisObj)->setCurrentReadChannel(channel);
}
// setCurrentWriteChannel(int channel)
void c_QIODevice__setCurrentWriteChannel_int(void *thisObj, int channel) {
  fromPtr(thisObj)->setCurrentWriteChannel(channel);
}
// setErrorString(const QString & errorString)
void c_QIODevice__setErrorString_QString(void *thisObj,
                                         const char *errorString_) {
  const auto errorString = QString::fromUtf8(errorString_);
  fromWrapperPtr(thisObj)->setErrorString(errorString);
  free((char *)errorString_);
}
// setTextModeEnabled(bool enabled)
void c_QIODevice__setTextModeEnabled_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->setTextModeEnabled(enabled);
}
// size() const
qint64 c_QIODevice__size(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->size_nocallback();
    } else {
      return targetPtr->size();
    }
  }();
  return result;
}
// skip(qint64 maxSize)
qint64 c_QIODevice__skip_qint64(void *thisObj, qint64 maxSize) {
  const auto &result = fromPtr(thisObj)->skip(maxSize);
  return result;
}
// skipData(qint64 maxSize)
qint64 c_QIODevice__skipData_qint64(void *thisObj, qint64 maxSize) {
  const auto &result = fromWrapperPtr(thisObj)->skipData_nocallback(maxSize);
  return result;
}
// startTransaction()
void c_QIODevice__startTransaction(void *thisObj) {
  fromPtr(thisObj)->startTransaction();
}
// tr(const char * s, const char * c, int n)
void *c_static_QIODevice__tr_char_char_int(const char *s, const char *c,
                                           int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QIODevice_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// waitForBytesWritten(int msecs)
bool c_QIODevice__waitForBytesWritten_int(void *thisObj, int msecs) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->waitForBytesWritten_nocallback(msecs);
    } else {
      return targetPtr->waitForBytesWritten(msecs);
    }
  }();
  return result;
}
// waitForReadyRead(int msecs)
bool c_QIODevice__waitForReadyRead_int(void *thisObj, int msecs) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QIODevice_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->waitForReadyRead_nocallback(msecs);
    } else {
      return targetPtr->waitForReadyRead(msecs);
    }
  }();
  return result;
}
// write(const QByteArray & data)
qint64 c_QIODevice__write_QByteArray(void *thisObj, void *data_) {
  assert(data_);
  auto &data = *reinterpret_cast<QByteArray *>(data_);
  const auto &result = fromPtr(thisObj)->write(data);
  return result;
}
// write(const char * data)
qint64 c_QIODevice__write_char(void *thisObj, const char *data) {
  const auto &result = fromPtr(thisObj)->write(data);
  free((char *)data);
  return result;
}
// write(const char * data, qint64 len)
qint64 c_QIODevice__write_char_qint64(void *thisObj, const char *data,
                                      qint64 len) {
  const auto &result = fromPtr(thisObj)->write(data, len);
  free((char *)data);
  return result;
}
// writeChannelCount() const
int c_QIODevice__writeChannelCount(void *thisObj) {
  const auto &result = fromPtr(thisObj)->writeChannelCount();
  return result;
}
// writeData(const char * data, qint64 len)
qint64 c_QIODevice__writeData_char_qint64(void *thisObj, const char *data,
                                          qint64 len) {
  const auto &result = fromWrapperPtr(thisObj)->writeData_nocallback(data, len);
  free((char *)data);
  return result;
}
void c_QIODevice__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QIODevice__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3458:
    wrapper->m_atEndCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_atEnd>(callback);
    break;
  case 3460:
    wrapper->m_bytesAvailableCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_bytesAvailable>(
        callback);
    break;
  case 3461:
    wrapper->m_bytesToWriteCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_bytesToWrite>(
        callback);
    break;
  case 3463:
    wrapper->m_canReadLineCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_canReadLine>(
        callback);
    break;
  case 3467:
    wrapper->m_closeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_close>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3487:
    wrapper->m_isSequentialCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_isSequential>(
        callback);
    break;
  case 3498:
    wrapper->m_posCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_pos>(callback);
    break;
  case 3506:
    wrapper->m_readDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_readData>(
        callback);
    break;
  case 3509:
    wrapper->m_readLineDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_readLineData>(
        callback);
    break;
  case 3513:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_reset>(callback);
    break;
  case 3515:
    wrapper->m_seekCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_seek>(callback);
    break;
  case 3525:
    wrapper->m_sizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_size>(callback);
    break;
  case 3527:
    wrapper->m_skipDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_skipData>(
        callback);
    break;
  case 3532:
    wrapper->m_waitForBytesWrittenCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper::
                             Callback_waitForBytesWritten>(callback);
    break;
  case 3533:
    wrapper->m_waitForReadyReadCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QIODevice_wrapper::
                             Callback_waitForReadyRead>(callback);
    break;
  case 3538:
    wrapper->m_writeDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QIODevice_wrapper::Callback_writeData>(
        callback);
    break;
  }
}
}

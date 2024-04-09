/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QProcess_c.h"

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
QProcess_wrapper::QProcess_wrapper(QObject *parent) : ::QProcess(parent) {}
QList<QString> QProcess_wrapper::arguments() const {
  return ::QProcess::arguments();
}
bool QProcess_wrapper::atEnd() const {
  if (m_atEndCallback) {
    const void *thisPtr = this;
    return m_atEndCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::atEnd();
  }
}
bool QProcess_wrapper::atEnd_nocallback() const { return ::QProcess::atEnd(); }
qint64 QProcess_wrapper::bytesAvailable() const {
  if (m_bytesAvailableCallback) {
    const void *thisPtr = this;
    return m_bytesAvailableCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::bytesAvailable();
  }
}
qint64 QProcess_wrapper::bytesAvailable_nocallback() const {
  return ::QProcess::bytesAvailable();
}
qint64 QProcess_wrapper::bytesToWrite() const {
  if (m_bytesToWriteCallback) {
    const void *thisPtr = this;
    return m_bytesToWriteCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::bytesToWrite();
  }
}
qint64 QProcess_wrapper::bytesToWrite_nocallback() const {
  return ::QProcess::bytesToWrite();
}
bool QProcess_wrapper::canReadLine() const {
  if (m_canReadLineCallback) {
    const void *thisPtr = this;
    return m_canReadLineCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::canReadLine();
  }
}
bool QProcess_wrapper::canReadLine_nocallback() const {
  return ::QProcess::canReadLine();
}
void QProcess_wrapper::close() {
  if (m_closeCallback) {
    const void *thisPtr = this;
    m_closeCallback(const_cast<void *>(thisPtr));
  } else {
    ::QProcess::close();
  }
}
void QProcess_wrapper::close_nocallback() { ::QProcess::close(); }
void QProcess_wrapper::closeWriteChannel() { ::QProcess::closeWriteChannel(); }
void QProcess_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QProcess::customEvent(event);
  }
}
void QProcess_wrapper::customEvent_nocallback(QEvent *event) {
  ::QProcess::customEvent(event);
}
QList<QString> QProcess_wrapper::environment() const {
  return ::QProcess::environment();
}
bool QProcess_wrapper::event(QEvent *event) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    return ::QProcess::event(event);
  }
}
bool QProcess_wrapper::event_nocallback(QEvent *event) {
  return ::QProcess::event(event);
}
bool QProcess_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QProcess::eventFilter(watched, event);
  }
}
bool QProcess_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QProcess::eventFilter(watched, event);
}
int QProcess_wrapper::execute(const QString &program,
                              const QList<QString> &arguments) {
  return ::QProcess::execute(program, arguments);
}
int QProcess_wrapper::exitCode() const { return ::QProcess::exitCode(); }
void QProcess_wrapper::finished(int exitCode) {
  ::QProcess::finished(exitCode);
}
bool QProcess_wrapper::isSequential() const {
  if (m_isSequentialCallback) {
    const void *thisPtr = this;
    return m_isSequentialCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::isSequential();
  }
}
bool QProcess_wrapper::isSequential_nocallback() const {
  return ::QProcess::isSequential();
}
void QProcess_wrapper::kill() { ::QProcess::kill(); }
QString QProcess_wrapper::nullDevice() { return ::QProcess::nullDevice(); }
qint64 QProcess_wrapper::pos() const {
  if (m_posCallback) {
    const void *thisPtr = this;
    return m_posCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::pos();
  }
}
qint64 QProcess_wrapper::pos_nocallback() const { return ::QProcess::pos(); }
qint64 QProcess_wrapper::processId() const { return ::QProcess::processId(); }
QString QProcess_wrapper::program() const { return ::QProcess::program(); }
QByteArray QProcess_wrapper::readAllStandardError() {
  return ::QProcess::readAllStandardError();
}
QByteArray QProcess_wrapper::readAllStandardOutput() {
  return ::QProcess::readAllStandardOutput();
}
qint64 QProcess_wrapper::readData(char *data, qint64 maxlen) {
  if (m_readDataCallback) {
    const void *thisPtr = this;
    return m_readDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    return ::QProcess::readData(data, maxlen);
  }
}
qint64 QProcess_wrapper::readData_nocallback(char *data, qint64 maxlen) {
  return ::QProcess::readData(data, maxlen);
}
qint64 QProcess_wrapper::readLineData(char *data, qint64 maxlen) {
  if (m_readLineDataCallback) {
    const void *thisPtr = this;
    return m_readLineDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    return ::QProcess::readLineData(data, maxlen);
  }
}
qint64 QProcess_wrapper::readLineData_nocallback(char *data, qint64 maxlen) {
  return ::QProcess::readLineData(data, maxlen);
}
bool QProcess_wrapper::reset() {
  if (m_resetCallback) {
    const void *thisPtr = this;
    return m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::reset();
  }
}
bool QProcess_wrapper::reset_nocallback() { return ::QProcess::reset(); }
bool QProcess_wrapper::seek(qint64 pos) {
  if (m_seekCallback) {
    const void *thisPtr = this;
    return m_seekCallback(const_cast<void *>(thisPtr), pos);
  } else {
    return ::QProcess::seek(pos);
  }
}
bool QProcess_wrapper::seek_nocallback(qint64 pos) {
  return ::QProcess::seek(pos);
}
void QProcess_wrapper::setArguments(const QList<QString> &arguments) {
  ::QProcess::setArguments(arguments);
}
void QProcess_wrapper::setEnvironment(const QList<QString> &environment) {
  ::QProcess::setEnvironment(environment);
}
void QProcess_wrapper::setProgram(const QString &program) {
  ::QProcess::setProgram(program);
}
void QProcess_wrapper::setStandardErrorFile(const QString &fileName) {
  ::QProcess::setStandardErrorFile(fileName);
}
void QProcess_wrapper::setStandardInputFile(const QString &fileName) {
  ::QProcess::setStandardInputFile(fileName);
}
void QProcess_wrapper::setStandardOutputFile(const QString &fileName) {
  ::QProcess::setStandardOutputFile(fileName);
}
void QProcess_wrapper::setStandardOutputProcess(QProcess *destination) {
  ::QProcess::setStandardOutputProcess(destination);
}
void QProcess_wrapper::setWorkingDirectory(const QString &dir) {
  ::QProcess::setWorkingDirectory(dir);
}
qint64 QProcess_wrapper::size() const {
  if (m_sizeCallback) {
    const void *thisPtr = this;
    return m_sizeCallback(const_cast<void *>(thisPtr));
  } else {
    return ::QProcess::size();
  }
}
qint64 QProcess_wrapper::size_nocallback() const { return ::QProcess::size(); }
qint64 QProcess_wrapper::skipData(qint64 maxSize) {
  if (m_skipDataCallback) {
    const void *thisPtr = this;
    return m_skipDataCallback(const_cast<void *>(thisPtr), maxSize);
  } else {
    return ::QProcess::skipData(maxSize);
  }
}
qint64 QProcess_wrapper::skipData_nocallback(qint64 maxSize) {
  return ::QProcess::skipData(maxSize);
}
void QProcess_wrapper::start() { ::QProcess::start(); }
void QProcess_wrapper::start(const QString &program,
                             const QList<QString> &arguments) {
  ::QProcess::start(program, arguments);
}
void QProcess_wrapper::startCommand(const QString &command) {
  ::QProcess::startCommand(command);
}
QList<QString> QProcess_wrapper::systemEnvironment() {
  return ::QProcess::systemEnvironment();
}
void QProcess_wrapper::terminate() { ::QProcess::terminate(); }
QString QProcess_wrapper::tr(const char *s, const char *c, int n) {
  return ::QProcess::tr(s, c, n);
}
bool QProcess_wrapper::waitForFinished(int msecs) {
  return ::QProcess::waitForFinished(msecs);
}
bool QProcess_wrapper::waitForStarted(int msecs) {
  return ::QProcess::waitForStarted(msecs);
}
QString QProcess_wrapper::workingDirectory() const {
  return ::QProcess::workingDirectory();
}
qint64 QProcess_wrapper::writeData(const char *data, qint64 len) {
  if (m_writeDataCallback) {
    const void *thisPtr = this;
    return m_writeDataCallback(const_cast<void *>(thisPtr), data, len);
  } else {
    return ::QProcess::writeData(data, len);
  }
}
qint64 QProcess_wrapper::writeData_nocallback(const char *data, qint64 len) {
  return ::QProcess::writeData(data, len);
}
QProcess_wrapper::~QProcess_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QProcess *fromPtr(void *ptr) {
  return reinterpret_cast<QProcess *>(ptr);
}
static QtDartBindings_wrappersNS::QProcess_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(ptr);
}
extern "C" {
void c_QProcess_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
      cppObj);
}
void *c_QProcess__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QProcess_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void c_QProcess__onAboutToClose(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QProcess *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QProcess::aboutToClose,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// arguments() const
void *c_QProcess__arguments(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr(thisObj)->arguments()};
  return result;
}
// atEnd() const
bool c_QProcess__atEnd(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->atEnd_nocallback();
    } else {
      return targetPtr->atEnd();
    }
  }();
  return result;
}
// bytesAvailable() const
qint64 c_QProcess__bytesAvailable(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->bytesAvailable_nocallback();
    } else {
      return targetPtr->bytesAvailable();
    }
  }();
  return result;
}
// bytesToWrite() const
qint64 c_QProcess__bytesToWrite(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->bytesToWrite_nocallback();
    } else {
      return targetPtr->bytesToWrite();
    }
  }();
  return result;
}
void c_QProcess__onBytesWritten_qint64(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QProcess *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QProcess::bytesWritten,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// canReadLine() const
bool c_QProcess__canReadLine(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->canReadLine_nocallback();
    } else {
      return targetPtr->canReadLine();
    }
  }();
  return result;
}
void c_QProcess__onChannelBytesWritten_int_qint64(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QProcess *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QProcess::channelBytesWritten,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
void c_QProcess__onChannelReadyRead_int(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QProcess *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QProcess::channelReadyRead,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// close()
void c_QProcess__close(void *thisObj) {
  [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->close_nocallback();
    } else {
      return targetPtr->close();
    }
  }();
}
// closeWriteChannel()
void c_QProcess__closeWriteChannel(void *thisObj) {
  fromPtr(thisObj)->closeWriteChannel();
}
// customEvent(QEvent * event)
void c_QProcess__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// environment() const
void *c_QProcess__environment(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      fromPtr(thisObj)->environment()};
  return result;
}
// event(QEvent * event)
bool c_QProcess__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->event_nocallback(event);
    } else {
      return targetPtr->event(event);
    }
  }();
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QProcess__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                            void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// execute(const QString & program, const QList<QString > & arguments)
int c_static_QProcess__execute_QString_QList_QString(const char *program_,
                                                     void *arguments_) {
  const auto program = QString::fromUtf8(program_);
  assert(arguments_);
  auto &arguments = *reinterpret_cast<QList<QString> *>(arguments_);
  const auto &result =
      QtDartBindings_wrappersNS::QProcess_wrapper::execute(program, arguments);
  free((char *)program_);
  return result;
}
// exitCode() const
int c_QProcess__exitCode(void *thisObj) {
  const auto &result = fromPtr(thisObj)->exitCode();
  return result;
}
// finished(int exitCode)
void c_QProcess__finished_int(void *thisObj, int exitCode) {
  fromPtr(thisObj)->finished(exitCode);
}
void c_QProcess__onFinished_int(void *thisObj, void *contextQObject,
                                void *callback) {
  auto instance = reinterpret_cast<QProcess *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QProcess::finished, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// isSequential() const
bool c_QProcess__isSequential(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->isSequential_nocallback();
    } else {
      return targetPtr->isSequential();
    }
  }();
  return result;
}
// kill()
void c_QProcess__kill(void *thisObj) { fromPtr(thisObj)->kill(); }
// nullDevice()
void *c_static_QProcess__nullDevice() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QProcess_wrapper::nullDevice()};
  return result;
}
// pos() const
qint64 c_QProcess__pos(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->pos_nocallback();
    } else {
      return targetPtr->pos();
    }
  }();
  return result;
}
// processId() const
qint64 c_QProcess__processId(void *thisObj) {
  const auto &result = fromPtr(thisObj)->processId();
  return result;
}
// program() const
void *c_QProcess__program(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->program()};
  return result;
}
// readAllStandardError()
void *c_QProcess__readAllStandardError(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr(thisObj)->readAllStandardError()};
  return result;
}
// readAllStandardOutput()
void *c_QProcess__readAllStandardOutput(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QByteArray>{
      fromPtr(thisObj)->readAllStandardOutput()};
  return result;
}
void c_QProcess__onReadChannelFinished(void *thisObj, void *contextQObject,
                                       void *callback) {
  auto instance = reinterpret_cast<QProcess *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QProcess::readChannelFinished,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// readData(char * data, qint64 maxlen)
qint64 c_QProcess__readData_char_qint64(void *thisObj, char *data,
                                        qint64 maxlen) {
  const auto &result =
      fromWrapperPtr(thisObj)->readData_nocallback(data, maxlen);
  free((char *)data);
  return result;
}
// readLineData(char * data, qint64 maxlen)
qint64 c_QProcess__readLineData_char_qint64(void *thisObj, char *data,
                                            qint64 maxlen) {
  const auto &result =
      fromWrapperPtr(thisObj)->readLineData_nocallback(data, maxlen);
  free((char *)data);
  return result;
}
void c_QProcess__onReadyRead(void *thisObj, void *contextQObject,
                             void *callback) {
  auto instance = reinterpret_cast<QProcess *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QProcess::readyRead, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// reset()
bool c_QProcess__reset(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->reset_nocallback();
    } else {
      return targetPtr->reset();
    }
  }();
  return result;
}
// seek(qint64 pos)
bool c_QProcess__seek_qint64(void *thisObj, qint64 pos) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->seek_nocallback(pos);
    } else {
      return targetPtr->seek(pos);
    }
  }();
  return result;
}
// setArguments(const QList<QString > & arguments)
void c_QProcess__setArguments_QList_QString(void *thisObj, void *arguments_) {
  assert(arguments_);
  auto &arguments = *reinterpret_cast<QList<QString> *>(arguments_);
  fromPtr(thisObj)->setArguments(arguments);
}
// setEnvironment(const QList<QString > & environment)
void c_QProcess__setEnvironment_QList_QString(void *thisObj,
                                              void *environment_) {
  assert(environment_);
  auto &environment = *reinterpret_cast<QList<QString> *>(environment_);
  fromPtr(thisObj)->setEnvironment(environment);
}
// setProgram(const QString & program)
void c_QProcess__setProgram_QString(void *thisObj, const char *program_) {
  const auto program = QString::fromUtf8(program_);
  fromPtr(thisObj)->setProgram(program);
  free((char *)program_);
}
// setStandardErrorFile(const QString & fileName)
void c_QProcess__setStandardErrorFile_QString(void *thisObj,
                                              const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  fromPtr(thisObj)->setStandardErrorFile(fileName);
  free((char *)fileName_);
}
// setStandardInputFile(const QString & fileName)
void c_QProcess__setStandardInputFile_QString(void *thisObj,
                                              const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  fromPtr(thisObj)->setStandardInputFile(fileName);
  free((char *)fileName_);
}
// setStandardOutputFile(const QString & fileName)
void c_QProcess__setStandardOutputFile_QString(void *thisObj,
                                               const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  fromPtr(thisObj)->setStandardOutputFile(fileName);
  free((char *)fileName_);
}
// setStandardOutputProcess(QProcess * destination)
void c_QProcess__setStandardOutputProcess_QProcess(void *thisObj,
                                                   void *destination_) {
  auto destination = reinterpret_cast<QProcess *>(destination_);
  fromPtr(thisObj)->setStandardOutputProcess(destination);
}
// setWorkingDirectory(const QString & dir)
void c_QProcess__setWorkingDirectory_QString(void *thisObj, const char *dir_) {
  const auto dir = QString::fromUtf8(dir_);
  fromPtr(thisObj)->setWorkingDirectory(dir);
  free((char *)dir_);
}
// size() const
qint64 c_QProcess__size(void *thisObj) {
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->size_nocallback();
    } else {
      return targetPtr->size();
    }
  }();
  return result;
}
// skipData(qint64 maxSize)
qint64 c_QProcess__skipData_qint64(void *thisObj, qint64 maxSize) {
  const auto &result = fromWrapperPtr(thisObj)->skipData_nocallback(maxSize);
  return result;
}
// start()
void c_QProcess__start(void *thisObj) { fromPtr(thisObj)->start(); }
// start(const QString & program, const QList<QString > & arguments)
void c_QProcess__start_QString_QList_QString(void *thisObj,
                                             const char *program_,
                                             void *arguments_) {
  const auto program = QString::fromUtf8(program_);
  assert(arguments_);
  auto &arguments = *reinterpret_cast<QList<QString> *>(arguments_);
  fromPtr(thisObj)->start(program, arguments);
  free((char *)program_);
}
// startCommand(const QString & command)
void c_QProcess__startCommand_QString(void *thisObj, const char *command_) {
  const auto command = QString::fromUtf8(command_);
  fromPtr(thisObj)->startCommand(command);
  free((char *)command_);
}
// systemEnvironment()
void *c_static_QProcess__systemEnvironment() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QProcess_wrapper::systemEnvironment()};
  return result;
}
// terminate()
void c_QProcess__terminate(void *thisObj) { fromPtr(thisObj)->terminate(); }
// tr(const char * s, const char * c, int n)
void *c_static_QProcess__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QProcess_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// waitForFinished(int msecs)
bool c_QProcess__waitForFinished_int(void *thisObj, int msecs) {
  const auto &result = fromPtr(thisObj)->waitForFinished(msecs);
  return result;
}
// waitForStarted(int msecs)
bool c_QProcess__waitForStarted_int(void *thisObj, int msecs) {
  const auto &result = fromPtr(thisObj)->waitForStarted(msecs);
  return result;
}
// workingDirectory() const
void *c_QProcess__workingDirectory(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->workingDirectory()};
  return result;
}
// writeData(const char * data, qint64 len)
qint64 c_QProcess__writeData_char_qint64(void *thisObj, const char *data,
                                         qint64 len) {
  const auto &result = fromWrapperPtr(thisObj)->writeData_nocallback(data, len);
  free((char *)data);
  return result;
}
void c_QProcess__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QProcess__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3458:
    wrapper->m_atEndCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_atEnd>(callback);
    break;
  case 3460:
    wrapper->m_bytesAvailableCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_bytesAvailable>(
        callback);
    break;
  case 3461:
    wrapper->m_bytesToWriteCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_bytesToWrite>(
        callback);
    break;
  case 3463:
    wrapper->m_canReadLineCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_canReadLine>(
        callback);
    break;
  case 3467:
    wrapper->m_closeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_close>(callback);
    break;
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3487:
    wrapper->m_isSequentialCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_isSequential>(
        callback);
    break;
  case 3498:
    wrapper->m_posCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_pos>(callback);
    break;
  case 3506:
    wrapper->m_readDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_readData>(
        callback);
    break;
  case 3509:
    wrapper->m_readLineDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_readLineData>(
        callback);
    break;
  case 3513:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_reset>(callback);
    break;
  case 3515:
    wrapper->m_seekCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_seek>(callback);
    break;
  case 3525:
    wrapper->m_sizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_size>(callback);
    break;
  case 3527:
    wrapper->m_skipDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_skipData>(
        callback);
    break;
  case 3538:
    wrapper->m_writeDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_writeData>(
        callback);
    break;
  }
}
}

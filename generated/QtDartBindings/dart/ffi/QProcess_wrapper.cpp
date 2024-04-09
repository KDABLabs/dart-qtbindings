#include "QProcess_wrapper.h"

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
QProcess_wrapper::QProcess_wrapper(QObject *parent) : ::QProcess(parent) {}
QList<QString> QProcess_wrapper::arguments() const {
  // tag=1000

  // tag=1004
  return ::QProcess::arguments();
}
bool QProcess_wrapper::atEnd() const {
  // tag=1000
  if (m_atEndCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_atEndCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::atEnd();
  }
}
// tag=1009
bool QProcess_wrapper::atEnd_nocallback() const {
  // tag=1003
  return ::QProcess::atEnd();
}
qint64 QProcess_wrapper::bytesAvailable() const {
  // tag=1000
  if (m_bytesAvailableCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_bytesAvailableCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::bytesAvailable();
  }
}
// tag=1009
qint64 QProcess_wrapper::bytesAvailable_nocallback() const {
  // tag=1003
  return ::QProcess::bytesAvailable();
}
qint64 QProcess_wrapper::bytesToWrite() const {
  // tag=1000
  if (m_bytesToWriteCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_bytesToWriteCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::bytesToWrite();
  }
}
// tag=1009
qint64 QProcess_wrapper::bytesToWrite_nocallback() const {
  // tag=1003
  return ::QProcess::bytesToWrite();
}
bool QProcess_wrapper::canReadLine() const {
  // tag=1000
  if (m_canReadLineCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_canReadLineCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::canReadLine();
  }
}
// tag=1009
bool QProcess_wrapper::canReadLine_nocallback() const {
  // tag=1003
  return ::QProcess::canReadLine();
}
void QProcess_wrapper::close() {
  // tag=1000
  if (m_closeCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_closeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    ::QProcess::close();
  }
}
// tag=1009
void QProcess_wrapper::close_nocallback() {
  // tag=1003
  ::QProcess::close();
}
void QProcess_wrapper::closeWriteChannel() {
  // tag=1000

  // tag=1004
  ::QProcess::closeWriteChannel();
}
void QProcess_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QProcess::customEvent(event);
  }
}
// tag=1009
void QProcess_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QProcess::customEvent(event);
}
QList<QString> QProcess_wrapper::environment() const {
  // tag=1000

  // tag=1004
  return ::QProcess::environment();
}
bool QProcess_wrapper::event(QEvent *event) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    return ::QProcess::event(event);
  }
}
// tag=1009
bool QProcess_wrapper::event_nocallback(QEvent *event) {
  // tag=1003
  return ::QProcess::event(event);
}
bool QProcess_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QProcess::eventFilter(watched, event);
  }
}
// tag=1009
bool QProcess_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QProcess::eventFilter(watched, event);
}
int QProcess_wrapper::execute(const QString &program,
                              const QList<QString> &arguments) {
  // tag=1000

  // tag=1004
  return ::QProcess::execute(program, arguments);
}
int QProcess_wrapper::exitCode() const {
  // tag=1000

  // tag=1004
  return ::QProcess::exitCode();
}
void QProcess_wrapper::finished(int exitCode) {
  // tag=1000

  // tag=1004
  ::QProcess::finished(exitCode);
}
bool QProcess_wrapper::isSequential() const {
  // tag=1000
  if (m_isSequentialCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_isSequentialCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::isSequential();
  }
}
// tag=1009
bool QProcess_wrapper::isSequential_nocallback() const {
  // tag=1003
  return ::QProcess::isSequential();
}
void QProcess_wrapper::kill() {
  // tag=1000

  // tag=1004
  ::QProcess::kill();
}
QString QProcess_wrapper::nullDevice() {
  // tag=1000

  // tag=1004
  return ::QProcess::nullDevice();
}
qint64 QProcess_wrapper::pos() const {
  // tag=1000
  if (m_posCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_posCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::pos();
  }
}
// tag=1009
qint64 QProcess_wrapper::pos_nocallback() const {
  // tag=1003
  return ::QProcess::pos();
}
qint64 QProcess_wrapper::processId() const {
  // tag=1000

  // tag=1004
  return ::QProcess::processId();
}
QString QProcess_wrapper::program() const {
  // tag=1000

  // tag=1004
  return ::QProcess::program();
}
QByteArray QProcess_wrapper::readAllStandardError() {
  // tag=1000

  // tag=1004
  return ::QProcess::readAllStandardError();
}
QByteArray QProcess_wrapper::readAllStandardOutput() {
  // tag=1000

  // tag=1004
  return ::QProcess::readAllStandardOutput();
}
qint64 QProcess_wrapper::readData(char *data, qint64 maxlen) {
  // tag=1000
  if (m_readDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_readDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    // tag=1002
    return ::QProcess::readData(data, maxlen);
  }
}
// tag=1009
qint64 QProcess_wrapper::readData_nocallback(char *data, qint64 maxlen) {
  // tag=1003
  return ::QProcess::readData(data, maxlen);
}
qint64 QProcess_wrapper::readLineData(char *data, qint64 maxlen) {
  // tag=1000
  if (m_readLineDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_readLineDataCallback(const_cast<void *>(thisPtr), data, maxlen);
  } else {
    // tag=1002
    return ::QProcess::readLineData(data, maxlen);
  }
}
// tag=1009
qint64 QProcess_wrapper::readLineData_nocallback(char *data, qint64 maxlen) {
  // tag=1003
  return ::QProcess::readLineData(data, maxlen);
}
bool QProcess_wrapper::reset() {
  // tag=1000
  if (m_resetCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_resetCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::reset();
  }
}
// tag=1009
bool QProcess_wrapper::reset_nocallback() {
  // tag=1003
  return ::QProcess::reset();
}
bool QProcess_wrapper::seek(qint64 pos) {
  // tag=1000
  if (m_seekCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_seekCallback(const_cast<void *>(thisPtr), pos);
  } else {
    // tag=1002
    return ::QProcess::seek(pos);
  }
}
// tag=1009
bool QProcess_wrapper::seek_nocallback(qint64 pos) {
  // tag=1003
  return ::QProcess::seek(pos);
}
void QProcess_wrapper::setArguments(const QList<QString> &arguments) {
  // tag=1000

  // tag=1004
  ::QProcess::setArguments(arguments);
}
void QProcess_wrapper::setEnvironment(const QList<QString> &environment) {
  // tag=1000

  // tag=1004
  ::QProcess::setEnvironment(environment);
}
void QProcess_wrapper::setProgram(const QString &program) {
  // tag=1000

  // tag=1004
  ::QProcess::setProgram(program);
}
void QProcess_wrapper::setStandardErrorFile(const QString &fileName) {
  // tag=1000

  // tag=1004
  ::QProcess::setStandardErrorFile(fileName);
}
void QProcess_wrapper::setStandardInputFile(const QString &fileName) {
  // tag=1000

  // tag=1004
  ::QProcess::setStandardInputFile(fileName);
}
void QProcess_wrapper::setStandardOutputFile(const QString &fileName) {
  // tag=1000

  // tag=1004
  ::QProcess::setStandardOutputFile(fileName);
}
void QProcess_wrapper::setStandardOutputProcess(QProcess *destination) {
  // tag=1000

  // tag=1004
  ::QProcess::setStandardOutputProcess(destination);
}
void QProcess_wrapper::setWorkingDirectory(const QString &dir) {
  // tag=1000

  // tag=1004
  ::QProcess::setWorkingDirectory(dir);
}
qint64 QProcess_wrapper::size() const {
  // tag=1000
  if (m_sizeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_sizeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QProcess::size();
  }
}
// tag=1009
qint64 QProcess_wrapper::size_nocallback() const {
  // tag=1003
  return ::QProcess::size();
}
qint64 QProcess_wrapper::skipData(qint64 maxSize) {
  // tag=1000
  if (m_skipDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_skipDataCallback(const_cast<void *>(thisPtr), maxSize);
  } else {
    // tag=1002
    return ::QProcess::skipData(maxSize);
  }
}
// tag=1009
qint64 QProcess_wrapper::skipData_nocallback(qint64 maxSize) {
  // tag=1003
  return ::QProcess::skipData(maxSize);
}
void QProcess_wrapper::start() {
  // tag=1000

  // tag=1004
  ::QProcess::start();
}
void QProcess_wrapper::start(const QString &program,
                             const QList<QString> &arguments) {
  // tag=1000

  // tag=1004
  ::QProcess::start(program, arguments);
}
void QProcess_wrapper::startCommand(const QString &command) {
  // tag=1000

  // tag=1004
  ::QProcess::startCommand(command);
}
QList<QString> QProcess_wrapper::systemEnvironment() {
  // tag=1000

  // tag=1004
  return ::QProcess::systemEnvironment();
}
void QProcess_wrapper::terminate() {
  // tag=1000

  // tag=1004
  ::QProcess::terminate();
}
QString QProcess_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QProcess::tr(s, c, n);
}
bool QProcess_wrapper::waitForFinished(int msecs) {
  // tag=1000

  // tag=1004
  return ::QProcess::waitForFinished(msecs);
}
bool QProcess_wrapper::waitForStarted(int msecs) {
  // tag=1000

  // tag=1004
  return ::QProcess::waitForStarted(msecs);
}
QString QProcess_wrapper::workingDirectory() const {
  // tag=1000

  // tag=1004
  return ::QProcess::workingDirectory();
}
qint64 QProcess_wrapper::writeData(const char *data, qint64 len) {
  // tag=1000
  if (m_writeDataCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_writeDataCallback(const_cast<void *>(thisPtr), data, len);
  } else {
    // tag=1002
    return ::QProcess::writeData(data, len);
  }
}
// tag=1009
qint64 QProcess_wrapper::writeData_nocallback(const char *data, qint64 len) {
  // tag=1003
  return ::QProcess::writeData(data, len);
}

// tag=1005
QProcess_wrapper::~QProcess_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QProcess *fromPtr(void *ptr) {
  return reinterpret_cast<QProcess *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QProcess_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QProcess_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
      cppObj);
}
void *c_QProcess__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QProcess_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1079
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

// tag=1050
// arguments() const
void *c_QProcess__arguments(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr(thisObj)->arguments()};
}

// tag=1050
// atEnd() const
bool c_QProcess__atEnd(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
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
qint64 c_QProcess__bytesAvailable(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
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
qint64 c_QProcess__bytesToWrite(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->bytesToWrite_nocallback();
        } else {
          return targetPtr->bytesToWrite();
        }
      }();
}

// tag=1079
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

// tag=1050
// canReadLine() const
bool c_QProcess__canReadLine(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->canReadLine_nocallback();
        } else {
          return targetPtr->canReadLine();
        }
      }();
}

// tag=1079
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

// tag=1079
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

// tag=1050
// close()
void c_QProcess__close(void *thisObj) {
  // tag=1016
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

// tag=1050
// closeWriteChannel()
void c_QProcess__closeWriteChannel(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->closeWriteChannel();
}

// tag=1050
// customEvent(QEvent * event)
void c_QProcess__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// environment() const
void *c_QProcess__environment(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          fromPtr(thisObj)->environment()};
}

// tag=1050
// event(QEvent * event)
bool c_QProcess__event_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
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
bool c_QProcess__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                            void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// execute(const QString & program, const QList<QString > & arguments)
int c_static_QProcess__execute_QString_QList_QString(const char *program_,
                                                     void *arguments_) {
  const auto program = QString::fromUtf8(program_);
  auto &arguments = *reinterpret_cast<QList<QString> *>(arguments_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QProcess_wrapper::execute(program, arguments);
}

// tag=1050
// exitCode() const
int c_QProcess__exitCode(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->exitCode();
}

// tag=1050
// finished(int exitCode)
void c_QProcess__finished_int(void *thisObj, int exitCode) {
  // tag=1010
  fromPtr(thisObj)->finished(exitCode);
}

// tag=1079
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

// tag=1050
// isSequential() const
bool c_QProcess__isSequential(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->isSequential_nocallback();
        } else {
          return targetPtr->isSequential();
        }
      }();
}

// tag=1050
// kill()
void c_QProcess__kill(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->kill();
}

// tag=1050
// nullDevice()
void *c_static_QProcess__nullDevice() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QProcess_wrapper::nullDevice()};
}

// tag=1050
// pos() const
qint64 c_QProcess__pos(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->pos_nocallback();
        } else {
          return targetPtr->pos();
        }
      }();
}

// tag=1050
// processId() const
qint64 c_QProcess__processId(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->processId();
}

// tag=1050
// program() const
void *c_QProcess__program(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->program()};
}

// tag=1050
// readAllStandardError()
void *c_QProcess__readAllStandardError(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr(thisObj)->readAllStandardError()};
}

// tag=1050
// readAllStandardOutput()
void *c_QProcess__readAllStandardOutput(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QByteArray>{
          fromPtr(thisObj)->readAllStandardOutput()};
}

// tag=1079
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

// tag=1050
// readData(char * data, qint64 maxlen)
qint64 c_QProcess__readData_char_qint64(void *thisObj, char *data,
                                        qint64 maxlen) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->readData_nocallback(data, maxlen);
}

// tag=1050
// readLineData(char * data, qint64 maxlen)
qint64 c_QProcess__readLineData_char_qint64(void *thisObj, char *data,
                                            qint64 maxlen) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->readLineData_nocallback(data, maxlen);
}

// tag=1079
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

// tag=1050
// reset()
bool c_QProcess__reset(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->reset_nocallback();
        } else {
          return targetPtr->reset();
        }
      }();
}

// tag=1050
// seek(qint64 pos)
bool c_QProcess__seek_qint64(void *thisObj, qint64 pos) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->seek_nocallback(pos);
        } else {
          return targetPtr->seek(pos);
        }
      }();
}

// tag=1050
// setArguments(const QList<QString > & arguments)
void c_QProcess__setArguments_QList_QString(void *thisObj, void *arguments_) {
  auto &arguments = *reinterpret_cast<QList<QString> *>(arguments_);
  // tag=1010
  fromPtr(thisObj)->setArguments(arguments);
}

// tag=1050
// setEnvironment(const QList<QString > & environment)
void c_QProcess__setEnvironment_QList_QString(void *thisObj,
                                              void *environment_) {
  auto &environment = *reinterpret_cast<QList<QString> *>(environment_);
  // tag=1010
  fromPtr(thisObj)->setEnvironment(environment);
}

// tag=1050
// setProgram(const QString & program)
void c_QProcess__setProgram_QString(void *thisObj, const char *program_) {
  const auto program = QString::fromUtf8(program_);
  // tag=1010
  fromPtr(thisObj)->setProgram(program);
}

// tag=1050
// setStandardErrorFile(const QString & fileName)
void c_QProcess__setStandardErrorFile_QString(void *thisObj,
                                              const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  // tag=1010
  fromPtr(thisObj)->setStandardErrorFile(fileName);
}

// tag=1050
// setStandardInputFile(const QString & fileName)
void c_QProcess__setStandardInputFile_QString(void *thisObj,
                                              const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  // tag=1010
  fromPtr(thisObj)->setStandardInputFile(fileName);
}

// tag=1050
// setStandardOutputFile(const QString & fileName)
void c_QProcess__setStandardOutputFile_QString(void *thisObj,
                                               const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  // tag=1010
  fromPtr(thisObj)->setStandardOutputFile(fileName);
}

// tag=1050
// setStandardOutputProcess(QProcess * destination)
void c_QProcess__setStandardOutputProcess_QProcess(void *thisObj,
                                                   void *destination_) {
  auto destination = reinterpret_cast<QProcess *>(destination_);
  // tag=1010
  fromPtr(thisObj)->setStandardOutputProcess(destination);
}

// tag=1050
// setWorkingDirectory(const QString & dir)
void c_QProcess__setWorkingDirectory_QString(void *thisObj, const char *dir_) {
  const auto dir = QString::fromUtf8(dir_);
  // tag=1010
  fromPtr(thisObj)->setWorkingDirectory(dir);
}

// tag=1050
// size() const
qint64 c_QProcess__size(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QProcess_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->size_nocallback();
        } else {
          return targetPtr->size();
        }
      }();
}

// tag=1050
// skipData(qint64 maxSize)
qint64 c_QProcess__skipData_qint64(void *thisObj, qint64 maxSize) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->skipData_nocallback(maxSize);
}

// tag=1050
// start()
void c_QProcess__start(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->start();
}

// tag=1050
// start(const QString & program, const QList<QString > & arguments)
void c_QProcess__start_QString_QList_QString(void *thisObj,
                                             const char *program_,
                                             void *arguments_) {
  const auto program = QString::fromUtf8(program_);
  auto &arguments = *reinterpret_cast<QList<QString> *>(arguments_);
  // tag=1010
  fromPtr(thisObj)->start(program, arguments);
}

// tag=1050
// startCommand(const QString & command)
void c_QProcess__startCommand_QString(void *thisObj, const char *command_) {
  const auto command = QString::fromUtf8(command_);
  // tag=1010
  fromPtr(thisObj)->startCommand(command);
}

// tag=1050
// systemEnvironment()
void *c_static_QProcess__systemEnvironment() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QProcess_wrapper::systemEnvironment()};
}

// tag=1050
// terminate()
void c_QProcess__terminate(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->terminate();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QProcess__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QProcess_wrapper::tr(s, c, n)};
}

// tag=1050
// waitForFinished(int msecs)
bool c_QProcess__waitForFinished_int(void *thisObj, int msecs) {
  return
      // tag=1010
      fromPtr(thisObj)->waitForFinished(msecs);
}

// tag=1050
// waitForStarted(int msecs)
bool c_QProcess__waitForStarted_int(void *thisObj, int msecs) {
  return
      // tag=1010
      fromPtr(thisObj)->waitForStarted(msecs);
}

// tag=1050
// workingDirectory() const
void *c_QProcess__workingDirectory(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->workingDirectory()};
}

// tag=1050
// writeData(const char * data, qint64 len)
qint64 c_QProcess__writeData_char_qint64(void *thisObj, const char *data,
                                         qint64 len) {
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->writeData_nocallback(data, len);
}
void c_QProcess__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QProcess__registerVirtualMethodCallback(void *ptr, void *callback,
                                               int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 3449:
    wrapper->m_atEndCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_atEnd>(callback);
    break;
  case 3451:
    wrapper->m_bytesAvailableCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_bytesAvailable>(
        callback);
    break;
  case 3452:
    wrapper->m_bytesToWriteCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_bytesToWrite>(
        callback);
    break;
  case 3454:
    wrapper->m_canReadLineCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_canReadLine>(
        callback);
    break;
  case 3458:
    wrapper->m_closeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_close>(callback);
    break;
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_eventFilter>(
        callback);
    break;
  case 3476:
    wrapper->m_isSequentialCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_isSequential>(
        callback);
    break;
  case 3487:
    wrapper->m_posCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_pos>(callback);
    break;
  case 3495:
    wrapper->m_readDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_readData>(
        callback);
    break;
  case 3498:
    wrapper->m_readLineDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_readLineData>(
        callback);
    break;
  case 3502:
    wrapper->m_resetCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_reset>(callback);
    break;
  case 3504:
    wrapper->m_seekCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_seek>(callback);
    break;
  case 3515:
    wrapper->m_sizeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_size>(callback);
    break;
  case 3517:
    wrapper->m_skipDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_skipData>(
        callback);
    break;
  case 3528:
    wrapper->m_writeDataCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QProcess_wrapper::Callback_writeData>(
        callback);
    break;
  }
}
}

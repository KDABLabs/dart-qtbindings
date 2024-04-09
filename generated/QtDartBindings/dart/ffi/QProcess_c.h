/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
class QProcess_wrapper : public ::QProcess {
public:
  ~QProcess_wrapper();
  QProcess_wrapper(QObject *parent = nullptr);
  QList<QString> arguments() const;
  virtual bool atEnd() const;
  virtual bool atEnd_nocallback() const;
  virtual qint64 bytesAvailable() const;
  virtual qint64 bytesAvailable_nocallback() const;
  virtual qint64 bytesToWrite() const;
  virtual qint64 bytesToWrite_nocallback() const;
  virtual bool canReadLine() const;
  virtual bool canReadLine_nocallback() const;
  virtual void close();
  virtual void close_nocallback();
  void closeWriteChannel();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  QList<QString> environment() const;
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  static int execute(const QString &program,
                     const QList<QString> &arguments = {});
  int exitCode() const;
  void finished(int exitCode);
  virtual bool isSequential() const;
  virtual bool isSequential_nocallback() const;
  void kill();
  static QString nullDevice();
  virtual qint64 pos() const;
  virtual qint64 pos_nocallback() const;
  qint64 processId() const;
  QString program() const;
  QByteArray readAllStandardError();
  QByteArray readAllStandardOutput();
  virtual qint64 readData(char *data, qint64 maxlen);
  virtual qint64 readData_nocallback(char *data, qint64 maxlen);
  virtual qint64 readLineData(char *data, qint64 maxlen);
  virtual qint64 readLineData_nocallback(char *data, qint64 maxlen);
  virtual bool reset();
  virtual bool reset_nocallback();
  virtual bool seek(qint64 pos);
  virtual bool seek_nocallback(qint64 pos);
  void setArguments(const QList<QString> &arguments);
  void setEnvironment(const QList<QString> &environment);
  void setProgram(const QString &program);
  void setStandardErrorFile(const QString &fileName);
  void setStandardInputFile(const QString &fileName);
  void setStandardOutputFile(const QString &fileName);
  void setStandardOutputProcess(QProcess *destination);
  void setWorkingDirectory(const QString &dir);
  virtual qint64 size() const;
  virtual qint64 size_nocallback() const;
  virtual qint64 skipData(qint64 maxSize);
  virtual qint64 skipData_nocallback(qint64 maxSize);
  void start();
  void start(const QString &program, const QList<QString> &arguments = {});
  void startCommand(const QString &command);
  static QList<QString> systemEnvironment();
  void terminate();
  static QString tr(const char *s, const char *c, int n);
  bool waitForFinished(int msecs = 30000);
  bool waitForStarted(int msecs = 30000);
  QString workingDirectory() const;
  virtual qint64 writeData(const char *data, qint64 len);
  virtual qint64 writeData_nocallback(const char *data, qint64 len);
  typedef bool (*Callback_atEnd)(void *);
  Callback_atEnd m_atEndCallback = nullptr;
  typedef qint64 (*Callback_bytesAvailable)(void *);
  Callback_bytesAvailable m_bytesAvailableCallback = nullptr;
  typedef qint64 (*Callback_bytesToWrite)(void *);
  Callback_bytesToWrite m_bytesToWriteCallback = nullptr;
  typedef bool (*Callback_canReadLine)(void *);
  Callback_canReadLine m_canReadLineCallback = nullptr;
  typedef void (*Callback_close)(void *);
  Callback_close m_closeCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef bool (*Callback_isSequential)(void *);
  Callback_isSequential m_isSequentialCallback = nullptr;
  typedef qint64 (*Callback_pos)(void *);
  Callback_pos m_posCallback = nullptr;
  typedef qint64 (*Callback_readData)(void *, char *data, qint64 maxlen);
  Callback_readData m_readDataCallback = nullptr;
  typedef qint64 (*Callback_readLineData)(void *, char *data, qint64 maxlen);
  Callback_readLineData m_readLineDataCallback = nullptr;
  typedef bool (*Callback_reset)(void *);
  Callback_reset m_resetCallback = nullptr;
  typedef bool (*Callback_seek)(void *, qint64 pos);
  Callback_seek m_seekCallback = nullptr;
  typedef qint64 (*Callback_size)(void *);
  Callback_size m_sizeCallback = nullptr;
  typedef qint64 (*Callback_skipData)(void *, qint64 maxSize);
  Callback_skipData m_skipDataCallback = nullptr;
  typedef qint64 (*Callback_writeData)(void *, const char *data, qint64 len);
  Callback_writeData m_writeDataCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QProcess::QProcess(QObject * parent)
QtDartBindings_EXPORT void *c_QProcess__constructor_QObject(void *parent_);
// QProcess::arguments() const
QtDartBindings_EXPORT void *c_QProcess__arguments(void *thisObj);
// QProcess::atEnd() const
QtDartBindings_EXPORT bool c_QProcess__atEnd(void *thisObj);
// QProcess::bytesAvailable() const
QtDartBindings_EXPORT qint64 c_QProcess__bytesAvailable(void *thisObj);
// QProcess::bytesToWrite() const
QtDartBindings_EXPORT qint64 c_QProcess__bytesToWrite(void *thisObj);
// QProcess::canReadLine() const
QtDartBindings_EXPORT bool c_QProcess__canReadLine(void *thisObj);
// QProcess::close()
QtDartBindings_EXPORT void c_QProcess__close(void *thisObj);
// QProcess::closeWriteChannel()
QtDartBindings_EXPORT void c_QProcess__closeWriteChannel(void *thisObj);
// QProcess::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QProcess__customEvent_QEvent(void *thisObj,
                                                          void *event_);
// QProcess::environment() const
QtDartBindings_EXPORT void *c_QProcess__environment(void *thisObj);
// QProcess::event(QEvent * event)
QtDartBindings_EXPORT bool c_QProcess__event_QEvent(void *thisObj,
                                                    void *event_);
// QProcess::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QProcess__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                       void *event_);
// QProcess::execute(const QString & program, const QList<QString > & arguments)
QtDartBindings_EXPORT int
c_static_QProcess__execute_QString_QList_QString(const char *program_,
                                                 void *arguments_);
// QProcess::exitCode() const
QtDartBindings_EXPORT int c_QProcess__exitCode(void *thisObj);
// QProcess::finished(int exitCode)
QtDartBindings_EXPORT void c_QProcess__finished_int(void *thisObj,
                                                    int exitCode);
QtDartBindings_EXPORT void
c_QProcess__onFinished_int(void *thisObj, void *contextQObject,
                           void *callback); // QProcess::isSequential() const
QtDartBindings_EXPORT bool c_QProcess__isSequential(void *thisObj);
// QProcess::kill()
QtDartBindings_EXPORT void c_QProcess__kill(void *thisObj);
// QProcess::nullDevice()
QtDartBindings_EXPORT void *c_static_QProcess__nullDevice();
// QProcess::pos() const
QtDartBindings_EXPORT qint64 c_QProcess__pos(void *thisObj);
// QProcess::processId() const
QtDartBindings_EXPORT qint64 c_QProcess__processId(void *thisObj);
// QProcess::program() const
QtDartBindings_EXPORT void *c_QProcess__program(void *thisObj);
// QProcess::readAllStandardError()
QtDartBindings_EXPORT void *c_QProcess__readAllStandardError(void *thisObj);
// QProcess::readAllStandardOutput()
QtDartBindings_EXPORT void *c_QProcess__readAllStandardOutput(void *thisObj);
// QProcess::readData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QProcess__readData_char_qint64(void *thisObj,
                                                              char *data,
                                                              qint64 maxlen);
// QProcess::readLineData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64
c_QProcess__readLineData_char_qint64(void *thisObj, char *data, qint64 maxlen);
// QProcess::reset()
QtDartBindings_EXPORT bool c_QProcess__reset(void *thisObj);
// QProcess::seek(qint64 pos)
QtDartBindings_EXPORT bool c_QProcess__seek_qint64(void *thisObj, qint64 pos);
// QProcess::setArguments(const QList<QString > & arguments)
QtDartBindings_EXPORT void
c_QProcess__setArguments_QList_QString(void *thisObj, void *arguments_);
// QProcess::setEnvironment(const QList<QString > & environment)
QtDartBindings_EXPORT void
c_QProcess__setEnvironment_QList_QString(void *thisObj, void *environment_);
// QProcess::setProgram(const QString & program)
QtDartBindings_EXPORT void c_QProcess__setProgram_QString(void *thisObj,
                                                          const char *program_);
// QProcess::setStandardErrorFile(const QString & fileName)
QtDartBindings_EXPORT void
c_QProcess__setStandardErrorFile_QString(void *thisObj, const char *fileName_);
// QProcess::setStandardInputFile(const QString & fileName)
QtDartBindings_EXPORT void
c_QProcess__setStandardInputFile_QString(void *thisObj, const char *fileName_);
// QProcess::setStandardOutputFile(const QString & fileName)
QtDartBindings_EXPORT void
c_QProcess__setStandardOutputFile_QString(void *thisObj, const char *fileName_);
// QProcess::setStandardOutputProcess(QProcess * destination)
QtDartBindings_EXPORT void
c_QProcess__setStandardOutputProcess_QProcess(void *thisObj,
                                              void *destination_);
// QProcess::setWorkingDirectory(const QString & dir)
QtDartBindings_EXPORT void
c_QProcess__setWorkingDirectory_QString(void *thisObj, const char *dir_);
// QProcess::size() const
QtDartBindings_EXPORT qint64 c_QProcess__size(void *thisObj);
// QProcess::skipData(qint64 maxSize)
QtDartBindings_EXPORT qint64 c_QProcess__skipData_qint64(void *thisObj,
                                                         qint64 maxSize);
// QProcess::start()
QtDartBindings_EXPORT void c_QProcess__start(void *thisObj);
// QProcess::start(const QString & program, const QList<QString > & arguments)
QtDartBindings_EXPORT void
c_QProcess__start_QString_QList_QString(void *thisObj, const char *program_,
                                        void *arguments_);
// QProcess::startCommand(const QString & command)
QtDartBindings_EXPORT void
c_QProcess__startCommand_QString(void *thisObj, const char *command_);
// QProcess::systemEnvironment()
QtDartBindings_EXPORT void *c_static_QProcess__systemEnvironment();
// QProcess::terminate()
QtDartBindings_EXPORT void c_QProcess__terminate(void *thisObj);
// QProcess::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QProcess__tr_char_char_int(const char *s, const char *c, int n);
// QProcess::waitForFinished(int msecs)
QtDartBindings_EXPORT bool c_QProcess__waitForFinished_int(void *thisObj,
                                                           int msecs);
// QProcess::waitForStarted(int msecs)
QtDartBindings_EXPORT bool c_QProcess__waitForStarted_int(void *thisObj,
                                                          int msecs);
// QProcess::workingDirectory() const
QtDartBindings_EXPORT void *c_QProcess__workingDirectory(void *thisObj);
// QProcess::writeData(const char * data, qint64 len)
QtDartBindings_EXPORT qint64 c_QProcess__writeData_char_qint64(void *thisObj,
                                                               const char *data,
                                                               qint64 len);
QtDartBindings_EXPORT void c_QProcess__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QProcess__registerVirtualMethodCallback(void *ptr, void *callback,
                                          int methodId);
QtDartBindings_EXPORT void c_QProcess_Finalizer(void *cppObj);
}

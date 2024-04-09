
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QProcess_wrapper : public ::QProcess {
public:
  ~QProcess_wrapper();
  // tag=1041
  QProcess_wrapper(QObject *parent = nullptr);
  // tag=1041
  QList<QString> arguments() const;
  // tag=1041
  virtual bool atEnd() const;
  // tag=1008
  virtual bool atEnd_nocallback() const;
  // tag=1041
  virtual qint64 bytesAvailable() const;
  // tag=1008
  virtual qint64 bytesAvailable_nocallback() const;
  // tag=1041
  virtual qint64 bytesToWrite() const;
  // tag=1008
  virtual qint64 bytesToWrite_nocallback() const;
  // tag=1041
  virtual bool canReadLine() const;
  // tag=1008
  virtual bool canReadLine_nocallback() const;
  // tag=1041
  virtual void close();
  // tag=1008
  virtual void close_nocallback();
  // tag=1041
  void closeWriteChannel();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  QList<QString> environment() const;
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  static int execute(const QString &program,
                     const QList<QString> &arguments = {});
  // tag=1041
  int exitCode() const;
  // tag=1041
  void finished(int exitCode);
  // tag=1041
  virtual bool isSequential() const;
  // tag=1008
  virtual bool isSequential_nocallback() const;
  // tag=1041
  void kill();
  // tag=1041
  static QString nullDevice();
  // tag=1041
  virtual qint64 pos() const;
  // tag=1008
  virtual qint64 pos_nocallback() const;
  // tag=1041
  qint64 processId() const;
  // tag=1041
  QString program() const;
  // tag=1041
  QByteArray readAllStandardError();
  // tag=1041
  QByteArray readAllStandardOutput();
  // tag=1041
  virtual qint64 readData(char *data, qint64 maxlen);
  // tag=1008
  virtual qint64 readData_nocallback(char *data, qint64 maxlen);
  // tag=1041
  virtual qint64 readLineData(char *data, qint64 maxlen);
  // tag=1008
  virtual qint64 readLineData_nocallback(char *data, qint64 maxlen);
  // tag=1041
  virtual bool reset();
  // tag=1008
  virtual bool reset_nocallback();
  // tag=1041
  virtual bool seek(qint64 pos);
  // tag=1008
  virtual bool seek_nocallback(qint64 pos);
  // tag=1041
  void setArguments(const QList<QString> &arguments);
  // tag=1041
  void setEnvironment(const QList<QString> &environment);
  // tag=1041
  void setProgram(const QString &program);
  // tag=1041
  void setStandardErrorFile(const QString &fileName);
  // tag=1041
  void setStandardInputFile(const QString &fileName);
  // tag=1041
  void setStandardOutputFile(const QString &fileName);
  // tag=1041
  void setStandardOutputProcess(QProcess *destination);
  // tag=1041
  void setWorkingDirectory(const QString &dir);
  // tag=1041
  virtual qint64 size() const;
  // tag=1008
  virtual qint64 size_nocallback() const;
  // tag=1041
  virtual qint64 skipData(qint64 maxSize);
  // tag=1008
  virtual qint64 skipData_nocallback(qint64 maxSize);
  // tag=1041
  void start();
  // tag=1041
  void start(const QString &program, const QList<QString> &arguments = {});
  // tag=1041
  void startCommand(const QString &command);
  // tag=1041
  static QList<QString> systemEnvironment();
  // tag=1041
  void terminate();
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  bool waitForFinished(int msecs = 30000);
  // tag=1041
  bool waitForStarted(int msecs = 30000);
  // tag=1041
  QString workingDirectory() const;
  // tag=1041
  virtual qint64 writeData(const char *data, qint64 len);
  // tag=1008
  virtual qint64 writeData_nocallback(const char *data, qint64 len);
  // tag=1042
  typedef bool (*Callback_atEnd)(void *);
  Callback_atEnd m_atEndCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_bytesAvailable)(void *);
  Callback_bytesAvailable m_bytesAvailableCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_bytesToWrite)(void *);
  Callback_bytesToWrite m_bytesToWriteCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_canReadLine)(void *);
  Callback_canReadLine m_canReadLineCallback = nullptr;
  // tag=1042
  typedef void (*Callback_close)(void *);
  Callback_close m_closeCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_isSequential)(void *);
  Callback_isSequential m_isSequentialCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_pos)(void *);
  Callback_pos m_posCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_readData)(void *, char *data, qint64 maxlen);
  Callback_readData m_readDataCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_readLineData)(void *, char *data, qint64 maxlen);
  Callback_readLineData m_readLineDataCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_reset)(void *);
  Callback_reset m_resetCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_seek)(void *, qint64 pos);
  Callback_seek m_seekCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_size)(void *);
  Callback_size m_sizeCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_skipData)(void *, qint64 maxSize);
  Callback_skipData m_skipDataCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_writeData)(void *, const char *data, qint64 len);
  Callback_writeData m_writeDataCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QProcess::QProcess(QObject * parent)
QtDartBindings_EXPORT void *c_QProcess__constructor_QObject(void *parent_);

// tag=1067
//  QProcess::arguments() const
QtDartBindings_EXPORT void *c_QProcess__arguments(void *thisObj);

// tag=1067
//  QProcess::atEnd() const
QtDartBindings_EXPORT bool c_QProcess__atEnd(void *thisObj);

// tag=1067
//  QProcess::bytesAvailable() const
QtDartBindings_EXPORT qint64 c_QProcess__bytesAvailable(void *thisObj);

// tag=1067
//  QProcess::bytesToWrite() const
QtDartBindings_EXPORT qint64 c_QProcess__bytesToWrite(void *thisObj);

// tag=1067
//  QProcess::canReadLine() const
QtDartBindings_EXPORT bool c_QProcess__canReadLine(void *thisObj);

// tag=1067
//  QProcess::close()
QtDartBindings_EXPORT void c_QProcess__close(void *thisObj);

// tag=1067
//  QProcess::closeWriteChannel()
QtDartBindings_EXPORT void c_QProcess__closeWriteChannel(void *thisObj);

// tag=1067
//  QProcess::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QProcess__customEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QProcess::environment() const
QtDartBindings_EXPORT void *c_QProcess__environment(void *thisObj);

// tag=1067
//  QProcess::event(QEvent * event)
QtDartBindings_EXPORT bool c_QProcess__event_QEvent(void *thisObj,
                                                    void *event_);

// tag=1067
//  QProcess::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QProcess__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                       void *event_);

// tag=1067
//  QProcess::execute(const QString & program, const QList<QString > &
//  arguments)
QtDartBindings_EXPORT int
c_static_QProcess__execute_QString_QList_QString(const char *program_,
                                                 void *arguments_);

// tag=1067
//  QProcess::exitCode() const
QtDartBindings_EXPORT int c_QProcess__exitCode(void *thisObj);

// tag=1067
//  QProcess::finished(int exitCode)
QtDartBindings_EXPORT void c_QProcess__finished_int(void *thisObj,
                                                    int exitCode);

// tag=1078
QtDartBindings_EXPORT void
c_QProcess__onFinished_int(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QProcess::isSequential() const
QtDartBindings_EXPORT bool c_QProcess__isSequential(void *thisObj);

// tag=1067
//  QProcess::kill()
QtDartBindings_EXPORT void c_QProcess__kill(void *thisObj);

// tag=1067
//  QProcess::nullDevice()
QtDartBindings_EXPORT void *c_static_QProcess__nullDevice();

// tag=1067
//  QProcess::pos() const
QtDartBindings_EXPORT qint64 c_QProcess__pos(void *thisObj);

// tag=1067
//  QProcess::processId() const
QtDartBindings_EXPORT qint64 c_QProcess__processId(void *thisObj);

// tag=1067
//  QProcess::program() const
QtDartBindings_EXPORT void *c_QProcess__program(void *thisObj);

// tag=1067
//  QProcess::readAllStandardError()
QtDartBindings_EXPORT void *c_QProcess__readAllStandardError(void *thisObj);

// tag=1067
//  QProcess::readAllStandardOutput()
QtDartBindings_EXPORT void *c_QProcess__readAllStandardOutput(void *thisObj);

// tag=1067
//  QProcess::readData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QProcess__readData_char_qint64(void *thisObj,
                                                              char *data,
                                                              qint64 maxlen);

// tag=1067
//  QProcess::readLineData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64
c_QProcess__readLineData_char_qint64(void *thisObj, char *data, qint64 maxlen);

// tag=1067
//  QProcess::reset()
QtDartBindings_EXPORT bool c_QProcess__reset(void *thisObj);

// tag=1067
//  QProcess::seek(qint64 pos)
QtDartBindings_EXPORT bool c_QProcess__seek_qint64(void *thisObj, qint64 pos);

// tag=1067
//  QProcess::setArguments(const QList<QString > & arguments)
QtDartBindings_EXPORT void
c_QProcess__setArguments_QList_QString(void *thisObj, void *arguments_);

// tag=1067
//  QProcess::setEnvironment(const QList<QString > & environment)
QtDartBindings_EXPORT void
c_QProcess__setEnvironment_QList_QString(void *thisObj, void *environment_);

// tag=1067
//  QProcess::setProgram(const QString & program)
QtDartBindings_EXPORT void c_QProcess__setProgram_QString(void *thisObj,
                                                          const char *program_);

// tag=1067
//  QProcess::setStandardErrorFile(const QString & fileName)
QtDartBindings_EXPORT void
c_QProcess__setStandardErrorFile_QString(void *thisObj, const char *fileName_);

// tag=1067
//  QProcess::setStandardInputFile(const QString & fileName)
QtDartBindings_EXPORT void
c_QProcess__setStandardInputFile_QString(void *thisObj, const char *fileName_);

// tag=1067
//  QProcess::setStandardOutputFile(const QString & fileName)
QtDartBindings_EXPORT void
c_QProcess__setStandardOutputFile_QString(void *thisObj, const char *fileName_);

// tag=1067
//  QProcess::setStandardOutputProcess(QProcess * destination)
QtDartBindings_EXPORT void
c_QProcess__setStandardOutputProcess_QProcess(void *thisObj,
                                              void *destination_);

// tag=1067
//  QProcess::setWorkingDirectory(const QString & dir)
QtDartBindings_EXPORT void
c_QProcess__setWorkingDirectory_QString(void *thisObj, const char *dir_);

// tag=1067
//  QProcess::size() const
QtDartBindings_EXPORT qint64 c_QProcess__size(void *thisObj);

// tag=1067
//  QProcess::skipData(qint64 maxSize)
QtDartBindings_EXPORT qint64 c_QProcess__skipData_qint64(void *thisObj,
                                                         qint64 maxSize);

// tag=1067
//  QProcess::start()
QtDartBindings_EXPORT void c_QProcess__start(void *thisObj);

// tag=1067
//  QProcess::start(const QString & program, const QList<QString > & arguments)
QtDartBindings_EXPORT void
c_QProcess__start_QString_QList_QString(void *thisObj, const char *program_,
                                        void *arguments_);

// tag=1067
//  QProcess::startCommand(const QString & command)
QtDartBindings_EXPORT void
c_QProcess__startCommand_QString(void *thisObj, const char *command_);

// tag=1067
//  QProcess::systemEnvironment()
QtDartBindings_EXPORT void *c_static_QProcess__systemEnvironment();

// tag=1067
//  QProcess::terminate()
QtDartBindings_EXPORT void c_QProcess__terminate(void *thisObj);

// tag=1067
//  QProcess::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QProcess__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QProcess::waitForFinished(int msecs)
QtDartBindings_EXPORT bool c_QProcess__waitForFinished_int(void *thisObj,
                                                           int msecs);

// tag=1067
//  QProcess::waitForStarted(int msecs)
QtDartBindings_EXPORT bool c_QProcess__waitForStarted_int(void *thisObj,
                                                          int msecs);

// tag=1067
//  QProcess::workingDirectory() const
QtDartBindings_EXPORT void *c_QProcess__workingDirectory(void *thisObj);

// tag=1067
//  QProcess::writeData(const char * data, qint64 len)
QtDartBindings_EXPORT qint64 c_QProcess__writeData_char_qint64(void *thisObj,
                                                               const char *data,
                                                               qint64 len);

// tag=1066
QtDartBindings_EXPORT void c_QProcess__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QProcess__registerVirtualMethodCallback(void *ptr, void *callback,
                                          int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QProcess_Finalizer(void *, void *cppObj, void *);
}


// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QIODevice_wrapper : public ::QIODevice {
public:
  ~QIODevice_wrapper();
  // tag=1041
  QIODevice_wrapper();
  // tag=1041
  QIODevice_wrapper(QObject *parent);
  // tag=1041
  void aboutToClose();
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
  void bytesWritten(qint64 bytes);
  // tag=1041
  virtual bool canReadLine() const;
  // tag=1008
  virtual bool canReadLine_nocallback() const;
  // tag=1041
  void channelBytesWritten(int channel, qint64 bytes);
  // tag=1041
  void channelReadyRead(int channel);
  // tag=1041
  virtual void close();
  // tag=1008
  virtual void close_nocallback();
  // tag=1041
  void commitTransaction();
  // tag=1041
  int currentReadChannel() const;
  // tag=1041
  int currentWriteChannel() const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  QString errorString() const;
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  bool getChar(char *c);
  // tag=1041
  bool isOpen() const;
  // tag=1041
  bool isReadable() const;
  // tag=1041
  virtual bool isSequential() const;
  // tag=1008
  virtual bool isSequential_nocallback() const;
  // tag=1041
  bool isTextModeEnabled() const;
  // tag=1041
  bool isTransactionStarted() const;
  // tag=1041
  bool isWritable() const;
  // tag=1041
  qint64 peek(char *data, qint64 maxlen);
  // tag=1041
  QByteArray peek(qint64 maxlen);
  // tag=1041
  virtual qint64 pos() const;
  // tag=1008
  virtual qint64 pos_nocallback() const;
  // tag=1041
  qint64 read(char *data, qint64 maxlen);
  // tag=1041
  QByteArray read(qint64 maxlen);
  // tag=1041
  QByteArray readAll();
  // tag=1041
  int readChannelCount() const;
  // tag=1041
  void readChannelFinished();
  // tag=1041
  virtual qint64 readData(char *data, qint64 maxlen);
  // tag=1008
  virtual qint64 readData_nocallback(char *data, qint64 maxlen);
  // tag=1041
  qint64 readLine(char *data, qint64 maxlen);
  // tag=1041
  QByteArray readLine(qint64 maxlen = 0);
  // tag=1041
  virtual qint64 readLineData(char *data, qint64 maxlen);
  // tag=1008
  virtual qint64 readLineData_nocallback(char *data, qint64 maxlen);
  // tag=1041
  void readyRead();
  // tag=1041
  virtual bool reset();
  // tag=1008
  virtual bool reset_nocallback();
  // tag=1041
  void rollbackTransaction();
  // tag=1041
  virtual bool seek(qint64 pos);
  // tag=1008
  virtual bool seek_nocallback(qint64 pos);
  // tag=1041
  void setCurrentReadChannel(int channel);
  // tag=1041
  void setCurrentWriteChannel(int channel);
  // tag=1041
  void setErrorString(const QString &errorString);
  // tag=1041
  void setTextModeEnabled(bool enabled);
  // tag=1041
  virtual qint64 size() const;
  // tag=1008
  virtual qint64 size_nocallback() const;
  // tag=1041
  qint64 skip(qint64 maxSize);
  // tag=1041
  virtual qint64 skipData(qint64 maxSize);
  // tag=1008
  virtual qint64 skipData_nocallback(qint64 maxSize);
  // tag=1041
  void startTransaction();
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  virtual bool waitForBytesWritten(int msecs);
  // tag=1008
  virtual bool waitForBytesWritten_nocallback(int msecs);
  // tag=1041
  virtual bool waitForReadyRead(int msecs);
  // tag=1008
  virtual bool waitForReadyRead_nocallback(int msecs);
  // tag=1041
  qint64 write(const QByteArray &data);
  // tag=1041
  qint64 write(const char *data);
  // tag=1041
  qint64 write(const char *data, qint64 len);
  // tag=1041
  int writeChannelCount() const;
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
  typedef bool (*Callback_waitForBytesWritten)(void *, int msecs);
  Callback_waitForBytesWritten m_waitForBytesWrittenCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_waitForReadyRead)(void *, int msecs);
  Callback_waitForReadyRead m_waitForReadyReadCallback = nullptr;
  // tag=1042
  typedef qint64 (*Callback_writeData)(void *, const char *data, qint64 len);
  Callback_writeData m_writeDataCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QIODevice::QIODevice()
QtDartBindings_EXPORT void *c_QIODevice__constructor();

// tag=1067
//  QIODevice::QIODevice(QObject * parent)
QtDartBindings_EXPORT void *c_QIODevice__constructor_QObject(void *parent_);

// tag=1067
//  QIODevice::aboutToClose()
QtDartBindings_EXPORT void c_QIODevice__aboutToClose(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QIODevice__onAboutToClose(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback);
// tag=1067
//  QIODevice::atEnd() const
QtDartBindings_EXPORT bool c_QIODevice__atEnd(void *thisObj);

// tag=1067
//  QIODevice::bytesAvailable() const
QtDartBindings_EXPORT qint64 c_QIODevice__bytesAvailable(void *thisObj);

// tag=1067
//  QIODevice::bytesToWrite() const
QtDartBindings_EXPORT qint64 c_QIODevice__bytesToWrite(void *thisObj);

// tag=1067
//  QIODevice::bytesWritten(qint64 bytes)
QtDartBindings_EXPORT void c_QIODevice__bytesWritten_qint64(void *thisObj,
                                                            qint64 bytes);

// tag=1078
QtDartBindings_EXPORT void
c_QIODevice__onBytesWritten_qint64(void *thisObj, void *contextQObject,
                                   void *callback);
// tag=1067
//  QIODevice::canReadLine() const
QtDartBindings_EXPORT bool c_QIODevice__canReadLine(void *thisObj);

// tag=1067
//  QIODevice::channelBytesWritten(int channel, qint64 bytes)
QtDartBindings_EXPORT void
c_QIODevice__channelBytesWritten_int_qint64(void *thisObj, int channel,
                                            qint64 bytes);

// tag=1078
QtDartBindings_EXPORT void c_QIODevice__onChannelBytesWritten_int_qint64(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QIODevice::channelReadyRead(int channel)
QtDartBindings_EXPORT void c_QIODevice__channelReadyRead_int(void *thisObj,
                                                             int channel);

// tag=1078
QtDartBindings_EXPORT void
c_QIODevice__onChannelReadyRead_int(void *thisObj, void *contextQObject,
                                    void *callback);
// tag=1067
//  QIODevice::close()
QtDartBindings_EXPORT void c_QIODevice__close(void *thisObj);

// tag=1067
//  QIODevice::commitTransaction()
QtDartBindings_EXPORT void c_QIODevice__commitTransaction(void *thisObj);

// tag=1067
//  QIODevice::currentReadChannel() const
QtDartBindings_EXPORT int c_QIODevice__currentReadChannel(void *thisObj);

// tag=1067
//  QIODevice::currentWriteChannel() const
QtDartBindings_EXPORT int c_QIODevice__currentWriteChannel(void *thisObj);

// tag=1067
//  QIODevice::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QIODevice__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QIODevice::errorString() const
QtDartBindings_EXPORT void *c_QIODevice__errorString(void *thisObj);

// tag=1067
//  QIODevice::event(QEvent * event)
QtDartBindings_EXPORT bool c_QIODevice__event_QEvent(void *thisObj,
                                                     void *event_);

// tag=1067
//  QIODevice::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QIODevice__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);

// tag=1067
//  QIODevice::getChar(char * c)
QtDartBindings_EXPORT bool c_QIODevice__getChar_char(void *thisObj, char *c);

// tag=1067
//  QIODevice::isOpen() const
QtDartBindings_EXPORT bool c_QIODevice__isOpen(void *thisObj);

// tag=1067
//  QIODevice::isReadable() const
QtDartBindings_EXPORT bool c_QIODevice__isReadable(void *thisObj);

// tag=1067
//  QIODevice::isSequential() const
QtDartBindings_EXPORT bool c_QIODevice__isSequential(void *thisObj);

// tag=1067
//  QIODevice::isTextModeEnabled() const
QtDartBindings_EXPORT bool c_QIODevice__isTextModeEnabled(void *thisObj);

// tag=1067
//  QIODevice::isTransactionStarted() const
QtDartBindings_EXPORT bool c_QIODevice__isTransactionStarted(void *thisObj);

// tag=1067
//  QIODevice::isWritable() const
QtDartBindings_EXPORT bool c_QIODevice__isWritable(void *thisObj);

// tag=1067
//  QIODevice::peek(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__peek_char_qint64(void *thisObj,
                                                           char *data,
                                                           qint64 maxlen);

// tag=1067
//  QIODevice::peek(qint64 maxlen)
QtDartBindings_EXPORT void *c_QIODevice__peek_qint64(void *thisObj,
                                                     qint64 maxlen);

// tag=1067
//  QIODevice::pos() const
QtDartBindings_EXPORT qint64 c_QIODevice__pos(void *thisObj);

// tag=1067
//  QIODevice::read(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__read_char_qint64(void *thisObj,
                                                           char *data,
                                                           qint64 maxlen);

// tag=1067
//  QIODevice::read(qint64 maxlen)
QtDartBindings_EXPORT void *c_QIODevice__read_qint64(void *thisObj,
                                                     qint64 maxlen);

// tag=1067
//  QIODevice::readAll()
QtDartBindings_EXPORT void *c_QIODevice__readAll(void *thisObj);

// tag=1067
//  QIODevice::readChannelCount() const
QtDartBindings_EXPORT int c_QIODevice__readChannelCount(void *thisObj);

// tag=1067
//  QIODevice::readChannelFinished()
QtDartBindings_EXPORT void c_QIODevice__readChannelFinished(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QIODevice__onReadChannelFinished(void *thisObj, void *contextQObject,
                                   void *callback);
// tag=1067
//  QIODevice::readData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__readData_char_qint64(void *thisObj,
                                                               char *data,
                                                               qint64 maxlen);

// tag=1067
//  QIODevice::readLine(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__readLine_char_qint64(void *thisObj,
                                                               char *data,
                                                               qint64 maxlen);

// tag=1067
//  QIODevice::readLine(qint64 maxlen)
QtDartBindings_EXPORT void *c_QIODevice__readLine_qint64(void *thisObj,
                                                         qint64 maxlen);

// tag=1067
//  QIODevice::readLineData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64
c_QIODevice__readLineData_char_qint64(void *thisObj, char *data, qint64 maxlen);

// tag=1067
//  QIODevice::readyRead()
QtDartBindings_EXPORT void c_QIODevice__readyRead(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QIODevice__onReadyRead(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QIODevice::reset()
QtDartBindings_EXPORT bool c_QIODevice__reset(void *thisObj);

// tag=1067
//  QIODevice::rollbackTransaction()
QtDartBindings_EXPORT void c_QIODevice__rollbackTransaction(void *thisObj);

// tag=1067
//  QIODevice::seek(qint64 pos)
QtDartBindings_EXPORT bool c_QIODevice__seek_qint64(void *thisObj, qint64 pos);

// tag=1067
//  QIODevice::setCurrentReadChannel(int channel)
QtDartBindings_EXPORT void c_QIODevice__setCurrentReadChannel_int(void *thisObj,
                                                                  int channel);

// tag=1067
//  QIODevice::setCurrentWriteChannel(int channel)
QtDartBindings_EXPORT void
c_QIODevice__setCurrentWriteChannel_int(void *thisObj, int channel);

// tag=1067
//  QIODevice::setErrorString(const QString & errorString)
QtDartBindings_EXPORT void
c_QIODevice__setErrorString_QString(void *thisObj, const char *errorString_);

// tag=1067
//  QIODevice::setTextModeEnabled(bool enabled)
QtDartBindings_EXPORT void c_QIODevice__setTextModeEnabled_bool(void *thisObj,
                                                                bool enabled);

// tag=1067
//  QIODevice::size() const
QtDartBindings_EXPORT qint64 c_QIODevice__size(void *thisObj);

// tag=1067
//  QIODevice::skip(qint64 maxSize)
QtDartBindings_EXPORT qint64 c_QIODevice__skip_qint64(void *thisObj,
                                                      qint64 maxSize);

// tag=1067
//  QIODevice::skipData(qint64 maxSize)
QtDartBindings_EXPORT qint64 c_QIODevice__skipData_qint64(void *thisObj,
                                                          qint64 maxSize);

// tag=1067
//  QIODevice::startTransaction()
QtDartBindings_EXPORT void c_QIODevice__startTransaction(void *thisObj);

// tag=1067
//  QIODevice::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QIODevice__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QIODevice::waitForBytesWritten(int msecs)
QtDartBindings_EXPORT bool c_QIODevice__waitForBytesWritten_int(void *thisObj,
                                                                int msecs);

// tag=1067
//  QIODevice::waitForReadyRead(int msecs)
QtDartBindings_EXPORT bool c_QIODevice__waitForReadyRead_int(void *thisObj,
                                                             int msecs);

// tag=1067
//  QIODevice::write(const QByteArray & data)
QtDartBindings_EXPORT qint64 c_QIODevice__write_QByteArray(void *thisObj,
                                                           void *data_);

// tag=1067
//  QIODevice::write(const char * data)
QtDartBindings_EXPORT qint64 c_QIODevice__write_char(void *thisObj,
                                                     const char *data);

// tag=1067
//  QIODevice::write(const char * data, qint64 len)
QtDartBindings_EXPORT qint64 c_QIODevice__write_char_qint64(void *thisObj,
                                                            const char *data,
                                                            qint64 len);

// tag=1067
//  QIODevice::writeChannelCount() const
QtDartBindings_EXPORT int c_QIODevice__writeChannelCount(void *thisObj);

// tag=1067
//  QIODevice::writeData(const char * data, qint64 len)
QtDartBindings_EXPORT qint64
c_QIODevice__writeData_char_qint64(void *thisObj, const char *data, qint64 len);

// tag=1066
QtDartBindings_EXPORT void c_QIODevice__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QIODevice__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QIODevice_Finalizer(void *, void *cppObj, void *);
}

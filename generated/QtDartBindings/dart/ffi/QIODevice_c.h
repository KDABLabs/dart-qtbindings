/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QIODevice_wrapper : public ::QIODevice {
public:
  ~QIODevice_wrapper();
  QIODevice_wrapper();
  QIODevice_wrapper(QObject *parent);
  void aboutToClose();
  virtual bool atEnd() const;
  virtual bool atEnd_nocallback() const;
  virtual qint64 bytesAvailable() const;
  virtual qint64 bytesAvailable_nocallback() const;
  virtual qint64 bytesToWrite() const;
  virtual qint64 bytesToWrite_nocallback() const;
  void bytesWritten(qint64 bytes);
  virtual bool canReadLine() const;
  virtual bool canReadLine_nocallback() const;
  void channelBytesWritten(int channel, qint64 bytes);
  void channelReadyRead(int channel);
  virtual void close();
  virtual void close_nocallback();
  void commitTransaction();
  int currentReadChannel() const;
  int currentWriteChannel() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  QString errorString() const;
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  bool getChar(char *c);
  bool isOpen() const;
  bool isReadable() const;
  virtual bool isSequential() const;
  virtual bool isSequential_nocallback() const;
  bool isTextModeEnabled() const;
  bool isTransactionStarted() const;
  bool isWritable() const;
  qint64 peek(char *data, qint64 maxlen);
  QByteArray peek(qint64 maxlen);
  virtual qint64 pos() const;
  virtual qint64 pos_nocallback() const;
  qint64 read(char *data, qint64 maxlen);
  QByteArray read(qint64 maxlen);
  QByteArray readAll();
  int readChannelCount() const;
  void readChannelFinished();
  virtual qint64 readData(char *data, qint64 maxlen);
  virtual qint64 readData_nocallback(char *data, qint64 maxlen);
  qint64 readLine(char *data, qint64 maxlen);
  QByteArray readLine(qint64 maxlen = 0);
  virtual qint64 readLineData(char *data, qint64 maxlen);
  virtual qint64 readLineData_nocallback(char *data, qint64 maxlen);
  void readyRead();
  virtual bool reset();
  virtual bool reset_nocallback();
  void rollbackTransaction();
  virtual bool seek(qint64 pos);
  virtual bool seek_nocallback(qint64 pos);
  void setCurrentReadChannel(int channel);
  void setCurrentWriteChannel(int channel);
  void setErrorString(const QString &errorString);
  void setTextModeEnabled(bool enabled);
  virtual qint64 size() const;
  virtual qint64 size_nocallback() const;
  qint64 skip(qint64 maxSize);
  virtual qint64 skipData(qint64 maxSize);
  virtual qint64 skipData_nocallback(qint64 maxSize);
  void startTransaction();
  static QString tr(const char *s, const char *c, int n);
  virtual bool waitForBytesWritten(int msecs);
  virtual bool waitForBytesWritten_nocallback(int msecs);
  virtual bool waitForReadyRead(int msecs);
  virtual bool waitForReadyRead_nocallback(int msecs);
  qint64 write(const QByteArray &data);
  qint64 write(const char *data);
  qint64 write(const char *data, qint64 len);
  int writeChannelCount() const;
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
  typedef bool (*Callback_waitForBytesWritten)(void *, int msecs);
  Callback_waitForBytesWritten m_waitForBytesWrittenCallback = nullptr;
  typedef bool (*Callback_waitForReadyRead)(void *, int msecs);
  Callback_waitForReadyRead m_waitForReadyReadCallback = nullptr;
  typedef qint64 (*Callback_writeData)(void *, const char *data, qint64 len);
  Callback_writeData m_writeDataCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QIODevice::QIODevice()
QtDartBindings_EXPORT void *c_QIODevice__constructor();
// QIODevice::QIODevice(QObject * parent)
QtDartBindings_EXPORT void *c_QIODevice__constructor_QObject(void *parent_);
// QIODevice::aboutToClose()
QtDartBindings_EXPORT void c_QIODevice__aboutToClose(void *thisObj);
QtDartBindings_EXPORT void
c_QIODevice__onAboutToClose(void *thisObj, void *contextQObject,
                            void *callback); // QIODevice::atEnd() const
QtDartBindings_EXPORT bool c_QIODevice__atEnd(void *thisObj);
// QIODevice::bytesAvailable() const
QtDartBindings_EXPORT qint64 c_QIODevice__bytesAvailable(void *thisObj);
// QIODevice::bytesToWrite() const
QtDartBindings_EXPORT qint64 c_QIODevice__bytesToWrite(void *thisObj);
// QIODevice::bytesWritten(qint64 bytes)
QtDartBindings_EXPORT void c_QIODevice__bytesWritten_qint64(void *thisObj,
                                                            qint64 bytes);
QtDartBindings_EXPORT void c_QIODevice__onBytesWritten_qint64(
    void *thisObj, void *contextQObject,
    void *callback); // QIODevice::canReadLine() const
QtDartBindings_EXPORT bool c_QIODevice__canReadLine(void *thisObj);
// QIODevice::channelBytesWritten(int channel, qint64 bytes)
QtDartBindings_EXPORT void
c_QIODevice__channelBytesWritten_int_qint64(void *thisObj, int channel,
                                            qint64 bytes);
QtDartBindings_EXPORT void c_QIODevice__onChannelBytesWritten_int_qint64(
    void *thisObj, void *contextQObject,
    void *callback); // QIODevice::channelReadyRead(int channel)
QtDartBindings_EXPORT void c_QIODevice__channelReadyRead_int(void *thisObj,
                                                             int channel);
QtDartBindings_EXPORT void
c_QIODevice__onChannelReadyRead_int(void *thisObj, void *contextQObject,
                                    void *callback); // QIODevice::close()
QtDartBindings_EXPORT void c_QIODevice__close(void *thisObj);
// QIODevice::commitTransaction()
QtDartBindings_EXPORT void c_QIODevice__commitTransaction(void *thisObj);
// QIODevice::currentReadChannel() const
QtDartBindings_EXPORT int c_QIODevice__currentReadChannel(void *thisObj);
// QIODevice::currentWriteChannel() const
QtDartBindings_EXPORT int c_QIODevice__currentWriteChannel(void *thisObj);
// QIODevice::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QIODevice__customEvent_QEvent(void *thisObj,
                                                           void *event_);
// QIODevice::errorString() const
QtDartBindings_EXPORT void *c_QIODevice__errorString(void *thisObj);
// QIODevice::event(QEvent * event)
QtDartBindings_EXPORT bool c_QIODevice__event_QEvent(void *thisObj,
                                                     void *event_);
// QIODevice::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QIODevice__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);
// QIODevice::getChar(char * c)
QtDartBindings_EXPORT bool c_QIODevice__getChar_char(void *thisObj, char *c);
// QIODevice::isOpen() const
QtDartBindings_EXPORT bool c_QIODevice__isOpen(void *thisObj);
// QIODevice::isReadable() const
QtDartBindings_EXPORT bool c_QIODevice__isReadable(void *thisObj);
// QIODevice::isSequential() const
QtDartBindings_EXPORT bool c_QIODevice__isSequential(void *thisObj);
// QIODevice::isTextModeEnabled() const
QtDartBindings_EXPORT bool c_QIODevice__isTextModeEnabled(void *thisObj);
// QIODevice::isTransactionStarted() const
QtDartBindings_EXPORT bool c_QIODevice__isTransactionStarted(void *thisObj);
// QIODevice::isWritable() const
QtDartBindings_EXPORT bool c_QIODevice__isWritable(void *thisObj);
// QIODevice::peek(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__peek_char_qint64(void *thisObj,
                                                           char *data,
                                                           qint64 maxlen);
// QIODevice::peek(qint64 maxlen)
QtDartBindings_EXPORT void *c_QIODevice__peek_qint64(void *thisObj,
                                                     qint64 maxlen);
// QIODevice::pos() const
QtDartBindings_EXPORT qint64 c_QIODevice__pos(void *thisObj);
// QIODevice::read(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__read_char_qint64(void *thisObj,
                                                           char *data,
                                                           qint64 maxlen);
// QIODevice::read(qint64 maxlen)
QtDartBindings_EXPORT void *c_QIODevice__read_qint64(void *thisObj,
                                                     qint64 maxlen);
// QIODevice::readAll()
QtDartBindings_EXPORT void *c_QIODevice__readAll(void *thisObj);
// QIODevice::readChannelCount() const
QtDartBindings_EXPORT int c_QIODevice__readChannelCount(void *thisObj);
// QIODevice::readChannelFinished()
QtDartBindings_EXPORT void c_QIODevice__readChannelFinished(void *thisObj);
QtDartBindings_EXPORT void c_QIODevice__onReadChannelFinished(
    void *thisObj, void *contextQObject,
    void *callback); // QIODevice::readData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__readData_char_qint64(void *thisObj,
                                                               char *data,
                                                               qint64 maxlen);
// QIODevice::readLine(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64 c_QIODevice__readLine_char_qint64(void *thisObj,
                                                               char *data,
                                                               qint64 maxlen);
// QIODevice::readLine(qint64 maxlen)
QtDartBindings_EXPORT void *c_QIODevice__readLine_qint64(void *thisObj,
                                                         qint64 maxlen);
// QIODevice::readLineData(char * data, qint64 maxlen)
QtDartBindings_EXPORT qint64
c_QIODevice__readLineData_char_qint64(void *thisObj, char *data, qint64 maxlen);
// QIODevice::readyRead()
QtDartBindings_EXPORT void c_QIODevice__readyRead(void *thisObj);
QtDartBindings_EXPORT void
c_QIODevice__onReadyRead(void *thisObj, void *contextQObject,
                         void *callback); // QIODevice::reset()
QtDartBindings_EXPORT bool c_QIODevice__reset(void *thisObj);
// QIODevice::rollbackTransaction()
QtDartBindings_EXPORT void c_QIODevice__rollbackTransaction(void *thisObj);
// QIODevice::seek(qint64 pos)
QtDartBindings_EXPORT bool c_QIODevice__seek_qint64(void *thisObj, qint64 pos);
// QIODevice::setCurrentReadChannel(int channel)
QtDartBindings_EXPORT void c_QIODevice__setCurrentReadChannel_int(void *thisObj,
                                                                  int channel);
// QIODevice::setCurrentWriteChannel(int channel)
QtDartBindings_EXPORT void
c_QIODevice__setCurrentWriteChannel_int(void *thisObj, int channel);
// QIODevice::setErrorString(const QString & errorString)
QtDartBindings_EXPORT void
c_QIODevice__setErrorString_QString(void *thisObj, const char *errorString_);
// QIODevice::setTextModeEnabled(bool enabled)
QtDartBindings_EXPORT void c_QIODevice__setTextModeEnabled_bool(void *thisObj,
                                                                bool enabled);
// QIODevice::size() const
QtDartBindings_EXPORT qint64 c_QIODevice__size(void *thisObj);
// QIODevice::skip(qint64 maxSize)
QtDartBindings_EXPORT qint64 c_QIODevice__skip_qint64(void *thisObj,
                                                      qint64 maxSize);
// QIODevice::skipData(qint64 maxSize)
QtDartBindings_EXPORT qint64 c_QIODevice__skipData_qint64(void *thisObj,
                                                          qint64 maxSize);
// QIODevice::startTransaction()
QtDartBindings_EXPORT void c_QIODevice__startTransaction(void *thisObj);
// QIODevice::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QIODevice__tr_char_char_int(const char *s, const char *c, int n);
// QIODevice::waitForBytesWritten(int msecs)
QtDartBindings_EXPORT bool c_QIODevice__waitForBytesWritten_int(void *thisObj,
                                                                int msecs);
// QIODevice::waitForReadyRead(int msecs)
QtDartBindings_EXPORT bool c_QIODevice__waitForReadyRead_int(void *thisObj,
                                                             int msecs);
// QIODevice::write(const QByteArray & data)
QtDartBindings_EXPORT qint64 c_QIODevice__write_QByteArray(void *thisObj,
                                                           void *data_);
// QIODevice::write(const char * data)
QtDartBindings_EXPORT qint64 c_QIODevice__write_char(void *thisObj,
                                                     const char *data);
// QIODevice::write(const char * data, qint64 len)
QtDartBindings_EXPORT qint64 c_QIODevice__write_char_qint64(void *thisObj,
                                                            const char *data,
                                                            qint64 len);
// QIODevice::writeChannelCount() const
QtDartBindings_EXPORT int c_QIODevice__writeChannelCount(void *thisObj);
// QIODevice::writeData(const char * data, qint64 len)
QtDartBindings_EXPORT qint64
c_QIODevice__writeData_char_qint64(void *thisObj, const char *data, qint64 len);
QtDartBindings_EXPORT void c_QIODevice__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QIODevice__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
QtDartBindings_EXPORT void c_QIODevice_Finalizer(void *cppObj);
}

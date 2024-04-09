/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QCoreApplication_c.h"

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
void QCoreApplication_wrapper::addLibraryPath(const QString &arg__1) {
  ::QCoreApplication::addLibraryPath(arg__1);
}
QString QCoreApplication_wrapper::applicationDirPath() {
  return ::QCoreApplication::applicationDirPath();
}
QString QCoreApplication_wrapper::applicationFilePath() {
  return ::QCoreApplication::applicationFilePath();
}
QString QCoreApplication_wrapper::applicationName() {
  return ::QCoreApplication::applicationName();
}
void QCoreApplication_wrapper::applicationNameChanged() {
  ::QCoreApplication::applicationNameChanged();
}
qint64 QCoreApplication_wrapper::applicationPid() {
  return ::QCoreApplication::applicationPid();
}
QString QCoreApplication_wrapper::applicationVersion() {
  return ::QCoreApplication::applicationVersion();
}
void QCoreApplication_wrapper::applicationVersionChanged() {
  ::QCoreApplication::applicationVersionChanged();
}
QList<QString> QCoreApplication_wrapper::arguments() {
  return ::QCoreApplication::arguments();
}
bool QCoreApplication_wrapper::closingDown() {
  return ::QCoreApplication::closingDown();
}
void QCoreApplication_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QCoreApplication::customEvent(event);
  }
}
void QCoreApplication_wrapper::customEvent_nocallback(QEvent *event) {
  ::QCoreApplication::customEvent(event);
}
bool QCoreApplication_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QCoreApplication::event(arg__1);
  }
}
bool QCoreApplication_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QCoreApplication::event(arg__1);
}
bool QCoreApplication_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QCoreApplication::eventFilter(watched, event);
  }
}
bool QCoreApplication_wrapper::eventFilter_nocallback(QObject *watched,
                                                      QEvent *event) {
  return ::QCoreApplication::eventFilter(watched, event);
}
int QCoreApplication_wrapper::exec() { return ::QCoreApplication::exec(); }
void QCoreApplication_wrapper::exit(int retcode) {
  ::QCoreApplication::exit(retcode);
}
QCoreApplication *QCoreApplication_wrapper::instance() {
  return ::QCoreApplication::instance();
}
bool QCoreApplication_wrapper::isQuitLockEnabled() {
  return ::QCoreApplication::isQuitLockEnabled();
}
bool QCoreApplication_wrapper::isSetuidAllowed() {
  return ::QCoreApplication::isSetuidAllowed();
}
QList<QString> QCoreApplication_wrapper::libraryPaths() {
  return ::QCoreApplication::libraryPaths();
}
bool QCoreApplication_wrapper::notify(QObject *arg__1, QEvent *arg__2) {
  if (m_notifyCallback) {
    const void *thisPtr = this;
    return m_notifyCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    return ::QCoreApplication::notify(arg__1, arg__2);
  }
}
bool QCoreApplication_wrapper::notify_nocallback(QObject *arg__1,
                                                 QEvent *arg__2) {
  return ::QCoreApplication::notify(arg__1, arg__2);
}
QString QCoreApplication_wrapper::organizationDomain() {
  return ::QCoreApplication::organizationDomain();
}
void QCoreApplication_wrapper::organizationDomainChanged() {
  ::QCoreApplication::organizationDomainChanged();
}
QString QCoreApplication_wrapper::organizationName() {
  return ::QCoreApplication::organizationName();
}
void QCoreApplication_wrapper::organizationNameChanged() {
  ::QCoreApplication::organizationNameChanged();
}
void QCoreApplication_wrapper::postEvent(QObject *receiver, QEvent *event,
                                         int priority) {
  ::QCoreApplication::postEvent(receiver, event, priority);
}
void QCoreApplication_wrapper::processEvents() {
  ::QCoreApplication::processEvents();
}
void QCoreApplication_wrapper::quit() { ::QCoreApplication::quit(); }
void QCoreApplication_wrapper::removeLibraryPath(const QString &arg__1) {
  ::QCoreApplication::removeLibraryPath(arg__1);
}
void QCoreApplication_wrapper::removePostedEvents(QObject *receiver,
                                                  int eventType) {
  ::QCoreApplication::removePostedEvents(receiver, eventType);
}
bool QCoreApplication_wrapper::sendEvent(QObject *receiver, QEvent *event) {
  return ::QCoreApplication::sendEvent(receiver, event);
}
void QCoreApplication_wrapper::sendPostedEvents(QObject *receiver,
                                                int event_type) {
  ::QCoreApplication::sendPostedEvents(receiver, event_type);
}
void QCoreApplication_wrapper::setApplicationName(const QString &application) {
  ::QCoreApplication::setApplicationName(application);
}
void QCoreApplication_wrapper::setApplicationVersion(const QString &version) {
  ::QCoreApplication::setApplicationVersion(version);
}
void QCoreApplication_wrapper::setLibraryPaths(const QList<QString> &arg__1) {
  ::QCoreApplication::setLibraryPaths(arg__1);
}
void QCoreApplication_wrapper::setOrganizationDomain(const QString &orgDomain) {
  ::QCoreApplication::setOrganizationDomain(orgDomain);
}
void QCoreApplication_wrapper::setOrganizationName(const QString &orgName) {
  ::QCoreApplication::setOrganizationName(orgName);
}
void QCoreApplication_wrapper::setQuitLockEnabled(bool enabled) {
  ::QCoreApplication::setQuitLockEnabled(enabled);
}
void QCoreApplication_wrapper::setSetuidAllowed(bool allow) {
  ::QCoreApplication::setSetuidAllowed(allow);
}
bool QCoreApplication_wrapper::startingUp() {
  return ::QCoreApplication::startingUp();
}
QString QCoreApplication_wrapper::tr(const char *s, const char *c, int n) {
  return ::QCoreApplication::tr(s, c, n);
}
QString QCoreApplication_wrapper::translate(const char *context,
                                            const char *key,
                                            const char *disambiguation, int n) {
  return ::QCoreApplication::translate(context, key, disambiguation, n);
}
QCoreApplication_wrapper::~QCoreApplication_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QCoreApplication *fromPtr(void *ptr) {
  return reinterpret_cast<QCoreApplication *>(ptr);
}
static QtDartBindings_wrappersNS::QCoreApplication_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QCoreApplication_wrapper *>(ptr);
}
extern "C" {
void c_QCoreApplication_Finalizer(void *cppObj) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QCoreApplication_wrapper *>(cppObj);
} // addLibraryPath(const QString & arg__1)
void c_static_QCoreApplication__addLibraryPath_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::addLibraryPath(arg__1);
  free((char *)arg__1_);
}
// applicationDirPath()
void *c_static_QCoreApplication__applicationDirPath() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::
          applicationDirPath()};
  return result;
}
// applicationFilePath()
void *c_static_QCoreApplication__applicationFilePath() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::
          applicationFilePath()};
  return result;
}
// applicationName()
void *c_static_QCoreApplication__applicationName() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::applicationName()};
  return result;
}
// applicationNameChanged()
void c_QCoreApplication__applicationNameChanged(void *thisObj) {
  fromPtr(thisObj)->applicationNameChanged();
}
void c_QCoreApplication__onApplicationNameChanged(void *thisObj,
                                                  void *contextQObject,
                                                  void *callback) {
  auto instance = reinterpret_cast<QCoreApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCoreApplication::applicationNameChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// applicationPid()
qint64 c_static_QCoreApplication__applicationPid() {
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::applicationPid();
  return result;
}
// applicationVersion()
void *c_static_QCoreApplication__applicationVersion() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::
          applicationVersion()};
  return result;
}
// applicationVersionChanged()
void c_QCoreApplication__applicationVersionChanged(void *thisObj) {
  fromPtr(thisObj)->applicationVersionChanged();
}
void c_QCoreApplication__onApplicationVersionChanged(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QCoreApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCoreApplication::applicationVersionChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// arguments()
void *c_static_QCoreApplication__arguments() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::arguments()};
  return result;
}
// closingDown()
bool c_static_QCoreApplication__closingDown() {
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::closingDown();
  return result;
}
// customEvent(QEvent * event)
void c_QCoreApplication__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
void c_QCoreApplication__onDestroyed_QObject(void *thisObj,
                                             void *contextQObject,
                                             void *callback) {
  auto instance = reinterpret_cast<QCoreApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCoreApplication::destroyed,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * arg__1)
bool c_QCoreApplication__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QCoreApplication__eventFilter_QObject_QEvent(void *thisObj,
                                                    void *watched_,
                                                    void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QCoreApplication_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// exec()
int c_static_QCoreApplication__exec() {
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::exec();
  return result;
}
// exit(int retcode)
void c_static_QCoreApplication__exit_int(int retcode) {
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::exit(retcode);
}
// instance()
void *c_static_QCoreApplication__instance() {
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::instance();
  return result;
}
// isQuitLockEnabled()
bool c_static_QCoreApplication__isQuitLockEnabled() {
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::isQuitLockEnabled();
  return result;
}
// isSetuidAllowed()
bool c_static_QCoreApplication__isSetuidAllowed() {
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::isSetuidAllowed();
  return result;
}
// libraryPaths()
void *c_static_QCoreApplication__libraryPaths() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::libraryPaths()};
  return result;
}
// notify(QObject * arg__1, QEvent * arg__2)
bool c_QCoreApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                               void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QCoreApplication_wrapper *>(
            targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->notify_nocallback(arg__1, arg__2);
    } else {
      return targetPtr->notify(arg__1, arg__2);
    }
  }();
  return result;
}
// organizationDomain()
void *c_static_QCoreApplication__organizationDomain() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::
          organizationDomain()};
  return result;
}
// organizationDomainChanged()
void c_QCoreApplication__organizationDomainChanged(void *thisObj) {
  fromPtr(thisObj)->organizationDomainChanged();
}
void c_QCoreApplication__onOrganizationDomainChanged(void *thisObj,
                                                     void *contextQObject,
                                                     void *callback) {
  auto instance = reinterpret_cast<QCoreApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCoreApplication::organizationDomainChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// organizationName()
void *c_static_QCoreApplication__organizationName() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::organizationName()};
  return result;
}
// organizationNameChanged()
void c_QCoreApplication__organizationNameChanged(void *thisObj) {
  fromPtr(thisObj)->organizationNameChanged();
}
void c_QCoreApplication__onOrganizationNameChanged(void *thisObj,
                                                   void *contextQObject,
                                                   void *callback) {
  auto instance = reinterpret_cast<QCoreApplication *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QCoreApplication::organizationNameChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// postEvent(QObject * receiver, QEvent * event, int priority)
void c_static_QCoreApplication__postEvent_QObject_QEvent_int(void *receiver_,
                                                             void *event_,
                                                             int priority) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  auto event = reinterpret_cast<QEvent *>(event_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::postEvent(
      receiver, event, priority);
}
// processEvents()
void c_static_QCoreApplication__processEvents() {
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::processEvents();
}
// quit()
void c_static_QCoreApplication__quit() {
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::quit();
}
// removeLibraryPath(const QString & arg__1)
void c_static_QCoreApplication__removeLibraryPath_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::removeLibraryPath(
      arg__1);
  free((char *)arg__1_);
}
// removePostedEvents(QObject * receiver, int eventType)
void c_static_QCoreApplication__removePostedEvents_QObject_int(void *receiver_,
                                                               int eventType) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::removePostedEvents(
      receiver, eventType);
}
// sendEvent(QObject * receiver, QEvent * event)
bool c_static_QCoreApplication__sendEvent_QObject_QEvent(void *receiver_,
                                                         void *event_) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::sendEvent(receiver,
                                                                     event);
  return result;
}
// sendPostedEvents(QObject * receiver, int event_type)
void c_static_QCoreApplication__sendPostedEvents_QObject_int(void *receiver_,
                                                             int event_type) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::sendPostedEvents(
      receiver, event_type);
}
// setApplicationName(const QString & application)
void c_static_QCoreApplication__setApplicationName_QString(
    const char *application_) {
  const auto application = QString::fromUtf8(application_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setApplicationName(
      application);
  free((char *)application_);
}
// setApplicationVersion(const QString & version)
void c_static_QCoreApplication__setApplicationVersion_QString(
    const char *version_) {
  const auto version = QString::fromUtf8(version_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setApplicationVersion(
      version);
  free((char *)version_);
}
// setLibraryPaths(const QList<QString > & arg__1)
void c_static_QCoreApplication__setLibraryPaths_QList_QString(void *arg__1_) {
  assert(arg__1_);
  auto &arg__1 = *reinterpret_cast<QList<QString> *>(arg__1_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setLibraryPaths(arg__1);
}
// setOrganizationDomain(const QString & orgDomain)
void c_static_QCoreApplication__setOrganizationDomain_QString(
    const char *orgDomain_) {
  const auto orgDomain = QString::fromUtf8(orgDomain_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setOrganizationDomain(
      orgDomain);
  free((char *)orgDomain_);
}
// setOrganizationName(const QString & orgName)
void c_static_QCoreApplication__setOrganizationName_QString(
    const char *orgName_) {
  const auto orgName = QString::fromUtf8(orgName_);
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setOrganizationName(
      orgName);
  free((char *)orgName_);
}
// setQuitLockEnabled(bool enabled)
void c_static_QCoreApplication__setQuitLockEnabled_bool(bool enabled) {
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setQuitLockEnabled(
      enabled);
}
// setSetuidAllowed(bool allow)
void c_static_QCoreApplication__setSetuidAllowed_bool(bool allow) {
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setSetuidAllowed(allow);
}
// startingUp()
bool c_static_QCoreApplication__startingUp() {
  const auto &result =
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::startingUp();
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QCoreApplication__tr_char_char_int(const char *s, const char *c,
                                                  int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// translate(const char * context, const char * key, const char *
// disambiguation, int n)
void *c_static_QCoreApplication__translate_char_char_char_int(
    const char *context, const char *key, const char *disambiguation, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::translate(
          context, key, disambiguation, n)};
  free((char *)context);
  free((char *)key);
  free((char *)disambiguation);
  return result;
}
void c_QCoreApplication__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QCoreApplication__registerVirtualMethodCallback(void *ptr,
                                                       void *callback,
                                                       int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCoreApplication_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCoreApplication_wrapper::Callback_event>(
        callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCoreApplication_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 4558:
    wrapper->m_notifyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCoreApplication_wrapper::Callback_notify>(
        callback);
    break;
  }
}
}

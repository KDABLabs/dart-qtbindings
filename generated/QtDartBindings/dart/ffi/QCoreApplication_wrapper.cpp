#include "QCoreApplication_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
void QCoreApplication_wrapper::addLibraryPath(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::addLibraryPath(arg__1);
}
QString QCoreApplication_wrapper::applicationDirPath() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::applicationDirPath();
}
QString QCoreApplication_wrapper::applicationFilePath() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::applicationFilePath();
}
QString QCoreApplication_wrapper::applicationName() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::applicationName();
}
void QCoreApplication_wrapper::applicationNameChanged() {
  // tag=1000

  // tag=1004
  ::QCoreApplication::applicationNameChanged();
}
qint64 QCoreApplication_wrapper::applicationPid() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::applicationPid();
}
QString QCoreApplication_wrapper::applicationVersion() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::applicationVersion();
}
void QCoreApplication_wrapper::applicationVersionChanged() {
  // tag=1000

  // tag=1004
  ::QCoreApplication::applicationVersionChanged();
}
QList<QString> QCoreApplication_wrapper::arguments() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::arguments();
}
bool QCoreApplication_wrapper::closingDown() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::closingDown();
}
void QCoreApplication_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QCoreApplication::customEvent(event);
  }
}
// tag=1009
void QCoreApplication_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QCoreApplication::customEvent(event);
}
bool QCoreApplication_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QCoreApplication::event(arg__1);
  }
}
// tag=1009
bool QCoreApplication_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QCoreApplication::event(arg__1);
}
bool QCoreApplication_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QCoreApplication::eventFilter(watched, event);
  }
}
// tag=1009
bool QCoreApplication_wrapper::eventFilter_nocallback(QObject *watched,
                                                      QEvent *event) {
  // tag=1003
  return ::QCoreApplication::eventFilter(watched, event);
}
int QCoreApplication_wrapper::exec() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::exec();
}
void QCoreApplication_wrapper::exit(int retcode) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::exit(retcode);
}
QCoreApplication *QCoreApplication_wrapper::instance() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::instance();
}
bool QCoreApplication_wrapper::isQuitLockEnabled() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::isQuitLockEnabled();
}
bool QCoreApplication_wrapper::isSetuidAllowed() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::isSetuidAllowed();
}
QList<QString> QCoreApplication_wrapper::libraryPaths() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::libraryPaths();
}
bool QCoreApplication_wrapper::notify(QObject *arg__1, QEvent *arg__2) {
  // tag=1000
  if (m_notifyCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_notifyCallback(const_cast<void *>(thisPtr), arg__1, arg__2);
  } else {
    // tag=1002
    return ::QCoreApplication::notify(arg__1, arg__2);
  }
}
// tag=1009
bool QCoreApplication_wrapper::notify_nocallback(QObject *arg__1,
                                                 QEvent *arg__2) {
  // tag=1003
  return ::QCoreApplication::notify(arg__1, arg__2);
}
QString QCoreApplication_wrapper::organizationDomain() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::organizationDomain();
}
void QCoreApplication_wrapper::organizationDomainChanged() {
  // tag=1000

  // tag=1004
  ::QCoreApplication::organizationDomainChanged();
}
QString QCoreApplication_wrapper::organizationName() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::organizationName();
}
void QCoreApplication_wrapper::organizationNameChanged() {
  // tag=1000

  // tag=1004
  ::QCoreApplication::organizationNameChanged();
}
void QCoreApplication_wrapper::postEvent(QObject *receiver, QEvent *event,
                                         int priority) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::postEvent(receiver, event, priority);
}
void QCoreApplication_wrapper::processEvents() {
  // tag=1000

  // tag=1004
  ::QCoreApplication::processEvents();
}
void QCoreApplication_wrapper::quit() {
  // tag=1000

  // tag=1004
  ::QCoreApplication::quit();
}
void QCoreApplication_wrapper::removeLibraryPath(const QString &arg__1) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::removeLibraryPath(arg__1);
}
void QCoreApplication_wrapper::removePostedEvents(QObject *receiver,
                                                  int eventType) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::removePostedEvents(receiver, eventType);
}
bool QCoreApplication_wrapper::sendEvent(QObject *receiver, QEvent *event) {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::sendEvent(receiver, event);
}
void QCoreApplication_wrapper::sendPostedEvents(QObject *receiver,
                                                int event_type) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::sendPostedEvents(receiver, event_type);
}
void QCoreApplication_wrapper::setApplicationName(const QString &application) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::setApplicationName(application);
}
void QCoreApplication_wrapper::setApplicationVersion(const QString &version) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::setApplicationVersion(version);
}
void QCoreApplication_wrapper::setLibraryPaths(const QList<QString> &arg__1) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::setLibraryPaths(arg__1);
}
void QCoreApplication_wrapper::setOrganizationDomain(const QString &orgDomain) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::setOrganizationDomain(orgDomain);
}
void QCoreApplication_wrapper::setOrganizationName(const QString &orgName) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::setOrganizationName(orgName);
}
void QCoreApplication_wrapper::setQuitLockEnabled(bool enabled) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::setQuitLockEnabled(enabled);
}
void QCoreApplication_wrapper::setSetuidAllowed(bool allow) {
  // tag=1000

  // tag=1004
  ::QCoreApplication::setSetuidAllowed(allow);
}
bool QCoreApplication_wrapper::startingUp() {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::startingUp();
}
QString QCoreApplication_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::tr(s, c, n);
}
QString QCoreApplication_wrapper::translate(const char *context,
                                            const char *key,
                                            const char *disambiguation, int n) {
  // tag=1000

  // tag=1004
  return ::QCoreApplication::translate(context, key, disambiguation, n);
}

// tag=1005
QCoreApplication_wrapper::~QCoreApplication_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QCoreApplication *fromPtr(void *ptr) {
  return reinterpret_cast<QCoreApplication *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QCoreApplication_wrapper *
fromWrapperPtr(void *ptr) {
  return reinterpret_cast<
      QtDartBindings_wrappersNS::QCoreApplication_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QCoreApplication_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<
      QtDartBindings_wrappersNS::QCoreApplication_wrapper *>(cppObj);
}
// tag=1050
// addLibraryPath(const QString & arg__1)
void c_static_QCoreApplication__addLibraryPath_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::addLibraryPath(arg__1);
}

// tag=1050
// applicationDirPath()
void *c_static_QCoreApplication__applicationDirPath() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::
              applicationDirPath()};
}

// tag=1050
// applicationFilePath()
void *c_static_QCoreApplication__applicationFilePath() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::
              applicationFilePath()};
}

// tag=1050
// applicationName()
void *c_static_QCoreApplication__applicationName() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::
              applicationName()};
}

// tag=1050
// applicationNameChanged()
void c_QCoreApplication__applicationNameChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->applicationNameChanged();
}

// tag=1079
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

// tag=1050
// applicationPid()
qint64 c_static_QCoreApplication__applicationPid() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::applicationPid();
}

// tag=1050
// applicationVersion()
void *c_static_QCoreApplication__applicationVersion() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::
              applicationVersion()};
}

// tag=1050
// applicationVersionChanged()
void c_QCoreApplication__applicationVersionChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->applicationVersionChanged();
}

// tag=1079
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

// tag=1050
// arguments()
void *c_static_QCoreApplication__arguments() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::arguments()};
}

// tag=1050
// closingDown()
bool c_static_QCoreApplication__closingDown() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::closingDown();
}

// tag=1050
// customEvent(QEvent * event)
void c_QCoreApplication__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1079
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

// tag=1050
// event(QEvent * arg__1)
bool c_QCoreApplication__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QCoreApplication__eventFilter_QObject_QEvent(void *thisObj,
                                                    void *watched_,
                                                    void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// exec()
int c_static_QCoreApplication__exec() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::exec();
}

// tag=1050
// exit(int retcode)
void c_static_QCoreApplication__exit_int(int retcode) {
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::exit(retcode);
}

// tag=1050
// instance()
void *c_static_QCoreApplication__instance() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::instance();
}

// tag=1050
// isQuitLockEnabled()
bool c_static_QCoreApplication__isQuitLockEnabled() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::isQuitLockEnabled();
}

// tag=1050
// isSetuidAllowed()
bool c_static_QCoreApplication__isSetuidAllowed() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::isSetuidAllowed();
}

// tag=1050
// libraryPaths()
void *c_static_QCoreApplication__libraryPaths() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::libraryPaths()};
}

// tag=1050
// notify(QObject * arg__1, QEvent * arg__2)
bool c_QCoreApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                               void *arg__2_) {
  auto arg__1 = reinterpret_cast<QObject *>(arg__1_);
  auto arg__2 = reinterpret_cast<QEvent *>(arg__2_);
  return
      // tag=1016
      [&] {
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
}

// tag=1050
// organizationDomain()
void *c_static_QCoreApplication__organizationDomain() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::
              organizationDomain()};
}

// tag=1050
// organizationDomainChanged()
void c_QCoreApplication__organizationDomainChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->organizationDomainChanged();
}

// tag=1079
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

// tag=1050
// organizationName()
void *c_static_QCoreApplication__organizationName() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::
              organizationName()};
}

// tag=1050
// organizationNameChanged()
void c_QCoreApplication__organizationNameChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->organizationNameChanged();
}

// tag=1079
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

// tag=1050
// postEvent(QObject * receiver, QEvent * event, int priority)
void c_static_QCoreApplication__postEvent_QObject_QEvent_int(void *receiver_,
                                                             void *event_,
                                                             int priority) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::postEvent(
      receiver, event, priority);
}

// tag=1050
// processEvents()
void c_static_QCoreApplication__processEvents() {
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::processEvents();
}

// tag=1050
// quit()
void c_static_QCoreApplication__quit() {
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::quit();
}

// tag=1050
// removeLibraryPath(const QString & arg__1)
void c_static_QCoreApplication__removeLibraryPath_QString(const char *arg__1_) {
  const auto arg__1 = QString::fromUtf8(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::removeLibraryPath(
      arg__1);
}

// tag=1050
// removePostedEvents(QObject * receiver, int eventType)
void c_static_QCoreApplication__removePostedEvents_QObject_int(void *receiver_,
                                                               int eventType) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::removePostedEvents(
      receiver, eventType);
}

// tag=1050
// sendEvent(QObject * receiver, QEvent * event)
bool c_static_QCoreApplication__sendEvent_QObject_QEvent(void *receiver_,
                                                         void *event_) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::sendEvent(receiver,
                                                                     event);
}

// tag=1050
// sendPostedEvents(QObject * receiver, int event_type)
void c_static_QCoreApplication__sendPostedEvents_QObject_int(void *receiver_,
                                                             int event_type) {
  auto receiver = reinterpret_cast<QObject *>(receiver_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::sendPostedEvents(
      receiver, event_type);
}

// tag=1050
// setApplicationName(const QString & application)
void c_static_QCoreApplication__setApplicationName_QString(
    const char *application_) {
  const auto application = QString::fromUtf8(application_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setApplicationName(
      application);
}

// tag=1050
// setApplicationVersion(const QString & version)
void c_static_QCoreApplication__setApplicationVersion_QString(
    const char *version_) {
  const auto version = QString::fromUtf8(version_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setApplicationVersion(
      version);
}

// tag=1050
// setLibraryPaths(const QList<QString > & arg__1)
void c_static_QCoreApplication__setLibraryPaths_QList_QString(void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QList<QString> *>(arg__1_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setLibraryPaths(arg__1);
}

// tag=1050
// setOrganizationDomain(const QString & orgDomain)
void c_static_QCoreApplication__setOrganizationDomain_QString(
    const char *orgDomain_) {
  const auto orgDomain = QString::fromUtf8(orgDomain_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setOrganizationDomain(
      orgDomain);
}

// tag=1050
// setOrganizationName(const QString & orgName)
void c_static_QCoreApplication__setOrganizationName_QString(
    const char *orgName_) {
  const auto orgName = QString::fromUtf8(orgName_);
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setOrganizationName(
      orgName);
}

// tag=1050
// setQuitLockEnabled(bool enabled)
void c_static_QCoreApplication__setQuitLockEnabled_bool(bool enabled) {
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setQuitLockEnabled(
      enabled);
}

// tag=1050
// setSetuidAllowed(bool allow)
void c_static_QCoreApplication__setSetuidAllowed_bool(bool allow) {
  // tag=1068
  QtDartBindings_wrappersNS::QCoreApplication_wrapper::setSetuidAllowed(allow);
}

// tag=1050
// startingUp()
bool c_static_QCoreApplication__startingUp() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QCoreApplication_wrapper::startingUp();
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QCoreApplication__tr_char_char_int(const char *s, const char *c,
                                                  int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::tr(s, c, n)};
}

// tag=1050
// translate(const char * context, const char * key, const char *
// disambiguation, int n)
void *c_static_QCoreApplication__translate_char_char_char_int(
    const char *context, const char *key, const char *disambiguation, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QCoreApplication_wrapper::translate(
              context, key, disambiguation, n)};
}
void c_QCoreApplication__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QCoreApplication__registerVirtualMethodCallback(void *ptr,
                                                       void *callback,
                                                       int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCoreApplication_wrapper::
                             Callback_customEvent>(callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCoreApplication_wrapper::Callback_event>(
        callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback =
        reinterpret_cast<QtDartBindings_wrappersNS::QCoreApplication_wrapper::
                             Callback_eventFilter>(callback);
    break;
  case 4539:
    wrapper->m_notifyCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QCoreApplication_wrapper::Callback_notify>(
        callback);
    break;
  }
}
}

/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
class QCoreApplication_wrapper : public ::QCoreApplication {
public:
  ~QCoreApplication_wrapper();
  static void addLibraryPath(const QString &arg__1);
  static QString applicationDirPath();
  static QString applicationFilePath();
  static QString applicationName();
  void applicationNameChanged();
  static qint64 applicationPid();
  static QString applicationVersion();
  void applicationVersionChanged();
  static QList<QString> arguments();
  static bool closingDown();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  static int exec();
  static void exit(int retcode = 0);
  static QCoreApplication *instance();
  static bool isQuitLockEnabled();
  static bool isSetuidAllowed();
  static QList<QString> libraryPaths();
  virtual bool notify(QObject *arg__1, QEvent *arg__2);
  virtual bool notify_nocallback(QObject *arg__1, QEvent *arg__2);
  static QString organizationDomain();
  void organizationDomainChanged();
  static QString organizationName();
  void organizationNameChanged();
  static void postEvent(QObject *receiver, QEvent *event,
                        int priority = Qt::NormalEventPriority);
  static void processEvents();
  static void quit();
  static void removeLibraryPath(const QString &arg__1);
  static void removePostedEvents(QObject *receiver, int eventType = 0);
  static bool sendEvent(QObject *receiver, QEvent *event);
  static void sendPostedEvents(QObject *receiver = nullptr, int event_type = 0);
  static void setApplicationName(const QString &application);
  static void setApplicationVersion(const QString &version);
  static void setLibraryPaths(const QList<QString> &arg__1);
  static void setOrganizationDomain(const QString &orgDomain);
  static void setOrganizationName(const QString &orgName);
  static void setQuitLockEnabled(bool enabled);
  static void setSetuidAllowed(bool allow);
  static bool startingUp();
  static QString tr(const char *s, const char *c, int n);
  static QString translate(const char *context, const char *key,
                           const char *disambiguation = nullptr, int n = -1);
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef bool (*Callback_notify)(void *, QObject *arg__1, QEvent *arg__2);
  Callback_notify m_notifyCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QCoreApplication::addLibraryPath(const QString & arg__1)
QtDartBindings_EXPORT void
c_static_QCoreApplication__addLibraryPath_QString(const char *arg__1_);
// QCoreApplication::applicationDirPath()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationDirPath();
// QCoreApplication::applicationFilePath()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationFilePath();
// QCoreApplication::applicationName()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationName();
// QCoreApplication::applicationNameChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__applicationNameChanged(void *thisObj);
QtDartBindings_EXPORT void c_QCoreApplication__onApplicationNameChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::applicationPid()
QtDartBindings_EXPORT qint64 c_static_QCoreApplication__applicationPid();
// QCoreApplication::applicationVersion()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationVersion();
// QCoreApplication::applicationVersionChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__applicationVersionChanged(void *thisObj);
QtDartBindings_EXPORT void c_QCoreApplication__onApplicationVersionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::arguments()
QtDartBindings_EXPORT void *c_static_QCoreApplication__arguments();
// QCoreApplication::closingDown()
QtDartBindings_EXPORT bool c_static_QCoreApplication__closingDown();
// QCoreApplication::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QCoreApplication__customEvent_QEvent(void *thisObj,
                                                                  void *event_);
// QCoreApplication::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QCoreApplication__event_QEvent(void *thisObj,
                                                            void *arg__1_);
// QCoreApplication::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QCoreApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);
// QCoreApplication::exec()
QtDartBindings_EXPORT int c_static_QCoreApplication__exec();
// QCoreApplication::exit(int retcode)
QtDartBindings_EXPORT void c_static_QCoreApplication__exit_int(int retcode);
// QCoreApplication::instance()
QtDartBindings_EXPORT void *c_static_QCoreApplication__instance();
// QCoreApplication::isQuitLockEnabled()
QtDartBindings_EXPORT bool c_static_QCoreApplication__isQuitLockEnabled();
// QCoreApplication::isSetuidAllowed()
QtDartBindings_EXPORT bool c_static_QCoreApplication__isSetuidAllowed();
// QCoreApplication::libraryPaths()
QtDartBindings_EXPORT void *c_static_QCoreApplication__libraryPaths();
// QCoreApplication::notify(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QCoreApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                          void *arg__2_);
// QCoreApplication::organizationDomain()
QtDartBindings_EXPORT void *c_static_QCoreApplication__organizationDomain();
// QCoreApplication::organizationDomainChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__organizationDomainChanged(void *thisObj);
QtDartBindings_EXPORT void c_QCoreApplication__onOrganizationDomainChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::organizationName()
QtDartBindings_EXPORT void *c_static_QCoreApplication__organizationName();
// QCoreApplication::organizationNameChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__organizationNameChanged(void *thisObj);
QtDartBindings_EXPORT void c_QCoreApplication__onOrganizationNameChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QCoreApplication::postEvent(QObject * receiver, QEvent *
                     // event, int priority)
QtDartBindings_EXPORT void
c_static_QCoreApplication__postEvent_QObject_QEvent_int(void *receiver_,
                                                        void *event_,
                                                        int priority);
// QCoreApplication::processEvents()
QtDartBindings_EXPORT void c_static_QCoreApplication__processEvents();
// QCoreApplication::quit()
QtDartBindings_EXPORT void c_static_QCoreApplication__quit();
// QCoreApplication::removeLibraryPath(const QString & arg__1)
QtDartBindings_EXPORT void
c_static_QCoreApplication__removeLibraryPath_QString(const char *arg__1_);
// QCoreApplication::removePostedEvents(QObject * receiver, int eventType)
QtDartBindings_EXPORT void
c_static_QCoreApplication__removePostedEvents_QObject_int(void *receiver_,
                                                          int eventType);
// QCoreApplication::sendEvent(QObject * receiver, QEvent * event)
QtDartBindings_EXPORT bool
c_static_QCoreApplication__sendEvent_QObject_QEvent(void *receiver_,
                                                    void *event_);
// QCoreApplication::sendPostedEvents(QObject * receiver, int event_type)
QtDartBindings_EXPORT void
c_static_QCoreApplication__sendPostedEvents_QObject_int(void *receiver_,
                                                        int event_type);
// QCoreApplication::setApplicationName(const QString & application)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setApplicationName_QString(const char *application_);
// QCoreApplication::setApplicationVersion(const QString & version)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setApplicationVersion_QString(const char *version_);
// QCoreApplication::setLibraryPaths(const QList<QString > & arg__1)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setLibraryPaths_QList_QString(void *arg__1_);
// QCoreApplication::setOrganizationDomain(const QString & orgDomain)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setOrganizationDomain_QString(
    const char *orgDomain_);
// QCoreApplication::setOrganizationName(const QString & orgName)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setOrganizationName_QString(const char *orgName_);
// QCoreApplication::setQuitLockEnabled(bool enabled)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setQuitLockEnabled_bool(bool enabled);
// QCoreApplication::setSetuidAllowed(bool allow)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setSetuidAllowed_bool(bool allow);
// QCoreApplication::startingUp()
QtDartBindings_EXPORT bool c_static_QCoreApplication__startingUp();
// QCoreApplication::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QCoreApplication__tr_char_char_int(const char *s, const char *c,
                                            int n);
// QCoreApplication::translate(const char * context, const char * key, const
// char * disambiguation, int n)
QtDartBindings_EXPORT void *
c_static_QCoreApplication__translate_char_char_char_int(
    const char *context, const char *key, const char *disambiguation, int n);
QtDartBindings_EXPORT void c_QCoreApplication__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QCoreApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
QtDartBindings_EXPORT void c_QCoreApplication_Finalizer(void *cppObj);
}

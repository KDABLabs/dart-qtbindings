
// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QCoreApplication_wrapper : public ::QCoreApplication {
public:
  ~QCoreApplication_wrapper();
  // tag=1041
  static void addLibraryPath(const QString &arg__1);
  // tag=1041
  static QString applicationDirPath();
  // tag=1041
  static QString applicationFilePath();
  // tag=1041
  static QString applicationName();
  // tag=1041
  void applicationNameChanged();
  // tag=1041
  static qint64 applicationPid();
  // tag=1041
  static QString applicationVersion();
  // tag=1041
  void applicationVersionChanged();
  // tag=1041
  static QList<QString> arguments();
  // tag=1041
  static bool closingDown();
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual bool event(QEvent *arg__1);
  // tag=1008
  virtual bool event_nocallback(QEvent *arg__1);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  static int exec();
  // tag=1041
  static void exit(int retcode = 0);
  // tag=1041
  static QCoreApplication *instance();
  // tag=1041
  static bool isQuitLockEnabled();
  // tag=1041
  static bool isSetuidAllowed();
  // tag=1041
  static QList<QString> libraryPaths();
  // tag=1041
  virtual bool notify(QObject *arg__1, QEvent *arg__2);
  // tag=1008
  virtual bool notify_nocallback(QObject *arg__1, QEvent *arg__2);
  // tag=1041
  static QString organizationDomain();
  // tag=1041
  void organizationDomainChanged();
  // tag=1041
  static QString organizationName();
  // tag=1041
  void organizationNameChanged();
  // tag=1041
  static void postEvent(QObject *receiver, QEvent *event,
                        int priority = Qt::NormalEventPriority);
  // tag=1041
  static void processEvents();
  // tag=1041
  static void quit();
  // tag=1041
  static void removeLibraryPath(const QString &arg__1);
  // tag=1041
  static void removePostedEvents(QObject *receiver, int eventType = 0);
  // tag=1041
  static bool sendEvent(QObject *receiver, QEvent *event);
  // tag=1041
  static void sendPostedEvents(QObject *receiver = nullptr, int event_type = 0);
  // tag=1041
  static void setApplicationName(const QString &application);
  // tag=1041
  static void setApplicationVersion(const QString &version);
  // tag=1041
  static void setLibraryPaths(const QList<QString> &arg__1);
  // tag=1041
  static void setOrganizationDomain(const QString &orgDomain);
  // tag=1041
  static void setOrganizationName(const QString &orgName);
  // tag=1041
  static void setQuitLockEnabled(bool enabled);
  // tag=1041
  static void setSetuidAllowed(bool allow);
  // tag=1041
  static bool startingUp();
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  static QString translate(const char *context, const char *key,
                           const char *disambiguation = nullptr, int n = -1);
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_notify)(void *, QObject *arg__1, QEvent *arg__2);
  Callback_notify m_notifyCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QCoreApplication::addLibraryPath(const QString & arg__1)
QtDartBindings_EXPORT void
c_static_QCoreApplication__addLibraryPath_QString(const char *arg__1_);

// tag=1067
//  QCoreApplication::applicationDirPath()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationDirPath();

// tag=1067
//  QCoreApplication::applicationFilePath()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationFilePath();

// tag=1067
//  QCoreApplication::applicationName()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationName();

// tag=1067
//  QCoreApplication::applicationNameChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__applicationNameChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QCoreApplication__onApplicationNameChanged(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QCoreApplication::applicationPid()
QtDartBindings_EXPORT qint64 c_static_QCoreApplication__applicationPid();

// tag=1067
//  QCoreApplication::applicationVersion()
QtDartBindings_EXPORT void *c_static_QCoreApplication__applicationVersion();

// tag=1067
//  QCoreApplication::applicationVersionChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__applicationVersionChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QCoreApplication__onApplicationVersionChanged(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QCoreApplication::arguments()
QtDartBindings_EXPORT void *c_static_QCoreApplication__arguments();

// tag=1067
//  QCoreApplication::closingDown()
QtDartBindings_EXPORT bool c_static_QCoreApplication__closingDown();

// tag=1067
//  QCoreApplication::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QCoreApplication__customEvent_QEvent(void *thisObj,
                                                                  void *event_);

// tag=1067
//  QCoreApplication::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QCoreApplication__event_QEvent(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QCoreApplication::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QCoreApplication__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                               void *event_);

// tag=1067
//  QCoreApplication::exec()
QtDartBindings_EXPORT int c_static_QCoreApplication__exec();

// tag=1067
//  QCoreApplication::exit(int retcode)
QtDartBindings_EXPORT void c_static_QCoreApplication__exit_int(int retcode);

// tag=1067
//  QCoreApplication::instance()
QtDartBindings_EXPORT void *c_static_QCoreApplication__instance();

// tag=1067
//  QCoreApplication::isQuitLockEnabled()
QtDartBindings_EXPORT bool c_static_QCoreApplication__isQuitLockEnabled();

// tag=1067
//  QCoreApplication::isSetuidAllowed()
QtDartBindings_EXPORT bool c_static_QCoreApplication__isSetuidAllowed();

// tag=1067
//  QCoreApplication::libraryPaths()
QtDartBindings_EXPORT void *c_static_QCoreApplication__libraryPaths();

// tag=1067
//  QCoreApplication::notify(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QCoreApplication__notify_QObject_QEvent(void *thisObj, void *arg__1_,
                                          void *arg__2_);

// tag=1067
//  QCoreApplication::organizationDomain()
QtDartBindings_EXPORT void *c_static_QCoreApplication__organizationDomain();

// tag=1067
//  QCoreApplication::organizationDomainChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__organizationDomainChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QCoreApplication__onOrganizationDomainChanged(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QCoreApplication::organizationName()
QtDartBindings_EXPORT void *c_static_QCoreApplication__organizationName();

// tag=1067
//  QCoreApplication::organizationNameChanged()
QtDartBindings_EXPORT void
c_QCoreApplication__organizationNameChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QCoreApplication__onOrganizationNameChanged(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QCoreApplication::postEvent(QObject * receiver, QEvent * event, int
//  priority)
QtDartBindings_EXPORT void
c_static_QCoreApplication__postEvent_QObject_QEvent_int(void *receiver_,
                                                        void *event_,
                                                        int priority);

// tag=1067
//  QCoreApplication::processEvents()
QtDartBindings_EXPORT void c_static_QCoreApplication__processEvents();

// tag=1067
//  QCoreApplication::quit()
QtDartBindings_EXPORT void c_static_QCoreApplication__quit();

// tag=1067
//  QCoreApplication::removeLibraryPath(const QString & arg__1)
QtDartBindings_EXPORT void
c_static_QCoreApplication__removeLibraryPath_QString(const char *arg__1_);

// tag=1067
//  QCoreApplication::removePostedEvents(QObject * receiver, int eventType)
QtDartBindings_EXPORT void
c_static_QCoreApplication__removePostedEvents_QObject_int(void *receiver_,
                                                          int eventType);

// tag=1067
//  QCoreApplication::sendEvent(QObject * receiver, QEvent * event)
QtDartBindings_EXPORT bool
c_static_QCoreApplication__sendEvent_QObject_QEvent(void *receiver_,
                                                    void *event_);

// tag=1067
//  QCoreApplication::sendPostedEvents(QObject * receiver, int event_type)
QtDartBindings_EXPORT void
c_static_QCoreApplication__sendPostedEvents_QObject_int(void *receiver_,
                                                        int event_type);

// tag=1067
//  QCoreApplication::setApplicationName(const QString & application)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setApplicationName_QString(const char *application_);

// tag=1067
//  QCoreApplication::setApplicationVersion(const QString & version)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setApplicationVersion_QString(const char *version_);

// tag=1067
//  QCoreApplication::setLibraryPaths(const QList<QString > & arg__1)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setLibraryPaths_QList_QString(void *arg__1_);

// tag=1067
//  QCoreApplication::setOrganizationDomain(const QString & orgDomain)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setOrganizationDomain_QString(
    const char *orgDomain_);

// tag=1067
//  QCoreApplication::setOrganizationName(const QString & orgName)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setOrganizationName_QString(const char *orgName_);

// tag=1067
//  QCoreApplication::setQuitLockEnabled(bool enabled)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setQuitLockEnabled_bool(bool enabled);

// tag=1067
//  QCoreApplication::setSetuidAllowed(bool allow)
QtDartBindings_EXPORT void
c_static_QCoreApplication__setSetuidAllowed_bool(bool allow);

// tag=1067
//  QCoreApplication::startingUp()
QtDartBindings_EXPORT bool c_static_QCoreApplication__startingUp();

// tag=1067
//  QCoreApplication::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QCoreApplication__tr_char_char_int(const char *s, const char *c,
                                            int n);

// tag=1067
//  QCoreApplication::translate(const char * context, const char * key, const
//  char * disambiguation, int n)
QtDartBindings_EXPORT void *
c_static_QCoreApplication__translate_char_char_char_int(
    const char *context, const char *key, const char *disambiguation, int n);

// tag=1066
QtDartBindings_EXPORT void c_QCoreApplication__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QCoreApplication__registerVirtualMethodCallback(void *ptr, void *callback,
                                                  int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QCoreApplication_Finalizer(void *, void *cppObj,
                                                        void *);
}

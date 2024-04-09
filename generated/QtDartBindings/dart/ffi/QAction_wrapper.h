
// tag=1040
#include "QtDartBindings_exports.h"
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qobject.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QAction_wrapper : public ::QAction {
public:
  ~QAction_wrapper();
  // tag=1041
  QAction_wrapper(QObject *parent = nullptr);
  // tag=1041
  QAction_wrapper(const QIcon &icon, const QString &text,
                  QObject *parent = nullptr);
  // tag=1041
  QAction_wrapper(const QString &text, QObject *parent = nullptr);
  // tag=1041
  QList<QObject *> associatedObjects() const;
  // tag=1041
  bool autoRepeat() const;
  // tag=1041
  void changed();
  // tag=1041
  void checkableChanged(bool checkable);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  QVariant data() const;
  // tag=1041
  void enabledChanged(bool enabled);
  // tag=1041
  virtual bool event(QEvent *arg__1);
  // tag=1008
  virtual bool event_nocallback(QEvent *arg__1);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  QFont font() const;
  // tag=1041
  void hover();
  // tag=1041
  void hovered();
  // tag=1041
  QIcon icon() const;
  // tag=1041
  QString iconText() const;
  // tag=1041
  bool isCheckable() const;
  // tag=1041
  bool isChecked() const;
  // tag=1041
  bool isEnabled() const;
  // tag=1041
  bool isIconVisibleInMenu() const;
  // tag=1041
  bool isSeparator() const;
  // tag=1041
  bool isShortcutVisibleInContextMenu() const;
  // tag=1041
  bool isVisible() const;
  // tag=1041
  void resetEnabled();
  // tag=1041
  void setAutoRepeat(bool arg__1);
  // tag=1041
  void setCheckable(bool arg__1);
  // tag=1041
  void setChecked(bool arg__1);
  // tag=1041
  void setData(const QVariant &var);
  // tag=1041
  void setDisabled(bool b);
  // tag=1041
  void setEnabled(bool arg__1);
  // tag=1041
  void setFont(const QFont &font);
  // tag=1041
  void setIcon(const QIcon &icon);
  // tag=1041
  void setIconText(const QString &text);
  // tag=1041
  void setIconVisibleInMenu(bool visible);
  // tag=1041
  void setSeparator(bool b);
  // tag=1041
  void setShortcut(const QKeySequence &shortcut);
  // tag=1041
  void setShortcutVisibleInContextMenu(bool show);
  // tag=1041
  void setShortcuts(QKeySequence::StandardKey arg__1);
  // tag=1041
  void setShortcuts(const QList<QKeySequence> &shortcuts);
  // tag=1041
  void setStatusTip(const QString &statusTip);
  // tag=1041
  void setText(const QString &text);
  // tag=1041
  void setToolTip(const QString &tip);
  // tag=1041
  void setVisible(bool arg__1);
  // tag=1041
  void setWhatsThis(const QString &what);
  // tag=1041
  QKeySequence shortcut() const;
  // tag=1041
  QList<QKeySequence> shortcuts() const;
  // tag=1041
  bool showStatusText(QObject *object = nullptr);
  // tag=1041
  QString statusTip() const;
  // tag=1041
  QString text() const;
  // tag=1041
  void toggle();
  // tag=1041
  void toggled(bool arg__1);
  // tag=1041
  QString toolTip() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void trigger();
  // tag=1041
  void triggered(bool checked = false);
  // tag=1041
  void visibleChanged();
  // tag=1041
  QString whatsThis() const;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QAction::QAction(QObject * parent)
QtDartBindings_EXPORT void *c_QAction__constructor_QObject(void *parent_);

// tag=1067
//  QAction::QAction(const QIcon & icon, const QString & text, QObject * parent)
QtDartBindings_EXPORT void *
c_QAction__constructor_QIcon_QString_QObject(void *icon_, const char *text_,
                                             void *parent_);

// tag=1067
//  QAction::QAction(const QString & text, QObject * parent)
QtDartBindings_EXPORT void *
c_QAction__constructor_QString_QObject(const char *text_, void *parent_);

// tag=1067
//  QAction::associatedObjects() const
QtDartBindings_EXPORT void *c_QAction__associatedObjects(void *thisObj);

// tag=1067
//  QAction::autoRepeat() const
QtDartBindings_EXPORT bool c_QAction__autoRepeat(void *thisObj);

// tag=1067
//  QAction::changed()
QtDartBindings_EXPORT void c_QAction__changed(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QAction__onChanged(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAction::checkableChanged(bool checkable)
QtDartBindings_EXPORT void c_QAction__checkableChanged_bool(void *thisObj,
                                                            bool checkable);

// tag=1078
QtDartBindings_EXPORT void
c_QAction__onCheckableChanged_bool(void *thisObj, void *contextQObject,
                                   void *callback);
// tag=1067
//  QAction::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAction__customEvent_QEvent(void *thisObj,
                                                         void *event_);

// tag=1067
//  QAction::data() const
QtDartBindings_EXPORT void *c_QAction__data(void *thisObj);

// tag=1067
//  QAction::enabledChanged(bool enabled)
QtDartBindings_EXPORT void c_QAction__enabledChanged_bool(void *thisObj,
                                                          bool enabled);

// tag=1078
QtDartBindings_EXPORT void
c_QAction__onEnabledChanged_bool(void *thisObj, void *contextQObject,
                                 void *callback);
// tag=1067
//  QAction::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QAction__event_QEvent(void *thisObj,
                                                   void *arg__1_);

// tag=1067
//  QAction::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QAction__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);

// tag=1067
//  QAction::font() const
QtDartBindings_EXPORT void *c_QAction__font(void *thisObj);

// tag=1067
//  QAction::hover()
QtDartBindings_EXPORT void c_QAction__hover(void *thisObj);

// tag=1067
//  QAction::hovered()
QtDartBindings_EXPORT void c_QAction__hovered(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QAction__onHovered(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAction::icon() const
QtDartBindings_EXPORT void *c_QAction__icon(void *thisObj);

// tag=1067
//  QAction::iconText() const
QtDartBindings_EXPORT void *c_QAction__iconText(void *thisObj);

// tag=1067
//  QAction::isCheckable() const
QtDartBindings_EXPORT bool c_QAction__isCheckable(void *thisObj);

// tag=1067
//  QAction::isChecked() const
QtDartBindings_EXPORT bool c_QAction__isChecked(void *thisObj);

// tag=1067
//  QAction::isEnabled() const
QtDartBindings_EXPORT bool c_QAction__isEnabled(void *thisObj);

// tag=1067
//  QAction::isIconVisibleInMenu() const
QtDartBindings_EXPORT bool c_QAction__isIconVisibleInMenu(void *thisObj);

// tag=1067
//  QAction::isSeparator() const
QtDartBindings_EXPORT bool c_QAction__isSeparator(void *thisObj);

// tag=1067
//  QAction::isShortcutVisibleInContextMenu() const
QtDartBindings_EXPORT bool
c_QAction__isShortcutVisibleInContextMenu(void *thisObj);

// tag=1067
//  QAction::isVisible() const
QtDartBindings_EXPORT bool c_QAction__isVisible(void *thisObj);

// tag=1067
//  QAction::resetEnabled()
QtDartBindings_EXPORT void c_QAction__resetEnabled(void *thisObj);

// tag=1067
//  QAction::setAutoRepeat(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setAutoRepeat_bool(void *thisObj,
                                                         bool arg__1);

// tag=1067
//  QAction::setCheckable(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setCheckable_bool(void *thisObj,
                                                        bool arg__1);

// tag=1067
//  QAction::setChecked(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setChecked_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QAction::setData(const QVariant & var)
QtDartBindings_EXPORT void c_QAction__setData_QVariant(void *thisObj,
                                                       void *var_);

// tag=1067
//  QAction::setDisabled(bool b)
QtDartBindings_EXPORT void c_QAction__setDisabled_bool(void *thisObj, bool b);

// tag=1067
//  QAction::setEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setEnabled_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QAction::setFont(const QFont & font)
QtDartBindings_EXPORT void c_QAction__setFont_QFont(void *thisObj, void *font_);

// tag=1067
//  QAction::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QAction__setIcon_QIcon(void *thisObj, void *icon_);

// tag=1067
//  QAction::setIconText(const QString & text)
QtDartBindings_EXPORT void c_QAction__setIconText_QString(void *thisObj,
                                                          const char *text_);

// tag=1067
//  QAction::setIconVisibleInMenu(bool visible)
QtDartBindings_EXPORT void c_QAction__setIconVisibleInMenu_bool(void *thisObj,
                                                                bool visible);

// tag=1067
//  QAction::setSeparator(bool b)
QtDartBindings_EXPORT void c_QAction__setSeparator_bool(void *thisObj, bool b);

// tag=1067
//  QAction::setShortcut(const QKeySequence & shortcut)
QtDartBindings_EXPORT void c_QAction__setShortcut_QKeySequence(void *thisObj,
                                                               void *shortcut_);

// tag=1067
//  QAction::setShortcutVisibleInContextMenu(bool show)
QtDartBindings_EXPORT void
c_QAction__setShortcutVisibleInContextMenu_bool(void *thisObj, bool show);

// tag=1067
//  QAction::setShortcuts(QKeySequence::StandardKey arg__1)
QtDartBindings_EXPORT void c_QAction__setShortcuts_StandardKey(void *thisObj,
                                                               int arg__1);

// tag=1067
//  QAction::setShortcuts(const QList<QKeySequence > & shortcuts)
QtDartBindings_EXPORT void
c_QAction__setShortcuts_QList_QKeySequence(void *thisObj, void *shortcuts_);

// tag=1067
//  QAction::setStatusTip(const QString & statusTip)
QtDartBindings_EXPORT void
c_QAction__setStatusTip_QString(void *thisObj, const char *statusTip_);

// tag=1067
//  QAction::setText(const QString & text)
QtDartBindings_EXPORT void c_QAction__setText_QString(void *thisObj,
                                                      const char *text_);

// tag=1067
//  QAction::setToolTip(const QString & tip)
QtDartBindings_EXPORT void c_QAction__setToolTip_QString(void *thisObj,
                                                         const char *tip_);

// tag=1067
//  QAction::setVisible(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setVisible_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QAction::setWhatsThis(const QString & what)
QtDartBindings_EXPORT void c_QAction__setWhatsThis_QString(void *thisObj,
                                                           const char *what_);

// tag=1067
//  QAction::shortcut() const
QtDartBindings_EXPORT void *c_QAction__shortcut(void *thisObj);

// tag=1067
//  QAction::shortcuts() const
QtDartBindings_EXPORT void *c_QAction__shortcuts(void *thisObj);

// tag=1067
//  QAction::showStatusText(QObject * object)
QtDartBindings_EXPORT bool c_QAction__showStatusText_QObject(void *thisObj,
                                                             void *object_);

// tag=1067
//  QAction::statusTip() const
QtDartBindings_EXPORT void *c_QAction__statusTip(void *thisObj);

// tag=1067
//  QAction::text() const
QtDartBindings_EXPORT void *c_QAction__text(void *thisObj);

// tag=1067
//  QAction::toggle()
QtDartBindings_EXPORT void c_QAction__toggle(void *thisObj);

// tag=1067
//  QAction::toggled(bool arg__1)
QtDartBindings_EXPORT void c_QAction__toggled_bool(void *thisObj, bool arg__1);

// tag=1078
QtDartBindings_EXPORT void
c_QAction__onToggled_bool(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QAction::toolTip() const
QtDartBindings_EXPORT void *c_QAction__toolTip(void *thisObj);

// tag=1067
//  QAction::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAction__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QAction::trigger()
QtDartBindings_EXPORT void c_QAction__trigger(void *thisObj);

// tag=1067
//  QAction::triggered(bool checked)
QtDartBindings_EXPORT void c_QAction__triggered_bool(void *thisObj,
                                                     bool checked);

// tag=1078
QtDartBindings_EXPORT void c_QAction__onTriggered_bool(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback);
// tag=1067
//  QAction::visibleChanged()
QtDartBindings_EXPORT void c_QAction__visibleChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QAction__onVisibleChanged(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback);
// tag=1067
//  QAction::whatsThis() const
QtDartBindings_EXPORT void *c_QAction__whatsThis(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QAction__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QAction__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QAction_Finalizer(void *, void *cppObj, void *);
}

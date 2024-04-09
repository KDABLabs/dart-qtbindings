/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QAction_wrapper : public ::QAction {
public:
  ~QAction_wrapper();
  QAction_wrapper(QObject *parent = nullptr);
  QAction_wrapper(const QIcon &icon, const QString &text,
                  QObject *parent = nullptr);
  QAction_wrapper(const QString &text, QObject *parent = nullptr);
  QList<QObject *> associatedObjects() const;
  bool autoRepeat() const;
  void changed();
  void checkableChanged(bool checkable);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  QVariant data() const;
  void enabledChanged(bool enabled);
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  QFont font() const;
  void hover();
  void hovered();
  QIcon icon() const;
  QString iconText() const;
  bool isCheckable() const;
  bool isChecked() const;
  bool isEnabled() const;
  bool isIconVisibleInMenu() const;
  bool isSeparator() const;
  bool isShortcutVisibleInContextMenu() const;
  bool isVisible() const;
  void resetEnabled();
  void setAutoRepeat(bool arg__1);
  void setCheckable(bool arg__1);
  void setChecked(bool arg__1);
  void setData(const QVariant &var);
  void setDisabled(bool b);
  void setEnabled(bool arg__1);
  void setFont(const QFont &font);
  void setIcon(const QIcon &icon);
  void setIconText(const QString &text);
  void setIconVisibleInMenu(bool visible);
  void setSeparator(bool b);
  void setShortcut(const QKeySequence &shortcut);
  void setShortcutVisibleInContextMenu(bool show);
  void setShortcuts(QKeySequence::StandardKey arg__1);
  void setShortcuts(const QList<QKeySequence> &shortcuts);
  void setStatusTip(const QString &statusTip);
  void setText(const QString &text);
  void setToolTip(const QString &tip);
  void setVisible(bool arg__1);
  void setWhatsThis(const QString &what);
  QKeySequence shortcut() const;
  QList<QKeySequence> shortcuts() const;
  bool showStatusText(QObject *object = nullptr);
  QString statusTip() const;
  QString text() const;
  void toggle();
  void toggled(bool arg__1);
  QString toolTip() const;
  static QString tr(const char *s, const char *c, int n);
  void trigger();
  void triggered(bool checked = false);
  void visibleChanged();
  QString whatsThis() const;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QAction::QAction(QObject * parent)
QtDartBindings_EXPORT void *c_QAction__constructor_QObject(void *parent_);
// QAction::QAction(const QIcon & icon, const QString & text, QObject * parent)
QtDartBindings_EXPORT void *
c_QAction__constructor_QIcon_QString_QObject(void *icon_, const char *text_,
                                             void *parent_);
// QAction::QAction(const QString & text, QObject * parent)
QtDartBindings_EXPORT void *
c_QAction__constructor_QString_QObject(const char *text_, void *parent_);
// QAction::associatedObjects() const
QtDartBindings_EXPORT void *c_QAction__associatedObjects(void *thisObj);
// QAction::autoRepeat() const
QtDartBindings_EXPORT bool c_QAction__autoRepeat(void *thisObj);
// QAction::changed()
QtDartBindings_EXPORT void c_QAction__changed(void *thisObj);
QtDartBindings_EXPORT void c_QAction__onChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QAction::checkableChanged(bool checkable)
QtDartBindings_EXPORT void c_QAction__checkableChanged_bool(void *thisObj,
                                                            bool checkable);
QtDartBindings_EXPORT void c_QAction__onCheckableChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QAction::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QAction__customEvent_QEvent(void *thisObj,
                                                         void *event_);
// QAction::data() const
QtDartBindings_EXPORT void *c_QAction__data(void *thisObj);
// QAction::enabledChanged(bool enabled)
QtDartBindings_EXPORT void c_QAction__enabledChanged_bool(void *thisObj,
                                                          bool enabled);
QtDartBindings_EXPORT void c_QAction__onEnabledChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QAction::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QAction__event_QEvent(void *thisObj,
                                                   void *arg__1_);
// QAction::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QAction__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);
// QAction::font() const
QtDartBindings_EXPORT void *c_QAction__font(void *thisObj);
// QAction::hover()
QtDartBindings_EXPORT void c_QAction__hover(void *thisObj);
// QAction::hovered()
QtDartBindings_EXPORT void c_QAction__hovered(void *thisObj);
QtDartBindings_EXPORT void
c_QAction__onHovered(void *thisObj, void *contextQObject,
                     void *callback); // QAction::icon() const
QtDartBindings_EXPORT void *c_QAction__icon(void *thisObj);
// QAction::iconText() const
QtDartBindings_EXPORT void *c_QAction__iconText(void *thisObj);
// QAction::isCheckable() const
QtDartBindings_EXPORT bool c_QAction__isCheckable(void *thisObj);
// QAction::isChecked() const
QtDartBindings_EXPORT bool c_QAction__isChecked(void *thisObj);
// QAction::isEnabled() const
QtDartBindings_EXPORT bool c_QAction__isEnabled(void *thisObj);
// QAction::isIconVisibleInMenu() const
QtDartBindings_EXPORT bool c_QAction__isIconVisibleInMenu(void *thisObj);
// QAction::isSeparator() const
QtDartBindings_EXPORT bool c_QAction__isSeparator(void *thisObj);
// QAction::isShortcutVisibleInContextMenu() const
QtDartBindings_EXPORT bool
c_QAction__isShortcutVisibleInContextMenu(void *thisObj);
// QAction::isVisible() const
QtDartBindings_EXPORT bool c_QAction__isVisible(void *thisObj);
// QAction::resetEnabled()
QtDartBindings_EXPORT void c_QAction__resetEnabled(void *thisObj);
// QAction::setAutoRepeat(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setAutoRepeat_bool(void *thisObj,
                                                         bool arg__1);
// QAction::setCheckable(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setCheckable_bool(void *thisObj,
                                                        bool arg__1);
// QAction::setChecked(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setChecked_bool(void *thisObj,
                                                      bool arg__1);
// QAction::setData(const QVariant & var)
QtDartBindings_EXPORT void c_QAction__setData_QVariant(void *thisObj,
                                                       void *var_);
// QAction::setDisabled(bool b)
QtDartBindings_EXPORT void c_QAction__setDisabled_bool(void *thisObj, bool b);
// QAction::setEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setEnabled_bool(void *thisObj,
                                                      bool arg__1);
// QAction::setFont(const QFont & font)
QtDartBindings_EXPORT void c_QAction__setFont_QFont(void *thisObj, void *font_);
// QAction::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QAction__setIcon_QIcon(void *thisObj, void *icon_);
// QAction::setIconText(const QString & text)
QtDartBindings_EXPORT void c_QAction__setIconText_QString(void *thisObj,
                                                          const char *text_);
// QAction::setIconVisibleInMenu(bool visible)
QtDartBindings_EXPORT void c_QAction__setIconVisibleInMenu_bool(void *thisObj,
                                                                bool visible);
// QAction::setSeparator(bool b)
QtDartBindings_EXPORT void c_QAction__setSeparator_bool(void *thisObj, bool b);
// QAction::setShortcut(const QKeySequence & shortcut)
QtDartBindings_EXPORT void c_QAction__setShortcut_QKeySequence(void *thisObj,
                                                               void *shortcut_);
// QAction::setShortcutVisibleInContextMenu(bool show)
QtDartBindings_EXPORT void
c_QAction__setShortcutVisibleInContextMenu_bool(void *thisObj, bool show);
// QAction::setShortcuts(QKeySequence::StandardKey arg__1)
QtDartBindings_EXPORT void c_QAction__setShortcuts_StandardKey(void *thisObj,
                                                               int arg__1);
// QAction::setShortcuts(const QList<QKeySequence > & shortcuts)
QtDartBindings_EXPORT void
c_QAction__setShortcuts_QList_QKeySequence(void *thisObj, void *shortcuts_);
// QAction::setStatusTip(const QString & statusTip)
QtDartBindings_EXPORT void
c_QAction__setStatusTip_QString(void *thisObj, const char *statusTip_);
// QAction::setText(const QString & text)
QtDartBindings_EXPORT void c_QAction__setText_QString(void *thisObj,
                                                      const char *text_);
// QAction::setToolTip(const QString & tip)
QtDartBindings_EXPORT void c_QAction__setToolTip_QString(void *thisObj,
                                                         const char *tip_);
// QAction::setVisible(bool arg__1)
QtDartBindings_EXPORT void c_QAction__setVisible_bool(void *thisObj,
                                                      bool arg__1);
// QAction::setWhatsThis(const QString & what)
QtDartBindings_EXPORT void c_QAction__setWhatsThis_QString(void *thisObj,
                                                           const char *what_);
// QAction::shortcut() const
QtDartBindings_EXPORT void *c_QAction__shortcut(void *thisObj);
// QAction::shortcuts() const
QtDartBindings_EXPORT void *c_QAction__shortcuts(void *thisObj);
// QAction::showStatusText(QObject * object)
QtDartBindings_EXPORT bool c_QAction__showStatusText_QObject(void *thisObj,
                                                             void *object_);
// QAction::statusTip() const
QtDartBindings_EXPORT void *c_QAction__statusTip(void *thisObj);
// QAction::text() const
QtDartBindings_EXPORT void *c_QAction__text(void *thisObj);
// QAction::toggle()
QtDartBindings_EXPORT void c_QAction__toggle(void *thisObj);
// QAction::toggled(bool arg__1)
QtDartBindings_EXPORT void c_QAction__toggled_bool(void *thisObj, bool arg__1);
QtDartBindings_EXPORT void
c_QAction__onToggled_bool(void *thisObj, void *contextQObject,
                          void *callback); // QAction::toolTip() const
QtDartBindings_EXPORT void *c_QAction__toolTip(void *thisObj);
// QAction::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QAction__tr_char_char_int(const char *s, const char *c, int n);
// QAction::trigger()
QtDartBindings_EXPORT void c_QAction__trigger(void *thisObj);
// QAction::triggered(bool checked)
QtDartBindings_EXPORT void c_QAction__triggered_bool(void *thisObj,
                                                     bool checked);
QtDartBindings_EXPORT void
c_QAction__onTriggered_bool(void *thisObj, void *contextQObject,
                            void *callback); // QAction::visibleChanged()
QtDartBindings_EXPORT void c_QAction__visibleChanged(void *thisObj);
QtDartBindings_EXPORT void
c_QAction__onVisibleChanged(void *thisObj, void *contextQObject,
                            void *callback); // QAction::whatsThis() const
QtDartBindings_EXPORT void *c_QAction__whatsThis(void *thisObj);
QtDartBindings_EXPORT void c_QAction__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QAction__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
QtDartBindings_EXPORT void c_QAction_Finalizer(void *cppObj);
}

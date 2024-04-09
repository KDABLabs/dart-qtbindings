/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QAction_c.h"

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
QAction_wrapper::QAction_wrapper(QObject *parent) : ::QAction(parent) {}
QAction_wrapper::QAction_wrapper(const QIcon &icon, const QString &text,
                                 QObject *parent)
    : ::QAction(icon, text, parent) {}
QAction_wrapper::QAction_wrapper(const QString &text, QObject *parent)
    : ::QAction(text, parent) {}
QList<QObject *> QAction_wrapper::associatedObjects() const {
  return ::QAction::associatedObjects();
}
bool QAction_wrapper::autoRepeat() const { return ::QAction::autoRepeat(); }
void QAction_wrapper::changed() { ::QAction::changed(); }
void QAction_wrapper::checkableChanged(bool checkable) {
  ::QAction::checkableChanged(checkable);
}
void QAction_wrapper::customEvent(QEvent *event) {
  if (m_customEventCallback) {
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    ::QAction::customEvent(event);
  }
}
void QAction_wrapper::customEvent_nocallback(QEvent *event) {
  ::QAction::customEvent(event);
}
QVariant QAction_wrapper::data() const { return ::QAction::data(); }
void QAction_wrapper::enabledChanged(bool enabled) {
  ::QAction::enabledChanged(enabled);
}
bool QAction_wrapper::event(QEvent *arg__1) {
  if (m_eventCallback) {
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    return ::QAction::event(arg__1);
  }
}
bool QAction_wrapper::event_nocallback(QEvent *arg__1) {
  return ::QAction::event(arg__1);
}
bool QAction_wrapper::eventFilter(QObject *watched, QEvent *event) {
  if (m_eventFilterCallback) {
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    return ::QAction::eventFilter(watched, event);
  }
}
bool QAction_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  return ::QAction::eventFilter(watched, event);
}
QFont QAction_wrapper::font() const { return ::QAction::font(); }
void QAction_wrapper::hover() { ::QAction::hover(); }
void QAction_wrapper::hovered() { ::QAction::hovered(); }
QIcon QAction_wrapper::icon() const { return ::QAction::icon(); }
QString QAction_wrapper::iconText() const { return ::QAction::iconText(); }
bool QAction_wrapper::isCheckable() const { return ::QAction::isCheckable(); }
bool QAction_wrapper::isChecked() const { return ::QAction::isChecked(); }
bool QAction_wrapper::isEnabled() const { return ::QAction::isEnabled(); }
bool QAction_wrapper::isIconVisibleInMenu() const {
  return ::QAction::isIconVisibleInMenu();
}
bool QAction_wrapper::isSeparator() const { return ::QAction::isSeparator(); }
bool QAction_wrapper::isShortcutVisibleInContextMenu() const {
  return ::QAction::isShortcutVisibleInContextMenu();
}
bool QAction_wrapper::isVisible() const { return ::QAction::isVisible(); }
void QAction_wrapper::resetEnabled() { ::QAction::resetEnabled(); }
void QAction_wrapper::setAutoRepeat(bool arg__1) {
  ::QAction::setAutoRepeat(arg__1);
}
void QAction_wrapper::setCheckable(bool arg__1) {
  ::QAction::setCheckable(arg__1);
}
void QAction_wrapper::setChecked(bool arg__1) { ::QAction::setChecked(arg__1); }
void QAction_wrapper::setData(const QVariant &var) { ::QAction::setData(var); }
void QAction_wrapper::setDisabled(bool b) { ::QAction::setDisabled(b); }
void QAction_wrapper::setEnabled(bool arg__1) { ::QAction::setEnabled(arg__1); }
void QAction_wrapper::setFont(const QFont &font) { ::QAction::setFont(font); }
void QAction_wrapper::setIcon(const QIcon &icon) { ::QAction::setIcon(icon); }
void QAction_wrapper::setIconText(const QString &text) {
  ::QAction::setIconText(text);
}
void QAction_wrapper::setIconVisibleInMenu(bool visible) {
  ::QAction::setIconVisibleInMenu(visible);
}
void QAction_wrapper::setSeparator(bool b) { ::QAction::setSeparator(b); }
void QAction_wrapper::setShortcut(const QKeySequence &shortcut) {
  ::QAction::setShortcut(shortcut);
}
void QAction_wrapper::setShortcutVisibleInContextMenu(bool show) {
  ::QAction::setShortcutVisibleInContextMenu(show);
}
void QAction_wrapper::setShortcuts(QKeySequence::StandardKey arg__1) {
  ::QAction::setShortcuts(arg__1);
}
void QAction_wrapper::setShortcuts(const QList<QKeySequence> &shortcuts) {
  ::QAction::setShortcuts(shortcuts);
}
void QAction_wrapper::setStatusTip(const QString &statusTip) {
  ::QAction::setStatusTip(statusTip);
}
void QAction_wrapper::setText(const QString &text) { ::QAction::setText(text); }
void QAction_wrapper::setToolTip(const QString &tip) {
  ::QAction::setToolTip(tip);
}
void QAction_wrapper::setVisible(bool arg__1) { ::QAction::setVisible(arg__1); }
void QAction_wrapper::setWhatsThis(const QString &what) {
  ::QAction::setWhatsThis(what);
}
QKeySequence QAction_wrapper::shortcut() const { return ::QAction::shortcut(); }
QList<QKeySequence> QAction_wrapper::shortcuts() const {
  return ::QAction::shortcuts();
}
bool QAction_wrapper::showStatusText(QObject *object) {
  return ::QAction::showStatusText(object);
}
QString QAction_wrapper::statusTip() const { return ::QAction::statusTip(); }
QString QAction_wrapper::text() const { return ::QAction::text(); }
void QAction_wrapper::toggle() { ::QAction::toggle(); }
void QAction_wrapper::toggled(bool arg__1) { ::QAction::toggled(arg__1); }
QString QAction_wrapper::toolTip() const { return ::QAction::toolTip(); }
QString QAction_wrapper::tr(const char *s, const char *c, int n) {
  return ::QAction::tr(s, c, n);
}
void QAction_wrapper::trigger() { ::QAction::trigger(); }
void QAction_wrapper::triggered(bool checked) { ::QAction::triggered(checked); }
void QAction_wrapper::visibleChanged() { ::QAction::visibleChanged(); }
QString QAction_wrapper::whatsThis() const { return ::QAction::whatsThis(); }
QAction_wrapper::~QAction_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QAction *fromPtr(void *ptr) { return reinterpret_cast<QAction *>(ptr); }
static QtDartBindings_wrappersNS::QAction_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QAction_wrapper *>(ptr);
}
extern "C" {
void c_QAction_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QAction_wrapper *>(cppObj);
}
void *c_QAction__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAction_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QAction__constructor_QIcon_QString_QObject(void *icon_,
                                                   const char *text_,
                                                   void *parent_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAction_wrapper(icon, text, parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QAction__constructor_QString_QObject(const char *text_, void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  auto ptr = new QtDartBindings_wrappersNS::QAction_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}
// associatedObjects() const
void *c_QAction__associatedObjects(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QObject *>>{
      fromPtr(thisObj)->associatedObjects()};
  return result;
}
// autoRepeat() const
bool c_QAction__autoRepeat(void *thisObj) {
  const auto &result = fromPtr(thisObj)->autoRepeat();
  return result;
}
// changed()
void c_QAction__changed(void *thisObj) { fromPtr(thisObj)->changed(); }
void c_QAction__onChanged(void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::changed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// checkableChanged(bool checkable)
void c_QAction__checkableChanged_bool(void *thisObj, bool checkable) {
  fromPtr(thisObj)->checkableChanged(checkable);
}
void c_QAction__onCheckableChanged_bool(void *thisObj, void *contextQObject,
                                        void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::checkableChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// customEvent(QEvent * event)
void c_QAction__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}
// data() const
void *c_QAction__data(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QVariant>{fromPtr(thisObj)->data()};
  return result;
}
void c_QAction__onDestroyed_QObject(void *thisObj, void *contextQObject,
                                    void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::destroyed, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// enabledChanged(bool enabled)
void c_QAction__enabledChanged_bool(void *thisObj, bool enabled) {
  fromPtr(thisObj)->enabledChanged(enabled);
}
void c_QAction__onEnabledChanged_bool(void *thisObj, void *contextQObject,
                                      void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::enabledChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// event(QEvent * arg__1)
bool c_QAction__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  const auto &result = fromWrapperPtr(thisObj)->event_nocallback(arg__1);
  return result;
}
// eventFilter(QObject * watched, QEvent * event)
bool c_QAction__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  const auto &result = [&] {
    auto targetPtr = fromPtr(thisObj);
    auto wrapperPtr =
        dynamic_cast<QtDartBindings_wrappersNS::QAction_wrapper *>(targetPtr);
    if (wrapperPtr) {
      return wrapperPtr->eventFilter_nocallback(watched, event);
    } else {
      return targetPtr->eventFilter(watched, event);
    }
  }();
  return result;
}
// font() const
void *c_QAction__font(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->font()};
  return result;
}
// hover()
void c_QAction__hover(void *thisObj) { fromPtr(thisObj)->hover(); }
// hovered()
void c_QAction__hovered(void *thisObj) { fromPtr(thisObj)->hovered(); }
void c_QAction__onHovered(void *thisObj, void *contextQObject, void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::hovered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// icon() const
void *c_QAction__icon(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
  return result;
}
// iconText() const
void *c_QAction__iconText(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->iconText()};
  return result;
}
// isCheckable() const
bool c_QAction__isCheckable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isCheckable();
  return result;
}
// isChecked() const
bool c_QAction__isChecked(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isChecked();
  return result;
}
// isEnabled() const
bool c_QAction__isEnabled(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isEnabled();
  return result;
}
// isIconVisibleInMenu() const
bool c_QAction__isIconVisibleInMenu(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isIconVisibleInMenu();
  return result;
}
// isSeparator() const
bool c_QAction__isSeparator(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSeparator();
  return result;
}
// isShortcutVisibleInContextMenu() const
bool c_QAction__isShortcutVisibleInContextMenu(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isShortcutVisibleInContextMenu();
  return result;
}
// isVisible() const
bool c_QAction__isVisible(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isVisible();
  return result;
}
// resetEnabled()
void c_QAction__resetEnabled(void *thisObj) {
  fromPtr(thisObj)->resetEnabled();
}
// setAutoRepeat(bool arg__1)
void c_QAction__setAutoRepeat_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setAutoRepeat(arg__1);
}
// setCheckable(bool arg__1)
void c_QAction__setCheckable_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setCheckable(arg__1);
}
// setChecked(bool arg__1)
void c_QAction__setChecked_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setChecked(arg__1);
}
// setData(const QVariant & var)
void c_QAction__setData_QVariant(void *thisObj, void *var_) {
  assert(var_);
  auto &var = *reinterpret_cast<QVariant *>(var_);
  fromPtr(thisObj)->setData(var);
}
// setDisabled(bool b)
void c_QAction__setDisabled_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setDisabled(b);
}
// setEnabled(bool arg__1)
void c_QAction__setEnabled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setEnabled(arg__1);
}
// setFont(const QFont & font)
void c_QAction__setFont_QFont(void *thisObj, void *font_) {
  assert(font_);
  auto &font = *reinterpret_cast<QFont *>(font_);
  fromPtr(thisObj)->setFont(font);
}
// setIcon(const QIcon & icon)
void c_QAction__setIcon_QIcon(void *thisObj, void *icon_) {
  assert(icon_);
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  fromPtr(thisObj)->setIcon(icon);
}
// setIconText(const QString & text)
void c_QAction__setIconText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setIconText(text);
  free((char *)text_);
}
// setIconVisibleInMenu(bool visible)
void c_QAction__setIconVisibleInMenu_bool(void *thisObj, bool visible) {
  fromPtr(thisObj)->setIconVisibleInMenu(visible);
}
// setSeparator(bool b)
void c_QAction__setSeparator_bool(void *thisObj, bool b) {
  fromPtr(thisObj)->setSeparator(b);
}
// setShortcut(const QKeySequence & shortcut)
void c_QAction__setShortcut_QKeySequence(void *thisObj, void *shortcut_) {
  assert(shortcut_);
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  fromPtr(thisObj)->setShortcut(shortcut);
}
// setShortcutVisibleInContextMenu(bool show)
void c_QAction__setShortcutVisibleInContextMenu_bool(void *thisObj, bool show) {
  fromPtr(thisObj)->setShortcutVisibleInContextMenu(show);
}
// setShortcuts(QKeySequence::StandardKey arg__1)
void c_QAction__setShortcuts_StandardKey(void *thisObj, int arg__1) {
  fromPtr(thisObj)->setShortcuts(
      static_cast<QKeySequence::StandardKey>(arg__1));
}
// setShortcuts(const QList<QKeySequence > & shortcuts)
void c_QAction__setShortcuts_QList_QKeySequence(void *thisObj,
                                                void *shortcuts_) {
  assert(shortcuts_);
  auto &shortcuts = *reinterpret_cast<QList<QKeySequence> *>(shortcuts_);
  fromPtr(thisObj)->setShortcuts(shortcuts);
}
// setStatusTip(const QString & statusTip)
void c_QAction__setStatusTip_QString(void *thisObj, const char *statusTip_) {
  const auto statusTip = QString::fromUtf8(statusTip_);
  fromPtr(thisObj)->setStatusTip(statusTip);
  free((char *)statusTip_);
}
// setText(const QString & text)
void c_QAction__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  fromPtr(thisObj)->setText(text);
  free((char *)text_);
}
// setToolTip(const QString & tip)
void c_QAction__setToolTip_QString(void *thisObj, const char *tip_) {
  const auto tip = QString::fromUtf8(tip_);
  fromPtr(thisObj)->setToolTip(tip);
  free((char *)tip_);
}
// setVisible(bool arg__1)
void c_QAction__setVisible_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->setVisible(arg__1);
}
// setWhatsThis(const QString & what)
void c_QAction__setWhatsThis_QString(void *thisObj, const char *what_) {
  const auto what = QString::fromUtf8(what_);
  fromPtr(thisObj)->setWhatsThis(what);
  free((char *)what_);
}
// shortcut() const
void *c_QAction__shortcut(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QKeySequence>{fromPtr(thisObj)->shortcut()};
  return result;
}
// shortcuts() const
void *c_QAction__shortcuts(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QKeySequence>>{
      fromPtr(thisObj)->shortcuts()};
  return result;
}
// showStatusText(QObject * object)
bool c_QAction__showStatusText_QObject(void *thisObj, void *object_) {
  auto object = reinterpret_cast<QObject *>(object_);
  const auto &result = fromPtr(thisObj)->showStatusText(object);
  return result;
}
// statusTip() const
void *c_QAction__statusTip(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->statusTip()};
  return result;
}
// text() const
void *c_QAction__text(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
  return result;
}
// toggle()
void c_QAction__toggle(void *thisObj) { fromPtr(thisObj)->toggle(); }
// toggled(bool arg__1)
void c_QAction__toggled_bool(void *thisObj, bool arg__1) {
  fromPtr(thisObj)->toggled(arg__1);
}
void c_QAction__onToggled_bool(void *thisObj, void *contextQObject,
                               void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::toggled, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// toolTip() const
void *c_QAction__toolTip(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toolTip()};
  return result;
}
// tr(const char * s, const char * c, int n)
void *c_static_QAction__tr_char_char_int(const char *s, const char *c, int n) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QAction_wrapper::tr(s, c, n)};
  free((char *)s);
  free((char *)c);
  return result;
}
// trigger()
void c_QAction__trigger(void *thisObj) { fromPtr(thisObj)->trigger(); }
// triggered(bool checked)
void c_QAction__triggered_bool(void *thisObj, bool checked) {
  fromPtr(thisObj)->triggered(checked);
}
void c_QAction__onTriggered_bool(void *thisObj, void *contextQObject,
                                 void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::triggered, context ? context : instance,
                   [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// visibleChanged()
void c_QAction__visibleChanged(void *thisObj) {
  fromPtr(thisObj)->visibleChanged();
}
void c_QAction__onVisibleChanged(void *thisObj, void *contextQObject,
                                 void *callback) {
  auto instance = reinterpret_cast<QAction *>(thisObj);
  auto context = reinterpret_cast<QObject *>(contextQObject);
  QObject::connect(instance, &QAction::visibleChanged,
                   context ? context : instance, [thisObj, callback] {
                     typedef void (*SignalHandler_callback)(void *);
                     auto dartCallback =
                         reinterpret_cast<SignalHandler_callback>(callback);
                     dartCallback(thisObj);
                   });
}
// whatsThis() const
void *c_QAction__whatsThis(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
  return result;
}
void c_QAction__destructor(void *thisObj) { delete fromPtr(thisObj); }
void c_QAction__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 946:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAction_wrapper::Callback_customEvent>(
        callback);
    break;
  case 956:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAction_wrapper::Callback_event>(callback);
    break;
  case 957:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAction_wrapper::Callback_eventFilter>(
        callback);
    break;
  }
}
}

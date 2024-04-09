#include "QAction_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QAction_wrapper::QAction_wrapper(QObject *parent) : ::QAction(parent) {}

// tag=1006
QAction_wrapper::QAction_wrapper(const QIcon &icon, const QString &text,
                                 QObject *parent)
    : ::QAction(icon, text, parent) {}

// tag=1006
QAction_wrapper::QAction_wrapper(const QString &text, QObject *parent)
    : ::QAction(text, parent) {}
QList<QObject *> QAction_wrapper::associatedObjects() const {
  // tag=1000

  // tag=1004
  return ::QAction::associatedObjects();
}
bool QAction_wrapper::autoRepeat() const {
  // tag=1000

  // tag=1004
  return ::QAction::autoRepeat();
}
void QAction_wrapper::changed() {
  // tag=1000

  // tag=1004
  ::QAction::changed();
}
void QAction_wrapper::checkableChanged(bool checkable) {
  // tag=1000

  // tag=1004
  ::QAction::checkableChanged(checkable);
}
void QAction_wrapper::customEvent(QEvent *event) {
  // tag=1000
  if (m_customEventCallback) {
    // tag=1001
    const void *thisPtr = this;
    m_customEventCallback(const_cast<void *>(thisPtr), event);
  } else {
    // tag=1002
    ::QAction::customEvent(event);
  }
}
// tag=1009
void QAction_wrapper::customEvent_nocallback(QEvent *event) {
  // tag=1003
  ::QAction::customEvent(event);
}
QVariant QAction_wrapper::data() const {
  // tag=1000

  // tag=1004
  return ::QAction::data();
}
void QAction_wrapper::enabledChanged(bool enabled) {
  // tag=1000

  // tag=1004
  ::QAction::enabledChanged(enabled);
}
bool QAction_wrapper::event(QEvent *arg__1) {
  // tag=1000
  if (m_eventCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventCallback(const_cast<void *>(thisPtr), arg__1);
  } else {
    // tag=1002
    return ::QAction::event(arg__1);
  }
}
// tag=1009
bool QAction_wrapper::event_nocallback(QEvent *arg__1) {
  // tag=1003
  return ::QAction::event(arg__1);
}
bool QAction_wrapper::eventFilter(QObject *watched, QEvent *event) {
  // tag=1000
  if (m_eventFilterCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_eventFilterCallback(const_cast<void *>(thisPtr), watched, event);
  } else {
    // tag=1002
    return ::QAction::eventFilter(watched, event);
  }
}
// tag=1009
bool QAction_wrapper::eventFilter_nocallback(QObject *watched, QEvent *event) {
  // tag=1003
  return ::QAction::eventFilter(watched, event);
}
QFont QAction_wrapper::font() const {
  // tag=1000

  // tag=1004
  return ::QAction::font();
}
void QAction_wrapper::hover() {
  // tag=1000

  // tag=1004
  ::QAction::hover();
}
void QAction_wrapper::hovered() {
  // tag=1000

  // tag=1004
  ::QAction::hovered();
}
QIcon QAction_wrapper::icon() const {
  // tag=1000

  // tag=1004
  return ::QAction::icon();
}
QString QAction_wrapper::iconText() const {
  // tag=1000

  // tag=1004
  return ::QAction::iconText();
}
bool QAction_wrapper::isCheckable() const {
  // tag=1000

  // tag=1004
  return ::QAction::isCheckable();
}
bool QAction_wrapper::isChecked() const {
  // tag=1000

  // tag=1004
  return ::QAction::isChecked();
}
bool QAction_wrapper::isEnabled() const {
  // tag=1000

  // tag=1004
  return ::QAction::isEnabled();
}
bool QAction_wrapper::isIconVisibleInMenu() const {
  // tag=1000

  // tag=1004
  return ::QAction::isIconVisibleInMenu();
}
bool QAction_wrapper::isSeparator() const {
  // tag=1000

  // tag=1004
  return ::QAction::isSeparator();
}
bool QAction_wrapper::isShortcutVisibleInContextMenu() const {
  // tag=1000

  // tag=1004
  return ::QAction::isShortcutVisibleInContextMenu();
}
bool QAction_wrapper::isVisible() const {
  // tag=1000

  // tag=1004
  return ::QAction::isVisible();
}
void QAction_wrapper::resetEnabled() {
  // tag=1000

  // tag=1004
  ::QAction::resetEnabled();
}
void QAction_wrapper::setAutoRepeat(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAction::setAutoRepeat(arg__1);
}
void QAction_wrapper::setCheckable(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAction::setCheckable(arg__1);
}
void QAction_wrapper::setChecked(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAction::setChecked(arg__1);
}
void QAction_wrapper::setData(const QVariant &var) {
  // tag=1000

  // tag=1004
  ::QAction::setData(var);
}
void QAction_wrapper::setDisabled(bool b) {
  // tag=1000

  // tag=1004
  ::QAction::setDisabled(b);
}
void QAction_wrapper::setEnabled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAction::setEnabled(arg__1);
}
void QAction_wrapper::setFont(const QFont &font) {
  // tag=1000

  // tag=1004
  ::QAction::setFont(font);
}
void QAction_wrapper::setIcon(const QIcon &icon) {
  // tag=1000

  // tag=1004
  ::QAction::setIcon(icon);
}
void QAction_wrapper::setIconText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QAction::setIconText(text);
}
void QAction_wrapper::setIconVisibleInMenu(bool visible) {
  // tag=1000

  // tag=1004
  ::QAction::setIconVisibleInMenu(visible);
}
void QAction_wrapper::setSeparator(bool b) {
  // tag=1000

  // tag=1004
  ::QAction::setSeparator(b);
}
void QAction_wrapper::setShortcut(const QKeySequence &shortcut) {
  // tag=1000

  // tag=1004
  ::QAction::setShortcut(shortcut);
}
void QAction_wrapper::setShortcutVisibleInContextMenu(bool show) {
  // tag=1000

  // tag=1004
  ::QAction::setShortcutVisibleInContextMenu(show);
}
void QAction_wrapper::setShortcuts(QKeySequence::StandardKey arg__1) {
  // tag=1000

  // tag=1004
  ::QAction::setShortcuts(arg__1);
}
void QAction_wrapper::setShortcuts(const QList<QKeySequence> &shortcuts) {
  // tag=1000

  // tag=1004
  ::QAction::setShortcuts(shortcuts);
}
void QAction_wrapper::setStatusTip(const QString &statusTip) {
  // tag=1000

  // tag=1004
  ::QAction::setStatusTip(statusTip);
}
void QAction_wrapper::setText(const QString &text) {
  // tag=1000

  // tag=1004
  ::QAction::setText(text);
}
void QAction_wrapper::setToolTip(const QString &tip) {
  // tag=1000

  // tag=1004
  ::QAction::setToolTip(tip);
}
void QAction_wrapper::setVisible(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAction::setVisible(arg__1);
}
void QAction_wrapper::setWhatsThis(const QString &what) {
  // tag=1000

  // tag=1004
  ::QAction::setWhatsThis(what);
}
QKeySequence QAction_wrapper::shortcut() const {
  // tag=1000

  // tag=1004
  return ::QAction::shortcut();
}
QList<QKeySequence> QAction_wrapper::shortcuts() const {
  // tag=1000

  // tag=1004
  return ::QAction::shortcuts();
}
bool QAction_wrapper::showStatusText(QObject *object) {
  // tag=1000

  // tag=1004
  return ::QAction::showStatusText(object);
}
QString QAction_wrapper::statusTip() const {
  // tag=1000

  // tag=1004
  return ::QAction::statusTip();
}
QString QAction_wrapper::text() const {
  // tag=1000

  // tag=1004
  return ::QAction::text();
}
void QAction_wrapper::toggle() {
  // tag=1000

  // tag=1004
  ::QAction::toggle();
}
void QAction_wrapper::toggled(bool arg__1) {
  // tag=1000

  // tag=1004
  ::QAction::toggled(arg__1);
}
QString QAction_wrapper::toolTip() const {
  // tag=1000

  // tag=1004
  return ::QAction::toolTip();
}
QString QAction_wrapper::tr(const char *s, const char *c, int n) {
  // tag=1000

  // tag=1004
  return ::QAction::tr(s, c, n);
}
void QAction_wrapper::trigger() {
  // tag=1000

  // tag=1004
  ::QAction::trigger();
}
void QAction_wrapper::triggered(bool checked) {
  // tag=1000

  // tag=1004
  ::QAction::triggered(checked);
}
void QAction_wrapper::visibleChanged() {
  // tag=1000

  // tag=1004
  ::QAction::visibleChanged();
}
QString QAction_wrapper::whatsThis() const {
  // tag=1000

  // tag=1004
  return ::QAction::whatsThis();
}

// tag=1005
QAction_wrapper::~QAction_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QAction *fromPtr(void *ptr) { return reinterpret_cast<QAction *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QAction_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QAction_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QAction_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QAction_wrapper *>(cppObj);
}
void *c_QAction__constructor_QObject(void *parent_) {
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAction_wrapper(parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QAction__constructor_QIcon_QString_QObject(void *icon_,
                                                   const char *text_,
                                                   void *parent_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAction_wrapper(icon, text, parent);
  return reinterpret_cast<void *>(ptr);
}
void *c_QAction__constructor_QString_QObject(const char *text_, void *parent_) {
  const auto text = QString::fromUtf8(text_);
  auto parent = reinterpret_cast<QObject *>(parent_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QAction_wrapper(text, parent);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// associatedObjects() const
void *c_QAction__associatedObjects(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QObject *>>{
          fromPtr(thisObj)->associatedObjects()};
}

// tag=1050
// autoRepeat() const
bool c_QAction__autoRepeat(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->autoRepeat();
}

// tag=1050
// changed()
void c_QAction__changed(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->changed();
}

// tag=1079
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

// tag=1050
// checkableChanged(bool checkable)
void c_QAction__checkableChanged_bool(void *thisObj, bool checkable) {
  // tag=1010
  fromPtr(thisObj)->checkableChanged(checkable);
}

// tag=1079
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

// tag=1050
// customEvent(QEvent * event)
void c_QAction__customEvent_QEvent(void *thisObj, void *event_) {
  auto event = reinterpret_cast<QEvent *>(event_);
  // tag=1011

  // tag=1074
  fromWrapperPtr(thisObj)->customEvent_nocallback(event);
}

// tag=1050
// data() const
void *c_QAction__data(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QVariant>{fromPtr(thisObj)->data()};
}

// tag=1079
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

// tag=1050
// enabledChanged(bool enabled)
void c_QAction__enabledChanged_bool(void *thisObj, bool enabled) {
  // tag=1010
  fromPtr(thisObj)->enabledChanged(enabled);
}

// tag=1079
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

// tag=1050
// event(QEvent * arg__1)
bool c_QAction__event_QEvent(void *thisObj, void *arg__1_) {
  auto arg__1 = reinterpret_cast<QEvent *>(arg__1_);
  return
      // tag=1011

      // tag=1074
      fromWrapperPtr(thisObj)->event_nocallback(arg__1);
}

// tag=1050
// eventFilter(QObject * watched, QEvent * event)
bool c_QAction__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                           void *event_) {
  auto watched = reinterpret_cast<QObject *>(watched_);
  auto event = reinterpret_cast<QEvent *>(event_);
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QAction_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->eventFilter_nocallback(watched, event);
        } else {
          return targetPtr->eventFilter(watched, event);
        }
      }();
}

// tag=1050
// font() const
void *c_QAction__font(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QFont>{fromPtr(thisObj)->font()};
}

// tag=1050
// hover()
void c_QAction__hover(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->hover();
}

// tag=1050
// hovered()
void c_QAction__hovered(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->hovered();
}

// tag=1079
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

// tag=1050
// icon() const
void *c_QAction__icon(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{fromPtr(thisObj)->icon()};
}

// tag=1050
// iconText() const
void *c_QAction__iconText(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->iconText()};
}

// tag=1050
// isCheckable() const
bool c_QAction__isCheckable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isCheckable();
}

// tag=1050
// isChecked() const
bool c_QAction__isChecked(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isChecked();
}

// tag=1050
// isEnabled() const
bool c_QAction__isEnabled(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isEnabled();
}

// tag=1050
// isIconVisibleInMenu() const
bool c_QAction__isIconVisibleInMenu(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isIconVisibleInMenu();
}

// tag=1050
// isSeparator() const
bool c_QAction__isSeparator(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSeparator();
}

// tag=1050
// isShortcutVisibleInContextMenu() const
bool c_QAction__isShortcutVisibleInContextMenu(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isShortcutVisibleInContextMenu();
}

// tag=1050
// isVisible() const
bool c_QAction__isVisible(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isVisible();
}

// tag=1050
// resetEnabled()
void c_QAction__resetEnabled(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->resetEnabled();
}

// tag=1050
// setAutoRepeat(bool arg__1)
void c_QAction__setAutoRepeat_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setAutoRepeat(arg__1);
}

// tag=1050
// setCheckable(bool arg__1)
void c_QAction__setCheckable_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setCheckable(arg__1);
}

// tag=1050
// setChecked(bool arg__1)
void c_QAction__setChecked_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setChecked(arg__1);
}

// tag=1050
// setData(const QVariant & var)
void c_QAction__setData_QVariant(void *thisObj, void *var_) {
  auto &var = *reinterpret_cast<QVariant *>(var_);
  // tag=1010
  fromPtr(thisObj)->setData(var);
}

// tag=1050
// setDisabled(bool b)
void c_QAction__setDisabled_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setDisabled(b);
}

// tag=1050
// setEnabled(bool arg__1)
void c_QAction__setEnabled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setEnabled(arg__1);
}

// tag=1050
// setFont(const QFont & font)
void c_QAction__setFont_QFont(void *thisObj, void *font_) {
  auto &font = *reinterpret_cast<QFont *>(font_);
  // tag=1010
  fromPtr(thisObj)->setFont(font);
}

// tag=1050
// setIcon(const QIcon & icon)
void c_QAction__setIcon_QIcon(void *thisObj, void *icon_) {
  auto &icon = *reinterpret_cast<QIcon *>(icon_);
  // tag=1010
  fromPtr(thisObj)->setIcon(icon);
}

// tag=1050
// setIconText(const QString & text)
void c_QAction__setIconText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setIconText(text);
}

// tag=1050
// setIconVisibleInMenu(bool visible)
void c_QAction__setIconVisibleInMenu_bool(void *thisObj, bool visible) {
  // tag=1010
  fromPtr(thisObj)->setIconVisibleInMenu(visible);
}

// tag=1050
// setSeparator(bool b)
void c_QAction__setSeparator_bool(void *thisObj, bool b) {
  // tag=1010
  fromPtr(thisObj)->setSeparator(b);
}

// tag=1050
// setShortcut(const QKeySequence & shortcut)
void c_QAction__setShortcut_QKeySequence(void *thisObj, void *shortcut_) {
  auto &shortcut = *reinterpret_cast<QKeySequence *>(shortcut_);
  // tag=1010
  fromPtr(thisObj)->setShortcut(shortcut);
}

// tag=1050
// setShortcutVisibleInContextMenu(bool show)
void c_QAction__setShortcutVisibleInContextMenu_bool(void *thisObj, bool show) {
  // tag=1010
  fromPtr(thisObj)->setShortcutVisibleInContextMenu(show);
}

// tag=1050
// setShortcuts(QKeySequence::StandardKey arg__1)
void c_QAction__setShortcuts_StandardKey(void *thisObj, int arg__1) {
  // tag=1010
  fromPtr(thisObj)->setShortcuts(
      static_cast<QKeySequence::StandardKey>(arg__1));
}

// tag=1050
// setShortcuts(const QList<QKeySequence > & shortcuts)
void c_QAction__setShortcuts_QList_QKeySequence(void *thisObj,
                                                void *shortcuts_) {
  auto &shortcuts = *reinterpret_cast<QList<QKeySequence> *>(shortcuts_);
  // tag=1010
  fromPtr(thisObj)->setShortcuts(shortcuts);
}

// tag=1050
// setStatusTip(const QString & statusTip)
void c_QAction__setStatusTip_QString(void *thisObj, const char *statusTip_) {
  const auto statusTip = QString::fromUtf8(statusTip_);
  // tag=1010
  fromPtr(thisObj)->setStatusTip(statusTip);
}

// tag=1050
// setText(const QString & text)
void c_QAction__setText_QString(void *thisObj, const char *text_) {
  const auto text = QString::fromUtf8(text_);
  // tag=1010
  fromPtr(thisObj)->setText(text);
}

// tag=1050
// setToolTip(const QString & tip)
void c_QAction__setToolTip_QString(void *thisObj, const char *tip_) {
  const auto tip = QString::fromUtf8(tip_);
  // tag=1010
  fromPtr(thisObj)->setToolTip(tip);
}

// tag=1050
// setVisible(bool arg__1)
void c_QAction__setVisible_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->setVisible(arg__1);
}

// tag=1050
// setWhatsThis(const QString & what)
void c_QAction__setWhatsThis_QString(void *thisObj, const char *what_) {
  const auto what = QString::fromUtf8(what_);
  // tag=1010
  fromPtr(thisObj)->setWhatsThis(what);
}

// tag=1050
// shortcut() const
void *c_QAction__shortcut(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QKeySequence>{fromPtr(thisObj)->shortcut()};
}

// tag=1050
// shortcuts() const
void *c_QAction__shortcuts(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QKeySequence>>{
          fromPtr(thisObj)->shortcuts()};
}

// tag=1050
// showStatusText(QObject * object)
bool c_QAction__showStatusText_QObject(void *thisObj, void *object_) {
  auto object = reinterpret_cast<QObject *>(object_);
  return
      // tag=1010
      fromPtr(thisObj)->showStatusText(object);
}

// tag=1050
// statusTip() const
void *c_QAction__statusTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->statusTip()};
}

// tag=1050
// text() const
void *c_QAction__text(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->text()};
}

// tag=1050
// toggle()
void c_QAction__toggle(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->toggle();
}

// tag=1050
// toggled(bool arg__1)
void c_QAction__toggled_bool(void *thisObj, bool arg__1) {
  // tag=1010
  fromPtr(thisObj)->toggled(arg__1);
}

// tag=1079
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

// tag=1050
// toolTip() const
void *c_QAction__toolTip(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->toolTip()};
}

// tag=1050
// tr(const char * s, const char * c, int n)
void *c_static_QAction__tr_char_char_int(const char *s, const char *c, int n) {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QAction_wrapper::tr(s, c, n)};
}

// tag=1050
// trigger()
void c_QAction__trigger(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->trigger();
}

// tag=1050
// triggered(bool checked)
void c_QAction__triggered_bool(void *thisObj, bool checked) {
  // tag=1010
  fromPtr(thisObj)->triggered(checked);
}

// tag=1079
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

// tag=1050
// visibleChanged()
void c_QAction__visibleChanged(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->visibleChanged();
}

// tag=1079
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

// tag=1050
// whatsThis() const
void *c_QAction__whatsThis(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->whatsThis()};
}
void c_QAction__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QAction__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 944:
    wrapper->m_customEventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAction_wrapper::Callback_customEvent>(
        callback);
    break;
  case 953:
    wrapper->m_eventCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAction_wrapper::Callback_event>(callback);
    break;
  case 954:
    wrapper->m_eventFilterCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QAction_wrapper::Callback_eventFilter>(
        callback);
    break;
  }
}
}

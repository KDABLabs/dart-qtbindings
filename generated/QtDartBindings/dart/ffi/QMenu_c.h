/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstring.h>
#include <qstyle.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
class QMenu_wrapper : public ::QMenu {
public:
  ~QMenu_wrapper();
  QMenu_wrapper(QWidget *parent = nullptr);
  QMenu_wrapper(const QString &title, QWidget *parent = nullptr);
  void aboutToHide();
  void aboutToShow();
  QAction *actionAt(const QPoint &arg__1) const;
  QRect actionGeometry(QAction *arg__1) const;
  QAction *activeAction() const;
  QAction *addMenu(QMenu *menu);
  QMenu *addMenu(const QIcon &icon, const QString &title);
  QMenu *addMenu(const QString &title);
  QAction *addSection(const QIcon &icon, const QString &text);
  QAction *addSection(const QString &text);
  QAction *addSeparator();
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clear();
  int columnCount() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  QAction *defaultAction() const;
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  QAction *exec();
  static QAction *exec(const QList<QAction *> &actions, const QPoint &pos,
                       QAction *at = nullptr, QWidget *parent = nullptr);
  QAction *exec(const QPoint &pos, QAction *at = nullptr);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  void hideTearOffMenu();
  void hovered(QAction *action);
  QIcon icon() const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  QAction *insertMenu(QAction *before, QMenu *menu);
  QAction *insertSection(QAction *before, const QIcon &icon,
                         const QString &text);
  QAction *insertSection(QAction *before, const QString &text);
  QAction *insertSeparator(QAction *before);
  bool isEmpty() const;
  bool isTearOffEnabled() const;
  bool isTearOffMenuVisible() const;
  virtual void leaveEvent(QEvent *arg__1);
  virtual void leaveEvent_nocallback(QEvent *arg__1);
  QAction *menuAction() const;
  static QMenu *menuInAction(const QAction *action);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  virtual void mousePressEvent(QMouseEvent *arg__1);
  virtual void mousePressEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *arg__1);
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  void popup(const QPoint &pos, QAction *at = nullptr);
  bool separatorsCollapsible() const;
  void setActiveAction(QAction *act);
  void setDefaultAction(QAction *arg__1);
  void setIcon(const QIcon &icon);
  void setNoReplayFor(QWidget *widget);
  void setSeparatorsCollapsible(bool collapse);
  void setTearOffEnabled(bool arg__1);
  void setTitle(const QString &title);
  void setToolTipsVisible(bool visible);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  void showTearOffMenu();
  void showTearOffMenu(const QPoint &pos);
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QString title() const;
  bool toolTipsVisible() const;
  static QString tr(const char *s, const char *c, int n);
  void triggered(QAction *action);
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  typedef void (*Callback_leaveEvent)(void *, QEvent *arg__1);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *arg__1);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
  Callback_paintEvent m_paintEventCallback = nullptr;
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QMenu::QMenu(QWidget * parent)
QtDartBindings_EXPORT void *c_QMenu__constructor_QWidget(void *parent_);
// QMenu::QMenu(const QString & title, QWidget * parent)
QtDartBindings_EXPORT void *
c_QMenu__constructor_QString_QWidget(const char *title_, void *parent_);
// QMenu::aboutToHide()
QtDartBindings_EXPORT void c_QMenu__aboutToHide(void *thisObj);
QtDartBindings_EXPORT void
c_QMenu__onAboutToHide(void *thisObj, void *contextQObject,
                       void *callback); // QMenu::aboutToShow()
QtDartBindings_EXPORT void c_QMenu__aboutToShow(void *thisObj);
QtDartBindings_EXPORT void c_QMenu__onAboutToShow(
    void *thisObj, void *contextQObject,
    void *callback); // QMenu::actionAt(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QMenu__actionAt_QPoint(void *thisObj,
                                                     void *arg__1_);
// QMenu::actionGeometry(QAction * arg__1) const
QtDartBindings_EXPORT void *c_QMenu__actionGeometry_QAction(void *thisObj,
                                                            void *arg__1_);
// QMenu::activeAction() const
QtDartBindings_EXPORT void *c_QMenu__activeAction(void *thisObj);
// QMenu::addMenu(QMenu * menu)
QtDartBindings_EXPORT void *c_QMenu__addMenu_QMenu(void *thisObj, void *menu_);
// QMenu::addMenu(const QIcon & icon, const QString & title)
QtDartBindings_EXPORT void *
c_QMenu__addMenu_QIcon_QString(void *thisObj, void *icon_, const char *title_);
// QMenu::addMenu(const QString & title)
QtDartBindings_EXPORT void *c_QMenu__addMenu_QString(void *thisObj,
                                                     const char *title_);
// QMenu::addSection(const QIcon & icon, const QString & text)
QtDartBindings_EXPORT void *
c_QMenu__addSection_QIcon_QString(void *thisObj, void *icon_,
                                  const char *text_);
// QMenu::addSection(const QString & text)
QtDartBindings_EXPORT void *c_QMenu__addSection_QString(void *thisObj,
                                                        const char *text_);
// QMenu::addSeparator()
QtDartBindings_EXPORT void *c_QMenu__addSeparator(void *thisObj);
// QMenu::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__changeEvent_QEvent(void *thisObj,
                                                       void *arg__1_);
// QMenu::clear()
QtDartBindings_EXPORT void c_QMenu__clear(void *thisObj);
// QMenu::columnCount() const
QtDartBindings_EXPORT int c_QMenu__columnCount(void *thisObj);
// QMenu::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMenu__customEvent_QEvent(void *thisObj,
                                                       void *event_);
// QMenu::defaultAction() const
QtDartBindings_EXPORT void *c_QMenu__defaultAction(void *thisObj);
// QMenu::devType() const
QtDartBindings_EXPORT int c_QMenu__devType(void *thisObj);
// QMenu::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QMenu__event_QEvent(void *thisObj, void *arg__1_);
// QMenu::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QMenu__eventFilter_QObject_QEvent(void *thisObj,
                                                               void *watched_,
                                                               void *event_);
// QMenu::exec()
QtDartBindings_EXPORT void *c_QMenu__exec(void *thisObj);
// QMenu::exec(const QList<QAction* > & actions, const QPoint & pos, QAction *
// at, QWidget * parent)
QtDartBindings_EXPORT void *
c_static_QMenu__exec_QList_QAction_QPoint_QAction_QWidget(void *actions_,
                                                          void *pos_, void *at_,
                                                          void *parent_);
// QMenu::exec(const QPoint & pos, QAction * at)
QtDartBindings_EXPORT void *c_QMenu__exec_QPoint_QAction(void *thisObj,
                                                         void *pos_, void *at_);
// QMenu::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QMenu__focusNextPrevChild_bool(void *thisObj,
                                                            bool next);
// QMenu::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QMenu__hasHeightForWidth(void *thisObj);
// QMenu::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QMenu__heightForWidth_int(void *thisObj,
                                                      int arg__1);
// QMenu::hideTearOffMenu()
QtDartBindings_EXPORT void c_QMenu__hideTearOffMenu(void *thisObj);
// QMenu::hovered(QAction * action)
QtDartBindings_EXPORT void c_QMenu__hovered_QAction(void *thisObj,
                                                    void *action_);
QtDartBindings_EXPORT void
c_QMenu__onHovered_QAction(void *thisObj, void *contextQObject,
                           void *callback); // QMenu::icon() const
QtDartBindings_EXPORT void *c_QMenu__icon(void *thisObj);
// QMenu::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QMenu__initPainter_QPainter(void *thisObj,
                                                         void *painter_);
// QMenu::insertMenu(QAction * before, QMenu * menu)
QtDartBindings_EXPORT void *
c_QMenu__insertMenu_QAction_QMenu(void *thisObj, void *before_, void *menu_);
// QMenu::insertSection(QAction * before, const QIcon & icon, const QString &
// text)
QtDartBindings_EXPORT void *
c_QMenu__insertSection_QAction_QIcon_QString(void *thisObj, void *before_,
                                             void *icon_, const char *text_);
// QMenu::insertSection(QAction * before, const QString & text)
QtDartBindings_EXPORT void *
c_QMenu__insertSection_QAction_QString(void *thisObj, void *before_,
                                       const char *text_);
// QMenu::insertSeparator(QAction * before)
QtDartBindings_EXPORT void *c_QMenu__insertSeparator_QAction(void *thisObj,
                                                             void *before_);
// QMenu::isEmpty() const
QtDartBindings_EXPORT bool c_QMenu__isEmpty(void *thisObj);
// QMenu::isTearOffEnabled() const
QtDartBindings_EXPORT bool c_QMenu__isTearOffEnabled(void *thisObj);
// QMenu::isTearOffMenuVisible() const
QtDartBindings_EXPORT bool c_QMenu__isTearOffMenuVisible(void *thisObj);
// QMenu::leaveEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__leaveEvent_QEvent(void *thisObj,
                                                      void *arg__1_);
// QMenu::menuAction() const
QtDartBindings_EXPORT void *c_QMenu__menuAction(void *thisObj);
// QMenu::menuInAction(const QAction * action)
QtDartBindings_EXPORT void *c_static_QMenu__menuInAction_QAction(void *action_);
// QMenu::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QMenu__minimumSizeHint(void *thisObj);
// QMenu::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMenu__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QMenu::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                               void *arg__1_);
// QMenu::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__mousePressEvent_QMouseEvent(void *thisObj,
                                                                void *arg__1_);
// QMenu::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenu__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QMenu::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__paintEvent_QPaintEvent(void *thisObj,
                                                           void *arg__1_);
// QMenu::popup(const QPoint & pos, QAction * at)
QtDartBindings_EXPORT void c_QMenu__popup_QPoint_QAction(void *thisObj,
                                                         void *pos_, void *at_);
// QMenu::separatorsCollapsible() const
QtDartBindings_EXPORT bool c_QMenu__separatorsCollapsible(void *thisObj);
// QMenu::setActiveAction(QAction * act)
QtDartBindings_EXPORT void c_QMenu__setActiveAction_QAction(void *thisObj,
                                                            void *act_);
// QMenu::setDefaultAction(QAction * arg__1)
QtDartBindings_EXPORT void c_QMenu__setDefaultAction_QAction(void *thisObj,
                                                             void *arg__1_);
// QMenu::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QMenu__setIcon_QIcon(void *thisObj, void *icon_);
// QMenu::setNoReplayFor(QWidget * widget)
QtDartBindings_EXPORT void c_QMenu__setNoReplayFor_QWidget(void *thisObj,
                                                           void *widget_);
// QMenu::setSeparatorsCollapsible(bool collapse)
QtDartBindings_EXPORT void
c_QMenu__setSeparatorsCollapsible_bool(void *thisObj, bool collapse);
// QMenu::setTearOffEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QMenu__setTearOffEnabled_bool(void *thisObj,
                                                           bool arg__1);
// QMenu::setTitle(const QString & title)
QtDartBindings_EXPORT void c_QMenu__setTitle_QString(void *thisObj,
                                                     const char *title_);
// QMenu::setToolTipsVisible(bool visible)
QtDartBindings_EXPORT void c_QMenu__setToolTipsVisible_bool(void *thisObj,
                                                            bool visible);
// QMenu::setVisible(bool visible)
QtDartBindings_EXPORT void c_QMenu__setVisible_bool(void *thisObj,
                                                    bool visible);
// QMenu::sharedPainter() const
QtDartBindings_EXPORT void *c_QMenu__sharedPainter(void *thisObj);
// QMenu::showTearOffMenu()
QtDartBindings_EXPORT void c_QMenu__showTearOffMenu(void *thisObj);
// QMenu::showTearOffMenu(const QPoint & pos)
QtDartBindings_EXPORT void c_QMenu__showTearOffMenu_QPoint(void *thisObj,
                                                           void *pos_);
// QMenu::sizeHint() const
QtDartBindings_EXPORT void *c_QMenu__sizeHint(void *thisObj);
// QMenu::title() const
QtDartBindings_EXPORT void *c_QMenu__title(void *thisObj);
// QMenu::toolTipsVisible() const
QtDartBindings_EXPORT bool c_QMenu__toolTipsVisible(void *thisObj);
// QMenu::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QMenu__tr_char_char_int(const char *s, const char *c, int n);
// QMenu::triggered(QAction * action)
QtDartBindings_EXPORT void c_QMenu__triggered_QAction(void *thisObj,
                                                      void *action_);
QtDartBindings_EXPORT void c_QMenu__onTriggered_QAction(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback);
QtDartBindings_EXPORT void c_QMenu__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QMenu__registerVirtualMethodCallback(void *ptr, void *callback, int methodId);
QtDartBindings_EXPORT void c_QMenu_Finalizer(void *cppObj);
}

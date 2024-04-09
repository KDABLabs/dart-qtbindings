
// tag=1040
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
// tag=1017
class QMenu_wrapper : public ::QMenu {
public:
  ~QMenu_wrapper();
  // tag=1041
  QMenu_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QMenu_wrapper(const QString &title, QWidget *parent = nullptr);
  // tag=1041
  void aboutToHide();
  // tag=1041
  void aboutToShow();
  // tag=1041
  QAction *actionAt(const QPoint &arg__1) const;
  // tag=1041
  QRect actionGeometry(QAction *arg__1) const;
  // tag=1041
  QAction *activeAction() const;
  // tag=1041
  QAction *addMenu(QMenu *menu);
  // tag=1041
  QMenu *addMenu(const QIcon &icon, const QString &title);
  // tag=1041
  QMenu *addMenu(const QString &title);
  // tag=1041
  QAction *addSection(const QIcon &icon, const QString &text);
  // tag=1041
  QAction *addSection(const QString &text);
  // tag=1041
  QAction *addSeparator();
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  void clear();
  // tag=1041
  int columnCount() const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  QAction *defaultAction() const;
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  virtual bool event(QEvent *arg__1);
  // tag=1008
  virtual bool event_nocallback(QEvent *arg__1);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  QAction *exec();
  // tag=1041
  static QAction *exec(const QList<QAction *> &actions, const QPoint &pos,
                       QAction *at = nullptr, QWidget *parent = nullptr);
  // tag=1041
  QAction *exec(const QPoint &pos, QAction *at = nullptr);
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  void hideTearOffMenu();
  // tag=1041
  void hovered(QAction *action);
  // tag=1041
  QIcon icon() const;
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  QAction *insertMenu(QAction *before, QMenu *menu);
  // tag=1041
  QAction *insertSection(QAction *before, const QIcon &icon,
                         const QString &text);
  // tag=1041
  QAction *insertSection(QAction *before, const QString &text);
  // tag=1041
  QAction *insertSeparator(QAction *before);
  // tag=1041
  bool isEmpty() const;
  // tag=1041
  bool isTearOffEnabled() const;
  // tag=1041
  bool isTearOffMenuVisible() const;
  // tag=1041
  virtual void leaveEvent(QEvent *arg__1);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *arg__1);
  // tag=1041
  QAction *menuAction() const;
  // tag=1041
  static QMenu *menuInAction(const QAction *action);
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *arg__1);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *arg__1);
  // tag=1041
  virtual void paintEvent(QPaintEvent *arg__1);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  // tag=1041
  void popup(const QPoint &pos, QAction *at = nullptr);
  // tag=1041
  bool separatorsCollapsible() const;
  // tag=1041
  void setActiveAction(QAction *act);
  // tag=1041
  void setDefaultAction(QAction *arg__1);
  // tag=1041
  void setIcon(const QIcon &icon);
  // tag=1041
  void setNoReplayFor(QWidget *widget);
  // tag=1041
  void setSeparatorsCollapsible(bool collapse);
  // tag=1041
  void setTearOffEnabled(bool arg__1);
  // tag=1041
  void setTitle(const QString &title);
  // tag=1041
  void setToolTipsVisible(bool visible);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  void showTearOffMenu();
  // tag=1041
  void showTearOffMenu(const QPoint &pos);
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  QString title() const;
  // tag=1041
  bool toolTipsVisible() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void triggered(QAction *action);
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *arg__1);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *watched, QEvent *event);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_focusNextPrevChild)(void *, bool next);
  Callback_focusNextPrevChild m_focusNextPrevChildCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_hasHeightForWidth)(void *);
  Callback_hasHeightForWidth m_hasHeightForWidthCallback = nullptr;
  // tag=1042
  typedef int (*Callback_heightForWidth)(void *, int arg__1);
  Callback_heightForWidth m_heightForWidthCallback = nullptr;
  // tag=1042
  typedef void (*Callback_initPainter)(void *, QPainter *painter);
  Callback_initPainter m_initPainterCallback = nullptr;
  // tag=1042
  typedef void (*Callback_leaveEvent)(void *, QEvent *arg__1);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *arg__1);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *arg__1);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *arg__1);
  Callback_paintEvent m_paintEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  // tag=1042
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QMenu::QMenu(QWidget * parent)
QtDartBindings_EXPORT void *c_QMenu__constructor_QWidget(void *parent_);

// tag=1067
//  QMenu::QMenu(const QString & title, QWidget * parent)
QtDartBindings_EXPORT void *
c_QMenu__constructor_QString_QWidget(const char *title_, void *parent_);

// tag=1067
//  QMenu::aboutToHide()
QtDartBindings_EXPORT void c_QMenu__aboutToHide(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QMenu__onAboutToHide(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QMenu::aboutToShow()
QtDartBindings_EXPORT void c_QMenu__aboutToShow(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QMenu__onAboutToShow(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QMenu::actionAt(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QMenu__actionAt_QPoint(void *thisObj,
                                                     void *arg__1_);

// tag=1067
//  QMenu::actionGeometry(QAction * arg__1) const
QtDartBindings_EXPORT void *c_QMenu__actionGeometry_QAction(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QMenu::activeAction() const
QtDartBindings_EXPORT void *c_QMenu__activeAction(void *thisObj);

// tag=1067
//  QMenu::addMenu(QMenu * menu)
QtDartBindings_EXPORT void *c_QMenu__addMenu_QMenu(void *thisObj, void *menu_);

// tag=1067
//  QMenu::addMenu(const QIcon & icon, const QString & title)
QtDartBindings_EXPORT void *
c_QMenu__addMenu_QIcon_QString(void *thisObj, void *icon_, const char *title_);

// tag=1067
//  QMenu::addMenu(const QString & title)
QtDartBindings_EXPORT void *c_QMenu__addMenu_QString(void *thisObj,
                                                     const char *title_);

// tag=1067
//  QMenu::addSection(const QIcon & icon, const QString & text)
QtDartBindings_EXPORT void *
c_QMenu__addSection_QIcon_QString(void *thisObj, void *icon_,
                                  const char *text_);

// tag=1067
//  QMenu::addSection(const QString & text)
QtDartBindings_EXPORT void *c_QMenu__addSection_QString(void *thisObj,
                                                        const char *text_);

// tag=1067
//  QMenu::addSeparator()
QtDartBindings_EXPORT void *c_QMenu__addSeparator(void *thisObj);

// tag=1067
//  QMenu::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__changeEvent_QEvent(void *thisObj,
                                                       void *arg__1_);

// tag=1067
//  QMenu::clear()
QtDartBindings_EXPORT void c_QMenu__clear(void *thisObj);

// tag=1067
//  QMenu::columnCount() const
QtDartBindings_EXPORT int c_QMenu__columnCount(void *thisObj);

// tag=1067
//  QMenu::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QMenu__customEvent_QEvent(void *thisObj,
                                                       void *event_);

// tag=1067
//  QMenu::defaultAction() const
QtDartBindings_EXPORT void *c_QMenu__defaultAction(void *thisObj);

// tag=1067
//  QMenu::devType() const
QtDartBindings_EXPORT int c_QMenu__devType(void *thisObj);

// tag=1067
//  QMenu::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QMenu__event_QEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QMenu::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QMenu__eventFilter_QObject_QEvent(void *thisObj,
                                                               void *watched_,
                                                               void *event_);

// tag=1067
//  QMenu::exec()
QtDartBindings_EXPORT void *c_QMenu__exec(void *thisObj);

// tag=1067
//  QMenu::exec(const QList<QAction* > & actions, const QPoint & pos, QAction *
//  at, QWidget * parent)
QtDartBindings_EXPORT void *
c_static_QMenu__exec_QList_QAction_QPoint_QAction_QWidget(void *actions_,
                                                          void *pos_, void *at_,
                                                          void *parent_);

// tag=1067
//  QMenu::exec(const QPoint & pos, QAction * at)
QtDartBindings_EXPORT void *c_QMenu__exec_QPoint_QAction(void *thisObj,
                                                         void *pos_, void *at_);

// tag=1067
//  QMenu::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QMenu__focusNextPrevChild_bool(void *thisObj,
                                                            bool next);

// tag=1067
//  QMenu::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QMenu__hasHeightForWidth(void *thisObj);

// tag=1067
//  QMenu::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QMenu__heightForWidth_int(void *thisObj,
                                                      int arg__1);

// tag=1067
//  QMenu::hideTearOffMenu()
QtDartBindings_EXPORT void c_QMenu__hideTearOffMenu(void *thisObj);

// tag=1067
//  QMenu::hovered(QAction * action)
QtDartBindings_EXPORT void c_QMenu__hovered_QAction(void *thisObj,
                                                    void *action_);

// tag=1078
QtDartBindings_EXPORT void
c_QMenu__onHovered_QAction(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QMenu::icon() const
QtDartBindings_EXPORT void *c_QMenu__icon(void *thisObj);

// tag=1067
//  QMenu::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QMenu__initPainter_QPainter(void *thisObj,
                                                         void *painter_);

// tag=1067
//  QMenu::insertMenu(QAction * before, QMenu * menu)
QtDartBindings_EXPORT void *
c_QMenu__insertMenu_QAction_QMenu(void *thisObj, void *before_, void *menu_);

// tag=1067
//  QMenu::insertSection(QAction * before, const QIcon & icon, const QString &
//  text)
QtDartBindings_EXPORT void *
c_QMenu__insertSection_QAction_QIcon_QString(void *thisObj, void *before_,
                                             void *icon_, const char *text_);

// tag=1067
//  QMenu::insertSection(QAction * before, const QString & text)
QtDartBindings_EXPORT void *
c_QMenu__insertSection_QAction_QString(void *thisObj, void *before_,
                                       const char *text_);

// tag=1067
//  QMenu::insertSeparator(QAction * before)
QtDartBindings_EXPORT void *c_QMenu__insertSeparator_QAction(void *thisObj,
                                                             void *before_);

// tag=1067
//  QMenu::isEmpty() const
QtDartBindings_EXPORT bool c_QMenu__isEmpty(void *thisObj);

// tag=1067
//  QMenu::isTearOffEnabled() const
QtDartBindings_EXPORT bool c_QMenu__isTearOffEnabled(void *thisObj);

// tag=1067
//  QMenu::isTearOffMenuVisible() const
QtDartBindings_EXPORT bool c_QMenu__isTearOffMenuVisible(void *thisObj);

// tag=1067
//  QMenu::leaveEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__leaveEvent_QEvent(void *thisObj,
                                                      void *arg__1_);

// tag=1067
//  QMenu::menuAction() const
QtDartBindings_EXPORT void *c_QMenu__menuAction(void *thisObj);

// tag=1067
//  QMenu::menuInAction(const QAction * action)
QtDartBindings_EXPORT void *c_static_QMenu__menuInAction_QAction(void *action_);

// tag=1067
//  QMenu::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QMenu__minimumSizeHint(void *thisObj);

// tag=1067
//  QMenu::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QMenu__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QMenu::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                               void *arg__1_);

// tag=1067
//  QMenu::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__mousePressEvent_QMouseEvent(void *thisObj,
                                                                void *arg__1_);

// tag=1067
//  QMenu::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QMenu__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QMenu::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QMenu__paintEvent_QPaintEvent(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QMenu::popup(const QPoint & pos, QAction * at)
QtDartBindings_EXPORT void c_QMenu__popup_QPoint_QAction(void *thisObj,
                                                         void *pos_, void *at_);

// tag=1067
//  QMenu::separatorsCollapsible() const
QtDartBindings_EXPORT bool c_QMenu__separatorsCollapsible(void *thisObj);

// tag=1067
//  QMenu::setActiveAction(QAction * act)
QtDartBindings_EXPORT void c_QMenu__setActiveAction_QAction(void *thisObj,
                                                            void *act_);

// tag=1067
//  QMenu::setDefaultAction(QAction * arg__1)
QtDartBindings_EXPORT void c_QMenu__setDefaultAction_QAction(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QMenu::setIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QMenu__setIcon_QIcon(void *thisObj, void *icon_);

// tag=1067
//  QMenu::setNoReplayFor(QWidget * widget)
QtDartBindings_EXPORT void c_QMenu__setNoReplayFor_QWidget(void *thisObj,
                                                           void *widget_);

// tag=1067
//  QMenu::setSeparatorsCollapsible(bool collapse)
QtDartBindings_EXPORT void
c_QMenu__setSeparatorsCollapsible_bool(void *thisObj, bool collapse);

// tag=1067
//  QMenu::setTearOffEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QMenu__setTearOffEnabled_bool(void *thisObj,
                                                           bool arg__1);

// tag=1067
//  QMenu::setTitle(const QString & title)
QtDartBindings_EXPORT void c_QMenu__setTitle_QString(void *thisObj,
                                                     const char *title_);

// tag=1067
//  QMenu::setToolTipsVisible(bool visible)
QtDartBindings_EXPORT void c_QMenu__setToolTipsVisible_bool(void *thisObj,
                                                            bool visible);

// tag=1067
//  QMenu::setVisible(bool visible)
QtDartBindings_EXPORT void c_QMenu__setVisible_bool(void *thisObj,
                                                    bool visible);

// tag=1067
//  QMenu::sharedPainter() const
QtDartBindings_EXPORT void *c_QMenu__sharedPainter(void *thisObj);

// tag=1067
//  QMenu::showTearOffMenu()
QtDartBindings_EXPORT void c_QMenu__showTearOffMenu(void *thisObj);

// tag=1067
//  QMenu::showTearOffMenu(const QPoint & pos)
QtDartBindings_EXPORT void c_QMenu__showTearOffMenu_QPoint(void *thisObj,
                                                           void *pos_);

// tag=1067
//  QMenu::sizeHint() const
QtDartBindings_EXPORT void *c_QMenu__sizeHint(void *thisObj);

// tag=1067
//  QMenu::title() const
QtDartBindings_EXPORT void *c_QMenu__title(void *thisObj);

// tag=1067
//  QMenu::toolTipsVisible() const
QtDartBindings_EXPORT bool c_QMenu__toolTipsVisible(void *thisObj);

// tag=1067
//  QMenu::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QMenu__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QMenu::triggered(QAction * action)
QtDartBindings_EXPORT void c_QMenu__triggered_QAction(void *thisObj,
                                                      void *action_);

// tag=1078
QtDartBindings_EXPORT void c_QMenu__onTriggered_QAction(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback);
// tag=1066
QtDartBindings_EXPORT void c_QMenu__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QMenu__registerVirtualMethodCallback(void *ptr, void *callback, int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QMenu_Finalizer(void *, void *cppObj, void *);
}

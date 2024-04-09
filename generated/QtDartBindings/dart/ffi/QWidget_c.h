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
#include <qvariant.h>
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
class QWidget_wrapper : public ::QWidget {
public:
  ~QWidget_wrapper();
  QWidget_wrapper(QWidget *parent = nullptr);
  bool acceptDrops() const;
  QString accessibleDescription() const;
  QString accessibleName() const;
  QList<QAction *> actions() const;
  void activateWindow();
  void addAction(QAction *action);
  QAction *addAction(const QIcon &icon, const QString &text);
  QAction *addAction(const QIcon &icon, const QString &text,
                     const QKeySequence &shortcut);
  QAction *addAction(const QIcon &icon, const QString &text,
                     const QKeySequence &shortcut, const QObject *receiver,
                     const char *member);
  QAction *addAction(const QIcon &icon, const QString &text,
                     const QObject *receiver, const char *member);
  QAction *addAction(const QString &text);
  QAction *addAction(const QString &text, const QKeySequence &shortcut);
  QAction *addAction(const QString &text, const QKeySequence &shortcut,
                     const QObject *receiver, const char *member);
  QAction *addAction(const QString &text, const QObject *receiver,
                     const char *member);
  void addActions(const QList<QAction *> &actions);
  void adjustSize();
  bool autoFillBackground() const;
  QPalette::ColorRole backgroundRole() const;
  QSize baseSize() const;
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  QWidget *childAt(const QPoint &p) const;
  QWidget *childAt(int x, int y) const;
  QRect childrenRect() const;
  QRegion childrenRegion() const;
  void clearFocus();
  void clearMask();
  bool close();
  QRect contentsRect() const;
  void create();
  void createWinId();
  static QWidget *createWindowContainer(QWindow *window,
                                        QWidget *parent = nullptr);
  void customContextMenuRequested(const QPoint &pos);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  void destroy(bool destroyWindow = true, bool destroySubWindows = true);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  void ensurePolished() const;
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  bool focusNextChild();
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  bool focusPreviousChild();
  QWidget *focusProxy() const;
  QWidget *focusWidget() const;
  const QFont &font() const;
  QPalette::ColorRole foregroundRole() const;
  QRect frameGeometry() const;
  QSize frameSize() const;
  const QRect &geometry() const;
  QPixmap grab(const QRect &rectangle = QRect(QPoint(0, 0), QSize(-1, -1)));
  void grabKeyboard();
  void grabMouse();
  int grabShortcut(const QKeySequence &key);
  bool hasFocus() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  bool hasMouseTracking() const;
  bool hasTabletTracking() const;
  int height() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  void hide();
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  void insertAction(QAction *before, QAction *action);
  void insertActions(QAction *before, const QList<QAction *> &actions);
  bool isActiveWindow() const;
  bool isAncestorOf(const QWidget *child) const;
  bool isEnabled() const;
  bool isEnabledTo(const QWidget *arg__1) const;
  bool isFullScreen() const;
  bool isHidden() const;
  bool isLeftToRight() const;
  bool isMaximized() const;
  bool isMinimized() const;
  bool isModal() const;
  bool isRightToLeft() const;
  bool isVisible() const;
  bool isVisibleTo(const QWidget *arg__1) const;
  bool isWindow() const;
  bool isWindowModified() const;
  static QWidget *keyboardGrabber();
  QLayout *layout() const;
  Qt::LayoutDirection layoutDirection() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  void lower();
  QPoint mapFrom(const QWidget *arg__1, const QPoint &arg__2) const;
  QPointF mapFrom(const QWidget *arg__1, const QPointF &arg__2) const;
  QPoint mapFromGlobal(const QPoint &arg__1) const;
  QPointF mapFromGlobal(const QPointF &arg__1) const;
  QPoint mapFromParent(const QPoint &arg__1) const;
  QPointF mapFromParent(const QPointF &arg__1) const;
  QPoint mapTo(const QWidget *arg__1, const QPoint &arg__2) const;
  QPointF mapTo(const QWidget *arg__1, const QPointF &arg__2) const;
  QPoint mapToGlobal(const QPoint &arg__1) const;
  QPointF mapToGlobal(const QPointF &arg__1) const;
  QPoint mapToParent(const QPoint &arg__1) const;
  QPointF mapToParent(const QPointF &arg__1) const;
  QRegion mask() const;
  int maximumHeight() const;
  QSize maximumSize() const;
  int maximumWidth() const;
  int minimumHeight() const;
  QSize minimumSize() const;
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  int minimumWidth() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  static QWidget *mouseGrabber();
  virtual void mouseMoveEvent(QMouseEvent *event);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  virtual void mousePressEvent(QMouseEvent *event);
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  virtual void mouseReleaseEvent(QMouseEvent *event);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  void move(const QPoint &arg__1);
  void move(int x, int y);
  QWidget *nativeParentWidget() const;
  QWidget *nextInFocusChain() const;
  QRect normalGeometry() const;
  virtual void paintEvent(QPaintEvent *event);
  virtual void paintEvent_nocallback(QPaintEvent *event);
  const QPalette &palette() const;
  QWidget *parentWidget() const;
  QPoint pos() const;
  QWidget *previousInFocusChain() const;
  void raise();
  QRect rect() const;
  void releaseKeyboard();
  void releaseMouse();
  void releaseShortcut(int id);
  void removeAction(QAction *action);
  void render(QPainter *painter, const QPoint &targetOffset = QPoint(),
              const QRegion &sourceRegion = QRegion());
  void repaint();
  void repaint(const QRect &arg__1);
  void repaint(const QRegion &arg__1);
  void repaint(int x, int y, int w, int h);
  void resize(const QSize &arg__1);
  void resize(int w, int h);
  bool restoreGeometry(const QByteArray &geometry);
  QByteArray saveGeometry() const;
  void scroll(int dx, int dy);
  void scroll(int dx, int dy, const QRect &arg__3);
  void setAcceptDrops(bool on);
  void setAccessibleDescription(const QString &description);
  void setAccessibleName(const QString &name);
  void setAutoFillBackground(bool enabled);
  void setBackgroundRole(QPalette::ColorRole arg__1);
  void setBaseSize(const QSize &arg__1);
  void setBaseSize(int basew, int baseh);
  void setContentsMargins(int left, int top, int right, int bottom);
  void setDisabled(bool arg__1);
  void setEnabled(bool arg__1);
  void setFixedHeight(int h);
  void setFixedSize(const QSize &arg__1);
  void setFixedSize(int w, int h);
  void setFixedWidth(int w);
  void setFocus();
  void setFocusProxy(QWidget *arg__1);
  void setFont(const QFont &arg__1);
  void setForegroundRole(QPalette::ColorRole arg__1);
  void setGeometry(const QRect &arg__1);
  void setGeometry(int x, int y, int w, int h);
  void setHidden(bool hidden);
  void setLayout(QLayout *arg__1);
  void setLayoutDirection(Qt::LayoutDirection direction);
  void setMask(const QRegion &arg__1);
  void setMaximumHeight(int maxh);
  void setMaximumSize(const QSize &arg__1);
  void setMaximumSize(int maxw, int maxh);
  void setMaximumWidth(int maxw);
  void setMinimumHeight(int minh);
  void setMinimumSize(const QSize &arg__1);
  void setMinimumSize(int minw, int minh);
  void setMinimumWidth(int minw);
  void setMouseTracking(bool enable);
  void setPalette(const QPalette &arg__1);
  void setShortcutAutoRepeat(int id, bool enable = true);
  void setShortcutEnabled(int id, bool enable = true);
  void setSizeIncrement(const QSize &arg__1);
  void setSizeIncrement(int w, int h);
  void setSizePolicy(QSizePolicy arg__1);
  void setSizePolicy(QSizePolicy::Policy horizontal,
                     QSizePolicy::Policy vertical);
  void setStatusTip(const QString &arg__1);
  void setStyle(QStyle *arg__1);
  void setStyleSheet(const QString &styleSheet);
  static void setTabOrder(QWidget *arg__1, QWidget *arg__2);
  void setTabletTracking(bool enable);
  void setToolTip(const QString &arg__1);
  void setToolTipDuration(int msec);
  void setUpdatesEnabled(bool enable);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  void setWhatsThis(const QString &arg__1);
  void setWindowFilePath(const QString &filePath);
  void setWindowIcon(const QIcon &icon);
  void setWindowIconText(const QString &arg__1);
  void setWindowModified(bool arg__1);
  void setWindowOpacity(qreal level);
  void setWindowRole(const QString &arg__1);
  void setWindowTitle(const QString &arg__1);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  void show();
  void showFullScreen();
  void showMaximized();
  void showMinimized();
  void showNormal();
  QSize size() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QSize sizeIncrement() const;
  QSizePolicy sizePolicy() const;
  void stackUnder(QWidget *arg__1);
  QString statusTip() const;
  QStyle *style() const;
  QString styleSheet() const;
  QString toolTip() const;
  int toolTipDuration() const;
  QWidget *topLevelWidget() const;
  static QString tr(const char *s, const char *c, int n);
  bool underMouse() const;
  void unsetCursor();
  void unsetLayoutDirection();
  void unsetLocale();
  void update();
  void update(const QRect &arg__1);
  void update(const QRegion &arg__1);
  void update(int x, int y, int w, int h);
  void updateGeometry();
  void updateMicroFocus();
  bool updatesEnabled() const;
  QRegion visibleRegion() const;
  QString whatsThis() const;
  int width() const;
  QWidget *window() const;
  QString windowFilePath() const;
  QWindow *windowHandle() const;
  QIcon windowIcon() const;
  void windowIconChanged(const QIcon &icon);
  QString windowIconText() const;
  void windowIconTextChanged(const QString &iconText);
  qreal windowOpacity() const;
  QString windowRole() const;
  QString windowTitle() const;
  void windowTitleChanged(const QString &title);
  int x() const;
  int y() const;
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
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
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *event);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *event);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
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
// QWidget::QWidget(QWidget * parent)
QtDartBindings_EXPORT void *c_QWidget__constructor_QWidget(void *parent_);
// QWidget::acceptDrops() const
QtDartBindings_EXPORT bool c_QWidget__acceptDrops(void *thisObj);
// QWidget::accessibleDescription() const
QtDartBindings_EXPORT void *c_QWidget__accessibleDescription(void *thisObj);
// QWidget::accessibleName() const
QtDartBindings_EXPORT void *c_QWidget__accessibleName(void *thisObj);
// QWidget::actions() const
QtDartBindings_EXPORT void *c_QWidget__actions(void *thisObj);
// QWidget::activateWindow()
QtDartBindings_EXPORT void c_QWidget__activateWindow(void *thisObj);
// QWidget::addAction(QAction * action)
QtDartBindings_EXPORT void c_QWidget__addAction_QAction(void *thisObj,
                                                        void *action_);
// QWidget::addAction(const QIcon & icon, const QString & text)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QIcon_QString(void *thisObj, void *icon_,
                                   const char *text_);
// QWidget::addAction(const QIcon & icon, const QString & text, const
// QKeySequence & shortcut)
QtDartBindings_EXPORT void *c_QWidget__addAction_QIcon_QString_QKeySequence(
    void *thisObj, void *icon_, const char *text_, void *shortcut_);
// QWidget::addAction(const QIcon & icon, const QString & text, const
// QKeySequence & shortcut, const QObject * receiver, const char * member)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QIcon_QString_QKeySequence_QObject_char(
    void *thisObj, void *icon_, const char *text_, void *shortcut_,
    void *receiver_, const char *member);
// QWidget::addAction(const QIcon & icon, const QString & text, const QObject *
// receiver, const char * member)
QtDartBindings_EXPORT void *c_QWidget__addAction_QIcon_QString_QObject_char(
    void *thisObj, void *icon_, const char *text_, void *receiver_,
    const char *member);
// QWidget::addAction(const QString & text)
QtDartBindings_EXPORT void *c_QWidget__addAction_QString(void *thisObj,
                                                         const char *text_);
// QWidget::addAction(const QString & text, const QKeySequence & shortcut)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QString_QKeySequence(void *thisObj, const char *text_,
                                          void *shortcut_);
// QWidget::addAction(const QString & text, const QKeySequence & shortcut, const
// QObject * receiver, const char * member)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QString_QKeySequence_QObject_char(void *thisObj,
                                                       const char *text_,
                                                       void *shortcut_,
                                                       void *receiver_,
                                                       const char *member);
// QWidget::addAction(const QString & text, const QObject * receiver, const char
// * member)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QString_QObject_char(void *thisObj, const char *text_,
                                          void *receiver_, const char *member);
// QWidget::addActions(const QList<QAction* > & actions)
QtDartBindings_EXPORT void c_QWidget__addActions_QList_QAction(void *thisObj,
                                                               void *actions_);
// QWidget::adjustSize()
QtDartBindings_EXPORT void c_QWidget__adjustSize(void *thisObj);
// QWidget::autoFillBackground() const
QtDartBindings_EXPORT bool c_QWidget__autoFillBackground(void *thisObj);
// QWidget::backgroundRole() const
QtDartBindings_EXPORT int c_QWidget__backgroundRole(void *thisObj);
// QWidget::baseSize() const
QtDartBindings_EXPORT void *c_QWidget__baseSize(void *thisObj);
// QWidget::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QWidget__changeEvent_QEvent(void *thisObj,
                                                         void *arg__1_);
// QWidget::childAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QWidget__childAt_QPoint(void *thisObj, void *p_);
// QWidget::childAt(int x, int y) const
QtDartBindings_EXPORT void *c_QWidget__childAt_int_int(void *thisObj, int x,
                                                       int y);
// QWidget::childrenRect() const
QtDartBindings_EXPORT void *c_QWidget__childrenRect(void *thisObj);
// QWidget::childrenRegion() const
QtDartBindings_EXPORT void *c_QWidget__childrenRegion(void *thisObj);
// QWidget::clearFocus()
QtDartBindings_EXPORT void c_QWidget__clearFocus(void *thisObj);
// QWidget::clearMask()
QtDartBindings_EXPORT void c_QWidget__clearMask(void *thisObj);
// QWidget::close()
QtDartBindings_EXPORT bool c_QWidget__close(void *thisObj);
// QWidget::contentsRect() const
QtDartBindings_EXPORT void *c_QWidget__contentsRect(void *thisObj);
// QWidget::create()
QtDartBindings_EXPORT void c_QWidget__create(void *thisObj);
// QWidget::createWinId()
QtDartBindings_EXPORT void c_QWidget__createWinId(void *thisObj);
// QWidget::createWindowContainer(QWindow * window, QWidget * parent)
QtDartBindings_EXPORT void *
c_static_QWidget__createWindowContainer_QWindow_QWidget(void *window_,
                                                        void *parent_);
// QWidget::customContextMenuRequested(const QPoint & pos)
QtDartBindings_EXPORT void
c_QWidget__customContextMenuRequested_QPoint(void *thisObj, void *pos_);
QtDartBindings_EXPORT void c_QWidget__onCustomContextMenuRequested_QPoint(
    void *thisObj, void *contextQObject,
    void *callback); // QWidget::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QWidget__customEvent_QEvent(void *thisObj,
                                                         void *event_);
// QWidget::destroy(bool destroyWindow, bool destroySubWindows)
QtDartBindings_EXPORT void c_QWidget__destroy_bool_bool(void *thisObj,
                                                        bool destroyWindow,
                                                        bool destroySubWindows);
// QWidget::devType() const
QtDartBindings_EXPORT int c_QWidget__devType(void *thisObj);
// QWidget::ensurePolished() const
QtDartBindings_EXPORT void c_QWidget__ensurePolished(void *thisObj);
// QWidget::event(QEvent * event)
QtDartBindings_EXPORT bool c_QWidget__event_QEvent(void *thisObj, void *event_);
// QWidget::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QWidget__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);
// QWidget::focusNextChild()
QtDartBindings_EXPORT bool c_QWidget__focusNextChild(void *thisObj);
// QWidget::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QWidget__focusNextPrevChild_bool(void *thisObj,
                                                              bool next);
// QWidget::focusPreviousChild()
QtDartBindings_EXPORT bool c_QWidget__focusPreviousChild(void *thisObj);
// QWidget::focusProxy() const
QtDartBindings_EXPORT void *c_QWidget__focusProxy(void *thisObj);
// QWidget::focusWidget() const
QtDartBindings_EXPORT void *c_QWidget__focusWidget(void *thisObj);
// QWidget::font() const
QtDartBindings_EXPORT void *c_QWidget__font(void *thisObj);
// QWidget::foregroundRole() const
QtDartBindings_EXPORT int c_QWidget__foregroundRole(void *thisObj);
// QWidget::frameGeometry() const
QtDartBindings_EXPORT void *c_QWidget__frameGeometry(void *thisObj);
// QWidget::frameSize() const
QtDartBindings_EXPORT void *c_QWidget__frameSize(void *thisObj);
// QWidget::geometry() const
QtDartBindings_EXPORT void *c_QWidget__geometry(void *thisObj);
// QWidget::grab(const QRect & rectangle)
QtDartBindings_EXPORT void *c_QWidget__grab_QRect(void *thisObj,
                                                  void *rectangle_);
// QWidget::grabKeyboard()
QtDartBindings_EXPORT void c_QWidget__grabKeyboard(void *thisObj);
// QWidget::grabMouse()
QtDartBindings_EXPORT void c_QWidget__grabMouse(void *thisObj);
// QWidget::grabShortcut(const QKeySequence & key)
QtDartBindings_EXPORT int c_QWidget__grabShortcut_QKeySequence(void *thisObj,
                                                               void *key_);
// QWidget::hasFocus() const
QtDartBindings_EXPORT bool c_QWidget__hasFocus(void *thisObj);
// QWidget::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QWidget__hasHeightForWidth(void *thisObj);
// QWidget::hasMouseTracking() const
QtDartBindings_EXPORT bool c_QWidget__hasMouseTracking(void *thisObj);
// QWidget::hasTabletTracking() const
QtDartBindings_EXPORT bool c_QWidget__hasTabletTracking(void *thisObj);
// QWidget::height() const
QtDartBindings_EXPORT int c_QWidget__height(void *thisObj);
// QWidget::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QWidget__heightForWidth_int(void *thisObj,
                                                        int arg__1);
// QWidget::hide()
QtDartBindings_EXPORT void c_QWidget__hide(void *thisObj);
// QWidget::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QWidget__initPainter_QPainter(void *thisObj,
                                                           void *painter_);
// QWidget::insertAction(QAction * before, QAction * action)
QtDartBindings_EXPORT void
c_QWidget__insertAction_QAction_QAction(void *thisObj, void *before_,
                                        void *action_);
// QWidget::insertActions(QAction * before, const QList<QAction* > & actions)
QtDartBindings_EXPORT void
c_QWidget__insertActions_QAction_QList_QAction(void *thisObj, void *before_,
                                               void *actions_);
// QWidget::isActiveWindow() const
QtDartBindings_EXPORT bool c_QWidget__isActiveWindow(void *thisObj);
// QWidget::isAncestorOf(const QWidget * child) const
QtDartBindings_EXPORT bool c_QWidget__isAncestorOf_QWidget(void *thisObj,
                                                           void *child_);
// QWidget::isEnabled() const
QtDartBindings_EXPORT bool c_QWidget__isEnabled(void *thisObj);
// QWidget::isEnabledTo(const QWidget * arg__1) const
QtDartBindings_EXPORT bool c_QWidget__isEnabledTo_QWidget(void *thisObj,
                                                          void *arg__1_);
// QWidget::isFullScreen() const
QtDartBindings_EXPORT bool c_QWidget__isFullScreen(void *thisObj);
// QWidget::isHidden() const
QtDartBindings_EXPORT bool c_QWidget__isHidden(void *thisObj);
// QWidget::isLeftToRight() const
QtDartBindings_EXPORT bool c_QWidget__isLeftToRight(void *thisObj);
// QWidget::isMaximized() const
QtDartBindings_EXPORT bool c_QWidget__isMaximized(void *thisObj);
// QWidget::isMinimized() const
QtDartBindings_EXPORT bool c_QWidget__isMinimized(void *thisObj);
// QWidget::isModal() const
QtDartBindings_EXPORT bool c_QWidget__isModal(void *thisObj);
// QWidget::isRightToLeft() const
QtDartBindings_EXPORT bool c_QWidget__isRightToLeft(void *thisObj);
// QWidget::isVisible() const
QtDartBindings_EXPORT bool c_QWidget__isVisible(void *thisObj);
// QWidget::isVisibleTo(const QWidget * arg__1) const
QtDartBindings_EXPORT bool c_QWidget__isVisibleTo_QWidget(void *thisObj,
                                                          void *arg__1_);
// QWidget::isWindow() const
QtDartBindings_EXPORT bool c_QWidget__isWindow(void *thisObj);
// QWidget::isWindowModified() const
QtDartBindings_EXPORT bool c_QWidget__isWindowModified(void *thisObj);
// QWidget::keyboardGrabber()
QtDartBindings_EXPORT void *c_static_QWidget__keyboardGrabber();
// QWidget::layout() const
QtDartBindings_EXPORT void *c_QWidget__layout(void *thisObj);
// QWidget::layoutDirection() const
QtDartBindings_EXPORT int c_QWidget__layoutDirection(void *thisObj);
// QWidget::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QWidget__leaveEvent_QEvent(void *thisObj,
                                                        void *event_);
// QWidget::lower()
QtDartBindings_EXPORT void c_QWidget__lower(void *thisObj);
// QWidget::mapFrom(const QWidget * arg__1, const QPoint & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapFrom_QWidget_QPoint(void *thisObj, void *arg__1_, void *arg__2_);
// QWidget::mapFrom(const QWidget * arg__1, const QPointF & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapFrom_QWidget_QPointF(void *thisObj, void *arg__1_, void *arg__2_);
// QWidget::mapFromGlobal(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromGlobal_QPoint(void *thisObj,
                                                            void *arg__1_);
// QWidget::mapFromGlobal(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromGlobal_QPointF(void *thisObj,
                                                             void *arg__1_);
// QWidget::mapFromParent(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromParent_QPoint(void *thisObj,
                                                            void *arg__1_);
// QWidget::mapFromParent(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromParent_QPointF(void *thisObj,
                                                             void *arg__1_);
// QWidget::mapTo(const QWidget * arg__1, const QPoint & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapTo_QWidget_QPoint(void *thisObj, void *arg__1_, void *arg__2_);
// QWidget::mapTo(const QWidget * arg__1, const QPointF & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapTo_QWidget_QPointF(void *thisObj, void *arg__1_, void *arg__2_);
// QWidget::mapToGlobal(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToGlobal_QPoint(void *thisObj,
                                                          void *arg__1_);
// QWidget::mapToGlobal(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToGlobal_QPointF(void *thisObj,
                                                           void *arg__1_);
// QWidget::mapToParent(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToParent_QPoint(void *thisObj,
                                                          void *arg__1_);
// QWidget::mapToParent(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToParent_QPointF(void *thisObj,
                                                           void *arg__1_);
// QWidget::mask() const
QtDartBindings_EXPORT void *c_QWidget__mask(void *thisObj);
// QWidget::maximumHeight() const
QtDartBindings_EXPORT int c_QWidget__maximumHeight(void *thisObj);
// QWidget::maximumSize() const
QtDartBindings_EXPORT void *c_QWidget__maximumSize(void *thisObj);
// QWidget::maximumWidth() const
QtDartBindings_EXPORT int c_QWidget__maximumWidth(void *thisObj);
// QWidget::minimumHeight() const
QtDartBindings_EXPORT int c_QWidget__minimumHeight(void *thisObj);
// QWidget::minimumSize() const
QtDartBindings_EXPORT void *c_QWidget__minimumSize(void *thisObj);
// QWidget::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QWidget__minimumSizeHint(void *thisObj);
// QWidget::minimumWidth() const
QtDartBindings_EXPORT int c_QWidget__minimumWidth(void *thisObj);
// QWidget::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QWidget__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QWidget::mouseGrabber()
QtDartBindings_EXPORT void *c_static_QWidget__mouseGrabber();
// QWidget::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QWidget__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                 void *event_);
// QWidget::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QWidget__mousePressEvent_QMouseEvent(void *thisObj,
                                                                  void *event_);
// QWidget::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QWidget__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QWidget::move(const QPoint & arg__1)
QtDartBindings_EXPORT void c_QWidget__move_QPoint(void *thisObj, void *arg__1_);
// QWidget::move(int x, int y)
QtDartBindings_EXPORT void c_QWidget__move_int_int(void *thisObj, int x, int y);
// QWidget::nativeParentWidget() const
QtDartBindings_EXPORT void *c_QWidget__nativeParentWidget(void *thisObj);
// QWidget::nextInFocusChain() const
QtDartBindings_EXPORT void *c_QWidget__nextInFocusChain(void *thisObj);
// QWidget::normalGeometry() const
QtDartBindings_EXPORT void *c_QWidget__normalGeometry(void *thisObj);
// QWidget::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QWidget__paintEvent_QPaintEvent(void *thisObj,
                                                             void *event_);
// QWidget::palette() const
QtDartBindings_EXPORT void *c_QWidget__palette(void *thisObj);
// QWidget::parentWidget() const
QtDartBindings_EXPORT void *c_QWidget__parentWidget(void *thisObj);
// QWidget::pos() const
QtDartBindings_EXPORT void *c_QWidget__pos(void *thisObj);
// QWidget::previousInFocusChain() const
QtDartBindings_EXPORT void *c_QWidget__previousInFocusChain(void *thisObj);
// QWidget::raise()
QtDartBindings_EXPORT void c_QWidget__raise(void *thisObj);
// QWidget::rect() const
QtDartBindings_EXPORT void *c_QWidget__rect(void *thisObj);
// QWidget::releaseKeyboard()
QtDartBindings_EXPORT void c_QWidget__releaseKeyboard(void *thisObj);
// QWidget::releaseMouse()
QtDartBindings_EXPORT void c_QWidget__releaseMouse(void *thisObj);
// QWidget::releaseShortcut(int id)
QtDartBindings_EXPORT void c_QWidget__releaseShortcut_int(void *thisObj,
                                                          int id);
// QWidget::removeAction(QAction * action)
QtDartBindings_EXPORT void c_QWidget__removeAction_QAction(void *thisObj,
                                                           void *action_);
// QWidget::render(QPainter * painter, const QPoint & targetOffset, const
// QRegion & sourceRegion)
QtDartBindings_EXPORT void c_QWidget__render_QPainter_QPoint_QRegion(
    void *thisObj, void *painter_, void *targetOffset_, void *sourceRegion_);
// QWidget::repaint()
QtDartBindings_EXPORT void c_QWidget__repaint(void *thisObj);
// QWidget::repaint(const QRect & arg__1)
QtDartBindings_EXPORT void c_QWidget__repaint_QRect(void *thisObj,
                                                    void *arg__1_);
// QWidget::repaint(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QWidget__repaint_QRegion(void *thisObj,
                                                      void *arg__1_);
// QWidget::repaint(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QWidget__repaint_int_int_int_int(void *thisObj, int x, int y, int w, int h);
// QWidget::resize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__resize_QSize(void *thisObj,
                                                   void *arg__1_);
// QWidget::resize(int w, int h)
QtDartBindings_EXPORT void c_QWidget__resize_int_int(void *thisObj, int w,
                                                     int h);
// QWidget::restoreGeometry(const QByteArray & geometry)
QtDartBindings_EXPORT bool
c_QWidget__restoreGeometry_QByteArray(void *thisObj, void *geometry_);
// QWidget::saveGeometry() const
QtDartBindings_EXPORT void *c_QWidget__saveGeometry(void *thisObj);
// QWidget::scroll(int dx, int dy)
QtDartBindings_EXPORT void c_QWidget__scroll_int_int(void *thisObj, int dx,
                                                     int dy);
// QWidget::scroll(int dx, int dy, const QRect & arg__3)
QtDartBindings_EXPORT void
c_QWidget__scroll_int_int_QRect(void *thisObj, int dx, int dy, void *arg__3_);
// QWidget::setAcceptDrops(bool on)
QtDartBindings_EXPORT void c_QWidget__setAcceptDrops_bool(void *thisObj,
                                                          bool on);
// QWidget::setAccessibleDescription(const QString & description)
QtDartBindings_EXPORT void
c_QWidget__setAccessibleDescription_QString(void *thisObj,
                                            const char *description_);
// QWidget::setAccessibleName(const QString & name)
QtDartBindings_EXPORT void
c_QWidget__setAccessibleName_QString(void *thisObj, const char *name_);
// QWidget::setAutoFillBackground(bool enabled)
QtDartBindings_EXPORT void c_QWidget__setAutoFillBackground_bool(void *thisObj,
                                                                 bool enabled);
// QWidget::setBackgroundRole(QPalette::ColorRole arg__1)
QtDartBindings_EXPORT void c_QWidget__setBackgroundRole_ColorRole(void *thisObj,
                                                                  int arg__1);
// QWidget::setBaseSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setBaseSize_QSize(void *thisObj,
                                                        void *arg__1_);
// QWidget::setBaseSize(int basew, int baseh)
QtDartBindings_EXPORT void c_QWidget__setBaseSize_int_int(void *thisObj,
                                                          int basew, int baseh);
// QWidget::setContentsMargins(int left, int top, int right, int bottom)
QtDartBindings_EXPORT void
c_QWidget__setContentsMargins_int_int_int_int(void *thisObj, int left, int top,
                                              int right, int bottom);
// QWidget::setDisabled(bool arg__1)
QtDartBindings_EXPORT void c_QWidget__setDisabled_bool(void *thisObj,
                                                       bool arg__1);
// QWidget::setEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QWidget__setEnabled_bool(void *thisObj,
                                                      bool arg__1);
// QWidget::setFixedHeight(int h)
QtDartBindings_EXPORT void c_QWidget__setFixedHeight_int(void *thisObj, int h);
// QWidget::setFixedSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setFixedSize_QSize(void *thisObj,
                                                         void *arg__1_);
// QWidget::setFixedSize(int w, int h)
QtDartBindings_EXPORT void c_QWidget__setFixedSize_int_int(void *thisObj, int w,
                                                           int h);
// QWidget::setFixedWidth(int w)
QtDartBindings_EXPORT void c_QWidget__setFixedWidth_int(void *thisObj, int w);
// QWidget::setFocus()
QtDartBindings_EXPORT void c_QWidget__setFocus(void *thisObj);
// QWidget::setFocusProxy(QWidget * arg__1)
QtDartBindings_EXPORT void c_QWidget__setFocusProxy_QWidget(void *thisObj,
                                                            void *arg__1_);
// QWidget::setFont(const QFont & arg__1)
QtDartBindings_EXPORT void c_QWidget__setFont_QFont(void *thisObj,
                                                    void *arg__1_);
// QWidget::setForegroundRole(QPalette::ColorRole arg__1)
QtDartBindings_EXPORT void c_QWidget__setForegroundRole_ColorRole(void *thisObj,
                                                                  int arg__1);
// QWidget::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QWidget__setGeometry_QRect(void *thisObj,
                                                        void *arg__1_);
// QWidget::setGeometry(int x, int y, int w, int h)
QtDartBindings_EXPORT void c_QWidget__setGeometry_int_int_int_int(void *thisObj,
                                                                  int x, int y,
                                                                  int w, int h);
// QWidget::setHidden(bool hidden)
QtDartBindings_EXPORT void c_QWidget__setHidden_bool(void *thisObj,
                                                     bool hidden);
// QWidget::setLayout(QLayout * arg__1)
QtDartBindings_EXPORT void c_QWidget__setLayout_QLayout(void *thisObj,
                                                        void *arg__1_);
// QWidget::setLayoutDirection(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_QWidget__setLayoutDirection_LayoutDirection(void *thisObj, int direction);
// QWidget::setMask(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QWidget__setMask_QRegion(void *thisObj,
                                                      void *arg__1_);
// QWidget::setMaximumHeight(int maxh)
QtDartBindings_EXPORT void c_QWidget__setMaximumHeight_int(void *thisObj,
                                                           int maxh);
// QWidget::setMaximumSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setMaximumSize_QSize(void *thisObj,
                                                           void *arg__1_);
// QWidget::setMaximumSize(int maxw, int maxh)
QtDartBindings_EXPORT void
c_QWidget__setMaximumSize_int_int(void *thisObj, int maxw, int maxh);
// QWidget::setMaximumWidth(int maxw)
QtDartBindings_EXPORT void c_QWidget__setMaximumWidth_int(void *thisObj,
                                                          int maxw);
// QWidget::setMinimumHeight(int minh)
QtDartBindings_EXPORT void c_QWidget__setMinimumHeight_int(void *thisObj,
                                                           int minh);
// QWidget::setMinimumSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setMinimumSize_QSize(void *thisObj,
                                                           void *arg__1_);
// QWidget::setMinimumSize(int minw, int minh)
QtDartBindings_EXPORT void
c_QWidget__setMinimumSize_int_int(void *thisObj, int minw, int minh);
// QWidget::setMinimumWidth(int minw)
QtDartBindings_EXPORT void c_QWidget__setMinimumWidth_int(void *thisObj,
                                                          int minw);
// QWidget::setMouseTracking(bool enable)
QtDartBindings_EXPORT void c_QWidget__setMouseTracking_bool(void *thisObj,
                                                            bool enable);
// QWidget::setPalette(const QPalette & arg__1)
QtDartBindings_EXPORT void c_QWidget__setPalette_QPalette(void *thisObj,
                                                          void *arg__1_);
// QWidget::setShortcutAutoRepeat(int id, bool enable)
QtDartBindings_EXPORT void
c_QWidget__setShortcutAutoRepeat_int_bool(void *thisObj, int id, bool enable);
// QWidget::setShortcutEnabled(int id, bool enable)
QtDartBindings_EXPORT void
c_QWidget__setShortcutEnabled_int_bool(void *thisObj, int id, bool enable);
// QWidget::setSizeIncrement(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setSizeIncrement_QSize(void *thisObj,
                                                             void *arg__1_);
// QWidget::setSizeIncrement(int w, int h)
QtDartBindings_EXPORT void c_QWidget__setSizeIncrement_int_int(void *thisObj,
                                                               int w, int h);
// QWidget::setSizePolicy(QSizePolicy arg__1)
QtDartBindings_EXPORT void c_QWidget__setSizePolicy_QSizePolicy(void *thisObj,
                                                                void *arg__1_);
// QWidget::setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy
// vertical)
QtDartBindings_EXPORT void
c_QWidget__setSizePolicy_Policy_Policy(void *thisObj, int horizontal,
                                       int vertical);
// QWidget::setStatusTip(const QString & arg__1)
QtDartBindings_EXPORT void c_QWidget__setStatusTip_QString(void *thisObj,
                                                           const char *arg__1_);
// QWidget::setStyle(QStyle * arg__1)
QtDartBindings_EXPORT void c_QWidget__setStyle_QStyle(void *thisObj,
                                                      void *arg__1_);
// QWidget::setStyleSheet(const QString & styleSheet)
QtDartBindings_EXPORT void
c_QWidget__setStyleSheet_QString(void *thisObj, const char *styleSheet_);
// QWidget::setTabOrder(QWidget * arg__1, QWidget * arg__2)
QtDartBindings_EXPORT void
c_static_QWidget__setTabOrder_QWidget_QWidget(void *arg__1_, void *arg__2_);
// QWidget::setTabletTracking(bool enable)
QtDartBindings_EXPORT void c_QWidget__setTabletTracking_bool(void *thisObj,
                                                             bool enable);
// QWidget::setToolTip(const QString & arg__1)
QtDartBindings_EXPORT void c_QWidget__setToolTip_QString(void *thisObj,
                                                         const char *arg__1_);
// QWidget::setToolTipDuration(int msec)
QtDartBindings_EXPORT void c_QWidget__setToolTipDuration_int(void *thisObj,
                                                             int msec);
// QWidget::setUpdatesEnabled(bool enable)
QtDartBindings_EXPORT void c_QWidget__setUpdatesEnabled_bool(void *thisObj,
                                                             bool enable);
// QWidget::setVisible(bool visible)
QtDartBindings_EXPORT void c_QWidget__setVisible_bool(void *thisObj,
                                                      bool visible);
// QWidget::setWhatsThis(const QString & arg__1)
QtDartBindings_EXPORT void c_QWidget__setWhatsThis_QString(void *thisObj,
                                                           const char *arg__1_);
// QWidget::setWindowFilePath(const QString & filePath)
QtDartBindings_EXPORT void
c_QWidget__setWindowFilePath_QString(void *thisObj, const char *filePath_);
// QWidget::setWindowIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QWidget__setWindowIcon_QIcon(void *thisObj,
                                                          void *icon_);
// QWidget::setWindowIconText(const QString & arg__1)
QtDartBindings_EXPORT void
c_QWidget__setWindowIconText_QString(void *thisObj, const char *arg__1_);
// QWidget::setWindowModified(bool arg__1)
QtDartBindings_EXPORT void c_QWidget__setWindowModified_bool(void *thisObj,
                                                             bool arg__1);
// QWidget::setWindowOpacity(qreal level)
QtDartBindings_EXPORT void c_QWidget__setWindowOpacity_qreal(void *thisObj,
                                                             qreal level);
// QWidget::setWindowRole(const QString & arg__1)
QtDartBindings_EXPORT void
c_QWidget__setWindowRole_QString(void *thisObj, const char *arg__1_);
// QWidget::setWindowTitle(const QString & arg__1)
QtDartBindings_EXPORT void
c_QWidget__setWindowTitle_QString(void *thisObj, const char *arg__1_);
// QWidget::sharedPainter() const
QtDartBindings_EXPORT void *c_QWidget__sharedPainter(void *thisObj);
// QWidget::show()
QtDartBindings_EXPORT void c_QWidget__show(void *thisObj);
// QWidget::showFullScreen()
QtDartBindings_EXPORT void c_QWidget__showFullScreen(void *thisObj);
// QWidget::showMaximized()
QtDartBindings_EXPORT void c_QWidget__showMaximized(void *thisObj);
// QWidget::showMinimized()
QtDartBindings_EXPORT void c_QWidget__showMinimized(void *thisObj);
// QWidget::showNormal()
QtDartBindings_EXPORT void c_QWidget__showNormal(void *thisObj);
// QWidget::size() const
QtDartBindings_EXPORT void *c_QWidget__size(void *thisObj);
// QWidget::sizeHint() const
QtDartBindings_EXPORT void *c_QWidget__sizeHint(void *thisObj);
// QWidget::sizeIncrement() const
QtDartBindings_EXPORT void *c_QWidget__sizeIncrement(void *thisObj);
// QWidget::sizePolicy() const
QtDartBindings_EXPORT void *c_QWidget__sizePolicy(void *thisObj);
// QWidget::stackUnder(QWidget * arg__1)
QtDartBindings_EXPORT void c_QWidget__stackUnder_QWidget(void *thisObj,
                                                         void *arg__1_);
// QWidget::statusTip() const
QtDartBindings_EXPORT void *c_QWidget__statusTip(void *thisObj);
// QWidget::style() const
QtDartBindings_EXPORT void *c_QWidget__style(void *thisObj);
// QWidget::styleSheet() const
QtDartBindings_EXPORT void *c_QWidget__styleSheet(void *thisObj);
// QWidget::toolTip() const
QtDartBindings_EXPORT void *c_QWidget__toolTip(void *thisObj);
// QWidget::toolTipDuration() const
QtDartBindings_EXPORT int c_QWidget__toolTipDuration(void *thisObj);
// QWidget::topLevelWidget() const
QtDartBindings_EXPORT void *c_QWidget__topLevelWidget(void *thisObj);
// QWidget::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QWidget__tr_char_char_int(const char *s, const char *c, int n);
// QWidget::underMouse() const
QtDartBindings_EXPORT bool c_QWidget__underMouse(void *thisObj);
// QWidget::unsetCursor()
QtDartBindings_EXPORT void c_QWidget__unsetCursor(void *thisObj);
// QWidget::unsetLayoutDirection()
QtDartBindings_EXPORT void c_QWidget__unsetLayoutDirection(void *thisObj);
// QWidget::unsetLocale()
QtDartBindings_EXPORT void c_QWidget__unsetLocale(void *thisObj);
// QWidget::update()
QtDartBindings_EXPORT void c_QWidget__update(void *thisObj);
// QWidget::update(const QRect & arg__1)
QtDartBindings_EXPORT void c_QWidget__update_QRect(void *thisObj,
                                                   void *arg__1_);
// QWidget::update(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QWidget__update_QRegion(void *thisObj,
                                                     void *arg__1_);
// QWidget::update(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QWidget__update_int_int_int_int(void *thisObj, int x, int y, int w, int h);
// QWidget::updateGeometry()
QtDartBindings_EXPORT void c_QWidget__updateGeometry(void *thisObj);
// QWidget::updateMicroFocus()
QtDartBindings_EXPORT void c_QWidget__updateMicroFocus(void *thisObj);
// QWidget::updatesEnabled() const
QtDartBindings_EXPORT bool c_QWidget__updatesEnabled(void *thisObj);
// QWidget::visibleRegion() const
QtDartBindings_EXPORT void *c_QWidget__visibleRegion(void *thisObj);
// QWidget::whatsThis() const
QtDartBindings_EXPORT void *c_QWidget__whatsThis(void *thisObj);
// QWidget::width() const
QtDartBindings_EXPORT int c_QWidget__width(void *thisObj);
// QWidget::window() const
QtDartBindings_EXPORT void *c_QWidget__window(void *thisObj);
// QWidget::windowFilePath() const
QtDartBindings_EXPORT void *c_QWidget__windowFilePath(void *thisObj);
// QWidget::windowHandle() const
QtDartBindings_EXPORT void *c_QWidget__windowHandle(void *thisObj);
// QWidget::windowIcon() const
QtDartBindings_EXPORT void *c_QWidget__windowIcon(void *thisObj);
// QWidget::windowIconChanged(const QIcon & icon)
QtDartBindings_EXPORT void c_QWidget__windowIconChanged_QIcon(void *thisObj,
                                                              void *icon_);
QtDartBindings_EXPORT void c_QWidget__onWindowIconChanged_QIcon(
    void *thisObj, void *contextQObject,
    void *callback); // QWidget::windowIconText() const
QtDartBindings_EXPORT void *c_QWidget__windowIconText(void *thisObj);
// QWidget::windowIconTextChanged(const QString & iconText)
QtDartBindings_EXPORT void
c_QWidget__windowIconTextChanged_QString(void *thisObj, const char *iconText_);
QtDartBindings_EXPORT void c_QWidget__onWindowIconTextChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QWidget::windowOpacity() const
QtDartBindings_EXPORT qreal c_QWidget__windowOpacity(void *thisObj);
// QWidget::windowRole() const
QtDartBindings_EXPORT void *c_QWidget__windowRole(void *thisObj);
// QWidget::windowTitle() const
QtDartBindings_EXPORT void *c_QWidget__windowTitle(void *thisObj);
// QWidget::windowTitleChanged(const QString & title)
QtDartBindings_EXPORT void
c_QWidget__windowTitleChanged_QString(void *thisObj, const char *title_);
QtDartBindings_EXPORT void
c_QWidget__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                        void *callback); // QWidget::x() const
QtDartBindings_EXPORT int c_QWidget__x(void *thisObj);
// QWidget::y() const
QtDartBindings_EXPORT int c_QWidget__y(void *thisObj);
QtDartBindings_EXPORT void c_QWidget__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QWidget__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
QtDartBindings_EXPORT void c_QWidget_Finalizer(void *cppObj);
}

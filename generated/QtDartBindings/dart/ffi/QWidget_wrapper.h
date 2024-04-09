
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
// tag=1017
class QWidget_wrapper : public ::QWidget {
public:
  ~QWidget_wrapper();
  // tag=1041
  QWidget_wrapper(QWidget *parent = nullptr);
  // tag=1041
  bool acceptDrops() const;
  // tag=1041
  QString accessibleDescription() const;
  // tag=1041
  QString accessibleName() const;
  // tag=1041
  QList<QAction *> actions() const;
  // tag=1041
  void activateWindow();
  // tag=1041
  void addAction(QAction *action);
  // tag=1041
  QAction *addAction(const QIcon &icon, const QString &text);
  // tag=1041
  QAction *addAction(const QIcon &icon, const QString &text,
                     const QKeySequence &shortcut);
  // tag=1041
  QAction *addAction(const QIcon &icon, const QString &text,
                     const QKeySequence &shortcut, const QObject *receiver,
                     const char *member);
  // tag=1041
  QAction *addAction(const QIcon &icon, const QString &text,
                     const QObject *receiver, const char *member);
  // tag=1041
  QAction *addAction(const QString &text);
  // tag=1041
  QAction *addAction(const QString &text, const QKeySequence &shortcut);
  // tag=1041
  QAction *addAction(const QString &text, const QKeySequence &shortcut,
                     const QObject *receiver, const char *member);
  // tag=1041
  QAction *addAction(const QString &text, const QObject *receiver,
                     const char *member);
  // tag=1041
  void addActions(const QList<QAction *> &actions);
  // tag=1041
  void adjustSize();
  // tag=1041
  bool autoFillBackground() const;
  // tag=1041
  QPalette::ColorRole backgroundRole() const;
  // tag=1041
  QSize baseSize() const;
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  QWidget *childAt(const QPoint &p) const;
  // tag=1041
  QWidget *childAt(int x, int y) const;
  // tag=1041
  QRect childrenRect() const;
  // tag=1041
  QRegion childrenRegion() const;
  // tag=1041
  void clearFocus();
  // tag=1041
  void clearMask();
  // tag=1041
  bool close();
  // tag=1041
  QRect contentsRect() const;
  // tag=1041
  void create();
  // tag=1041
  void createWinId();
  // tag=1041
  static QWidget *createWindowContainer(QWindow *window,
                                        QWidget *parent = nullptr);
  // tag=1041
  void customContextMenuRequested(const QPoint &pos);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  void destroy(bool destroyWindow = true, bool destroySubWindows = true);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  void ensurePolished() const;
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  bool focusNextChild();
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  bool focusPreviousChild();
  // tag=1041
  QWidget *focusProxy() const;
  // tag=1041
  QWidget *focusWidget() const;
  // tag=1041
  const QFont &font() const;
  // tag=1041
  QPalette::ColorRole foregroundRole() const;
  // tag=1041
  QRect frameGeometry() const;
  // tag=1041
  QSize frameSize() const;
  // tag=1041
  const QRect &geometry() const;
  // tag=1041
  QPixmap grab(const QRect &rectangle = QRect(QPoint(0, 0), QSize(-1, -1)));
  // tag=1041
  void grabKeyboard();
  // tag=1041
  void grabMouse();
  // tag=1041
  int grabShortcut(const QKeySequence &key);
  // tag=1041
  bool hasFocus() const;
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  bool hasMouseTracking() const;
  // tag=1041
  bool hasTabletTracking() const;
  // tag=1041
  int height() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  void hide();
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  void insertAction(QAction *before, QAction *action);
  // tag=1041
  void insertActions(QAction *before, const QList<QAction *> &actions);
  // tag=1041
  bool isActiveWindow() const;
  // tag=1041
  bool isAncestorOf(const QWidget *child) const;
  // tag=1041
  bool isEnabled() const;
  // tag=1041
  bool isEnabledTo(const QWidget *arg__1) const;
  // tag=1041
  bool isFullScreen() const;
  // tag=1041
  bool isHidden() const;
  // tag=1041
  bool isLeftToRight() const;
  // tag=1041
  bool isMaximized() const;
  // tag=1041
  bool isMinimized() const;
  // tag=1041
  bool isModal() const;
  // tag=1041
  bool isRightToLeft() const;
  // tag=1041
  bool isVisible() const;
  // tag=1041
  bool isVisibleTo(const QWidget *arg__1) const;
  // tag=1041
  bool isWindow() const;
  // tag=1041
  bool isWindowModified() const;
  // tag=1041
  static QWidget *keyboardGrabber();
  // tag=1041
  QLayout *layout() const;
  // tag=1041
  Qt::LayoutDirection layoutDirection() const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  void lower();
  // tag=1041
  QPoint mapFrom(const QWidget *arg__1, const QPoint &arg__2) const;
  // tag=1041
  QPointF mapFrom(const QWidget *arg__1, const QPointF &arg__2) const;
  // tag=1041
  QPoint mapFromGlobal(const QPoint &arg__1) const;
  // tag=1041
  QPointF mapFromGlobal(const QPointF &arg__1) const;
  // tag=1041
  QPoint mapFromParent(const QPoint &arg__1) const;
  // tag=1041
  QPointF mapFromParent(const QPointF &arg__1) const;
  // tag=1041
  QPoint mapTo(const QWidget *arg__1, const QPoint &arg__2) const;
  // tag=1041
  QPointF mapTo(const QWidget *arg__1, const QPointF &arg__2) const;
  // tag=1041
  QPoint mapToGlobal(const QPoint &arg__1) const;
  // tag=1041
  QPointF mapToGlobal(const QPointF &arg__1) const;
  // tag=1041
  QPoint mapToParent(const QPoint &arg__1) const;
  // tag=1041
  QPointF mapToParent(const QPointF &arg__1) const;
  // tag=1041
  QRegion mask() const;
  // tag=1041
  int maximumHeight() const;
  // tag=1041
  QSize maximumSize() const;
  // tag=1041
  int maximumWidth() const;
  // tag=1041
  int minimumHeight() const;
  // tag=1041
  QSize minimumSize() const;
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  int minimumWidth() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  static QWidget *mouseGrabber();
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *event);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  // tag=1041
  void move(const QPoint &arg__1);
  // tag=1041
  void move(int x, int y);
  // tag=1041
  QWidget *nativeParentWidget() const;
  // tag=1041
  QWidget *nextInFocusChain() const;
  // tag=1041
  QRect normalGeometry() const;
  // tag=1041
  virtual void paintEvent(QPaintEvent *event);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *event);
  // tag=1041
  const QPalette &palette() const;
  // tag=1041
  QWidget *parentWidget() const;
  // tag=1041
  QPoint pos() const;
  // tag=1041
  QWidget *previousInFocusChain() const;
  // tag=1041
  void raise();
  // tag=1041
  QRect rect() const;
  // tag=1041
  void releaseKeyboard();
  // tag=1041
  void releaseMouse();
  // tag=1041
  void releaseShortcut(int id);
  // tag=1041
  void removeAction(QAction *action);
  // tag=1041
  void render(QPainter *painter, const QPoint &targetOffset = QPoint(),
              const QRegion &sourceRegion = QRegion());
  // tag=1041
  void repaint();
  // tag=1041
  void repaint(const QRect &arg__1);
  // tag=1041
  void repaint(const QRegion &arg__1);
  // tag=1041
  void repaint(int x, int y, int w, int h);
  // tag=1041
  void resize(const QSize &arg__1);
  // tag=1041
  void resize(int w, int h);
  // tag=1041
  bool restoreGeometry(const QByteArray &geometry);
  // tag=1041
  QByteArray saveGeometry() const;
  // tag=1041
  void scroll(int dx, int dy);
  // tag=1041
  void scroll(int dx, int dy, const QRect &arg__3);
  // tag=1041
  void setAcceptDrops(bool on);
  // tag=1041
  void setAccessibleDescription(const QString &description);
  // tag=1041
  void setAccessibleName(const QString &name);
  // tag=1041
  void setAutoFillBackground(bool enabled);
  // tag=1041
  void setBackgroundRole(QPalette::ColorRole arg__1);
  // tag=1041
  void setBaseSize(const QSize &arg__1);
  // tag=1041
  void setBaseSize(int basew, int baseh);
  // tag=1041
  void setContentsMargins(int left, int top, int right, int bottom);
  // tag=1041
  void setDisabled(bool arg__1);
  // tag=1041
  void setEnabled(bool arg__1);
  // tag=1041
  void setFixedHeight(int h);
  // tag=1041
  void setFixedSize(const QSize &arg__1);
  // tag=1041
  void setFixedSize(int w, int h);
  // tag=1041
  void setFixedWidth(int w);
  // tag=1041
  void setFocus();
  // tag=1041
  void setFocusProxy(QWidget *arg__1);
  // tag=1041
  void setFont(const QFont &arg__1);
  // tag=1041
  void setForegroundRole(QPalette::ColorRole arg__1);
  // tag=1041
  void setGeometry(const QRect &arg__1);
  // tag=1041
  void setGeometry(int x, int y, int w, int h);
  // tag=1041
  void setHidden(bool hidden);
  // tag=1041
  void setLayout(QLayout *arg__1);
  // tag=1041
  void setLayoutDirection(Qt::LayoutDirection direction);
  // tag=1041
  void setMask(const QRegion &arg__1);
  // tag=1041
  void setMaximumHeight(int maxh);
  // tag=1041
  void setMaximumSize(const QSize &arg__1);
  // tag=1041
  void setMaximumSize(int maxw, int maxh);
  // tag=1041
  void setMaximumWidth(int maxw);
  // tag=1041
  void setMinimumHeight(int minh);
  // tag=1041
  void setMinimumSize(const QSize &arg__1);
  // tag=1041
  void setMinimumSize(int minw, int minh);
  // tag=1041
  void setMinimumWidth(int minw);
  // tag=1041
  void setMouseTracking(bool enable);
  // tag=1041
  void setPalette(const QPalette &arg__1);
  // tag=1041
  void setShortcutAutoRepeat(int id, bool enable = true);
  // tag=1041
  void setShortcutEnabled(int id, bool enable = true);
  // tag=1041
  void setSizeIncrement(const QSize &arg__1);
  // tag=1041
  void setSizeIncrement(int w, int h);
  // tag=1041
  void setSizePolicy(QSizePolicy arg__1);
  // tag=1041
  void setSizePolicy(QSizePolicy::Policy horizontal,
                     QSizePolicy::Policy vertical);
  // tag=1041
  void setStatusTip(const QString &arg__1);
  // tag=1041
  void setStyle(QStyle *arg__1);
  // tag=1041
  void setStyleSheet(const QString &styleSheet);
  // tag=1041
  static void setTabOrder(QWidget *arg__1, QWidget *arg__2);
  // tag=1041
  void setTabletTracking(bool enable);
  // tag=1041
  void setToolTip(const QString &arg__1);
  // tag=1041
  void setToolTipDuration(int msec);
  // tag=1041
  void setUpdatesEnabled(bool enable);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  void setWhatsThis(const QString &arg__1);
  // tag=1041
  void setWindowFilePath(const QString &filePath);
  // tag=1041
  void setWindowIcon(const QIcon &icon);
  // tag=1041
  void setWindowIconText(const QString &arg__1);
  // tag=1041
  void setWindowModified(bool arg__1);
  // tag=1041
  void setWindowOpacity(qreal level);
  // tag=1041
  void setWindowRole(const QString &arg__1);
  // tag=1041
  void setWindowTitle(const QString &arg__1);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  void show();
  // tag=1041
  void showFullScreen();
  // tag=1041
  void showMaximized();
  // tag=1041
  void showMinimized();
  // tag=1041
  void showNormal();
  // tag=1041
  QSize size() const;
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  QSize sizeIncrement() const;
  // tag=1041
  QSizePolicy sizePolicy() const;
  // tag=1041
  void stackUnder(QWidget *arg__1);
  // tag=1041
  QString statusTip() const;
  // tag=1041
  QStyle *style() const;
  // tag=1041
  QString styleSheet() const;
  // tag=1041
  QString toolTip() const;
  // tag=1041
  int toolTipDuration() const;
  // tag=1041
  QWidget *topLevelWidget() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  bool underMouse() const;
  // tag=1041
  void unsetCursor();
  // tag=1041
  void unsetLayoutDirection();
  // tag=1041
  void unsetLocale();
  // tag=1041
  void update();
  // tag=1041
  void update(const QRect &arg__1);
  // tag=1041
  void update(const QRegion &arg__1);
  // tag=1041
  void update(int x, int y, int w, int h);
  // tag=1041
  void updateGeometry();
  // tag=1041
  void updateMicroFocus();
  // tag=1041
  bool updatesEnabled() const;
  // tag=1041
  QRegion visibleRegion() const;
  // tag=1041
  QString whatsThis() const;
  // tag=1041
  int width() const;
  // tag=1041
  QWidget *window() const;
  // tag=1041
  QString windowFilePath() const;
  // tag=1041
  QWindow *windowHandle() const;
  // tag=1041
  QIcon windowIcon() const;
  // tag=1041
  void windowIconChanged(const QIcon &icon);
  // tag=1041
  QString windowIconText() const;
  // tag=1041
  void windowIconTextChanged(const QString &iconText);
  // tag=1041
  qreal windowOpacity() const;
  // tag=1041
  QString windowRole() const;
  // tag=1041
  QString windowTitle() const;
  // tag=1041
  void windowTitleChanged(const QString &title);
  // tag=1041
  int x() const;
  // tag=1041
  int y() const;
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
  typedef bool (*Callback_event)(void *, QEvent *event);
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
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *event);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *event);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
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
//  QWidget::QWidget(QWidget * parent)
QtDartBindings_EXPORT void *c_QWidget__constructor_QWidget(void *parent_);

// tag=1067
//  QWidget::acceptDrops() const
QtDartBindings_EXPORT bool c_QWidget__acceptDrops(void *thisObj);

// tag=1067
//  QWidget::accessibleDescription() const
QtDartBindings_EXPORT void *c_QWidget__accessibleDescription(void *thisObj);

// tag=1067
//  QWidget::accessibleName() const
QtDartBindings_EXPORT void *c_QWidget__accessibleName(void *thisObj);

// tag=1067
//  QWidget::actions() const
QtDartBindings_EXPORT void *c_QWidget__actions(void *thisObj);

// tag=1067
//  QWidget::activateWindow()
QtDartBindings_EXPORT void c_QWidget__activateWindow(void *thisObj);

// tag=1067
//  QWidget::addAction(QAction * action)
QtDartBindings_EXPORT void c_QWidget__addAction_QAction(void *thisObj,
                                                        void *action_);

// tag=1067
//  QWidget::addAction(const QIcon & icon, const QString & text)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QIcon_QString(void *thisObj, void *icon_,
                                   const char *text_);

// tag=1067
//  QWidget::addAction(const QIcon & icon, const QString & text, const
//  QKeySequence & shortcut)
QtDartBindings_EXPORT void *c_QWidget__addAction_QIcon_QString_QKeySequence(
    void *thisObj, void *icon_, const char *text_, void *shortcut_);

// tag=1067
//  QWidget::addAction(const QIcon & icon, const QString & text, const
//  QKeySequence & shortcut, const QObject * receiver, const char * member)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QIcon_QString_QKeySequence_QObject_char(
    void *thisObj, void *icon_, const char *text_, void *shortcut_,
    void *receiver_, const char *member);

// tag=1067
//  QWidget::addAction(const QIcon & icon, const QString & text, const QObject *
//  receiver, const char * member)
QtDartBindings_EXPORT void *c_QWidget__addAction_QIcon_QString_QObject_char(
    void *thisObj, void *icon_, const char *text_, void *receiver_,
    const char *member);

// tag=1067
//  QWidget::addAction(const QString & text)
QtDartBindings_EXPORT void *c_QWidget__addAction_QString(void *thisObj,
                                                         const char *text_);

// tag=1067
//  QWidget::addAction(const QString & text, const QKeySequence & shortcut)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QString_QKeySequence(void *thisObj, const char *text_,
                                          void *shortcut_);

// tag=1067
//  QWidget::addAction(const QString & text, const QKeySequence & shortcut,
//  const QObject * receiver, const char * member)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QString_QKeySequence_QObject_char(void *thisObj,
                                                       const char *text_,
                                                       void *shortcut_,
                                                       void *receiver_,
                                                       const char *member);

// tag=1067
//  QWidget::addAction(const QString & text, const QObject * receiver, const
//  char * member)
QtDartBindings_EXPORT void *
c_QWidget__addAction_QString_QObject_char(void *thisObj, const char *text_,
                                          void *receiver_, const char *member);

// tag=1067
//  QWidget::addActions(const QList<QAction* > & actions)
QtDartBindings_EXPORT void c_QWidget__addActions_QList_QAction(void *thisObj,
                                                               void *actions_);

// tag=1067
//  QWidget::adjustSize()
QtDartBindings_EXPORT void c_QWidget__adjustSize(void *thisObj);

// tag=1067
//  QWidget::autoFillBackground() const
QtDartBindings_EXPORT bool c_QWidget__autoFillBackground(void *thisObj);

// tag=1067
//  QWidget::backgroundRole() const
QtDartBindings_EXPORT int c_QWidget__backgroundRole(void *thisObj);

// tag=1067
//  QWidget::baseSize() const
QtDartBindings_EXPORT void *c_QWidget__baseSize(void *thisObj);

// tag=1067
//  QWidget::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QWidget__changeEvent_QEvent(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QWidget::childAt(const QPoint & p) const
QtDartBindings_EXPORT void *c_QWidget__childAt_QPoint(void *thisObj, void *p_);

// tag=1067
//  QWidget::childAt(int x, int y) const
QtDartBindings_EXPORT void *c_QWidget__childAt_int_int(void *thisObj, int x,
                                                       int y);

// tag=1067
//  QWidget::childrenRect() const
QtDartBindings_EXPORT void *c_QWidget__childrenRect(void *thisObj);

// tag=1067
//  QWidget::childrenRegion() const
QtDartBindings_EXPORT void *c_QWidget__childrenRegion(void *thisObj);

// tag=1067
//  QWidget::clearFocus()
QtDartBindings_EXPORT void c_QWidget__clearFocus(void *thisObj);

// tag=1067
//  QWidget::clearMask()
QtDartBindings_EXPORT void c_QWidget__clearMask(void *thisObj);

// tag=1067
//  QWidget::close()
QtDartBindings_EXPORT bool c_QWidget__close(void *thisObj);

// tag=1067
//  QWidget::contentsRect() const
QtDartBindings_EXPORT void *c_QWidget__contentsRect(void *thisObj);

// tag=1067
//  QWidget::create()
QtDartBindings_EXPORT void c_QWidget__create(void *thisObj);

// tag=1067
//  QWidget::createWinId()
QtDartBindings_EXPORT void c_QWidget__createWinId(void *thisObj);

// tag=1067
//  QWidget::createWindowContainer(QWindow * window, QWidget * parent)
QtDartBindings_EXPORT void *
c_static_QWidget__createWindowContainer_QWindow_QWidget(void *window_,
                                                        void *parent_);

// tag=1067
//  QWidget::customContextMenuRequested(const QPoint & pos)
QtDartBindings_EXPORT void
c_QWidget__customContextMenuRequested_QPoint(void *thisObj, void *pos_);

// tag=1078
QtDartBindings_EXPORT void c_QWidget__onCustomContextMenuRequested_QPoint(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QWidget::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QWidget__customEvent_QEvent(void *thisObj,
                                                         void *event_);

// tag=1067
//  QWidget::destroy(bool destroyWindow, bool destroySubWindows)
QtDartBindings_EXPORT void c_QWidget__destroy_bool_bool(void *thisObj,
                                                        bool destroyWindow,
                                                        bool destroySubWindows);

// tag=1067
//  QWidget::devType() const
QtDartBindings_EXPORT int c_QWidget__devType(void *thisObj);

// tag=1067
//  QWidget::ensurePolished() const
QtDartBindings_EXPORT void c_QWidget__ensurePolished(void *thisObj);

// tag=1067
//  QWidget::event(QEvent * event)
QtDartBindings_EXPORT bool c_QWidget__event_QEvent(void *thisObj, void *event_);

// tag=1067
//  QWidget::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QWidget__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *watched_,
                                                                 void *event_);

// tag=1067
//  QWidget::focusNextChild()
QtDartBindings_EXPORT bool c_QWidget__focusNextChild(void *thisObj);

// tag=1067
//  QWidget::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QWidget__focusNextPrevChild_bool(void *thisObj,
                                                              bool next);

// tag=1067
//  QWidget::focusPreviousChild()
QtDartBindings_EXPORT bool c_QWidget__focusPreviousChild(void *thisObj);

// tag=1067
//  QWidget::focusProxy() const
QtDartBindings_EXPORT void *c_QWidget__focusProxy(void *thisObj);

// tag=1067
//  QWidget::focusWidget() const
QtDartBindings_EXPORT void *c_QWidget__focusWidget(void *thisObj);

// tag=1067
//  QWidget::font() const
QtDartBindings_EXPORT void *c_QWidget__font(void *thisObj);

// tag=1067
//  QWidget::foregroundRole() const
QtDartBindings_EXPORT int c_QWidget__foregroundRole(void *thisObj);

// tag=1067
//  QWidget::frameGeometry() const
QtDartBindings_EXPORT void *c_QWidget__frameGeometry(void *thisObj);

// tag=1067
//  QWidget::frameSize() const
QtDartBindings_EXPORT void *c_QWidget__frameSize(void *thisObj);

// tag=1067
//  QWidget::geometry() const
QtDartBindings_EXPORT void *c_QWidget__geometry(void *thisObj);

// tag=1067
//  QWidget::grab(const QRect & rectangle)
QtDartBindings_EXPORT void *c_QWidget__grab_QRect(void *thisObj,
                                                  void *rectangle_);

// tag=1067
//  QWidget::grabKeyboard()
QtDartBindings_EXPORT void c_QWidget__grabKeyboard(void *thisObj);

// tag=1067
//  QWidget::grabMouse()
QtDartBindings_EXPORT void c_QWidget__grabMouse(void *thisObj);

// tag=1067
//  QWidget::grabShortcut(const QKeySequence & key)
QtDartBindings_EXPORT int c_QWidget__grabShortcut_QKeySequence(void *thisObj,
                                                               void *key_);

// tag=1067
//  QWidget::hasFocus() const
QtDartBindings_EXPORT bool c_QWidget__hasFocus(void *thisObj);

// tag=1067
//  QWidget::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QWidget__hasHeightForWidth(void *thisObj);

// tag=1067
//  QWidget::hasMouseTracking() const
QtDartBindings_EXPORT bool c_QWidget__hasMouseTracking(void *thisObj);

// tag=1067
//  QWidget::hasTabletTracking() const
QtDartBindings_EXPORT bool c_QWidget__hasTabletTracking(void *thisObj);

// tag=1067
//  QWidget::height() const
QtDartBindings_EXPORT int c_QWidget__height(void *thisObj);

// tag=1067
//  QWidget::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QWidget__heightForWidth_int(void *thisObj,
                                                        int arg__1);

// tag=1067
//  QWidget::hide()
QtDartBindings_EXPORT void c_QWidget__hide(void *thisObj);

// tag=1067
//  QWidget::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QWidget__initPainter_QPainter(void *thisObj,
                                                           void *painter_);

// tag=1067
//  QWidget::insertAction(QAction * before, QAction * action)
QtDartBindings_EXPORT void
c_QWidget__insertAction_QAction_QAction(void *thisObj, void *before_,
                                        void *action_);

// tag=1067
//  QWidget::insertActions(QAction * before, const QList<QAction* > & actions)
QtDartBindings_EXPORT void
c_QWidget__insertActions_QAction_QList_QAction(void *thisObj, void *before_,
                                               void *actions_);

// tag=1067
//  QWidget::isActiveWindow() const
QtDartBindings_EXPORT bool c_QWidget__isActiveWindow(void *thisObj);

// tag=1067
//  QWidget::isAncestorOf(const QWidget * child) const
QtDartBindings_EXPORT bool c_QWidget__isAncestorOf_QWidget(void *thisObj,
                                                           void *child_);

// tag=1067
//  QWidget::isEnabled() const
QtDartBindings_EXPORT bool c_QWidget__isEnabled(void *thisObj);

// tag=1067
//  QWidget::isEnabledTo(const QWidget * arg__1) const
QtDartBindings_EXPORT bool c_QWidget__isEnabledTo_QWidget(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QWidget::isFullScreen() const
QtDartBindings_EXPORT bool c_QWidget__isFullScreen(void *thisObj);

// tag=1067
//  QWidget::isHidden() const
QtDartBindings_EXPORT bool c_QWidget__isHidden(void *thisObj);

// tag=1067
//  QWidget::isLeftToRight() const
QtDartBindings_EXPORT bool c_QWidget__isLeftToRight(void *thisObj);

// tag=1067
//  QWidget::isMaximized() const
QtDartBindings_EXPORT bool c_QWidget__isMaximized(void *thisObj);

// tag=1067
//  QWidget::isMinimized() const
QtDartBindings_EXPORT bool c_QWidget__isMinimized(void *thisObj);

// tag=1067
//  QWidget::isModal() const
QtDartBindings_EXPORT bool c_QWidget__isModal(void *thisObj);

// tag=1067
//  QWidget::isRightToLeft() const
QtDartBindings_EXPORT bool c_QWidget__isRightToLeft(void *thisObj);

// tag=1067
//  QWidget::isVisible() const
QtDartBindings_EXPORT bool c_QWidget__isVisible(void *thisObj);

// tag=1067
//  QWidget::isVisibleTo(const QWidget * arg__1) const
QtDartBindings_EXPORT bool c_QWidget__isVisibleTo_QWidget(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QWidget::isWindow() const
QtDartBindings_EXPORT bool c_QWidget__isWindow(void *thisObj);

// tag=1067
//  QWidget::isWindowModified() const
QtDartBindings_EXPORT bool c_QWidget__isWindowModified(void *thisObj);

// tag=1067
//  QWidget::keyboardGrabber()
QtDartBindings_EXPORT void *c_static_QWidget__keyboardGrabber();

// tag=1067
//  QWidget::layout() const
QtDartBindings_EXPORT void *c_QWidget__layout(void *thisObj);

// tag=1067
//  QWidget::layoutDirection() const
QtDartBindings_EXPORT int c_QWidget__layoutDirection(void *thisObj);

// tag=1067
//  QWidget::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QWidget__leaveEvent_QEvent(void *thisObj,
                                                        void *event_);

// tag=1067
//  QWidget::lower()
QtDartBindings_EXPORT void c_QWidget__lower(void *thisObj);

// tag=1067
//  QWidget::mapFrom(const QWidget * arg__1, const QPoint & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapFrom_QWidget_QPoint(void *thisObj, void *arg__1_, void *arg__2_);

// tag=1067
//  QWidget::mapFrom(const QWidget * arg__1, const QPointF & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapFrom_QWidget_QPointF(void *thisObj, void *arg__1_, void *arg__2_);

// tag=1067
//  QWidget::mapFromGlobal(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromGlobal_QPoint(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QWidget::mapFromGlobal(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromGlobal_QPointF(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QWidget::mapFromParent(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromParent_QPoint(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QWidget::mapFromParent(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapFromParent_QPointF(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QWidget::mapTo(const QWidget * arg__1, const QPoint & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapTo_QWidget_QPoint(void *thisObj, void *arg__1_, void *arg__2_);

// tag=1067
//  QWidget::mapTo(const QWidget * arg__1, const QPointF & arg__2) const
QtDartBindings_EXPORT void *
c_QWidget__mapTo_QWidget_QPointF(void *thisObj, void *arg__1_, void *arg__2_);

// tag=1067
//  QWidget::mapToGlobal(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToGlobal_QPoint(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QWidget::mapToGlobal(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToGlobal_QPointF(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QWidget::mapToParent(const QPoint & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToParent_QPoint(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QWidget::mapToParent(const QPointF & arg__1) const
QtDartBindings_EXPORT void *c_QWidget__mapToParent_QPointF(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QWidget::mask() const
QtDartBindings_EXPORT void *c_QWidget__mask(void *thisObj);

// tag=1067
//  QWidget::maximumHeight() const
QtDartBindings_EXPORT int c_QWidget__maximumHeight(void *thisObj);

// tag=1067
//  QWidget::maximumSize() const
QtDartBindings_EXPORT void *c_QWidget__maximumSize(void *thisObj);

// tag=1067
//  QWidget::maximumWidth() const
QtDartBindings_EXPORT int c_QWidget__maximumWidth(void *thisObj);

// tag=1067
//  QWidget::minimumHeight() const
QtDartBindings_EXPORT int c_QWidget__minimumHeight(void *thisObj);

// tag=1067
//  QWidget::minimumSize() const
QtDartBindings_EXPORT void *c_QWidget__minimumSize(void *thisObj);

// tag=1067
//  QWidget::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QWidget__minimumSizeHint(void *thisObj);

// tag=1067
//  QWidget::minimumWidth() const
QtDartBindings_EXPORT int c_QWidget__minimumWidth(void *thisObj);

// tag=1067
//  QWidget::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QWidget__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QWidget::mouseGrabber()
QtDartBindings_EXPORT void *c_static_QWidget__mouseGrabber();

// tag=1067
//  QWidget::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QWidget__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                 void *event_);

// tag=1067
//  QWidget::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QWidget__mousePressEvent_QMouseEvent(void *thisObj,
                                                                  void *event_);

// tag=1067
//  QWidget::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QWidget__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QWidget::move(const QPoint & arg__1)
QtDartBindings_EXPORT void c_QWidget__move_QPoint(void *thisObj, void *arg__1_);

// tag=1067
//  QWidget::move(int x, int y)
QtDartBindings_EXPORT void c_QWidget__move_int_int(void *thisObj, int x, int y);

// tag=1067
//  QWidget::nativeParentWidget() const
QtDartBindings_EXPORT void *c_QWidget__nativeParentWidget(void *thisObj);

// tag=1067
//  QWidget::nextInFocusChain() const
QtDartBindings_EXPORT void *c_QWidget__nextInFocusChain(void *thisObj);

// tag=1067
//  QWidget::normalGeometry() const
QtDartBindings_EXPORT void *c_QWidget__normalGeometry(void *thisObj);

// tag=1067
//  QWidget::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QWidget__paintEvent_QPaintEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QWidget::palette() const
QtDartBindings_EXPORT void *c_QWidget__palette(void *thisObj);

// tag=1067
//  QWidget::parentWidget() const
QtDartBindings_EXPORT void *c_QWidget__parentWidget(void *thisObj);

// tag=1067
//  QWidget::pos() const
QtDartBindings_EXPORT void *c_QWidget__pos(void *thisObj);

// tag=1067
//  QWidget::previousInFocusChain() const
QtDartBindings_EXPORT void *c_QWidget__previousInFocusChain(void *thisObj);

// tag=1067
//  QWidget::raise()
QtDartBindings_EXPORT void c_QWidget__raise(void *thisObj);

// tag=1067
//  QWidget::rect() const
QtDartBindings_EXPORT void *c_QWidget__rect(void *thisObj);

// tag=1067
//  QWidget::releaseKeyboard()
QtDartBindings_EXPORT void c_QWidget__releaseKeyboard(void *thisObj);

// tag=1067
//  QWidget::releaseMouse()
QtDartBindings_EXPORT void c_QWidget__releaseMouse(void *thisObj);

// tag=1067
//  QWidget::releaseShortcut(int id)
QtDartBindings_EXPORT void c_QWidget__releaseShortcut_int(void *thisObj,
                                                          int id);

// tag=1067
//  QWidget::removeAction(QAction * action)
QtDartBindings_EXPORT void c_QWidget__removeAction_QAction(void *thisObj,
                                                           void *action_);

// tag=1067
//  QWidget::render(QPainter * painter, const QPoint & targetOffset, const
//  QRegion & sourceRegion)
QtDartBindings_EXPORT void c_QWidget__render_QPainter_QPoint_QRegion(
    void *thisObj, void *painter_, void *targetOffset_, void *sourceRegion_);

// tag=1067
//  QWidget::repaint()
QtDartBindings_EXPORT void c_QWidget__repaint(void *thisObj);

// tag=1067
//  QWidget::repaint(const QRect & arg__1)
QtDartBindings_EXPORT void c_QWidget__repaint_QRect(void *thisObj,
                                                    void *arg__1_);

// tag=1067
//  QWidget::repaint(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QWidget__repaint_QRegion(void *thisObj,
                                                      void *arg__1_);

// tag=1067
//  QWidget::repaint(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QWidget__repaint_int_int_int_int(void *thisObj, int x, int y, int w, int h);

// tag=1067
//  QWidget::resize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__resize_QSize(void *thisObj,
                                                   void *arg__1_);

// tag=1067
//  QWidget::resize(int w, int h)
QtDartBindings_EXPORT void c_QWidget__resize_int_int(void *thisObj, int w,
                                                     int h);

// tag=1067
//  QWidget::restoreGeometry(const QByteArray & geometry)
QtDartBindings_EXPORT bool
c_QWidget__restoreGeometry_QByteArray(void *thisObj, void *geometry_);

// tag=1067
//  QWidget::saveGeometry() const
QtDartBindings_EXPORT void *c_QWidget__saveGeometry(void *thisObj);

// tag=1067
//  QWidget::scroll(int dx, int dy)
QtDartBindings_EXPORT void c_QWidget__scroll_int_int(void *thisObj, int dx,
                                                     int dy);

// tag=1067
//  QWidget::scroll(int dx, int dy, const QRect & arg__3)
QtDartBindings_EXPORT void
c_QWidget__scroll_int_int_QRect(void *thisObj, int dx, int dy, void *arg__3_);

// tag=1067
//  QWidget::setAcceptDrops(bool on)
QtDartBindings_EXPORT void c_QWidget__setAcceptDrops_bool(void *thisObj,
                                                          bool on);

// tag=1067
//  QWidget::setAccessibleDescription(const QString & description)
QtDartBindings_EXPORT void
c_QWidget__setAccessibleDescription_QString(void *thisObj,
                                            const char *description_);

// tag=1067
//  QWidget::setAccessibleName(const QString & name)
QtDartBindings_EXPORT void
c_QWidget__setAccessibleName_QString(void *thisObj, const char *name_);

// tag=1067
//  QWidget::setAutoFillBackground(bool enabled)
QtDartBindings_EXPORT void c_QWidget__setAutoFillBackground_bool(void *thisObj,
                                                                 bool enabled);

// tag=1067
//  QWidget::setBackgroundRole(QPalette::ColorRole arg__1)
QtDartBindings_EXPORT void c_QWidget__setBackgroundRole_ColorRole(void *thisObj,
                                                                  int arg__1);

// tag=1067
//  QWidget::setBaseSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setBaseSize_QSize(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QWidget::setBaseSize(int basew, int baseh)
QtDartBindings_EXPORT void c_QWidget__setBaseSize_int_int(void *thisObj,
                                                          int basew, int baseh);

// tag=1067
//  QWidget::setContentsMargins(int left, int top, int right, int bottom)
QtDartBindings_EXPORT void
c_QWidget__setContentsMargins_int_int_int_int(void *thisObj, int left, int top,
                                              int right, int bottom);

// tag=1067
//  QWidget::setDisabled(bool arg__1)
QtDartBindings_EXPORT void c_QWidget__setDisabled_bool(void *thisObj,
                                                       bool arg__1);

// tag=1067
//  QWidget::setEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QWidget__setEnabled_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QWidget::setFixedHeight(int h)
QtDartBindings_EXPORT void c_QWidget__setFixedHeight_int(void *thisObj, int h);

// tag=1067
//  QWidget::setFixedSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setFixedSize_QSize(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QWidget::setFixedSize(int w, int h)
QtDartBindings_EXPORT void c_QWidget__setFixedSize_int_int(void *thisObj, int w,
                                                           int h);

// tag=1067
//  QWidget::setFixedWidth(int w)
QtDartBindings_EXPORT void c_QWidget__setFixedWidth_int(void *thisObj, int w);

// tag=1067
//  QWidget::setFocus()
QtDartBindings_EXPORT void c_QWidget__setFocus(void *thisObj);

// tag=1067
//  QWidget::setFocusProxy(QWidget * arg__1)
QtDartBindings_EXPORT void c_QWidget__setFocusProxy_QWidget(void *thisObj,
                                                            void *arg__1_);

// tag=1067
//  QWidget::setFont(const QFont & arg__1)
QtDartBindings_EXPORT void c_QWidget__setFont_QFont(void *thisObj,
                                                    void *arg__1_);

// tag=1067
//  QWidget::setForegroundRole(QPalette::ColorRole arg__1)
QtDartBindings_EXPORT void c_QWidget__setForegroundRole_ColorRole(void *thisObj,
                                                                  int arg__1);

// tag=1067
//  QWidget::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void c_QWidget__setGeometry_QRect(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QWidget::setGeometry(int x, int y, int w, int h)
QtDartBindings_EXPORT void c_QWidget__setGeometry_int_int_int_int(void *thisObj,
                                                                  int x, int y,
                                                                  int w, int h);

// tag=1067
//  QWidget::setHidden(bool hidden)
QtDartBindings_EXPORT void c_QWidget__setHidden_bool(void *thisObj,
                                                     bool hidden);

// tag=1067
//  QWidget::setLayout(QLayout * arg__1)
QtDartBindings_EXPORT void c_QWidget__setLayout_QLayout(void *thisObj,
                                                        void *arg__1_);

// tag=1067
//  QWidget::setLayoutDirection(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
c_QWidget__setLayoutDirection_LayoutDirection(void *thisObj, int direction);

// tag=1067
//  QWidget::setMask(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QWidget__setMask_QRegion(void *thisObj,
                                                      void *arg__1_);

// tag=1067
//  QWidget::setMaximumHeight(int maxh)
QtDartBindings_EXPORT void c_QWidget__setMaximumHeight_int(void *thisObj,
                                                           int maxh);

// tag=1067
//  QWidget::setMaximumSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setMaximumSize_QSize(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QWidget::setMaximumSize(int maxw, int maxh)
QtDartBindings_EXPORT void
c_QWidget__setMaximumSize_int_int(void *thisObj, int maxw, int maxh);

// tag=1067
//  QWidget::setMaximumWidth(int maxw)
QtDartBindings_EXPORT void c_QWidget__setMaximumWidth_int(void *thisObj,
                                                          int maxw);

// tag=1067
//  QWidget::setMinimumHeight(int minh)
QtDartBindings_EXPORT void c_QWidget__setMinimumHeight_int(void *thisObj,
                                                           int minh);

// tag=1067
//  QWidget::setMinimumSize(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setMinimumSize_QSize(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QWidget::setMinimumSize(int minw, int minh)
QtDartBindings_EXPORT void
c_QWidget__setMinimumSize_int_int(void *thisObj, int minw, int minh);

// tag=1067
//  QWidget::setMinimumWidth(int minw)
QtDartBindings_EXPORT void c_QWidget__setMinimumWidth_int(void *thisObj,
                                                          int minw);

// tag=1067
//  QWidget::setMouseTracking(bool enable)
QtDartBindings_EXPORT void c_QWidget__setMouseTracking_bool(void *thisObj,
                                                            bool enable);

// tag=1067
//  QWidget::setPalette(const QPalette & arg__1)
QtDartBindings_EXPORT void c_QWidget__setPalette_QPalette(void *thisObj,
                                                          void *arg__1_);

// tag=1067
//  QWidget::setShortcutAutoRepeat(int id, bool enable)
QtDartBindings_EXPORT void
c_QWidget__setShortcutAutoRepeat_int_bool(void *thisObj, int id, bool enable);

// tag=1067
//  QWidget::setShortcutEnabled(int id, bool enable)
QtDartBindings_EXPORT void
c_QWidget__setShortcutEnabled_int_bool(void *thisObj, int id, bool enable);

// tag=1067
//  QWidget::setSizeIncrement(const QSize & arg__1)
QtDartBindings_EXPORT void c_QWidget__setSizeIncrement_QSize(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QWidget::setSizeIncrement(int w, int h)
QtDartBindings_EXPORT void c_QWidget__setSizeIncrement_int_int(void *thisObj,
                                                               int w, int h);

// tag=1067
//  QWidget::setSizePolicy(QSizePolicy arg__1)
QtDartBindings_EXPORT void c_QWidget__setSizePolicy_QSizePolicy(void *thisObj,
                                                                void *arg__1_);

// tag=1067
//  QWidget::setSizePolicy(QSizePolicy::Policy horizontal, QSizePolicy::Policy
//  vertical)
QtDartBindings_EXPORT void
c_QWidget__setSizePolicy_Policy_Policy(void *thisObj, int horizontal,
                                       int vertical);

// tag=1067
//  QWidget::setStatusTip(const QString & arg__1)
QtDartBindings_EXPORT void c_QWidget__setStatusTip_QString(void *thisObj,
                                                           const char *arg__1_);

// tag=1067
//  QWidget::setStyle(QStyle * arg__1)
QtDartBindings_EXPORT void c_QWidget__setStyle_QStyle(void *thisObj,
                                                      void *arg__1_);

// tag=1067
//  QWidget::setStyleSheet(const QString & styleSheet)
QtDartBindings_EXPORT void
c_QWidget__setStyleSheet_QString(void *thisObj, const char *styleSheet_);

// tag=1067
//  QWidget::setTabOrder(QWidget * arg__1, QWidget * arg__2)
QtDartBindings_EXPORT void
c_static_QWidget__setTabOrder_QWidget_QWidget(void *arg__1_, void *arg__2_);

// tag=1067
//  QWidget::setTabletTracking(bool enable)
QtDartBindings_EXPORT void c_QWidget__setTabletTracking_bool(void *thisObj,
                                                             bool enable);

// tag=1067
//  QWidget::setToolTip(const QString & arg__1)
QtDartBindings_EXPORT void c_QWidget__setToolTip_QString(void *thisObj,
                                                         const char *arg__1_);

// tag=1067
//  QWidget::setToolTipDuration(int msec)
QtDartBindings_EXPORT void c_QWidget__setToolTipDuration_int(void *thisObj,
                                                             int msec);

// tag=1067
//  QWidget::setUpdatesEnabled(bool enable)
QtDartBindings_EXPORT void c_QWidget__setUpdatesEnabled_bool(void *thisObj,
                                                             bool enable);

// tag=1067
//  QWidget::setVisible(bool visible)
QtDartBindings_EXPORT void c_QWidget__setVisible_bool(void *thisObj,
                                                      bool visible);

// tag=1067
//  QWidget::setWhatsThis(const QString & arg__1)
QtDartBindings_EXPORT void c_QWidget__setWhatsThis_QString(void *thisObj,
                                                           const char *arg__1_);

// tag=1067
//  QWidget::setWindowFilePath(const QString & filePath)
QtDartBindings_EXPORT void
c_QWidget__setWindowFilePath_QString(void *thisObj, const char *filePath_);

// tag=1067
//  QWidget::setWindowIcon(const QIcon & icon)
QtDartBindings_EXPORT void c_QWidget__setWindowIcon_QIcon(void *thisObj,
                                                          void *icon_);

// tag=1067
//  QWidget::setWindowIconText(const QString & arg__1)
QtDartBindings_EXPORT void
c_QWidget__setWindowIconText_QString(void *thisObj, const char *arg__1_);

// tag=1067
//  QWidget::setWindowModified(bool arg__1)
QtDartBindings_EXPORT void c_QWidget__setWindowModified_bool(void *thisObj,
                                                             bool arg__1);

// tag=1067
//  QWidget::setWindowOpacity(qreal level)
QtDartBindings_EXPORT void c_QWidget__setWindowOpacity_qreal(void *thisObj,
                                                             qreal level);

// tag=1067
//  QWidget::setWindowRole(const QString & arg__1)
QtDartBindings_EXPORT void
c_QWidget__setWindowRole_QString(void *thisObj, const char *arg__1_);

// tag=1067
//  QWidget::setWindowTitle(const QString & arg__1)
QtDartBindings_EXPORT void
c_QWidget__setWindowTitle_QString(void *thisObj, const char *arg__1_);

// tag=1067
//  QWidget::sharedPainter() const
QtDartBindings_EXPORT void *c_QWidget__sharedPainter(void *thisObj);

// tag=1067
//  QWidget::show()
QtDartBindings_EXPORT void c_QWidget__show(void *thisObj);

// tag=1067
//  QWidget::showFullScreen()
QtDartBindings_EXPORT void c_QWidget__showFullScreen(void *thisObj);

// tag=1067
//  QWidget::showMaximized()
QtDartBindings_EXPORT void c_QWidget__showMaximized(void *thisObj);

// tag=1067
//  QWidget::showMinimized()
QtDartBindings_EXPORT void c_QWidget__showMinimized(void *thisObj);

// tag=1067
//  QWidget::showNormal()
QtDartBindings_EXPORT void c_QWidget__showNormal(void *thisObj);

// tag=1067
//  QWidget::size() const
QtDartBindings_EXPORT void *c_QWidget__size(void *thisObj);

// tag=1067
//  QWidget::sizeHint() const
QtDartBindings_EXPORT void *c_QWidget__sizeHint(void *thisObj);

// tag=1067
//  QWidget::sizeIncrement() const
QtDartBindings_EXPORT void *c_QWidget__sizeIncrement(void *thisObj);

// tag=1067
//  QWidget::sizePolicy() const
QtDartBindings_EXPORT void *c_QWidget__sizePolicy(void *thisObj);

// tag=1067
//  QWidget::stackUnder(QWidget * arg__1)
QtDartBindings_EXPORT void c_QWidget__stackUnder_QWidget(void *thisObj,
                                                         void *arg__1_);

// tag=1067
//  QWidget::statusTip() const
QtDartBindings_EXPORT void *c_QWidget__statusTip(void *thisObj);

// tag=1067
//  QWidget::style() const
QtDartBindings_EXPORT void *c_QWidget__style(void *thisObj);

// tag=1067
//  QWidget::styleSheet() const
QtDartBindings_EXPORT void *c_QWidget__styleSheet(void *thisObj);

// tag=1067
//  QWidget::toolTip() const
QtDartBindings_EXPORT void *c_QWidget__toolTip(void *thisObj);

// tag=1067
//  QWidget::toolTipDuration() const
QtDartBindings_EXPORT int c_QWidget__toolTipDuration(void *thisObj);

// tag=1067
//  QWidget::topLevelWidget() const
QtDartBindings_EXPORT void *c_QWidget__topLevelWidget(void *thisObj);

// tag=1067
//  QWidget::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QWidget__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QWidget::underMouse() const
QtDartBindings_EXPORT bool c_QWidget__underMouse(void *thisObj);

// tag=1067
//  QWidget::unsetCursor()
QtDartBindings_EXPORT void c_QWidget__unsetCursor(void *thisObj);

// tag=1067
//  QWidget::unsetLayoutDirection()
QtDartBindings_EXPORT void c_QWidget__unsetLayoutDirection(void *thisObj);

// tag=1067
//  QWidget::unsetLocale()
QtDartBindings_EXPORT void c_QWidget__unsetLocale(void *thisObj);

// tag=1067
//  QWidget::update()
QtDartBindings_EXPORT void c_QWidget__update(void *thisObj);

// tag=1067
//  QWidget::update(const QRect & arg__1)
QtDartBindings_EXPORT void c_QWidget__update_QRect(void *thisObj,
                                                   void *arg__1_);

// tag=1067
//  QWidget::update(const QRegion & arg__1)
QtDartBindings_EXPORT void c_QWidget__update_QRegion(void *thisObj,
                                                     void *arg__1_);

// tag=1067
//  QWidget::update(int x, int y, int w, int h)
QtDartBindings_EXPORT void
c_QWidget__update_int_int_int_int(void *thisObj, int x, int y, int w, int h);

// tag=1067
//  QWidget::updateGeometry()
QtDartBindings_EXPORT void c_QWidget__updateGeometry(void *thisObj);

// tag=1067
//  QWidget::updateMicroFocus()
QtDartBindings_EXPORT void c_QWidget__updateMicroFocus(void *thisObj);

// tag=1067
//  QWidget::updatesEnabled() const
QtDartBindings_EXPORT bool c_QWidget__updatesEnabled(void *thisObj);

// tag=1067
//  QWidget::visibleRegion() const
QtDartBindings_EXPORT void *c_QWidget__visibleRegion(void *thisObj);

// tag=1067
//  QWidget::whatsThis() const
QtDartBindings_EXPORT void *c_QWidget__whatsThis(void *thisObj);

// tag=1067
//  QWidget::width() const
QtDartBindings_EXPORT int c_QWidget__width(void *thisObj);

// tag=1067
//  QWidget::window() const
QtDartBindings_EXPORT void *c_QWidget__window(void *thisObj);

// tag=1067
//  QWidget::windowFilePath() const
QtDartBindings_EXPORT void *c_QWidget__windowFilePath(void *thisObj);

// tag=1067
//  QWidget::windowHandle() const
QtDartBindings_EXPORT void *c_QWidget__windowHandle(void *thisObj);

// tag=1067
//  QWidget::windowIcon() const
QtDartBindings_EXPORT void *c_QWidget__windowIcon(void *thisObj);

// tag=1067
//  QWidget::windowIconChanged(const QIcon & icon)
QtDartBindings_EXPORT void c_QWidget__windowIconChanged_QIcon(void *thisObj,
                                                              void *icon_);

// tag=1078
QtDartBindings_EXPORT void
c_QWidget__onWindowIconChanged_QIcon(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QWidget::windowIconText() const
QtDartBindings_EXPORT void *c_QWidget__windowIconText(void *thisObj);

// tag=1067
//  QWidget::windowIconTextChanged(const QString & iconText)
QtDartBindings_EXPORT void
c_QWidget__windowIconTextChanged_QString(void *thisObj, const char *iconText_);

// tag=1078
QtDartBindings_EXPORT void
c_QWidget__onWindowIconTextChanged_QString(void *thisObj, void *contextQObject,
                                           void *callback);
// tag=1067
//  QWidget::windowOpacity() const
QtDartBindings_EXPORT qreal c_QWidget__windowOpacity(void *thisObj);

// tag=1067
//  QWidget::windowRole() const
QtDartBindings_EXPORT void *c_QWidget__windowRole(void *thisObj);

// tag=1067
//  QWidget::windowTitle() const
QtDartBindings_EXPORT void *c_QWidget__windowTitle(void *thisObj);

// tag=1067
//  QWidget::windowTitleChanged(const QString & title)
QtDartBindings_EXPORT void
c_QWidget__windowTitleChanged_QString(void *thisObj, const char *title_);

// tag=1078
QtDartBindings_EXPORT void
c_QWidget__onWindowTitleChanged_QString(void *thisObj, void *contextQObject,
                                        void *callback);
// tag=1067
//  QWidget::x() const
QtDartBindings_EXPORT int c_QWidget__x(void *thisObj);

// tag=1067
//  QWidget::y() const
QtDartBindings_EXPORT int c_QWidget__y(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QWidget__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QWidget__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QWidget_Finalizer(void *, void *cppObj, void *);
}

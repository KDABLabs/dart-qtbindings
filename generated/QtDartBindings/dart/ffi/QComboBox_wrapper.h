
// tag=1040
#include "QtDartBindings_exports.h"
#include <QtGui/qevent.h>
#include <QtGui/qicon.h>
#include <QtGui/qpainter.h>
#include <QtGui/qpalette.h>
#include <QtGui/qpixmap.h>
#include <QtGui/qwindow.h>
#include <QtWidgets/qabstractitemview.h>
#include <QtWidgets/qaction.h>
#include <QtWidgets/qcombobox.h>
#include <QtWidgets/qlineedit.h>
#include <QtWidgets/qstyle.h>
#include <QtWidgets/qwidget.h>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QComboBox_wrapper : public ::QComboBox {
public:
  ~QComboBox_wrapper();
  // tag=1041
  QComboBox_wrapper(QWidget *parent = nullptr);
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
  void activated(int index);
  // tag=1041
  void addAction(QAction *action);
  // tag=1041
  void addActions(QList<QAction *> actions);
  // tag=1041
  void addItem(const QIcon &icon, const QString &text,
               const QVariant &userData = QVariant());
  // tag=1041
  void addItem(const QString &text, const QVariant &userData = QVariant());
  // tag=1041
  void adjustSize();
  // tag=1041
  bool autoFillBackground() const;
  // tag=1041
  QPalette::ColorRole backgroundRole() const;
  // tag=1041
  QSize baseSize() const;
  // tag=1041
  QWidget *childAt(const QPoint &p) const;
  // tag=1041
  QWidget *childAt(int x, int y) const;
  // tag=1041
  QRect childrenRect() const;
  // tag=1041
  void clear();
  // tag=1041
  void clearEditText();
  // tag=1041
  void clearFocus();
  // tag=1041
  void clearMask();
  // tag=1041
  bool close();
  // tag=1041
  QRect contentsRect() const;
  // tag=1041
  int count() const;
  // tag=1041
  void create();
  // tag=1041
  void createWinId();
  // tag=1041
  static QWidget *createWindowContainer(QWindow *window,
                                        QWidget *parent = nullptr);
  // tag=1041
  QVariant currentData(int role = Qt::UserRole) const;
  // tag=1041
  int currentIndex() const;
  // tag=1041
  void currentIndexChanged(int index);
  // tag=1041
  QString currentText() const;
  // tag=1041
  void currentTextChanged(const QString &arg__1);
  // tag=1041
  void customContextMenuRequested(const QPoint &pos);
  // tag=1041
  void destroy(bool destroyWindow = true, bool destroySubWindows = true);
  // tag=1041
  bool duplicatesEnabled() const;
  // tag=1041
  void editTextChanged(const QString &arg__1);
  // tag=1041
  void ensurePolished() const;
  // tag=1041
  int findData(const QVariant &data, int role = Qt::UserRole) const;
  // tag=1041
  int findText(const QString &text) const;
  // tag=1041
  bool focusNextChild();
  // tag=1041
  bool focusPreviousChild();
  // tag=1041
  QWidget *focusProxy() const;
  // tag=1041
  QWidget *focusWidget() const;
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
  bool hasFocus() const;
  // tag=1041
  bool hasFrame() const;
  // tag=1041
  bool hasMouseTracking() const;
  // tag=1041
  bool hasTabletTracking() const;
  // tag=1041
  int height() const;
  // tag=1041
  void hide();
  // tag=1041
  virtual void hidePopup();
  // tag=1008
  virtual void hidePopup_nocallback();
  // tag=1041
  void highlighted(int index);
  // tag=1041
  QSize iconSize() const;
  // tag=1041
  void insertAction(QAction *before, QAction *action);
  // tag=1041
  void insertActions(QAction *before, QList<QAction *> actions);
  // tag=1041
  void insertItem(int index, const QIcon &icon, const QString &text,
                  const QVariant &userData = QVariant());
  // tag=1041
  void insertItem(int index, const QString &text,
                  const QVariant &userData = QVariant());
  // tag=1041
  void insertSeparator(int index);
  // tag=1041
  bool isActiveWindow() const;
  // tag=1041
  bool isAncestorOf(const QWidget *child) const;
  // tag=1041
  bool isEditable() const;
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
  bool isTopLevel() const;
  // tag=1041
  bool isVisible() const;
  // tag=1041
  bool isVisibleTo(const QWidget *arg__1) const;
  // tag=1041
  bool isWindow() const;
  // tag=1041
  bool isWindowModified() const;
  // tag=1041
  QVariant itemData(int index, int role = Qt::UserRole) const;
  // tag=1041
  QIcon itemIcon(int index) const;
  // tag=1041
  QString itemText(int index) const;
  // tag=1041
  static QWidget *keyboardGrabber();
  // tag=1041
  Qt::LayoutDirection layoutDirection() const;
  // tag=1041
  QLineEdit *lineEdit() const;
  // tag=1041
  void lower();
  // tag=1041
  QPoint mapFrom(const QWidget *arg__1, const QPoint &arg__2) const;
  // tag=1041
  QPoint mapFromGlobal(const QPoint &arg__1) const;
  // tag=1041
  QPoint mapFromParent(const QPoint &arg__1) const;
  // tag=1041
  QPoint mapTo(const QWidget *arg__1, const QPoint &arg__2) const;
  // tag=1041
  QPoint mapToGlobal(const QPoint &arg__1) const;
  // tag=1041
  QPoint mapToParent(const QPoint &arg__1) const;
  // tag=1041
  int maxCount() const;
  // tag=1041
  int maxVisibleItems() const;
  // tag=1041
  int maximumHeight() const;
  // tag=1041
  QSize maximumSize() const;
  // tag=1041
  int maximumWidth() const;
  // tag=1041
  int minimumContentsLength() const;
  // tag=1041
  int minimumHeight() const;
  // tag=1041
  QSize minimumSize() const;
  // tag=1041
  int minimumWidth() const;
  // tag=1041
  QAbstractItemModel *model() const;
  // tag=1041
  int modelColumn() const;
  // tag=1041
  static QWidget *mouseGrabber();
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
  const QPalette &palette() const;
  // tag=1041
  QWidget *parentWidget() const;
  // tag=1041
  QString placeholderText() const;
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
  void removeItem(int index);
  // tag=1041
  void render(QPainter *painter, const QPoint &targetOffset = QPoint());
  // tag=1041
  void repaint();
  // tag=1041
  void repaint(const QRect &arg__1);
  // tag=1041
  void repaint(int x, int y, int w, int h);
  // tag=1041
  void resize(const QSize &arg__1);
  // tag=1041
  void resize(int w, int h);
  // tag=1041
  bool restoreGeometry(const QByteArray &geometry);
  // tag=1041
  QModelIndex rootModelIndex() const;
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
  void setCurrentIndex(int index);
  // tag=1041
  void setCurrentText(const QString &text);
  // tag=1041
  void setDisabled(bool arg__1);
  // tag=1041
  void setDuplicatesEnabled(bool enable);
  // tag=1041
  void setEditText(const QString &text);
  // tag=1041
  void setEditable(bool editable);
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
  void setForegroundRole(QPalette::ColorRole arg__1);
  // tag=1041
  void setFrame(bool arg__1);
  // tag=1041
  void setGeometry(const QRect &arg__1);
  // tag=1041
  void setGeometry(int x, int y, int w, int h);
  // tag=1041
  void setHidden(bool hidden);
  // tag=1041
  void setIconSize(const QSize &size);
  // tag=1041
  void setItemData(int index, const QVariant &value, int role = Qt::UserRole);
  // tag=1041
  void setItemIcon(int index, const QIcon &icon);
  // tag=1041
  void setItemText(int index, const QString &text);
  // tag=1041
  void setLayoutDirection(Qt::LayoutDirection direction);
  // tag=1041
  void setLineEdit(QLineEdit *edit);
  // tag=1041
  void setMaxCount(int max);
  // tag=1041
  void setMaxVisibleItems(int maxItems);
  // tag=1041
  void setMaximumHeight(int maxh);
  // tag=1041
  void setMaximumSize(const QSize &arg__1);
  // tag=1041
  void setMaximumSize(int maxw, int maxh);
  // tag=1041
  void setMaximumWidth(int maxw);
  // tag=1041
  void setMinimumContentsLength(int characters);
  // tag=1041
  void setMinimumHeight(int minh);
  // tag=1041
  void setMinimumSize(const QSize &arg__1);
  // tag=1041
  void setMinimumSize(int minw, int minh);
  // tag=1041
  void setMinimumWidth(int minw);
  // tag=1041
  void setModel(QAbstractItemModel *model);
  // tag=1041
  void setModelColumn(int visibleColumn);
  // tag=1041
  void setMouseTracking(bool enable);
  // tag=1041
  void setPalette(const QPalette &arg__1);
  // tag=1041
  void setPlaceholderText(const QString &placeholderText);
  // tag=1041
  void setRootModelIndex(const QModelIndex &index);
  // tag=1041
  void setShortcutAutoRepeat(int id, bool enable = true);
  // tag=1041
  void setShortcutEnabled(int id, bool enable = true);
  // tag=1041
  void setSizeIncrement(const QSize &arg__1);
  // tag=1041
  void setSizeIncrement(int w, int h);
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
  void setView(QAbstractItemView *itemView);
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
  virtual void showPopup();
  // tag=1008
  virtual void showPopup_nocallback();
  // tag=1041
  QSize size() const;
  // tag=1041
  QSize sizeIncrement() const;
  // tag=1041
  void stackUnder(QWidget *arg__1);
  // tag=1041
  QString statusTip() const;
  // tag=1041
  QStyle *style() const;
  // tag=1041
  QString styleSheet() const;
  // tag=1041
  void textActivated(const QString &arg__1);
  // tag=1041
  void textHighlighted(const QString &arg__1);
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
  void update(int x, int y, int w, int h);
  // tag=1041
  void updateGeometry();
  // tag=1041
  void updateMicroFocus();
  // tag=1041
  bool updatesEnabled() const;
  // tag=1041
  QAbstractItemView *view() const;
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
  typedef void (*Callback_hidePopup)(void *);
  Callback_hidePopup m_hidePopupCallback = nullptr;
  // tag=1042
  typedef void (*Callback_showPopup)(void *);
  Callback_showPopup m_showPopupCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
// QComboBox::QComboBox(QWidget * parent)
QtDartBindings_EXPORT void *
dartffi_QComboBox__constructor_QWidget(void *parent_);

// tag=1067
// QComboBox::acceptDrops() const
QtDartBindings_EXPORT bool dartffi_QComboBox__acceptDrops(void *thisObj);

// tag=1067
// QComboBox::accessibleDescription() const
QtDartBindings_EXPORT void *
dartffi_QComboBox__accessibleDescription(void *thisObj);

// tag=1067
// QComboBox::accessibleName() const
QtDartBindings_EXPORT void *dartffi_QComboBox__accessibleName(void *thisObj);

// tag=1067
// QComboBox::actions() const
QtDartBindings_EXPORT void *dartffi_QComboBox__actions(void *thisObj);

// tag=1067
// QComboBox::activateWindow()
QtDartBindings_EXPORT void dartffi_QComboBox__activateWindow(void *thisObj);

// tag=1067
// QComboBox::activated(int index)
QtDartBindings_EXPORT void dartffi_QComboBox__activated_int(void *thisObj,
                                                            int index);

// tag=1078
QtDartBindings_EXPORT void
dartffi_QComboBox__onActivated_int(void *thisObj, void *contextQObject,
                                   void *callback);
// tag=1067
// QComboBox::addAction(QAction * action)
QtDartBindings_EXPORT void dartffi_QComboBox__addAction_QAction(void *thisObj,
                                                                void *action_);

// tag=1067
// QComboBox::addActions(QList<QAction* > actions)
QtDartBindings_EXPORT void dartffi_QComboBox__addActions_QList(void *thisObj,
                                                               void *actions_);

// tag=1067
// QComboBox::addItem(const QIcon & icon, const QString & text, const QVariant &
// userData)
QtDartBindings_EXPORT void dartffi_QComboBox__addItem_QIcon_QString_QVariant(
    void *thisObj, void *icon_, const char *text_, void *userData_);

// tag=1067
// QComboBox::addItem(const QString & text, const QVariant & userData)
QtDartBindings_EXPORT void
dartffi_QComboBox__addItem_QString_QVariant(void *thisObj, const char *text_,
                                            void *userData_);

// tag=1067
// QComboBox::adjustSize()
QtDartBindings_EXPORT void dartffi_QComboBox__adjustSize(void *thisObj);

// tag=1067
// QComboBox::autoFillBackground() const
QtDartBindings_EXPORT bool dartffi_QComboBox__autoFillBackground(void *thisObj);

// tag=1067
// QComboBox::backgroundRole() const
QtDartBindings_EXPORT int dartffi_QComboBox__backgroundRole(void *thisObj);

// tag=1067
// QComboBox::baseSize() const
QtDartBindings_EXPORT void *dartffi_QComboBox__baseSize(void *thisObj);

// tag=1067
// QComboBox::childAt(const QPoint & p) const
QtDartBindings_EXPORT void *dartffi_QComboBox__childAt_QPoint(void *thisObj,
                                                              void *p_);

// tag=1067
// QComboBox::childAt(int x, int y) const
QtDartBindings_EXPORT void *dartffi_QComboBox__childAt_int_int(void *thisObj,
                                                               int x, int y);

// tag=1067
// QComboBox::childrenRect() const
QtDartBindings_EXPORT void *dartffi_QComboBox__childrenRect(void *thisObj);

// tag=1067
// QComboBox::clear()
QtDartBindings_EXPORT void dartffi_QComboBox__clear(void *thisObj);

// tag=1067
// QComboBox::clearEditText()
QtDartBindings_EXPORT void dartffi_QComboBox__clearEditText(void *thisObj);

// tag=1067
// QComboBox::clearFocus()
QtDartBindings_EXPORT void dartffi_QComboBox__clearFocus(void *thisObj);

// tag=1067
// QComboBox::clearMask()
QtDartBindings_EXPORT void dartffi_QComboBox__clearMask(void *thisObj);

// tag=1067
// QComboBox::close()
QtDartBindings_EXPORT bool dartffi_QComboBox__close(void *thisObj);

// tag=1067
// QComboBox::contentsRect() const
QtDartBindings_EXPORT void *dartffi_QComboBox__contentsRect(void *thisObj);

// tag=1067
// QComboBox::count() const
QtDartBindings_EXPORT int dartffi_QComboBox__count(void *thisObj);

// tag=1067
// QComboBox::create()
QtDartBindings_EXPORT void dartffi_QComboBox__create(void *thisObj);

// tag=1067
// QComboBox::createWinId()
QtDartBindings_EXPORT void dartffi_QComboBox__createWinId(void *thisObj);

// tag=1067
// QComboBox::createWindowContainer(QWindow * window, QWidget * parent)
QtDartBindings_EXPORT void *
dartffi_static_QComboBox__createWindowContainer_QWindow_QWidget(void *window_,
                                                                void *parent_);

// tag=1067
// QComboBox::currentData(int role) const
QtDartBindings_EXPORT void *dartffi_QComboBox__currentData_int(void *thisObj,
                                                               int role);

// tag=1067
// QComboBox::currentIndex() const
QtDartBindings_EXPORT int dartffi_QComboBox__currentIndex(void *thisObj);

// tag=1067
// QComboBox::currentIndexChanged(int index)
QtDartBindings_EXPORT void
dartffi_QComboBox__currentIndexChanged_int(void *thisObj, int index);

// tag=1078
QtDartBindings_EXPORT void dartffi_QComboBox__onCurrentIndexChanged_int(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
// QComboBox::currentText() const
QtDartBindings_EXPORT void *dartffi_QComboBox__currentText(void *thisObj);

// tag=1067
// QComboBox::currentTextChanged(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__currentTextChanged_QString(void *thisObj,
                                              const char *arg__1_);

// tag=1078
QtDartBindings_EXPORT void dartffi_QComboBox__onCurrentTextChanged_QString(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
// QComboBox::customContextMenuRequested(const QPoint & pos)
QtDartBindings_EXPORT void
dartffi_QComboBox__customContextMenuRequested_QPoint(void *thisObj, void *pos_);

// tag=1078
QtDartBindings_EXPORT void
dartffi_QComboBox__onCustomContextMenuRequested_QPoint(void *thisObj,
                                                       void *contextQObject,
                                                       void *callback);
// tag=1067
// QComboBox::destroy(bool destroyWindow, bool destroySubWindows)
QtDartBindings_EXPORT void
dartffi_QComboBox__destroy_bool_bool(void *thisObj, bool destroyWindow,
                                     bool destroySubWindows);

// tag=1067
// QComboBox::duplicatesEnabled() const
QtDartBindings_EXPORT bool dartffi_QComboBox__duplicatesEnabled(void *thisObj);

// tag=1067
// QComboBox::editTextChanged(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__editTextChanged_QString(void *thisObj, const char *arg__1_);

// tag=1078
QtDartBindings_EXPORT void dartffi_QComboBox__onEditTextChanged_QString(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
// QComboBox::ensurePolished() const
QtDartBindings_EXPORT void dartffi_QComboBox__ensurePolished(void *thisObj);

// tag=1067
// QComboBox::findData(const QVariant & data, int role) const
QtDartBindings_EXPORT int
dartffi_QComboBox__findData_QVariant_int(void *thisObj, void *data_, int role);

// tag=1067
// QComboBox::findText(const QString & text) const
QtDartBindings_EXPORT int
dartffi_QComboBox__findText_QString(void *thisObj, const char *text_);

// tag=1067
// QComboBox::focusNextChild()
QtDartBindings_EXPORT bool dartffi_QComboBox__focusNextChild(void *thisObj);

// tag=1067
// QComboBox::focusPreviousChild()
QtDartBindings_EXPORT bool dartffi_QComboBox__focusPreviousChild(void *thisObj);

// tag=1067
// QComboBox::focusProxy() const
QtDartBindings_EXPORT void *dartffi_QComboBox__focusProxy(void *thisObj);

// tag=1067
// QComboBox::focusWidget() const
QtDartBindings_EXPORT void *dartffi_QComboBox__focusWidget(void *thisObj);

// tag=1067
// QComboBox::foregroundRole() const
QtDartBindings_EXPORT int dartffi_QComboBox__foregroundRole(void *thisObj);

// tag=1067
// QComboBox::frameGeometry() const
QtDartBindings_EXPORT void *dartffi_QComboBox__frameGeometry(void *thisObj);

// tag=1067
// QComboBox::frameSize() const
QtDartBindings_EXPORT void *dartffi_QComboBox__frameSize(void *thisObj);

// tag=1067
// QComboBox::geometry() const
QtDartBindings_EXPORT void *dartffi_QComboBox__geometry(void *thisObj);

// tag=1067
// QComboBox::grab(const QRect & rectangle)
QtDartBindings_EXPORT void *dartffi_QComboBox__grab_QRect(void *thisObj,
                                                          void *rectangle_);

// tag=1067
// QComboBox::grabKeyboard()
QtDartBindings_EXPORT void dartffi_QComboBox__grabKeyboard(void *thisObj);

// tag=1067
// QComboBox::grabMouse()
QtDartBindings_EXPORT void dartffi_QComboBox__grabMouse(void *thisObj);

// tag=1067
// QComboBox::hasFocus() const
QtDartBindings_EXPORT bool dartffi_QComboBox__hasFocus(void *thisObj);

// tag=1067
// QComboBox::hasFrame() const
QtDartBindings_EXPORT bool dartffi_QComboBox__hasFrame(void *thisObj);

// tag=1067
// QComboBox::hasMouseTracking() const
QtDartBindings_EXPORT bool dartffi_QComboBox__hasMouseTracking(void *thisObj);

// tag=1067
// QComboBox::hasTabletTracking() const
QtDartBindings_EXPORT bool dartffi_QComboBox__hasTabletTracking(void *thisObj);

// tag=1067
// QComboBox::height() const
QtDartBindings_EXPORT int dartffi_QComboBox__height(void *thisObj);

// tag=1067
// QComboBox::hide()
QtDartBindings_EXPORT void dartffi_QComboBox__hide(void *thisObj);

// tag=1067
// QComboBox::hidePopup()
QtDartBindings_EXPORT void dartffi_QComboBox__hidePopup(void *thisObj);

// tag=1067
// QComboBox::highlighted(int index)
QtDartBindings_EXPORT void dartffi_QComboBox__highlighted_int(void *thisObj,
                                                              int index);

// tag=1078
QtDartBindings_EXPORT void
dartffi_QComboBox__onHighlighted_int(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
// QComboBox::iconSize() const
QtDartBindings_EXPORT void *dartffi_QComboBox__iconSize(void *thisObj);

// tag=1067
// QComboBox::insertAction(QAction * before, QAction * action)
QtDartBindings_EXPORT void
dartffi_QComboBox__insertAction_QAction_QAction(void *thisObj, void *before_,
                                                void *action_);

// tag=1067
// QComboBox::insertActions(QAction * before, QList<QAction* > actions)
QtDartBindings_EXPORT void
dartffi_QComboBox__insertActions_QAction_QList(void *thisObj, void *before_,
                                               void *actions_);

// tag=1067
// QComboBox::insertItem(int index, const QIcon & icon, const QString & text,
// const QVariant & userData)
QtDartBindings_EXPORT void
dartffi_QComboBox__insertItem_int_QIcon_QString_QVariant(void *thisObj,
                                                         int index, void *icon_,
                                                         const char *text_,
                                                         void *userData_);

// tag=1067
// QComboBox::insertItem(int index, const QString & text, const QVariant &
// userData)
QtDartBindings_EXPORT void dartffi_QComboBox__insertItem_int_QString_QVariant(
    void *thisObj, int index, const char *text_, void *userData_);

// tag=1067
// QComboBox::insertSeparator(int index)
QtDartBindings_EXPORT void dartffi_QComboBox__insertSeparator_int(void *thisObj,
                                                                  int index);

// tag=1067
// QComboBox::isActiveWindow() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isActiveWindow(void *thisObj);

// tag=1067
// QComboBox::isAncestorOf(const QWidget * child) const
QtDartBindings_EXPORT bool
dartffi_QComboBox__isAncestorOf_QWidget(void *thisObj, void *child_);

// tag=1067
// QComboBox::isEditable() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isEditable(void *thisObj);

// tag=1067
// QComboBox::isEnabled() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isEnabled(void *thisObj);

// tag=1067
// QComboBox::isEnabledTo(const QWidget * arg__1) const
QtDartBindings_EXPORT bool
dartffi_QComboBox__isEnabledTo_QWidget(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::isFullScreen() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isFullScreen(void *thisObj);

// tag=1067
// QComboBox::isHidden() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isHidden(void *thisObj);

// tag=1067
// QComboBox::isLeftToRight() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isLeftToRight(void *thisObj);

// tag=1067
// QComboBox::isMaximized() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isMaximized(void *thisObj);

// tag=1067
// QComboBox::isMinimized() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isMinimized(void *thisObj);

// tag=1067
// QComboBox::isModal() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isModal(void *thisObj);

// tag=1067
// QComboBox::isRightToLeft() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isRightToLeft(void *thisObj);

// tag=1067
// QComboBox::isTopLevel() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isTopLevel(void *thisObj);

// tag=1067
// QComboBox::isVisible() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isVisible(void *thisObj);

// tag=1067
// QComboBox::isVisibleTo(const QWidget * arg__1) const
QtDartBindings_EXPORT bool
dartffi_QComboBox__isVisibleTo_QWidget(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::isWindow() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isWindow(void *thisObj);

// tag=1067
// QComboBox::isWindowModified() const
QtDartBindings_EXPORT bool dartffi_QComboBox__isWindowModified(void *thisObj);

// tag=1067
// QComboBox::itemData(int index, int role) const
QtDartBindings_EXPORT void *
dartffi_QComboBox__itemData_int_int(void *thisObj, int index, int role);

// tag=1067
// QComboBox::itemIcon(int index) const
QtDartBindings_EXPORT void *dartffi_QComboBox__itemIcon_int(void *thisObj,
                                                            int index);

// tag=1067
// QComboBox::itemText(int index) const
QtDartBindings_EXPORT void *dartffi_QComboBox__itemText_int(void *thisObj,
                                                            int index);

// tag=1067
// QComboBox::keyboardGrabber()
QtDartBindings_EXPORT void *dartffi_static_QComboBox__keyboardGrabber();

// tag=1067
// QComboBox::layoutDirection() const
QtDartBindings_EXPORT int dartffi_QComboBox__layoutDirection(void *thisObj);

// tag=1067
// QComboBox::lineEdit() const
QtDartBindings_EXPORT void *dartffi_QComboBox__lineEdit(void *thisObj);

// tag=1067
// QComboBox::lower()
QtDartBindings_EXPORT void dartffi_QComboBox__lower(void *thisObj);

// tag=1067
// QComboBox::mapFrom(const QWidget * arg__1, const QPoint & arg__2) const
QtDartBindings_EXPORT void *
dartffi_QComboBox__mapFrom_QWidget_QPoint(void *thisObj, void *arg__1_,
                                          void *arg__2_);

// tag=1067
// QComboBox::mapFromGlobal(const QPoint & arg__1) const
QtDartBindings_EXPORT void *
dartffi_QComboBox__mapFromGlobal_QPoint(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::mapFromParent(const QPoint & arg__1) const
QtDartBindings_EXPORT void *
dartffi_QComboBox__mapFromParent_QPoint(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::mapTo(const QWidget * arg__1, const QPoint & arg__2) const
QtDartBindings_EXPORT void *
dartffi_QComboBox__mapTo_QWidget_QPoint(void *thisObj, void *arg__1_,
                                        void *arg__2_);

// tag=1067
// QComboBox::mapToGlobal(const QPoint & arg__1) const
QtDartBindings_EXPORT void *
dartffi_QComboBox__mapToGlobal_QPoint(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::mapToParent(const QPoint & arg__1) const
QtDartBindings_EXPORT void *
dartffi_QComboBox__mapToParent_QPoint(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::maxCount() const
QtDartBindings_EXPORT int dartffi_QComboBox__maxCount(void *thisObj);

// tag=1067
// QComboBox::maxVisibleItems() const
QtDartBindings_EXPORT int dartffi_QComboBox__maxVisibleItems(void *thisObj);

// tag=1067
// QComboBox::maximumHeight() const
QtDartBindings_EXPORT int dartffi_QComboBox__maximumHeight(void *thisObj);

// tag=1067
// QComboBox::maximumSize() const
QtDartBindings_EXPORT void *dartffi_QComboBox__maximumSize(void *thisObj);

// tag=1067
// QComboBox::maximumWidth() const
QtDartBindings_EXPORT int dartffi_QComboBox__maximumWidth(void *thisObj);

// tag=1067
// QComboBox::minimumContentsLength() const
QtDartBindings_EXPORT int
dartffi_QComboBox__minimumContentsLength(void *thisObj);

// tag=1067
// QComboBox::minimumHeight() const
QtDartBindings_EXPORT int dartffi_QComboBox__minimumHeight(void *thisObj);

// tag=1067
// QComboBox::minimumSize() const
QtDartBindings_EXPORT void *dartffi_QComboBox__minimumSize(void *thisObj);

// tag=1067
// QComboBox::minimumWidth() const
QtDartBindings_EXPORT int dartffi_QComboBox__minimumWidth(void *thisObj);

// tag=1067
// QComboBox::model() const
QtDartBindings_EXPORT void *dartffi_QComboBox__model(void *thisObj);

// tag=1067
// QComboBox::modelColumn() const
QtDartBindings_EXPORT int dartffi_QComboBox__modelColumn(void *thisObj);

// tag=1067
// QComboBox::mouseGrabber()
QtDartBindings_EXPORT void *dartffi_static_QComboBox__mouseGrabber();

// tag=1067
// QComboBox::move(const QPoint & arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__move_QPoint(void *thisObj,
                                                          void *arg__1_);

// tag=1067
// QComboBox::move(int x, int y)
QtDartBindings_EXPORT void dartffi_QComboBox__move_int_int(void *thisObj, int x,
                                                           int y);

// tag=1067
// QComboBox::nativeParentWidget() const
QtDartBindings_EXPORT void *
dartffi_QComboBox__nativeParentWidget(void *thisObj);

// tag=1067
// QComboBox::nextInFocusChain() const
QtDartBindings_EXPORT void *dartffi_QComboBox__nextInFocusChain(void *thisObj);

// tag=1067
// QComboBox::normalGeometry() const
QtDartBindings_EXPORT void *dartffi_QComboBox__normalGeometry(void *thisObj);

// tag=1067
// QComboBox::palette() const
QtDartBindings_EXPORT void *dartffi_QComboBox__palette(void *thisObj);

// tag=1067
// QComboBox::parentWidget() const
QtDartBindings_EXPORT void *dartffi_QComboBox__parentWidget(void *thisObj);

// tag=1067
// QComboBox::placeholderText() const
QtDartBindings_EXPORT void *dartffi_QComboBox__placeholderText(void *thisObj);

// tag=1067
// QComboBox::pos() const
QtDartBindings_EXPORT void *dartffi_QComboBox__pos(void *thisObj);

// tag=1067
// QComboBox::previousInFocusChain() const
QtDartBindings_EXPORT void *
dartffi_QComboBox__previousInFocusChain(void *thisObj);

// tag=1067
// QComboBox::raise()
QtDartBindings_EXPORT void dartffi_QComboBox__raise(void *thisObj);

// tag=1067
// QComboBox::rect() const
QtDartBindings_EXPORT void *dartffi_QComboBox__rect(void *thisObj);

// tag=1067
// QComboBox::releaseKeyboard()
QtDartBindings_EXPORT void dartffi_QComboBox__releaseKeyboard(void *thisObj);

// tag=1067
// QComboBox::releaseMouse()
QtDartBindings_EXPORT void dartffi_QComboBox__releaseMouse(void *thisObj);

// tag=1067
// QComboBox::releaseShortcut(int id)
QtDartBindings_EXPORT void dartffi_QComboBox__releaseShortcut_int(void *thisObj,
                                                                  int id);

// tag=1067
// QComboBox::removeAction(QAction * action)
QtDartBindings_EXPORT void
dartffi_QComboBox__removeAction_QAction(void *thisObj, void *action_);

// tag=1067
// QComboBox::removeItem(int index)
QtDartBindings_EXPORT void dartffi_QComboBox__removeItem_int(void *thisObj,
                                                             int index);

// tag=1067
// QComboBox::render(QPainter * painter, const QPoint & targetOffset)
QtDartBindings_EXPORT void
dartffi_QComboBox__render_QPainter_QPoint(void *thisObj, void *painter_,
                                          void *targetOffset_);

// tag=1067
// QComboBox::repaint()
QtDartBindings_EXPORT void dartffi_QComboBox__repaint(void *thisObj);

// tag=1067
// QComboBox::repaint(const QRect & arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__repaint_QRect(void *thisObj,
                                                            void *arg__1_);

// tag=1067
// QComboBox::repaint(int x, int y, int w, int h)
QtDartBindings_EXPORT void
dartffi_QComboBox__repaint_int_int_int_int(void *thisObj, int x, int y, int w,
                                           int h);

// tag=1067
// QComboBox::resize(const QSize & arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__resize_QSize(void *thisObj,
                                                           void *arg__1_);

// tag=1067
// QComboBox::resize(int w, int h)
QtDartBindings_EXPORT void dartffi_QComboBox__resize_int_int(void *thisObj,
                                                             int w, int h);

// tag=1067
// QComboBox::restoreGeometry(const QByteArray & geometry)
QtDartBindings_EXPORT bool
dartffi_QComboBox__restoreGeometry_QByteArray(void *thisObj, void *geometry_);

// tag=1067
// QComboBox::rootModelIndex() const
QtDartBindings_EXPORT void *dartffi_QComboBox__rootModelIndex(void *thisObj);

// tag=1067
// QComboBox::saveGeometry() const
QtDartBindings_EXPORT void *dartffi_QComboBox__saveGeometry(void *thisObj);

// tag=1067
// QComboBox::scroll(int dx, int dy)
QtDartBindings_EXPORT void dartffi_QComboBox__scroll_int_int(void *thisObj,
                                                             int dx, int dy);

// tag=1067
// QComboBox::scroll(int dx, int dy, const QRect & arg__3)
QtDartBindings_EXPORT void
dartffi_QComboBox__scroll_int_int_QRect(void *thisObj, int dx, int dy,
                                        void *arg__3_);

// tag=1067
// QComboBox::setAcceptDrops(bool on)
QtDartBindings_EXPORT void dartffi_QComboBox__setAcceptDrops_bool(void *thisObj,
                                                                  bool on);

// tag=1067
// QComboBox::setAccessibleDescription(const QString & description)
QtDartBindings_EXPORT void
dartffi_QComboBox__setAccessibleDescription_QString(void *thisObj,
                                                    const char *description_);

// tag=1067
// QComboBox::setAccessibleName(const QString & name)
QtDartBindings_EXPORT void
dartffi_QComboBox__setAccessibleName_QString(void *thisObj, const char *name_);

// tag=1067
// QComboBox::setAutoFillBackground(bool enabled)
QtDartBindings_EXPORT void
dartffi_QComboBox__setAutoFillBackground_bool(void *thisObj, bool enabled);

// tag=1067
// QComboBox::setBackgroundRole(QPalette::ColorRole arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setBackgroundRole_ColorRole(void *thisObj, int arg__1);

// tag=1067
// QComboBox::setBaseSize(const QSize & arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__setBaseSize_QSize(void *thisObj,
                                                                void *arg__1_);

// tag=1067
// QComboBox::setBaseSize(int basew, int baseh)
QtDartBindings_EXPORT void
dartffi_QComboBox__setBaseSize_int_int(void *thisObj, int basew, int baseh);

// tag=1067
// QComboBox::setContentsMargins(int left, int top, int right, int bottom)
QtDartBindings_EXPORT void
dartffi_QComboBox__setContentsMargins_int_int_int_int(void *thisObj, int left,
                                                      int top, int right,
                                                      int bottom);

// tag=1067
// QComboBox::setCurrentIndex(int index)
QtDartBindings_EXPORT void dartffi_QComboBox__setCurrentIndex_int(void *thisObj,
                                                                  int index);

// tag=1067
// QComboBox::setCurrentText(const QString & text)
QtDartBindings_EXPORT void
dartffi_QComboBox__setCurrentText_QString(void *thisObj, const char *text_);

// tag=1067
// QComboBox::setDisabled(bool arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__setDisabled_bool(void *thisObj,
                                                               bool arg__1);

// tag=1067
// QComboBox::setDuplicatesEnabled(bool enable)
QtDartBindings_EXPORT void
dartffi_QComboBox__setDuplicatesEnabled_bool(void *thisObj, bool enable);

// tag=1067
// QComboBox::setEditText(const QString & text)
QtDartBindings_EXPORT void
dartffi_QComboBox__setEditText_QString(void *thisObj, const char *text_);

// tag=1067
// QComboBox::setEditable(bool editable)
QtDartBindings_EXPORT void dartffi_QComboBox__setEditable_bool(void *thisObj,
                                                               bool editable);

// tag=1067
// QComboBox::setEnabled(bool arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__setEnabled_bool(void *thisObj,
                                                              bool arg__1);

// tag=1067
// QComboBox::setFixedHeight(int h)
QtDartBindings_EXPORT void dartffi_QComboBox__setFixedHeight_int(void *thisObj,
                                                                 int h);

// tag=1067
// QComboBox::setFixedSize(const QSize & arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__setFixedSize_QSize(void *thisObj,
                                                                 void *arg__1_);

// tag=1067
// QComboBox::setFixedSize(int w, int h)
QtDartBindings_EXPORT void
dartffi_QComboBox__setFixedSize_int_int(void *thisObj, int w, int h);

// tag=1067
// QComboBox::setFixedWidth(int w)
QtDartBindings_EXPORT void dartffi_QComboBox__setFixedWidth_int(void *thisObj,
                                                                int w);

// tag=1067
// QComboBox::setFocus()
QtDartBindings_EXPORT void dartffi_QComboBox__setFocus(void *thisObj);

// tag=1067
// QComboBox::setFocusProxy(QWidget * arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setFocusProxy_QWidget(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::setForegroundRole(QPalette::ColorRole arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setForegroundRole_ColorRole(void *thisObj, int arg__1);

// tag=1067
// QComboBox::setFrame(bool arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__setFrame_bool(void *thisObj,
                                                            bool arg__1);

// tag=1067
// QComboBox::setGeometry(const QRect & arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__setGeometry_QRect(void *thisObj,
                                                                void *arg__1_);

// tag=1067
// QComboBox::setGeometry(int x, int y, int w, int h)
QtDartBindings_EXPORT void
dartffi_QComboBox__setGeometry_int_int_int_int(void *thisObj, int x, int y,
                                               int w, int h);

// tag=1067
// QComboBox::setHidden(bool hidden)
QtDartBindings_EXPORT void dartffi_QComboBox__setHidden_bool(void *thisObj,
                                                             bool hidden);

// tag=1067
// QComboBox::setIconSize(const QSize & size)
QtDartBindings_EXPORT void dartffi_QComboBox__setIconSize_QSize(void *thisObj,
                                                                void *size_);

// tag=1067
// QComboBox::setItemData(int index, const QVariant & value, int role)
QtDartBindings_EXPORT void
dartffi_QComboBox__setItemData_int_QVariant_int(void *thisObj, int index,
                                                void *value_, int role);

// tag=1067
// QComboBox::setItemIcon(int index, const QIcon & icon)
QtDartBindings_EXPORT void
dartffi_QComboBox__setItemIcon_int_QIcon(void *thisObj, int index, void *icon_);

// tag=1067
// QComboBox::setItemText(int index, const QString & text)
QtDartBindings_EXPORT void
dartffi_QComboBox__setItemText_int_QString(void *thisObj, int index,
                                           const char *text_);

// tag=1067
// QComboBox::setLayoutDirection(Qt::LayoutDirection direction)
QtDartBindings_EXPORT void
dartffi_QComboBox__setLayoutDirection_LayoutDirection(void *thisObj,
                                                      int direction);

// tag=1067
// QComboBox::setLineEdit(QLineEdit * edit)
QtDartBindings_EXPORT void
dartffi_QComboBox__setLineEdit_QLineEdit(void *thisObj, void *edit_);

// tag=1067
// QComboBox::setMaxCount(int max)
QtDartBindings_EXPORT void dartffi_QComboBox__setMaxCount_int(void *thisObj,
                                                              int max);

// tag=1067
// QComboBox::setMaxVisibleItems(int maxItems)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMaxVisibleItems_int(void *thisObj, int maxItems);

// tag=1067
// QComboBox::setMaximumHeight(int maxh)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMaximumHeight_int(void *thisObj, int maxh);

// tag=1067
// QComboBox::setMaximumSize(const QSize & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMaximumSize_QSize(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::setMaximumSize(int maxw, int maxh)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMaximumSize_int_int(void *thisObj, int maxw, int maxh);

// tag=1067
// QComboBox::setMaximumWidth(int maxw)
QtDartBindings_EXPORT void dartffi_QComboBox__setMaximumWidth_int(void *thisObj,
                                                                  int maxw);

// tag=1067
// QComboBox::setMinimumContentsLength(int characters)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMinimumContentsLength_int(void *thisObj, int characters);

// tag=1067
// QComboBox::setMinimumHeight(int minh)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMinimumHeight_int(void *thisObj, int minh);

// tag=1067
// QComboBox::setMinimumSize(const QSize & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMinimumSize_QSize(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::setMinimumSize(int minw, int minh)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMinimumSize_int_int(void *thisObj, int minw, int minh);

// tag=1067
// QComboBox::setMinimumWidth(int minw)
QtDartBindings_EXPORT void dartffi_QComboBox__setMinimumWidth_int(void *thisObj,
                                                                  int minw);

// tag=1067
// QComboBox::setModel(QAbstractItemModel * model)
QtDartBindings_EXPORT void
dartffi_QComboBox__setModel_QAbstractItemModel(void *thisObj, void *model_);

// tag=1067
// QComboBox::setModelColumn(int visibleColumn)
QtDartBindings_EXPORT void
dartffi_QComboBox__setModelColumn_int(void *thisObj, int visibleColumn);

// tag=1067
// QComboBox::setMouseTracking(bool enable)
QtDartBindings_EXPORT void
dartffi_QComboBox__setMouseTracking_bool(void *thisObj, bool enable);

// tag=1067
// QComboBox::setPalette(const QPalette & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setPalette_QPalette(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::setPlaceholderText(const QString & placeholderText)
QtDartBindings_EXPORT void
dartffi_QComboBox__setPlaceholderText_QString(void *thisObj,
                                              const char *placeholderText_);

// tag=1067
// QComboBox::setRootModelIndex(const QModelIndex & index)
QtDartBindings_EXPORT void
dartffi_QComboBox__setRootModelIndex_QModelIndex(void *thisObj, void *index_);

// tag=1067
// QComboBox::setShortcutAutoRepeat(int id, bool enable)
QtDartBindings_EXPORT void
dartffi_QComboBox__setShortcutAutoRepeat_int_bool(void *thisObj, int id,
                                                  bool enable);

// tag=1067
// QComboBox::setShortcutEnabled(int id, bool enable)
QtDartBindings_EXPORT void
dartffi_QComboBox__setShortcutEnabled_int_bool(void *thisObj, int id,
                                               bool enable);

// tag=1067
// QComboBox::setSizeIncrement(const QSize & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setSizeIncrement_QSize(void *thisObj, void *arg__1_);

// tag=1067
// QComboBox::setSizeIncrement(int w, int h)
QtDartBindings_EXPORT void
dartffi_QComboBox__setSizeIncrement_int_int(void *thisObj, int w, int h);

// tag=1067
// QComboBox::setStatusTip(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setStatusTip_QString(void *thisObj, const char *arg__1_);

// tag=1067
// QComboBox::setStyle(QStyle * arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__setStyle_QStyle(void *thisObj,
                                                              void *arg__1_);

// tag=1067
// QComboBox::setStyleSheet(const QString & styleSheet)
QtDartBindings_EXPORT void
dartffi_QComboBox__setStyleSheet_QString(void *thisObj,
                                         const char *styleSheet_);

// tag=1067
// QComboBox::setTabOrder(QWidget * arg__1, QWidget * arg__2)
QtDartBindings_EXPORT void
dartffi_static_QComboBox__setTabOrder_QWidget_QWidget(void *arg__1_,
                                                      void *arg__2_);

// tag=1067
// QComboBox::setTabletTracking(bool enable)
QtDartBindings_EXPORT void
dartffi_QComboBox__setTabletTracking_bool(void *thisObj, bool enable);

// tag=1067
// QComboBox::setToolTip(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setToolTip_QString(void *thisObj, const char *arg__1_);

// tag=1067
// QComboBox::setToolTipDuration(int msec)
QtDartBindings_EXPORT void
dartffi_QComboBox__setToolTipDuration_int(void *thisObj, int msec);

// tag=1067
// QComboBox::setUpdatesEnabled(bool enable)
QtDartBindings_EXPORT void
dartffi_QComboBox__setUpdatesEnabled_bool(void *thisObj, bool enable);

// tag=1067
// QComboBox::setView(QAbstractItemView * itemView)
QtDartBindings_EXPORT void
dartffi_QComboBox__setView_QAbstractItemView(void *thisObj, void *itemView_);

// tag=1067
// QComboBox::setWhatsThis(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setWhatsThis_QString(void *thisObj, const char *arg__1_);

// tag=1067
// QComboBox::setWindowFilePath(const QString & filePath)
QtDartBindings_EXPORT void
dartffi_QComboBox__setWindowFilePath_QString(void *thisObj,
                                             const char *filePath_);

// tag=1067
// QComboBox::setWindowIcon(const QIcon & icon)
QtDartBindings_EXPORT void dartffi_QComboBox__setWindowIcon_QIcon(void *thisObj,
                                                                  void *icon_);

// tag=1067
// QComboBox::setWindowIconText(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setWindowIconText_QString(void *thisObj,
                                             const char *arg__1_);

// tag=1067
// QComboBox::setWindowModified(bool arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setWindowModified_bool(void *thisObj, bool arg__1);

// tag=1067
// QComboBox::setWindowOpacity(qreal level)
QtDartBindings_EXPORT void
dartffi_QComboBox__setWindowOpacity_qreal(void *thisObj, qreal level);

// tag=1067
// QComboBox::setWindowRole(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setWindowRole_QString(void *thisObj, const char *arg__1_);

// tag=1067
// QComboBox::setWindowTitle(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__setWindowTitle_QString(void *thisObj, const char *arg__1_);

// tag=1067
// QComboBox::show()
QtDartBindings_EXPORT void dartffi_QComboBox__show(void *thisObj);

// tag=1067
// QComboBox::showFullScreen()
QtDartBindings_EXPORT void dartffi_QComboBox__showFullScreen(void *thisObj);

// tag=1067
// QComboBox::showMaximized()
QtDartBindings_EXPORT void dartffi_QComboBox__showMaximized(void *thisObj);

// tag=1067
// QComboBox::showMinimized()
QtDartBindings_EXPORT void dartffi_QComboBox__showMinimized(void *thisObj);

// tag=1067
// QComboBox::showNormal()
QtDartBindings_EXPORT void dartffi_QComboBox__showNormal(void *thisObj);

// tag=1067
// QComboBox::showPopup()
QtDartBindings_EXPORT void dartffi_QComboBox__showPopup(void *thisObj);

// tag=1067
// QComboBox::size() const
QtDartBindings_EXPORT void *dartffi_QComboBox__size(void *thisObj);

// tag=1067
// QComboBox::sizeIncrement() const
QtDartBindings_EXPORT void *dartffi_QComboBox__sizeIncrement(void *thisObj);

// tag=1067
// QComboBox::stackUnder(QWidget * arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__stackUnder_QWidget(void *thisObj,
                                                                 void *arg__1_);

// tag=1067
// QComboBox::statusTip() const
QtDartBindings_EXPORT void *dartffi_QComboBox__statusTip(void *thisObj);

// tag=1067
// QComboBox::style() const
QtDartBindings_EXPORT void *dartffi_QComboBox__style(void *thisObj);

// tag=1067
// QComboBox::styleSheet() const
QtDartBindings_EXPORT void *dartffi_QComboBox__styleSheet(void *thisObj);

// tag=1067
// QComboBox::textActivated(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__textActivated_QString(void *thisObj, const char *arg__1_);

// tag=1078
QtDartBindings_EXPORT void
dartffi_QComboBox__onTextActivated_QString(void *thisObj, void *contextQObject,
                                           void *callback);
// tag=1067
// QComboBox::textHighlighted(const QString & arg__1)
QtDartBindings_EXPORT void
dartffi_QComboBox__textHighlighted_QString(void *thisObj, const char *arg__1_);

// tag=1078
QtDartBindings_EXPORT void dartffi_QComboBox__onTextHighlighted_QString(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
// QComboBox::toolTip() const
QtDartBindings_EXPORT void *dartffi_QComboBox__toolTip(void *thisObj);

// tag=1067
// QComboBox::toolTipDuration() const
QtDartBindings_EXPORT int dartffi_QComboBox__toolTipDuration(void *thisObj);

// tag=1067
// QComboBox::topLevelWidget() const
QtDartBindings_EXPORT void *dartffi_QComboBox__topLevelWidget(void *thisObj);

// tag=1067
// QComboBox::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
dartffi_static_QComboBox__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
// QComboBox::underMouse() const
QtDartBindings_EXPORT bool dartffi_QComboBox__underMouse(void *thisObj);

// tag=1067
// QComboBox::unsetCursor()
QtDartBindings_EXPORT void dartffi_QComboBox__unsetCursor(void *thisObj);

// tag=1067
// QComboBox::unsetLayoutDirection()
QtDartBindings_EXPORT void
dartffi_QComboBox__unsetLayoutDirection(void *thisObj);

// tag=1067
// QComboBox::unsetLocale()
QtDartBindings_EXPORT void dartffi_QComboBox__unsetLocale(void *thisObj);

// tag=1067
// QComboBox::update()
QtDartBindings_EXPORT void dartffi_QComboBox__update(void *thisObj);

// tag=1067
// QComboBox::update(const QRect & arg__1)
QtDartBindings_EXPORT void dartffi_QComboBox__update_QRect(void *thisObj,
                                                           void *arg__1_);

// tag=1067
// QComboBox::update(int x, int y, int w, int h)
QtDartBindings_EXPORT void
dartffi_QComboBox__update_int_int_int_int(void *thisObj, int x, int y, int w,
                                          int h);

// tag=1067
// QComboBox::updateGeometry()
QtDartBindings_EXPORT void dartffi_QComboBox__updateGeometry(void *thisObj);

// tag=1067
// QComboBox::updateMicroFocus()
QtDartBindings_EXPORT void dartffi_QComboBox__updateMicroFocus(void *thisObj);

// tag=1067
// QComboBox::updatesEnabled() const
QtDartBindings_EXPORT bool dartffi_QComboBox__updatesEnabled(void *thisObj);

// tag=1067
// QComboBox::view() const
QtDartBindings_EXPORT void *dartffi_QComboBox__view(void *thisObj);

// tag=1067
// QComboBox::whatsThis() const
QtDartBindings_EXPORT void *dartffi_QComboBox__whatsThis(void *thisObj);

// tag=1067
// QComboBox::width() const
QtDartBindings_EXPORT int dartffi_QComboBox__width(void *thisObj);

// tag=1067
// QComboBox::window() const
QtDartBindings_EXPORT void *dartffi_QComboBox__window(void *thisObj);

// tag=1067
// QComboBox::windowFilePath() const
QtDartBindings_EXPORT void *dartffi_QComboBox__windowFilePath(void *thisObj);

// tag=1067
// QComboBox::windowHandle() const
QtDartBindings_EXPORT void *dartffi_QComboBox__windowHandle(void *thisObj);

// tag=1067
// QComboBox::windowIcon() const
QtDartBindings_EXPORT void *dartffi_QComboBox__windowIcon(void *thisObj);

// tag=1067
// QComboBox::windowIconChanged(const QIcon & icon)
QtDartBindings_EXPORT void
dartffi_QComboBox__windowIconChanged_QIcon(void *thisObj, void *icon_);

// tag=1078
QtDartBindings_EXPORT void dartffi_QComboBox__onWindowIconChanged_QIcon(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
// QComboBox::windowIconText() const
QtDartBindings_EXPORT void *dartffi_QComboBox__windowIconText(void *thisObj);

// tag=1067
// QComboBox::windowIconTextChanged(const QString & iconText)
QtDartBindings_EXPORT void
dartffi_QComboBox__windowIconTextChanged_QString(void *thisObj,
                                                 const char *iconText_);

// tag=1078
QtDartBindings_EXPORT void dartffi_QComboBox__onWindowIconTextChanged_QString(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
// QComboBox::windowOpacity() const
QtDartBindings_EXPORT qreal dartffi_QComboBox__windowOpacity(void *thisObj);

// tag=1067
// QComboBox::windowRole() const
QtDartBindings_EXPORT void *dartffi_QComboBox__windowRole(void *thisObj);

// tag=1067
// QComboBox::windowTitle() const
QtDartBindings_EXPORT void *dartffi_QComboBox__windowTitle(void *thisObj);

// tag=1067
// QComboBox::windowTitleChanged(const QString & title)
QtDartBindings_EXPORT void
dartffi_QComboBox__windowTitleChanged_QString(void *thisObj,
                                              const char *title_);

// tag=1078
QtDartBindings_EXPORT void dartffi_QComboBox__onWindowTitleChanged_QString(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
// QComboBox::x() const
QtDartBindings_EXPORT int dartffi_QComboBox__x(void *thisObj);

// tag=1067
// QComboBox::y() const
QtDartBindings_EXPORT int dartffi_QComboBox__y(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void dartffi_QComboBox__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
dartffi_QComboBox__registerVirtualMethodCallback(void *ptr, void *callback,
                                                 int methodId);
// tag=1047
QtDartBindings_EXPORT void dartffi_QComboBox_Finalizer(void *, void *cppObj,
                                                       void *);
}

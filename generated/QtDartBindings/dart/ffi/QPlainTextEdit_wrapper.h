
// tag=1040
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qevent.h>
#include <qmenu.h>
#include <qobject.h>
#include <qpainter.h>
#include <qplaintextedit.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QPlainTextEdit_wrapper : public ::QPlainTextEdit {
public:
  ~QPlainTextEdit_wrapper();
  // tag=1041
  QPlainTextEdit_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QPlainTextEdit_wrapper(const QString &text, QWidget *parent = nullptr);
  // tag=1041
  QString anchorAt(const QPoint &pos) const;
  // tag=1041
  void appendHtml(const QString &html);
  // tag=1041
  void appendPlainText(const QString &text);
  // tag=1041
  bool backgroundVisible() const;
  // tag=1041
  int blockCount() const;
  // tag=1041
  void blockCountChanged(int newBlockCount);
  // tag=1041
  bool canPaste() const;
  // tag=1041
  void centerCursor();
  // tag=1041
  bool centerOnScroll() const;
  // tag=1041
  virtual void changeEvent(QEvent *e);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *e);
  // tag=1041
  void clear();
  // tag=1041
  QPointF contentOffset() const;
  // tag=1041
  void copy();
  // tag=1041
  void copyAvailable(bool b);
  // tag=1041
  QMenu *createStandardContextMenu();
  // tag=1041
  QMenu *createStandardContextMenu(const QPoint &position);
  // tag=1041
  void cursorPositionChanged();
  // tag=1041
  QRect cursorRect() const;
  // tag=1041
  int cursorWidth() const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  void cut();
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  QString documentTitle() const;
  // tag=1041
  void ensureCursorVisible();
  // tag=1041
  virtual bool event(QEvent *e);
  // tag=1008
  virtual bool event_nocallback(QEvent *e);
  // tag=1041
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
  // tag=1041
  bool find(const QString &exp);
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
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  void insertPlainText(const QString &text);
  // tag=1041
  bool isReadOnly() const;
  // tag=1041
  bool isUndoRedoEnabled() const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  int maximumBlockCount() const;
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  void modificationChanged(bool arg__1);
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *e);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *e);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *e);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
  // tag=1041
  bool overwriteMode() const;
  // tag=1041
  virtual void paintEvent(QPaintEvent *e);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *e);
  // tag=1041
  void paste();
  // tag=1041
  QString placeholderText() const;
  // tag=1041
  void redo();
  // tag=1041
  void redoAvailable(bool b);
  // tag=1041
  virtual void scrollContentsBy(int dx, int dy);
  // tag=1008
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  // tag=1041
  void selectAll();
  // tag=1041
  void selectionChanged();
  // tag=1041
  void setBackgroundVisible(bool visible);
  // tag=1041
  void setCenterOnScroll(bool enabled);
  // tag=1041
  void setCursorWidth(int width);
  // tag=1041
  void setDocumentTitle(const QString &title);
  // tag=1041
  void setMaximumBlockCount(int maximum);
  // tag=1041
  void setOverwriteMode(bool overwrite);
  // tag=1041
  void setPlaceholderText(const QString &placeholderText);
  // tag=1041
  void setPlainText(const QString &text);
  // tag=1041
  void setReadOnly(bool ro);
  // tag=1041
  void setTabChangesFocus(bool b);
  // tag=1041
  void setTabStopDistance(qreal distance);
  // tag=1041
  void setUndoRedoEnabled(bool enable);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual void setupViewport(QWidget *viewport);
  // tag=1008
  virtual void setupViewport_nocallback(QWidget *viewport);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  bool tabChangesFocus() const;
  // tag=1041
  qreal tabStopDistance() const;
  // tag=1041
  void textChanged();
  // tag=1041
  QString toPlainText() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void undo();
  // tag=1041
  void undoAvailable(bool b);
  // tag=1041
  void updateRequest(const QRect &rect, int dy);
  // tag=1041
  virtual bool viewportEvent(QEvent *arg__1);
  // tag=1008
  virtual bool viewportEvent_nocallback(QEvent *arg__1);
  // tag=1041
  virtual QSize viewportSizeHint() const;
  // tag=1008
  virtual QSize viewportSizeHint_nocallback() const;
  // tag=1041
  void zoomIn(int range = 1);
  // tag=1041
  void zoomInF(float range);
  // tag=1041
  void zoomOut(int range = 1);
  // tag=1042
  typedef void (*Callback_changeEvent)(void *, QEvent *e);
  Callback_changeEvent m_changeEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  // tag=1042
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *e);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *arg__1, QEvent *arg__2);
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
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *e);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *e);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *e);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *e);
  Callback_paintEvent m_paintEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_scrollContentsBy)(void *, int dx, int dy);
  Callback_scrollContentsBy m_scrollContentsByCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  // tag=1042
  typedef void (*Callback_setupViewport)(void *, QWidget *viewport);
  Callback_setupViewport m_setupViewportCallback = nullptr;
  // tag=1042
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_viewportEvent)(void *, QEvent *arg__1);
  Callback_viewportEvent m_viewportEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_viewportSizeHint)(void *);
  Callback_viewportSizeHint m_viewportSizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPlainTextEdit::QPlainTextEdit(QWidget * parent)
QtDartBindings_EXPORT void *
c_QPlainTextEdit__constructor_QWidget(void *parent_);

// tag=1067
//  QPlainTextEdit::QPlainTextEdit(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QPlainTextEdit__constructor_QString_QWidget(const char *text_, void *parent_);

// tag=1067
//  QPlainTextEdit::anchorAt(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QPlainTextEdit__anchorAt_QPoint(void *thisObj,
                                                              void *pos_);

// tag=1067
//  QPlainTextEdit::appendHtml(const QString & html)
QtDartBindings_EXPORT void
c_QPlainTextEdit__appendHtml_QString(void *thisObj, const char *html_);

// tag=1067
//  QPlainTextEdit::appendPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QPlainTextEdit__appendPlainText_QString(void *thisObj, const char *text_);

// tag=1067
//  QPlainTextEdit::backgroundVisible() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__backgroundVisible(void *thisObj);

// tag=1067
//  QPlainTextEdit::blockCount() const
QtDartBindings_EXPORT int c_QPlainTextEdit__blockCount(void *thisObj);

// tag=1067
//  QPlainTextEdit::blockCountChanged(int newBlockCount)
QtDartBindings_EXPORT void
c_QPlainTextEdit__blockCountChanged_int(void *thisObj, int newBlockCount);

// tag=1078
QtDartBindings_EXPORT void
c_QPlainTextEdit__onBlockCountChanged_int(void *thisObj, void *contextQObject,
                                          void *callback);
// tag=1067
//  QPlainTextEdit::canPaste() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__canPaste(void *thisObj);

// tag=1067
//  QPlainTextEdit::centerCursor()
QtDartBindings_EXPORT void c_QPlainTextEdit__centerCursor(void *thisObj);

// tag=1067
//  QPlainTextEdit::centerOnScroll() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__centerOnScroll(void *thisObj);

// tag=1067
//  QPlainTextEdit::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QPlainTextEdit__changeEvent_QEvent(void *thisObj,
                                                                void *e_);

// tag=1067
//  QPlainTextEdit::clear()
QtDartBindings_EXPORT void c_QPlainTextEdit__clear(void *thisObj);

// tag=1067
//  QPlainTextEdit::contentOffset() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__contentOffset(void *thisObj);

// tag=1067
//  QPlainTextEdit::copy()
QtDartBindings_EXPORT void c_QPlainTextEdit__copy(void *thisObj);

// tag=1067
//  QPlainTextEdit::copyAvailable(bool b)
QtDartBindings_EXPORT void c_QPlainTextEdit__copyAvailable_bool(void *thisObj,
                                                                bool b);

// tag=1078
QtDartBindings_EXPORT void
c_QPlainTextEdit__onCopyAvailable_bool(void *thisObj, void *contextQObject,
                                       void *callback);
// tag=1067
//  QPlainTextEdit::createStandardContextMenu()
QtDartBindings_EXPORT void *
c_QPlainTextEdit__createStandardContextMenu(void *thisObj);

// tag=1067
//  QPlainTextEdit::createStandardContextMenu(const QPoint & position)
QtDartBindings_EXPORT void *
c_QPlainTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                   void *position_);

// tag=1067
//  QPlainTextEdit::cursorPositionChanged()
QtDartBindings_EXPORT void
c_QPlainTextEdit__cursorPositionChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QPlainTextEdit__onCursorPositionChanged(void *thisObj, void *contextQObject,
                                          void *callback);
// tag=1067
//  QPlainTextEdit::cursorRect() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__cursorRect(void *thisObj);

// tag=1067
//  QPlainTextEdit::cursorWidth() const
QtDartBindings_EXPORT int c_QPlainTextEdit__cursorWidth(void *thisObj);

// tag=1067
//  QPlainTextEdit::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QPlainTextEdit__customEvent_QEvent(void *thisObj,
                                                                void *event_);

// tag=1067
//  QPlainTextEdit::cut()
QtDartBindings_EXPORT void c_QPlainTextEdit__cut(void *thisObj);

// tag=1067
//  QPlainTextEdit::devType() const
QtDartBindings_EXPORT int c_QPlainTextEdit__devType(void *thisObj);

// tag=1067
//  QPlainTextEdit::documentTitle() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__documentTitle(void *thisObj);

// tag=1067
//  QPlainTextEdit::ensureCursorVisible()
QtDartBindings_EXPORT void c_QPlainTextEdit__ensureCursorVisible(void *thisObj);

// tag=1067
//  QPlainTextEdit::event(QEvent * e)
QtDartBindings_EXPORT bool c_QPlainTextEdit__event_QEvent(void *thisObj,
                                                          void *e_);

// tag=1067
//  QPlainTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QPlainTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                             void *arg__2_);

// tag=1067
//  QPlainTextEdit::find(const QString & exp)
QtDartBindings_EXPORT bool c_QPlainTextEdit__find_QString(void *thisObj,
                                                          const char *exp_);

// tag=1067
//  QPlainTextEdit::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QPlainTextEdit__focusNextPrevChild_bool(void *thisObj, bool next);

// tag=1067
//  QPlainTextEdit::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__hasHeightForWidth(void *thisObj);

// tag=1067
//  QPlainTextEdit::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QPlainTextEdit__heightForWidth_int(void *thisObj,
                                                               int arg__1);

// tag=1067
//  QPlainTextEdit::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QPlainTextEdit__initPainter_QPainter(void *thisObj, void *painter_);

// tag=1067
//  QPlainTextEdit::insertPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QPlainTextEdit__insertPlainText_QString(void *thisObj, const char *text_);

// tag=1067
//  QPlainTextEdit::isReadOnly() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__isReadOnly(void *thisObj);

// tag=1067
//  QPlainTextEdit::isUndoRedoEnabled() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__isUndoRedoEnabled(void *thisObj);

// tag=1067
//  QPlainTextEdit::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QPlainTextEdit__leaveEvent_QEvent(void *thisObj,
                                                               void *event_);

// tag=1067
//  QPlainTextEdit::maximumBlockCount() const
QtDartBindings_EXPORT int c_QPlainTextEdit__maximumBlockCount(void *thisObj);

// tag=1067
//  QPlainTextEdit::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__minimumSizeHint(void *thisObj);

// tag=1067
//  QPlainTextEdit::modificationChanged(bool arg__1)
QtDartBindings_EXPORT void
c_QPlainTextEdit__modificationChanged_bool(void *thisObj, bool arg__1);

// tag=1078
QtDartBindings_EXPORT void c_QPlainTextEdit__onModificationChanged_bool(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QPlainTextEdit::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QPlainTextEdit::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QPlainTextEdit::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QPlainTextEdit::overwriteMode() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__overwriteMode(void *thisObj);

// tag=1067
//  QPlainTextEdit::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_);

// tag=1067
//  QPlainTextEdit::paste()
QtDartBindings_EXPORT void c_QPlainTextEdit__paste(void *thisObj);

// tag=1067
//  QPlainTextEdit::placeholderText() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__placeholderText(void *thisObj);

// tag=1067
//  QPlainTextEdit::redo()
QtDartBindings_EXPORT void c_QPlainTextEdit__redo(void *thisObj);

// tag=1067
//  QPlainTextEdit::redoAvailable(bool b)
QtDartBindings_EXPORT void c_QPlainTextEdit__redoAvailable_bool(void *thisObj,
                                                                bool b);

// tag=1078
QtDartBindings_EXPORT void
c_QPlainTextEdit__onRedoAvailable_bool(void *thisObj, void *contextQObject,
                                       void *callback);
// tag=1067
//  QPlainTextEdit::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QPlainTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QPlainTextEdit::selectAll()
QtDartBindings_EXPORT void c_QPlainTextEdit__selectAll(void *thisObj);

// tag=1067
//  QPlainTextEdit::selectionChanged()
QtDartBindings_EXPORT void c_QPlainTextEdit__selectionChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QPlainTextEdit__onSelectionChanged(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QPlainTextEdit::setBackgroundVisible(bool visible)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setBackgroundVisible_bool(void *thisObj, bool visible);

// tag=1067
//  QPlainTextEdit::setCenterOnScroll(bool enabled)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setCenterOnScroll_bool(void *thisObj, bool enabled);

// tag=1067
//  QPlainTextEdit::setCursorWidth(int width)
QtDartBindings_EXPORT void c_QPlainTextEdit__setCursorWidth_int(void *thisObj,
                                                                int width);

// tag=1067
//  QPlainTextEdit::setDocumentTitle(const QString & title)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setDocumentTitle_QString(void *thisObj, const char *title_);

// tag=1067
//  QPlainTextEdit::setMaximumBlockCount(int maximum)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setMaximumBlockCount_int(void *thisObj, int maximum);

// tag=1067
//  QPlainTextEdit::setOverwriteMode(bool overwrite)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite);

// tag=1067
//  QPlainTextEdit::setPlaceholderText(const QString & placeholderText)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *placeholderText_);

// tag=1067
//  QPlainTextEdit::setPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setPlainText_QString(void *thisObj, const char *text_);

// tag=1067
//  QPlainTextEdit::setReadOnly(bool ro)
QtDartBindings_EXPORT void c_QPlainTextEdit__setReadOnly_bool(void *thisObj,
                                                              bool ro);

// tag=1067
//  QPlainTextEdit::setTabChangesFocus(bool b)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setTabChangesFocus_bool(void *thisObj, bool b);

// tag=1067
//  QPlainTextEdit::setTabStopDistance(qreal distance)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance);

// tag=1067
//  QPlainTextEdit::setUndoRedoEnabled(bool enable)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable);

// tag=1067
//  QPlainTextEdit::setVisible(bool visible)
QtDartBindings_EXPORT void c_QPlainTextEdit__setVisible_bool(void *thisObj,
                                                             bool visible);

// tag=1067
//  QPlainTextEdit::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_);

// tag=1067
//  QPlainTextEdit::sharedPainter() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__sharedPainter(void *thisObj);

// tag=1067
//  QPlainTextEdit::sizeHint() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__sizeHint(void *thisObj);

// tag=1067
//  QPlainTextEdit::tabChangesFocus() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__tabChangesFocus(void *thisObj);

// tag=1067
//  QPlainTextEdit::tabStopDistance() const
QtDartBindings_EXPORT qreal c_QPlainTextEdit__tabStopDistance(void *thisObj);

// tag=1067
//  QPlainTextEdit::textChanged()
QtDartBindings_EXPORT void c_QPlainTextEdit__textChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QPlainTextEdit__onTextChanged(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
// tag=1067
//  QPlainTextEdit::toPlainText() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__toPlainText(void *thisObj);

// tag=1067
//  QPlainTextEdit::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QPlainTextEdit__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QPlainTextEdit::undo()
QtDartBindings_EXPORT void c_QPlainTextEdit__undo(void *thisObj);

// tag=1067
//  QPlainTextEdit::undoAvailable(bool b)
QtDartBindings_EXPORT void c_QPlainTextEdit__undoAvailable_bool(void *thisObj,
                                                                bool b);

// tag=1078
QtDartBindings_EXPORT void
c_QPlainTextEdit__onUndoAvailable_bool(void *thisObj, void *contextQObject,
                                       void *callback);
// tag=1067
//  QPlainTextEdit::updateRequest(const QRect & rect, int dy)
QtDartBindings_EXPORT void
c_QPlainTextEdit__updateRequest_QRect_int(void *thisObj, void *rect_, int dy);

// tag=1078
QtDartBindings_EXPORT void
c_QPlainTextEdit__onUpdateRequest_QRect_int(void *thisObj, void *contextQObject,
                                            void *callback);
// tag=1067
//  QPlainTextEdit::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool
c_QPlainTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QPlainTextEdit::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__viewportSizeHint(void *thisObj);

// tag=1067
//  QPlainTextEdit::zoomIn(int range)
QtDartBindings_EXPORT void c_QPlainTextEdit__zoomIn_int(void *thisObj,
                                                        int range);

// tag=1067
//  QPlainTextEdit::zoomInF(float range)
QtDartBindings_EXPORT void c_QPlainTextEdit__zoomInF_float(void *thisObj,
                                                           float range);

// tag=1067
//  QPlainTextEdit::zoomOut(int range)
QtDartBindings_EXPORT void c_QPlainTextEdit__zoomOut_int(void *thisObj,
                                                         int range);

// tag=1066
QtDartBindings_EXPORT void c_QPlainTextEdit__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QPlainTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QPlainTextEdit_Finalizer(void *, void *cppObj,
                                                      void *);
}

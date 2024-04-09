
// tag=1040
#include "QtDartBindings_exports.h"
#include <qcolor.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qmenu.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpoint.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qtextedit.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QTextEdit_wrapper : public ::QTextEdit {
public:
  ~QTextEdit_wrapper();
  // tag=1041
  QTextEdit_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QTextEdit_wrapper(const QString &text, QWidget *parent = nullptr);
  // tag=1041
  bool acceptRichText() const;
  // tag=1041
  QString anchorAt(const QPoint &pos) const;
  // tag=1041
  void append(const QString &text);
  // tag=1041
  bool canPaste() const;
  // tag=1041
  virtual void changeEvent(QEvent *e);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *e);
  // tag=1041
  void clear();
  // tag=1041
  void copy();
  // tag=1041
  void copyAvailable(bool b);
  // tag=1041
  QMenu *createStandardContextMenu();
  // tag=1041
  QMenu *createStandardContextMenu(const QPoint &position);
  // tag=1041
  QFont currentFont() const;
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
  QString fontFamily() const;
  // tag=1041
  bool fontItalic() const;
  // tag=1041
  qreal fontPointSize() const;
  // tag=1041
  bool fontUnderline() const;
  // tag=1041
  int fontWeight() const;
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
  void insertHtml(const QString &text);
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
  int lineWrapColumnOrWidth() const;
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
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
  void scrollToAnchor(const QString &name);
  // tag=1041
  void selectAll();
  // tag=1041
  void selectionChanged();
  // tag=1041
  void setAcceptRichText(bool accept);
  // tag=1041
  void setCurrentFont(const QFont &f);
  // tag=1041
  void setCursorWidth(int width);
  // tag=1041
  void setDocumentTitle(const QString &title);
  // tag=1041
  void setFontFamily(const QString &fontFamily);
  // tag=1041
  void setFontItalic(bool b);
  // tag=1041
  void setFontPointSize(qreal s);
  // tag=1041
  void setFontUnderline(bool b);
  // tag=1041
  void setFontWeight(int w);
  // tag=1041
  void setHtml(const QString &text);
  // tag=1041
  void setLineWrapColumnOrWidth(int w);
  // tag=1041
  void setMarkdown(const QString &markdown);
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
  void setText(const QString &text);
  // tag=1041
  void setTextBackgroundColor(const QColor &c);
  // tag=1041
  void setTextColor(const QColor &c);
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
  QColor textBackgroundColor() const;
  // tag=1041
  void textChanged();
  // tag=1041
  QColor textColor() const;
  // tag=1041
  QString toHtml() const;
  // tag=1041
  QString toMarkdown() const;
  // tag=1041
  QString toPlainText() const;
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void undo();
  // tag=1041
  void undoAvailable(bool b);
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
//  QTextEdit::QTextEdit(QWidget * parent)
QtDartBindings_EXPORT void *c_QTextEdit__constructor_QWidget(void *parent_);

// tag=1067
//  QTextEdit::QTextEdit(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QTextEdit__constructor_QString_QWidget(const char *text_, void *parent_);

// tag=1067
//  QTextEdit::acceptRichText() const
QtDartBindings_EXPORT bool c_QTextEdit__acceptRichText(void *thisObj);

// tag=1067
//  QTextEdit::anchorAt(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QTextEdit__anchorAt_QPoint(void *thisObj,
                                                         void *pos_);

// tag=1067
//  QTextEdit::append(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__append_QString(void *thisObj,
                                                       const char *text_);

// tag=1067
//  QTextEdit::canPaste() const
QtDartBindings_EXPORT bool c_QTextEdit__canPaste(void *thisObj);

// tag=1067
//  QTextEdit::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QTextEdit__changeEvent_QEvent(void *thisObj,
                                                           void *e_);

// tag=1067
//  QTextEdit::clear()
QtDartBindings_EXPORT void c_QTextEdit__clear(void *thisObj);

// tag=1067
//  QTextEdit::copy()
QtDartBindings_EXPORT void c_QTextEdit__copy(void *thisObj);

// tag=1067
//  QTextEdit::copyAvailable(bool b)
QtDartBindings_EXPORT void c_QTextEdit__copyAvailable_bool(void *thisObj,
                                                           bool b);

// tag=1078
QtDartBindings_EXPORT void
c_QTextEdit__onCopyAvailable_bool(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QTextEdit::createStandardContextMenu()
QtDartBindings_EXPORT void *
c_QTextEdit__createStandardContextMenu(void *thisObj);

// tag=1067
//  QTextEdit::createStandardContextMenu(const QPoint & position)
QtDartBindings_EXPORT void *
c_QTextEdit__createStandardContextMenu_QPoint(void *thisObj, void *position_);

// tag=1067
//  QTextEdit::currentFont() const
QtDartBindings_EXPORT void *c_QTextEdit__currentFont(void *thisObj);

// tag=1067
//  QTextEdit::cursorPositionChanged()
QtDartBindings_EXPORT void c_QTextEdit__cursorPositionChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QTextEdit__onCursorPositionChanged(void *thisObj, void *contextQObject,
                                     void *callback);
// tag=1067
//  QTextEdit::cursorRect() const
QtDartBindings_EXPORT void *c_QTextEdit__cursorRect(void *thisObj);

// tag=1067
//  QTextEdit::cursorWidth() const
QtDartBindings_EXPORT int c_QTextEdit__cursorWidth(void *thisObj);

// tag=1067
//  QTextEdit::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTextEdit__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QTextEdit::cut()
QtDartBindings_EXPORT void c_QTextEdit__cut(void *thisObj);

// tag=1067
//  QTextEdit::devType() const
QtDartBindings_EXPORT int c_QTextEdit__devType(void *thisObj);

// tag=1067
//  QTextEdit::documentTitle() const
QtDartBindings_EXPORT void *c_QTextEdit__documentTitle(void *thisObj);

// tag=1067
//  QTextEdit::ensureCursorVisible()
QtDartBindings_EXPORT void c_QTextEdit__ensureCursorVisible(void *thisObj);

// tag=1067
//  QTextEdit::event(QEvent * e)
QtDartBindings_EXPORT bool c_QTextEdit__event_QEvent(void *thisObj, void *e_);

// tag=1067
//  QTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                        void *arg__2_);

// tag=1067
//  QTextEdit::find(const QString & exp)
QtDartBindings_EXPORT bool c_QTextEdit__find_QString(void *thisObj,
                                                     const char *exp_);

// tag=1067
//  QTextEdit::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QTextEdit__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);

// tag=1067
//  QTextEdit::fontFamily() const
QtDartBindings_EXPORT void *c_QTextEdit__fontFamily(void *thisObj);

// tag=1067
//  QTextEdit::fontItalic() const
QtDartBindings_EXPORT bool c_QTextEdit__fontItalic(void *thisObj);

// tag=1067
//  QTextEdit::fontPointSize() const
QtDartBindings_EXPORT qreal c_QTextEdit__fontPointSize(void *thisObj);

// tag=1067
//  QTextEdit::fontUnderline() const
QtDartBindings_EXPORT bool c_QTextEdit__fontUnderline(void *thisObj);

// tag=1067
//  QTextEdit::fontWeight() const
QtDartBindings_EXPORT int c_QTextEdit__fontWeight(void *thisObj);

// tag=1067
//  QTextEdit::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QTextEdit__hasHeightForWidth(void *thisObj);

// tag=1067
//  QTextEdit::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QTextEdit__heightForWidth_int(void *thisObj,
                                                          int arg__1);

// tag=1067
//  QTextEdit::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QTextEdit__initPainter_QPainter(void *thisObj,
                                                             void *painter_);

// tag=1067
//  QTextEdit::insertHtml(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__insertHtml_QString(void *thisObj,
                                                           const char *text_);

// tag=1067
//  QTextEdit::insertPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QTextEdit__insertPlainText_QString(void *thisObj, const char *text_);

// tag=1067
//  QTextEdit::isReadOnly() const
QtDartBindings_EXPORT bool c_QTextEdit__isReadOnly(void *thisObj);

// tag=1067
//  QTextEdit::isUndoRedoEnabled() const
QtDartBindings_EXPORT bool c_QTextEdit__isUndoRedoEnabled(void *thisObj);

// tag=1067
//  QTextEdit::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTextEdit__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QTextEdit::lineWrapColumnOrWidth() const
QtDartBindings_EXPORT int c_QTextEdit__lineWrapColumnOrWidth(void *thisObj);

// tag=1067
//  QTextEdit::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QTextEdit__minimumSizeHint(void *thisObj);

// tag=1067
//  QTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QTextEdit::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QTextEdit::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QTextEdit::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);

// tag=1067
//  QTextEdit::overwriteMode() const
QtDartBindings_EXPORT bool c_QTextEdit__overwriteMode(void *thisObj);

// tag=1067
//  QTextEdit::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void c_QTextEdit__paintEvent_QPaintEvent(void *thisObj,
                                                               void *e_);

// tag=1067
//  QTextEdit::paste()
QtDartBindings_EXPORT void c_QTextEdit__paste(void *thisObj);

// tag=1067
//  QTextEdit::placeholderText() const
QtDartBindings_EXPORT void *c_QTextEdit__placeholderText(void *thisObj);

// tag=1067
//  QTextEdit::redo()
QtDartBindings_EXPORT void c_QTextEdit__redo(void *thisObj);

// tag=1067
//  QTextEdit::redoAvailable(bool b)
QtDartBindings_EXPORT void c_QTextEdit__redoAvailable_bool(void *thisObj,
                                                           bool b);

// tag=1078
QtDartBindings_EXPORT void
c_QTextEdit__onRedoAvailable_bool(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QTextEdit::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy);

// tag=1067
//  QTextEdit::scrollToAnchor(const QString & name)
QtDartBindings_EXPORT void
c_QTextEdit__scrollToAnchor_QString(void *thisObj, const char *name_);

// tag=1067
//  QTextEdit::selectAll()
QtDartBindings_EXPORT void c_QTextEdit__selectAll(void *thisObj);

// tag=1067
//  QTextEdit::selectionChanged()
QtDartBindings_EXPORT void c_QTextEdit__selectionChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QTextEdit__onSelectionChanged(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
// tag=1067
//  QTextEdit::setAcceptRichText(bool accept)
QtDartBindings_EXPORT void c_QTextEdit__setAcceptRichText_bool(void *thisObj,
                                                               bool accept);

// tag=1067
//  QTextEdit::setCurrentFont(const QFont & f)
QtDartBindings_EXPORT void c_QTextEdit__setCurrentFont_QFont(void *thisObj,
                                                             void *f_);

// tag=1067
//  QTextEdit::setCursorWidth(int width)
QtDartBindings_EXPORT void c_QTextEdit__setCursorWidth_int(void *thisObj,
                                                           int width);

// tag=1067
//  QTextEdit::setDocumentTitle(const QString & title)
QtDartBindings_EXPORT void
c_QTextEdit__setDocumentTitle_QString(void *thisObj, const char *title_);

// tag=1067
//  QTextEdit::setFontFamily(const QString & fontFamily)
QtDartBindings_EXPORT void
c_QTextEdit__setFontFamily_QString(void *thisObj, const char *fontFamily_);

// tag=1067
//  QTextEdit::setFontItalic(bool b)
QtDartBindings_EXPORT void c_QTextEdit__setFontItalic_bool(void *thisObj,
                                                           bool b);

// tag=1067
//  QTextEdit::setFontPointSize(qreal s)
QtDartBindings_EXPORT void c_QTextEdit__setFontPointSize_qreal(void *thisObj,
                                                               qreal s);

// tag=1067
//  QTextEdit::setFontUnderline(bool b)
QtDartBindings_EXPORT void c_QTextEdit__setFontUnderline_bool(void *thisObj,
                                                              bool b);

// tag=1067
//  QTextEdit::setFontWeight(int w)
QtDartBindings_EXPORT void c_QTextEdit__setFontWeight_int(void *thisObj, int w);

// tag=1067
//  QTextEdit::setHtml(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__setHtml_QString(void *thisObj,
                                                        const char *text_);

// tag=1067
//  QTextEdit::setLineWrapColumnOrWidth(int w)
QtDartBindings_EXPORT void
c_QTextEdit__setLineWrapColumnOrWidth_int(void *thisObj, int w);

// tag=1067
//  QTextEdit::setMarkdown(const QString & markdown)
QtDartBindings_EXPORT void
c_QTextEdit__setMarkdown_QString(void *thisObj, const char *markdown_);

// tag=1067
//  QTextEdit::setOverwriteMode(bool overwrite)
QtDartBindings_EXPORT void c_QTextEdit__setOverwriteMode_bool(void *thisObj,
                                                              bool overwrite);

// tag=1067
//  QTextEdit::setPlaceholderText(const QString & placeholderText)
QtDartBindings_EXPORT void
c_QTextEdit__setPlaceholderText_QString(void *thisObj,
                                        const char *placeholderText_);

// tag=1067
//  QTextEdit::setPlainText(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__setPlainText_QString(void *thisObj,
                                                             const char *text_);

// tag=1067
//  QTextEdit::setReadOnly(bool ro)
QtDartBindings_EXPORT void c_QTextEdit__setReadOnly_bool(void *thisObj,
                                                         bool ro);

// tag=1067
//  QTextEdit::setTabChangesFocus(bool b)
QtDartBindings_EXPORT void c_QTextEdit__setTabChangesFocus_bool(void *thisObj,
                                                                bool b);

// tag=1067
//  QTextEdit::setTabStopDistance(qreal distance)
QtDartBindings_EXPORT void
c_QTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance);

// tag=1067
//  QTextEdit::setText(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__setText_QString(void *thisObj,
                                                        const char *text_);

// tag=1067
//  QTextEdit::setTextBackgroundColor(const QColor & c)
QtDartBindings_EXPORT void
c_QTextEdit__setTextBackgroundColor_QColor(void *thisObj, void *c_);

// tag=1067
//  QTextEdit::setTextColor(const QColor & c)
QtDartBindings_EXPORT void c_QTextEdit__setTextColor_QColor(void *thisObj,
                                                            void *c_);

// tag=1067
//  QTextEdit::setUndoRedoEnabled(bool enable)
QtDartBindings_EXPORT void c_QTextEdit__setUndoRedoEnabled_bool(void *thisObj,
                                                                bool enable);

// tag=1067
//  QTextEdit::setVisible(bool visible)
QtDartBindings_EXPORT void c_QTextEdit__setVisible_bool(void *thisObj,
                                                        bool visible);

// tag=1067
//  QTextEdit::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QTextEdit__setupViewport_QWidget(void *thisObj,
                                                              void *viewport_);

// tag=1067
//  QTextEdit::sharedPainter() const
QtDartBindings_EXPORT void *c_QTextEdit__sharedPainter(void *thisObj);

// tag=1067
//  QTextEdit::sizeHint() const
QtDartBindings_EXPORT void *c_QTextEdit__sizeHint(void *thisObj);

// tag=1067
//  QTextEdit::tabChangesFocus() const
QtDartBindings_EXPORT bool c_QTextEdit__tabChangesFocus(void *thisObj);

// tag=1067
//  QTextEdit::tabStopDistance() const
QtDartBindings_EXPORT qreal c_QTextEdit__tabStopDistance(void *thisObj);

// tag=1067
//  QTextEdit::textBackgroundColor() const
QtDartBindings_EXPORT void *c_QTextEdit__textBackgroundColor(void *thisObj);

// tag=1067
//  QTextEdit::textChanged()
QtDartBindings_EXPORT void c_QTextEdit__textChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void
c_QTextEdit__onTextChanged(void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QTextEdit::textColor() const
QtDartBindings_EXPORT void *c_QTextEdit__textColor(void *thisObj);

// tag=1067
//  QTextEdit::toHtml() const
QtDartBindings_EXPORT void *c_QTextEdit__toHtml(void *thisObj);

// tag=1067
//  QTextEdit::toMarkdown() const
QtDartBindings_EXPORT void *c_QTextEdit__toMarkdown(void *thisObj);

// tag=1067
//  QTextEdit::toPlainText() const
QtDartBindings_EXPORT void *c_QTextEdit__toPlainText(void *thisObj);

// tag=1067
//  QTextEdit::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTextEdit__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QTextEdit::undo()
QtDartBindings_EXPORT void c_QTextEdit__undo(void *thisObj);

// tag=1067
//  QTextEdit::undoAvailable(bool b)
QtDartBindings_EXPORT void c_QTextEdit__undoAvailable_bool(void *thisObj,
                                                           bool b);

// tag=1078
QtDartBindings_EXPORT void
c_QTextEdit__onUndoAvailable_bool(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QTextEdit::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QTextEdit__viewportEvent_QEvent(void *thisObj,
                                                             void *arg__1_);

// tag=1067
//  QTextEdit::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QTextEdit__viewportSizeHint(void *thisObj);

// tag=1067
//  QTextEdit::zoomIn(int range)
QtDartBindings_EXPORT void c_QTextEdit__zoomIn_int(void *thisObj, int range);

// tag=1067
//  QTextEdit::zoomInF(float range)
QtDartBindings_EXPORT void c_QTextEdit__zoomInF_float(void *thisObj,
                                                      float range);

// tag=1067
//  QTextEdit::zoomOut(int range)
QtDartBindings_EXPORT void c_QTextEdit__zoomOut_int(void *thisObj, int range);

// tag=1066
QtDartBindings_EXPORT void c_QTextEdit__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QTextEdit_Finalizer(void *, void *cppObj, void *);
}

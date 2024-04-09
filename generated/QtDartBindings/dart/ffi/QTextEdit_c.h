/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QTextEdit_wrapper : public ::QTextEdit {
public:
  ~QTextEdit_wrapper();
  QTextEdit_wrapper(QWidget *parent = nullptr);
  QTextEdit_wrapper(const QString &text, QWidget *parent = nullptr);
  bool acceptRichText() const;
  QString anchorAt(const QPoint &pos) const;
  void append(const QString &text);
  bool canPaste() const;
  virtual void changeEvent(QEvent *e);
  virtual void changeEvent_nocallback(QEvent *e);
  void clear();
  void copy();
  void copyAvailable(bool b);
  QMenu *createStandardContextMenu();
  QMenu *createStandardContextMenu(const QPoint &position);
  QFont currentFont() const;
  void cursorPositionChanged();
  QRect cursorRect() const;
  int cursorWidth() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  void cut();
  virtual int devType() const;
  virtual int devType_nocallback() const;
  QString documentTitle() const;
  void ensureCursorVisible();
  virtual bool event(QEvent *e);
  virtual bool event_nocallback(QEvent *e);
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
  bool find(const QString &exp);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  QString fontFamily() const;
  bool fontItalic() const;
  qreal fontPointSize() const;
  bool fontUnderline() const;
  int fontWeight() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  void insertHtml(const QString &text);
  void insertPlainText(const QString &text);
  bool isReadOnly() const;
  bool isUndoRedoEnabled() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  int lineWrapColumnOrWidth() const;
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *e);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *e);
  virtual void mouseMoveEvent(QMouseEvent *e);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *e);
  virtual void mousePressEvent(QMouseEvent *e);
  virtual void mousePressEvent_nocallback(QMouseEvent *e);
  virtual void mouseReleaseEvent(QMouseEvent *e);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *e);
  bool overwriteMode() const;
  virtual void paintEvent(QPaintEvent *e);
  virtual void paintEvent_nocallback(QPaintEvent *e);
  void paste();
  QString placeholderText() const;
  void redo();
  void redoAvailable(bool b);
  virtual void scrollContentsBy(int dx, int dy);
  virtual void scrollContentsBy_nocallback(int dx, int dy);
  void scrollToAnchor(const QString &name);
  void selectAll();
  void selectionChanged();
  void setAcceptRichText(bool accept);
  void setCurrentFont(const QFont &f);
  void setCursorWidth(int width);
  void setDocumentTitle(const QString &title);
  void setFontFamily(const QString &fontFamily);
  void setFontItalic(bool b);
  void setFontPointSize(qreal s);
  void setFontUnderline(bool b);
  void setFontWeight(int w);
  void setHtml(const QString &text);
  void setLineWrapColumnOrWidth(int w);
  void setMarkdown(const QString &markdown);
  void setOverwriteMode(bool overwrite);
  void setPlaceholderText(const QString &placeholderText);
  void setPlainText(const QString &text);
  void setReadOnly(bool ro);
  void setTabChangesFocus(bool b);
  void setTabStopDistance(qreal distance);
  void setText(const QString &text);
  void setTextBackgroundColor(const QColor &c);
  void setTextColor(const QColor &c);
  void setUndoRedoEnabled(bool enable);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual void setupViewport(QWidget *viewport);
  virtual void setupViewport_nocallback(QWidget *viewport);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  bool tabChangesFocus() const;
  qreal tabStopDistance() const;
  QColor textBackgroundColor() const;
  void textChanged();
  QColor textColor() const;
  QString toHtml() const;
  QString toMarkdown() const;
  QString toPlainText() const;
  static QString tr(const char *s, const char *c, int n);
  void undo();
  void undoAvailable(bool b);
  virtual bool viewportEvent(QEvent *arg__1);
  virtual bool viewportEvent_nocallback(QEvent *arg__1);
  virtual QSize viewportSizeHint() const;
  virtual QSize viewportSizeHint_nocallback() const;
  void zoomIn(int range = 1);
  void zoomInF(float range);
  void zoomOut(int range = 1);
  typedef void (*Callback_changeEvent)(void *, QEvent *e);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *e);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *arg__1, QEvent *arg__2);
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
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *e);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *e);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *e);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *e);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *e);
  Callback_paintEvent m_paintEventCallback = nullptr;
  typedef void (*Callback_scrollContentsBy)(void *, int dx, int dy);
  Callback_scrollContentsBy m_scrollContentsByCallback = nullptr;
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  typedef void (*Callback_setupViewport)(void *, QWidget *viewport);
  Callback_setupViewport m_setupViewportCallback = nullptr;
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
  typedef bool (*Callback_viewportEvent)(void *, QEvent *arg__1);
  Callback_viewportEvent m_viewportEventCallback = nullptr;
  typedef QSize *(*Callback_viewportSizeHint)(void *);
  Callback_viewportSizeHint m_viewportSizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QTextEdit::QTextEdit(QWidget * parent)
QtDartBindings_EXPORT void *c_QTextEdit__constructor_QWidget(void *parent_);
// QTextEdit::QTextEdit(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QTextEdit__constructor_QString_QWidget(const char *text_, void *parent_);
// QTextEdit::acceptRichText() const
QtDartBindings_EXPORT bool c_QTextEdit__acceptRichText(void *thisObj);
// QTextEdit::anchorAt(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QTextEdit__anchorAt_QPoint(void *thisObj,
                                                         void *pos_);
// QTextEdit::append(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__append_QString(void *thisObj,
                                                       const char *text_);
// QTextEdit::canPaste() const
QtDartBindings_EXPORT bool c_QTextEdit__canPaste(void *thisObj);
// QTextEdit::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QTextEdit__changeEvent_QEvent(void *thisObj,
                                                           void *e_);
// QTextEdit::clear()
QtDartBindings_EXPORT void c_QTextEdit__clear(void *thisObj);
// QTextEdit::copy()
QtDartBindings_EXPORT void c_QTextEdit__copy(void *thisObj);
// QTextEdit::copyAvailable(bool b)
QtDartBindings_EXPORT void c_QTextEdit__copyAvailable_bool(void *thisObj,
                                                           bool b);
QtDartBindings_EXPORT void c_QTextEdit__onCopyAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::createStandardContextMenu()
QtDartBindings_EXPORT void *
c_QTextEdit__createStandardContextMenu(void *thisObj);
// QTextEdit::createStandardContextMenu(const QPoint & position)
QtDartBindings_EXPORT void *
c_QTextEdit__createStandardContextMenu_QPoint(void *thisObj, void *position_);
// QTextEdit::currentFont() const
QtDartBindings_EXPORT void *c_QTextEdit__currentFont(void *thisObj);
// QTextEdit::cursorPositionChanged()
QtDartBindings_EXPORT void c_QTextEdit__cursorPositionChanged(void *thisObj);
QtDartBindings_EXPORT void c_QTextEdit__onCursorPositionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::cursorRect() const
QtDartBindings_EXPORT void *c_QTextEdit__cursorRect(void *thisObj);
// QTextEdit::cursorWidth() const
QtDartBindings_EXPORT int c_QTextEdit__cursorWidth(void *thisObj);
// QTextEdit::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTextEdit__customEvent_QEvent(void *thisObj,
                                                           void *event_);
// QTextEdit::cut()
QtDartBindings_EXPORT void c_QTextEdit__cut(void *thisObj);
// QTextEdit::devType() const
QtDartBindings_EXPORT int c_QTextEdit__devType(void *thisObj);
// QTextEdit::documentTitle() const
QtDartBindings_EXPORT void *c_QTextEdit__documentTitle(void *thisObj);
// QTextEdit::ensureCursorVisible()
QtDartBindings_EXPORT void c_QTextEdit__ensureCursorVisible(void *thisObj);
// QTextEdit::event(QEvent * e)
QtDartBindings_EXPORT bool c_QTextEdit__event_QEvent(void *thisObj, void *e_);
// QTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                        void *arg__2_);
// QTextEdit::find(const QString & exp)
QtDartBindings_EXPORT bool c_QTextEdit__find_QString(void *thisObj,
                                                     const char *exp_);
// QTextEdit::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QTextEdit__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);
// QTextEdit::fontFamily() const
QtDartBindings_EXPORT void *c_QTextEdit__fontFamily(void *thisObj);
// QTextEdit::fontItalic() const
QtDartBindings_EXPORT bool c_QTextEdit__fontItalic(void *thisObj);
// QTextEdit::fontPointSize() const
QtDartBindings_EXPORT qreal c_QTextEdit__fontPointSize(void *thisObj);
// QTextEdit::fontUnderline() const
QtDartBindings_EXPORT bool c_QTextEdit__fontUnderline(void *thisObj);
// QTextEdit::fontWeight() const
QtDartBindings_EXPORT int c_QTextEdit__fontWeight(void *thisObj);
// QTextEdit::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QTextEdit__hasHeightForWidth(void *thisObj);
// QTextEdit::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QTextEdit__heightForWidth_int(void *thisObj,
                                                          int arg__1);
// QTextEdit::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QTextEdit__initPainter_QPainter(void *thisObj,
                                                             void *painter_);
// QTextEdit::insertHtml(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__insertHtml_QString(void *thisObj,
                                                           const char *text_);
// QTextEdit::insertPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QTextEdit__insertPlainText_QString(void *thisObj, const char *text_);
// QTextEdit::isReadOnly() const
QtDartBindings_EXPORT bool c_QTextEdit__isReadOnly(void *thisObj);
// QTextEdit::isUndoRedoEnabled() const
QtDartBindings_EXPORT bool c_QTextEdit__isUndoRedoEnabled(void *thisObj);
// QTextEdit::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QTextEdit__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);
// QTextEdit::lineWrapColumnOrWidth() const
QtDartBindings_EXPORT int c_QTextEdit__lineWrapColumnOrWidth(void *thisObj);
// QTextEdit::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QTextEdit__minimumSizeHint(void *thisObj);
// QTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QTextEdit::overwriteMode() const
QtDartBindings_EXPORT bool c_QTextEdit__overwriteMode(void *thisObj);
// QTextEdit::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void c_QTextEdit__paintEvent_QPaintEvent(void *thisObj,
                                                               void *e_);
// QTextEdit::paste()
QtDartBindings_EXPORT void c_QTextEdit__paste(void *thisObj);
// QTextEdit::placeholderText() const
QtDartBindings_EXPORT void *c_QTextEdit__placeholderText(void *thisObj);
// QTextEdit::redo()
QtDartBindings_EXPORT void c_QTextEdit__redo(void *thisObj);
// QTextEdit::redoAvailable(bool b)
QtDartBindings_EXPORT void c_QTextEdit__redoAvailable_bool(void *thisObj,
                                                           bool b);
QtDartBindings_EXPORT void c_QTextEdit__onRedoAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QTextEdit::scrollToAnchor(const QString & name)
QtDartBindings_EXPORT void
c_QTextEdit__scrollToAnchor_QString(void *thisObj, const char *name_);
// QTextEdit::selectAll()
QtDartBindings_EXPORT void c_QTextEdit__selectAll(void *thisObj);
// QTextEdit::selectionChanged()
QtDartBindings_EXPORT void c_QTextEdit__selectionChanged(void *thisObj);
QtDartBindings_EXPORT void c_QTextEdit__onSelectionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::setAcceptRichText(bool accept)
QtDartBindings_EXPORT void c_QTextEdit__setAcceptRichText_bool(void *thisObj,
                                                               bool accept);
// QTextEdit::setCurrentFont(const QFont & f)
QtDartBindings_EXPORT void c_QTextEdit__setCurrentFont_QFont(void *thisObj,
                                                             void *f_);
// QTextEdit::setCursorWidth(int width)
QtDartBindings_EXPORT void c_QTextEdit__setCursorWidth_int(void *thisObj,
                                                           int width);
// QTextEdit::setDocumentTitle(const QString & title)
QtDartBindings_EXPORT void
c_QTextEdit__setDocumentTitle_QString(void *thisObj, const char *title_);
// QTextEdit::setFontFamily(const QString & fontFamily)
QtDartBindings_EXPORT void
c_QTextEdit__setFontFamily_QString(void *thisObj, const char *fontFamily_);
// QTextEdit::setFontItalic(bool b)
QtDartBindings_EXPORT void c_QTextEdit__setFontItalic_bool(void *thisObj,
                                                           bool b);
// QTextEdit::setFontPointSize(qreal s)
QtDartBindings_EXPORT void c_QTextEdit__setFontPointSize_qreal(void *thisObj,
                                                               qreal s);
// QTextEdit::setFontUnderline(bool b)
QtDartBindings_EXPORT void c_QTextEdit__setFontUnderline_bool(void *thisObj,
                                                              bool b);
// QTextEdit::setFontWeight(int w)
QtDartBindings_EXPORT void c_QTextEdit__setFontWeight_int(void *thisObj, int w);
// QTextEdit::setHtml(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__setHtml_QString(void *thisObj,
                                                        const char *text_);
// QTextEdit::setLineWrapColumnOrWidth(int w)
QtDartBindings_EXPORT void
c_QTextEdit__setLineWrapColumnOrWidth_int(void *thisObj, int w);
// QTextEdit::setMarkdown(const QString & markdown)
QtDartBindings_EXPORT void
c_QTextEdit__setMarkdown_QString(void *thisObj, const char *markdown_);
// QTextEdit::setOverwriteMode(bool overwrite)
QtDartBindings_EXPORT void c_QTextEdit__setOverwriteMode_bool(void *thisObj,
                                                              bool overwrite);
// QTextEdit::setPlaceholderText(const QString & placeholderText)
QtDartBindings_EXPORT void
c_QTextEdit__setPlaceholderText_QString(void *thisObj,
                                        const char *placeholderText_);
// QTextEdit::setPlainText(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__setPlainText_QString(void *thisObj,
                                                             const char *text_);
// QTextEdit::setReadOnly(bool ro)
QtDartBindings_EXPORT void c_QTextEdit__setReadOnly_bool(void *thisObj,
                                                         bool ro);
// QTextEdit::setTabChangesFocus(bool b)
QtDartBindings_EXPORT void c_QTextEdit__setTabChangesFocus_bool(void *thisObj,
                                                                bool b);
// QTextEdit::setTabStopDistance(qreal distance)
QtDartBindings_EXPORT void
c_QTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance);
// QTextEdit::setText(const QString & text)
QtDartBindings_EXPORT void c_QTextEdit__setText_QString(void *thisObj,
                                                        const char *text_);
// QTextEdit::setTextBackgroundColor(const QColor & c)
QtDartBindings_EXPORT void
c_QTextEdit__setTextBackgroundColor_QColor(void *thisObj, void *c_);
// QTextEdit::setTextColor(const QColor & c)
QtDartBindings_EXPORT void c_QTextEdit__setTextColor_QColor(void *thisObj,
                                                            void *c_);
// QTextEdit::setUndoRedoEnabled(bool enable)
QtDartBindings_EXPORT void c_QTextEdit__setUndoRedoEnabled_bool(void *thisObj,
                                                                bool enable);
// QTextEdit::setVisible(bool visible)
QtDartBindings_EXPORT void c_QTextEdit__setVisible_bool(void *thisObj,
                                                        bool visible);
// QTextEdit::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void c_QTextEdit__setupViewport_QWidget(void *thisObj,
                                                              void *viewport_);
// QTextEdit::sharedPainter() const
QtDartBindings_EXPORT void *c_QTextEdit__sharedPainter(void *thisObj);
// QTextEdit::sizeHint() const
QtDartBindings_EXPORT void *c_QTextEdit__sizeHint(void *thisObj);
// QTextEdit::tabChangesFocus() const
QtDartBindings_EXPORT bool c_QTextEdit__tabChangesFocus(void *thisObj);
// QTextEdit::tabStopDistance() const
QtDartBindings_EXPORT qreal c_QTextEdit__tabStopDistance(void *thisObj);
// QTextEdit::textBackgroundColor() const
QtDartBindings_EXPORT void *c_QTextEdit__textBackgroundColor(void *thisObj);
// QTextEdit::textChanged()
QtDartBindings_EXPORT void c_QTextEdit__textChanged(void *thisObj);
QtDartBindings_EXPORT void
c_QTextEdit__onTextChanged(void *thisObj, void *contextQObject,
                           void *callback); // QTextEdit::textColor() const
QtDartBindings_EXPORT void *c_QTextEdit__textColor(void *thisObj);
// QTextEdit::toHtml() const
QtDartBindings_EXPORT void *c_QTextEdit__toHtml(void *thisObj);
// QTextEdit::toMarkdown() const
QtDartBindings_EXPORT void *c_QTextEdit__toMarkdown(void *thisObj);
// QTextEdit::toPlainText() const
QtDartBindings_EXPORT void *c_QTextEdit__toPlainText(void *thisObj);
// QTextEdit::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QTextEdit__tr_char_char_int(const char *s, const char *c, int n);
// QTextEdit::undo()
QtDartBindings_EXPORT void c_QTextEdit__undo(void *thisObj);
// QTextEdit::undoAvailable(bool b)
QtDartBindings_EXPORT void c_QTextEdit__undoAvailable_bool(void *thisObj,
                                                           bool b);
QtDartBindings_EXPORT void c_QTextEdit__onUndoAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QTextEdit::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QTextEdit__viewportEvent_QEvent(void *thisObj,
                                                             void *arg__1_);
// QTextEdit::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QTextEdit__viewportSizeHint(void *thisObj);
// QTextEdit::zoomIn(int range)
QtDartBindings_EXPORT void c_QTextEdit__zoomIn_int(void *thisObj, int range);
// QTextEdit::zoomInF(float range)
QtDartBindings_EXPORT void c_QTextEdit__zoomInF_float(void *thisObj,
                                                      float range);
// QTextEdit::zoomOut(int range)
QtDartBindings_EXPORT void c_QTextEdit__zoomOut_int(void *thisObj, int range);
QtDartBindings_EXPORT void c_QTextEdit__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
QtDartBindings_EXPORT void c_QTextEdit_Finalizer(void *cppObj);
}

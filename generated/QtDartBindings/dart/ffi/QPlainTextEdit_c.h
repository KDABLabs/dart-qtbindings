/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QPlainTextEdit_wrapper : public ::QPlainTextEdit {
public:
  ~QPlainTextEdit_wrapper();
  QPlainTextEdit_wrapper(QWidget *parent = nullptr);
  QPlainTextEdit_wrapper(const QString &text, QWidget *parent = nullptr);
  QString anchorAt(const QPoint &pos) const;
  void appendHtml(const QString &html);
  void appendPlainText(const QString &text);
  bool backgroundVisible() const;
  int blockCount() const;
  void blockCountChanged(int newBlockCount);
  bool canPaste() const;
  void centerCursor();
  bool centerOnScroll() const;
  virtual void changeEvent(QEvent *e);
  virtual void changeEvent_nocallback(QEvent *e);
  void clear();
  QPointF contentOffset() const;
  void copy();
  void copyAvailable(bool b);
  QMenu *createStandardContextMenu();
  QMenu *createStandardContextMenu(const QPoint &position);
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
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  void insertPlainText(const QString &text);
  bool isReadOnly() const;
  bool isUndoRedoEnabled() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  int maximumBlockCount() const;
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  void modificationChanged(bool arg__1);
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
  void selectAll();
  void selectionChanged();
  void setBackgroundVisible(bool visible);
  void setCenterOnScroll(bool enabled);
  void setCursorWidth(int width);
  void setDocumentTitle(const QString &title);
  void setMaximumBlockCount(int maximum);
  void setOverwriteMode(bool overwrite);
  void setPlaceholderText(const QString &placeholderText);
  void setPlainText(const QString &text);
  void setReadOnly(bool ro);
  void setTabChangesFocus(bool b);
  void setTabStopDistance(qreal distance);
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
  void textChanged();
  QString toPlainText() const;
  static QString tr(const char *s, const char *c, int n);
  void undo();
  void undoAvailable(bool b);
  void updateRequest(const QRect &rect, int dy);
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
// QPlainTextEdit::QPlainTextEdit(QWidget * parent)
QtDartBindings_EXPORT void *
c_QPlainTextEdit__constructor_QWidget(void *parent_);
// QPlainTextEdit::QPlainTextEdit(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QPlainTextEdit__constructor_QString_QWidget(const char *text_, void *parent_);
// QPlainTextEdit::anchorAt(const QPoint & pos) const
QtDartBindings_EXPORT void *c_QPlainTextEdit__anchorAt_QPoint(void *thisObj,
                                                              void *pos_);
// QPlainTextEdit::appendHtml(const QString & html)
QtDartBindings_EXPORT void
c_QPlainTextEdit__appendHtml_QString(void *thisObj, const char *html_);
// QPlainTextEdit::appendPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QPlainTextEdit__appendPlainText_QString(void *thisObj, const char *text_);
// QPlainTextEdit::backgroundVisible() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__backgroundVisible(void *thisObj);
// QPlainTextEdit::blockCount() const
QtDartBindings_EXPORT int c_QPlainTextEdit__blockCount(void *thisObj);
// QPlainTextEdit::blockCountChanged(int newBlockCount)
QtDartBindings_EXPORT void
c_QPlainTextEdit__blockCountChanged_int(void *thisObj, int newBlockCount);
QtDartBindings_EXPORT void c_QPlainTextEdit__onBlockCountChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::canPaste() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__canPaste(void *thisObj);
// QPlainTextEdit::centerCursor()
QtDartBindings_EXPORT void c_QPlainTextEdit__centerCursor(void *thisObj);
// QPlainTextEdit::centerOnScroll() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__centerOnScroll(void *thisObj);
// QPlainTextEdit::changeEvent(QEvent * e)
QtDartBindings_EXPORT void c_QPlainTextEdit__changeEvent_QEvent(void *thisObj,
                                                                void *e_);
// QPlainTextEdit::clear()
QtDartBindings_EXPORT void c_QPlainTextEdit__clear(void *thisObj);
// QPlainTextEdit::contentOffset() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__contentOffset(void *thisObj);
// QPlainTextEdit::copy()
QtDartBindings_EXPORT void c_QPlainTextEdit__copy(void *thisObj);
// QPlainTextEdit::copyAvailable(bool b)
QtDartBindings_EXPORT void c_QPlainTextEdit__copyAvailable_bool(void *thisObj,
                                                                bool b);
QtDartBindings_EXPORT void c_QPlainTextEdit__onCopyAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::createStandardContextMenu()
QtDartBindings_EXPORT void *
c_QPlainTextEdit__createStandardContextMenu(void *thisObj);
// QPlainTextEdit::createStandardContextMenu(const QPoint & position)
QtDartBindings_EXPORT void *
c_QPlainTextEdit__createStandardContextMenu_QPoint(void *thisObj,
                                                   void *position_);
// QPlainTextEdit::cursorPositionChanged()
QtDartBindings_EXPORT void
c_QPlainTextEdit__cursorPositionChanged(void *thisObj);
QtDartBindings_EXPORT void c_QPlainTextEdit__onCursorPositionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::cursorRect() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__cursorRect(void *thisObj);
// QPlainTextEdit::cursorWidth() const
QtDartBindings_EXPORT int c_QPlainTextEdit__cursorWidth(void *thisObj);
// QPlainTextEdit::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QPlainTextEdit__customEvent_QEvent(void *thisObj,
                                                                void *event_);
// QPlainTextEdit::cut()
QtDartBindings_EXPORT void c_QPlainTextEdit__cut(void *thisObj);
// QPlainTextEdit::devType() const
QtDartBindings_EXPORT int c_QPlainTextEdit__devType(void *thisObj);
// QPlainTextEdit::documentTitle() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__documentTitle(void *thisObj);
// QPlainTextEdit::ensureCursorVisible()
QtDartBindings_EXPORT void c_QPlainTextEdit__ensureCursorVisible(void *thisObj);
// QPlainTextEdit::event(QEvent * e)
QtDartBindings_EXPORT bool c_QPlainTextEdit__event_QEvent(void *thisObj,
                                                          void *e_);
// QPlainTextEdit::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QPlainTextEdit__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                             void *arg__2_);
// QPlainTextEdit::find(const QString & exp)
QtDartBindings_EXPORT bool c_QPlainTextEdit__find_QString(void *thisObj,
                                                          const char *exp_);
// QPlainTextEdit::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QPlainTextEdit__focusNextPrevChild_bool(void *thisObj, bool next);
// QPlainTextEdit::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__hasHeightForWidth(void *thisObj);
// QPlainTextEdit::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QPlainTextEdit__heightForWidth_int(void *thisObj,
                                                               int arg__1);
// QPlainTextEdit::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void
c_QPlainTextEdit__initPainter_QPainter(void *thisObj, void *painter_);
// QPlainTextEdit::insertPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QPlainTextEdit__insertPlainText_QString(void *thisObj, const char *text_);
// QPlainTextEdit::isReadOnly() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__isReadOnly(void *thisObj);
// QPlainTextEdit::isUndoRedoEnabled() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__isUndoRedoEnabled(void *thisObj);
// QPlainTextEdit::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QPlainTextEdit__leaveEvent_QEvent(void *thisObj,
                                                               void *event_);
// QPlainTextEdit::maximumBlockCount() const
QtDartBindings_EXPORT int c_QPlainTextEdit__maximumBlockCount(void *thisObj);
// QPlainTextEdit::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__minimumSizeHint(void *thisObj);
// QPlainTextEdit::modificationChanged(bool arg__1)
QtDartBindings_EXPORT void
c_QPlainTextEdit__modificationChanged_bool(void *thisObj, bool arg__1);
QtDartBindings_EXPORT void c_QPlainTextEdit__onModificationChanged_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::mouseDoubleClickEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *e_);
// QPlainTextEdit::mouseMoveEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *e_);
// QPlainTextEdit::mousePressEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mousePressEvent_QMouseEvent(void *thisObj, void *e_);
// QPlainTextEdit::mouseReleaseEvent(QMouseEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *e_);
// QPlainTextEdit::overwriteMode() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__overwriteMode(void *thisObj);
// QPlainTextEdit::paintEvent(QPaintEvent * e)
QtDartBindings_EXPORT void
c_QPlainTextEdit__paintEvent_QPaintEvent(void *thisObj, void *e_);
// QPlainTextEdit::paste()
QtDartBindings_EXPORT void c_QPlainTextEdit__paste(void *thisObj);
// QPlainTextEdit::placeholderText() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__placeholderText(void *thisObj);
// QPlainTextEdit::redo()
QtDartBindings_EXPORT void c_QPlainTextEdit__redo(void *thisObj);
// QPlainTextEdit::redoAvailable(bool b)
QtDartBindings_EXPORT void c_QPlainTextEdit__redoAvailable_bool(void *thisObj,
                                                                bool b);
QtDartBindings_EXPORT void c_QPlainTextEdit__onRedoAvailable_bool(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::scrollContentsBy(int dx, int dy)
QtDartBindings_EXPORT void
c_QPlainTextEdit__scrollContentsBy_int_int(void *thisObj, int dx, int dy);
// QPlainTextEdit::selectAll()
QtDartBindings_EXPORT void c_QPlainTextEdit__selectAll(void *thisObj);
// QPlainTextEdit::selectionChanged()
QtDartBindings_EXPORT void c_QPlainTextEdit__selectionChanged(void *thisObj);
QtDartBindings_EXPORT void c_QPlainTextEdit__onSelectionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::setBackgroundVisible(bool visible)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setBackgroundVisible_bool(void *thisObj, bool visible);
// QPlainTextEdit::setCenterOnScroll(bool enabled)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setCenterOnScroll_bool(void *thisObj, bool enabled);
// QPlainTextEdit::setCursorWidth(int width)
QtDartBindings_EXPORT void c_QPlainTextEdit__setCursorWidth_int(void *thisObj,
                                                                int width);
// QPlainTextEdit::setDocumentTitle(const QString & title)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setDocumentTitle_QString(void *thisObj, const char *title_);
// QPlainTextEdit::setMaximumBlockCount(int maximum)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setMaximumBlockCount_int(void *thisObj, int maximum);
// QPlainTextEdit::setOverwriteMode(bool overwrite)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setOverwriteMode_bool(void *thisObj, bool overwrite);
// QPlainTextEdit::setPlaceholderText(const QString & placeholderText)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setPlaceholderText_QString(void *thisObj,
                                             const char *placeholderText_);
// QPlainTextEdit::setPlainText(const QString & text)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setPlainText_QString(void *thisObj, const char *text_);
// QPlainTextEdit::setReadOnly(bool ro)
QtDartBindings_EXPORT void c_QPlainTextEdit__setReadOnly_bool(void *thisObj,
                                                              bool ro);
// QPlainTextEdit::setTabChangesFocus(bool b)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setTabChangesFocus_bool(void *thisObj, bool b);
// QPlainTextEdit::setTabStopDistance(qreal distance)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setTabStopDistance_qreal(void *thisObj, qreal distance);
// QPlainTextEdit::setUndoRedoEnabled(bool enable)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setUndoRedoEnabled_bool(void *thisObj, bool enable);
// QPlainTextEdit::setVisible(bool visible)
QtDartBindings_EXPORT void c_QPlainTextEdit__setVisible_bool(void *thisObj,
                                                             bool visible);
// QPlainTextEdit::setupViewport(QWidget * viewport)
QtDartBindings_EXPORT void
c_QPlainTextEdit__setupViewport_QWidget(void *thisObj, void *viewport_);
// QPlainTextEdit::sharedPainter() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__sharedPainter(void *thisObj);
// QPlainTextEdit::sizeHint() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__sizeHint(void *thisObj);
// QPlainTextEdit::tabChangesFocus() const
QtDartBindings_EXPORT bool c_QPlainTextEdit__tabChangesFocus(void *thisObj);
// QPlainTextEdit::tabStopDistance() const
QtDartBindings_EXPORT qreal c_QPlainTextEdit__tabStopDistance(void *thisObj);
// QPlainTextEdit::textChanged()
QtDartBindings_EXPORT void c_QPlainTextEdit__textChanged(void *thisObj);
QtDartBindings_EXPORT void c_QPlainTextEdit__onTextChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::toPlainText() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__toPlainText(void *thisObj);
// QPlainTextEdit::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QPlainTextEdit__tr_char_char_int(const char *s, const char *c, int n);
// QPlainTextEdit::undo()
QtDartBindings_EXPORT void c_QPlainTextEdit__undo(void *thisObj);
// QPlainTextEdit::undoAvailable(bool b)
QtDartBindings_EXPORT void c_QPlainTextEdit__undoAvailable_bool(void *thisObj,
                                                                bool b);
QtDartBindings_EXPORT void c_QPlainTextEdit__onUndoAvailable_bool(
    void *thisObj, void *contextQObject,
    void
        *callback); // QPlainTextEdit::updateRequest(const QRect & rect, int dy)
QtDartBindings_EXPORT void
c_QPlainTextEdit__updateRequest_QRect_int(void *thisObj, void *rect_, int dy);
QtDartBindings_EXPORT void c_QPlainTextEdit__onUpdateRequest_QRect_int(
    void *thisObj, void *contextQObject,
    void *callback); // QPlainTextEdit::viewportEvent(QEvent * arg__1)
QtDartBindings_EXPORT bool
c_QPlainTextEdit__viewportEvent_QEvent(void *thisObj, void *arg__1_);
// QPlainTextEdit::viewportSizeHint() const
QtDartBindings_EXPORT void *c_QPlainTextEdit__viewportSizeHint(void *thisObj);
// QPlainTextEdit::zoomIn(int range)
QtDartBindings_EXPORT void c_QPlainTextEdit__zoomIn_int(void *thisObj,
                                                        int range);
// QPlainTextEdit::zoomInF(float range)
QtDartBindings_EXPORT void c_QPlainTextEdit__zoomInF_float(void *thisObj,
                                                           float range);
// QPlainTextEdit::zoomOut(int range)
QtDartBindings_EXPORT void c_QPlainTextEdit__zoomOut_int(void *thisObj,
                                                         int range);
QtDartBindings_EXPORT void c_QPlainTextEdit__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QPlainTextEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                                int methodId);
QtDartBindings_EXPORT void c_QPlainTextEdit_Finalizer(void *cppObj);
}

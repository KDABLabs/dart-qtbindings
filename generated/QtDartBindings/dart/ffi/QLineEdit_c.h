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
#include <qlineedit.h>
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
class QLineEdit_wrapper : public ::QLineEdit {
public:
  ~QLineEdit_wrapper();
  QLineEdit_wrapper(QWidget *parent = nullptr);
  QLineEdit_wrapper(const QString &arg__1, QWidget *parent = nullptr);
  void backspace();
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clear();
  void copy() const;
  QMenu *createStandardContextMenu();
  void cursorBackward(bool mark, int steps = 1);
  void cursorForward(bool mark, int steps = 1);
  int cursorPosition() const;
  int cursorPositionAt(const QPoint &pos);
  void cursorPositionChanged(int arg__1, int arg__2);
  QRect cursorRect() const;
  void cursorWordBackward(bool mark);
  void cursorWordForward(bool mark);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  void cut();
  void del();
  void deselect();
  virtual int devType() const;
  virtual int devType_nocallback() const;
  QString displayText() const;
  bool dragEnabled() const;
  void editingFinished();
  void end(bool mark);
  virtual bool event(QEvent *arg__1);
  virtual bool event_nocallback(QEvent *arg__1);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  bool hasAcceptableInput() const;
  bool hasFrame() const;
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  bool hasSelectedText() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  void home(bool mark);
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  QString inputMask() const;
  void inputRejected();
  void insert(const QString &arg__1);
  bool isClearButtonEnabled() const;
  bool isModified() const;
  bool isReadOnly() const;
  bool isRedoAvailable() const;
  bool isUndoAvailable() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  int maxLength() const;
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *arg__1);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseMoveEvent(QMouseEvent *arg__1);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *arg__1);
  virtual void mousePressEvent(QMouseEvent *arg__1);
  virtual void mousePressEvent_nocallback(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent(QMouseEvent *arg__1);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *arg__1);
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  void paste();
  QString placeholderText() const;
  void redo();
  void returnPressed();
  void selectAll();
  QString selectedText() const;
  void selectionChanged();
  int selectionEnd() const;
  int selectionLength() const;
  int selectionStart() const;
  void setClearButtonEnabled(bool enable);
  void setCursorPosition(int arg__1);
  void setDragEnabled(bool b);
  void setFrame(bool arg__1);
  void setInputMask(const QString &inputMask);
  void setMaxLength(int arg__1);
  void setModified(bool arg__1);
  void setPlaceholderText(const QString &arg__1);
  void setReadOnly(bool arg__1);
  void setSelection(int arg__1, int arg__2);
  void setText(const QString &arg__1);
  void setTextMargins(int left, int top, int right, int bottom);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QString text() const;
  void textChanged(const QString &arg__1);
  void textEdited(const QString &arg__1);
  static QString tr(const char *s, const char *c, int n);
  void undo();
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
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *arg__1);
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
// QLineEdit::QLineEdit(QWidget * parent)
QtDartBindings_EXPORT void *c_QLineEdit__constructor_QWidget(void *parent_);
// QLineEdit::QLineEdit(const QString & arg__1, QWidget * parent)
QtDartBindings_EXPORT void *
c_QLineEdit__constructor_QString_QWidget(const char *arg__1_, void *parent_);
// QLineEdit::backspace()
QtDartBindings_EXPORT void c_QLineEdit__backspace(void *thisObj);
// QLineEdit::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QLineEdit__changeEvent_QEvent(void *thisObj,
                                                           void *arg__1_);
// QLineEdit::clear()
QtDartBindings_EXPORT void c_QLineEdit__clear(void *thisObj);
// QLineEdit::copy() const
QtDartBindings_EXPORT void c_QLineEdit__copy(void *thisObj);
// QLineEdit::createStandardContextMenu()
QtDartBindings_EXPORT void *
c_QLineEdit__createStandardContextMenu(void *thisObj);
// QLineEdit::cursorBackward(bool mark, int steps)
QtDartBindings_EXPORT void
c_QLineEdit__cursorBackward_bool_int(void *thisObj, bool mark, int steps);
// QLineEdit::cursorForward(bool mark, int steps)
QtDartBindings_EXPORT void
c_QLineEdit__cursorForward_bool_int(void *thisObj, bool mark, int steps);
// QLineEdit::cursorPosition() const
QtDartBindings_EXPORT int c_QLineEdit__cursorPosition(void *thisObj);
// QLineEdit::cursorPositionAt(const QPoint & pos)
QtDartBindings_EXPORT int c_QLineEdit__cursorPositionAt_QPoint(void *thisObj,
                                                               void *pos_);
// QLineEdit::cursorPositionChanged(int arg__1, int arg__2)
QtDartBindings_EXPORT void
c_QLineEdit__cursorPositionChanged_int_int(void *thisObj, int arg__1,
                                           int arg__2);
QtDartBindings_EXPORT void c_QLineEdit__onCursorPositionChanged_int_int(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::cursorRect() const
QtDartBindings_EXPORT void *c_QLineEdit__cursorRect(void *thisObj);
// QLineEdit::cursorWordBackward(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__cursorWordBackward_bool(void *thisObj,
                                                                bool mark);
// QLineEdit::cursorWordForward(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__cursorWordForward_bool(void *thisObj,
                                                               bool mark);
// QLineEdit::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLineEdit__customEvent_QEvent(void *thisObj,
                                                           void *event_);
// QLineEdit::cut()
QtDartBindings_EXPORT void c_QLineEdit__cut(void *thisObj);
// QLineEdit::del()
QtDartBindings_EXPORT void c_QLineEdit__del(void *thisObj);
// QLineEdit::deselect()
QtDartBindings_EXPORT void c_QLineEdit__deselect(void *thisObj);
// QLineEdit::devType() const
QtDartBindings_EXPORT int c_QLineEdit__devType(void *thisObj);
// QLineEdit::displayText() const
QtDartBindings_EXPORT void *c_QLineEdit__displayText(void *thisObj);
// QLineEdit::dragEnabled() const
QtDartBindings_EXPORT bool c_QLineEdit__dragEnabled(void *thisObj);
// QLineEdit::editingFinished()
QtDartBindings_EXPORT void c_QLineEdit__editingFinished(void *thisObj);
QtDartBindings_EXPORT void
c_QLineEdit__onEditingFinished(void *thisObj, void *contextQObject,
                               void *callback); // QLineEdit::end(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__end_bool(void *thisObj, bool mark);
// QLineEdit::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QLineEdit__event_QEvent(void *thisObj,
                                                     void *arg__1_);
// QLineEdit::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QLineEdit__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);
// QLineEdit::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QLineEdit__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);
// QLineEdit::hasAcceptableInput() const
QtDartBindings_EXPORT bool c_QLineEdit__hasAcceptableInput(void *thisObj);
// QLineEdit::hasFrame() const
QtDartBindings_EXPORT bool c_QLineEdit__hasFrame(void *thisObj);
// QLineEdit::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLineEdit__hasHeightForWidth(void *thisObj);
// QLineEdit::hasSelectedText() const
QtDartBindings_EXPORT bool c_QLineEdit__hasSelectedText(void *thisObj);
// QLineEdit::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLineEdit__heightForWidth_int(void *thisObj,
                                                          int arg__1);
// QLineEdit::home(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__home_bool(void *thisObj, bool mark);
// QLineEdit::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QLineEdit__initPainter_QPainter(void *thisObj,
                                                             void *painter_);
// QLineEdit::inputMask() const
QtDartBindings_EXPORT void *c_QLineEdit__inputMask(void *thisObj);
// QLineEdit::inputRejected()
QtDartBindings_EXPORT void c_QLineEdit__inputRejected(void *thisObj);
QtDartBindings_EXPORT void c_QLineEdit__onInputRejected(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::insert(const QString & arg__1)
QtDartBindings_EXPORT void c_QLineEdit__insert_QString(void *thisObj,
                                                       const char *arg__1_);
// QLineEdit::isClearButtonEnabled() const
QtDartBindings_EXPORT bool c_QLineEdit__isClearButtonEnabled(void *thisObj);
// QLineEdit::isModified() const
QtDartBindings_EXPORT bool c_QLineEdit__isModified(void *thisObj);
// QLineEdit::isReadOnly() const
QtDartBindings_EXPORT bool c_QLineEdit__isReadOnly(void *thisObj);
// QLineEdit::isRedoAvailable() const
QtDartBindings_EXPORT bool c_QLineEdit__isRedoAvailable(void *thisObj);
// QLineEdit::isUndoAvailable() const
QtDartBindings_EXPORT bool c_QLineEdit__isUndoAvailable(void *thisObj);
// QLineEdit::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLineEdit__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);
// QLineEdit::maxLength() const
QtDartBindings_EXPORT int c_QLineEdit__maxLength(void *thisObj);
// QLineEdit::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QLineEdit__minimumSizeHint(void *thisObj);
// QLineEdit::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QLineEdit::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QLineEdit::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QLineEdit::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);
// QLineEdit::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QLineEdit__paintEvent_QPaintEvent(void *thisObj,
                                                               void *arg__1_);
// QLineEdit::paste()
QtDartBindings_EXPORT void c_QLineEdit__paste(void *thisObj);
// QLineEdit::placeholderText() const
QtDartBindings_EXPORT void *c_QLineEdit__placeholderText(void *thisObj);
// QLineEdit::redo()
QtDartBindings_EXPORT void c_QLineEdit__redo(void *thisObj);
// QLineEdit::returnPressed()
QtDartBindings_EXPORT void c_QLineEdit__returnPressed(void *thisObj);
QtDartBindings_EXPORT void
c_QLineEdit__onReturnPressed(void *thisObj, void *contextQObject,
                             void *callback); // QLineEdit::selectAll()
QtDartBindings_EXPORT void c_QLineEdit__selectAll(void *thisObj);
// QLineEdit::selectedText() const
QtDartBindings_EXPORT void *c_QLineEdit__selectedText(void *thisObj);
// QLineEdit::selectionChanged()
QtDartBindings_EXPORT void c_QLineEdit__selectionChanged(void *thisObj);
QtDartBindings_EXPORT void c_QLineEdit__onSelectionChanged(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::selectionEnd() const
QtDartBindings_EXPORT int c_QLineEdit__selectionEnd(void *thisObj);
// QLineEdit::selectionLength() const
QtDartBindings_EXPORT int c_QLineEdit__selectionLength(void *thisObj);
// QLineEdit::selectionStart() const
QtDartBindings_EXPORT int c_QLineEdit__selectionStart(void *thisObj);
// QLineEdit::setClearButtonEnabled(bool enable)
QtDartBindings_EXPORT void
c_QLineEdit__setClearButtonEnabled_bool(void *thisObj, bool enable);
// QLineEdit::setCursorPosition(int arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setCursorPosition_int(void *thisObj,
                                                              int arg__1);
// QLineEdit::setDragEnabled(bool b)
QtDartBindings_EXPORT void c_QLineEdit__setDragEnabled_bool(void *thisObj,
                                                            bool b);
// QLineEdit::setFrame(bool arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setFrame_bool(void *thisObj,
                                                      bool arg__1);
// QLineEdit::setInputMask(const QString & inputMask)
QtDartBindings_EXPORT void
c_QLineEdit__setInputMask_QString(void *thisObj, const char *inputMask_);
// QLineEdit::setMaxLength(int arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setMaxLength_int(void *thisObj,
                                                         int arg__1);
// QLineEdit::setModified(bool arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setModified_bool(void *thisObj,
                                                         bool arg__1);
// QLineEdit::setPlaceholderText(const QString & arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__setPlaceholderText_QString(void *thisObj, const char *arg__1_);
// QLineEdit::setReadOnly(bool arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setReadOnly_bool(void *thisObj,
                                                         bool arg__1);
// QLineEdit::setSelection(int arg__1, int arg__2)
QtDartBindings_EXPORT void
c_QLineEdit__setSelection_int_int(void *thisObj, int arg__1, int arg__2);
// QLineEdit::setText(const QString & arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setText_QString(void *thisObj,
                                                        const char *arg__1_);
// QLineEdit::setTextMargins(int left, int top, int right, int bottom)
QtDartBindings_EXPORT void
c_QLineEdit__setTextMargins_int_int_int_int(void *thisObj, int left, int top,
                                            int right, int bottom);
// QLineEdit::setVisible(bool visible)
QtDartBindings_EXPORT void c_QLineEdit__setVisible_bool(void *thisObj,
                                                        bool visible);
// QLineEdit::sharedPainter() const
QtDartBindings_EXPORT void *c_QLineEdit__sharedPainter(void *thisObj);
// QLineEdit::sizeHint() const
QtDartBindings_EXPORT void *c_QLineEdit__sizeHint(void *thisObj);
// QLineEdit::text() const
QtDartBindings_EXPORT void *c_QLineEdit__text(void *thisObj);
// QLineEdit::textChanged(const QString & arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__textChanged_QString(void *thisObj, const char *arg__1_);
QtDartBindings_EXPORT void c_QLineEdit__onTextChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::textEdited(const QString & arg__1)
QtDartBindings_EXPORT void c_QLineEdit__textEdited_QString(void *thisObj,
                                                           const char *arg__1_);
QtDartBindings_EXPORT void c_QLineEdit__onTextEdited_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QLineEdit::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QLineEdit__tr_char_char_int(const char *s, const char *c, int n);
// QLineEdit::undo()
QtDartBindings_EXPORT void c_QLineEdit__undo(void *thisObj);
QtDartBindings_EXPORT void c_QLineEdit__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QLineEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
QtDartBindings_EXPORT void c_QLineEdit_Finalizer(void *cppObj);
}

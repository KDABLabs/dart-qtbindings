
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
// tag=1017
class QLineEdit_wrapper : public ::QLineEdit {
public:
  ~QLineEdit_wrapper();
  // tag=1041
  QLineEdit_wrapper(QWidget *parent = nullptr);
  // tag=1041
  QLineEdit_wrapper(const QString &arg__1, QWidget *parent = nullptr);
  // tag=1041
  void backspace();
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  void clear();
  // tag=1041
  void copy() const;
  // tag=1041
  QMenu *createStandardContextMenu();
  // tag=1041
  void cursorBackward(bool mark, int steps = 1);
  // tag=1041
  void cursorForward(bool mark, int steps = 1);
  // tag=1041
  int cursorPosition() const;
  // tag=1041
  int cursorPositionAt(const QPoint &pos);
  // tag=1041
  void cursorPositionChanged(int arg__1, int arg__2);
  // tag=1041
  QRect cursorRect() const;
  // tag=1041
  void cursorWordBackward(bool mark);
  // tag=1041
  void cursorWordForward(bool mark);
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  void cut();
  // tag=1041
  void del();
  // tag=1041
  void deselect();
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  QString displayText() const;
  // tag=1041
  bool dragEnabled() const;
  // tag=1041
  void editingFinished();
  // tag=1041
  void end(bool mark);
  // tag=1041
  virtual bool event(QEvent *arg__1);
  // tag=1008
  virtual bool event_nocallback(QEvent *arg__1);
  // tag=1041
  virtual bool eventFilter(QObject *watched, QEvent *event);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  bool hasAcceptableInput() const;
  // tag=1041
  bool hasFrame() const;
  // tag=1041
  virtual bool hasHeightForWidth() const;
  // tag=1008
  virtual bool hasHeightForWidth_nocallback() const;
  // tag=1041
  bool hasSelectedText() const;
  // tag=1041
  virtual int heightForWidth(int arg__1) const;
  // tag=1008
  virtual int heightForWidth_nocallback(int arg__1) const;
  // tag=1041
  void home(bool mark);
  // tag=1041
  virtual void initPainter(QPainter *painter) const;
  // tag=1008
  virtual void initPainter_nocallback(QPainter *painter) const;
  // tag=1041
  QString inputMask() const;
  // tag=1041
  void inputRejected();
  // tag=1041
  void insert(const QString &arg__1);
  // tag=1041
  bool isClearButtonEnabled() const;
  // tag=1041
  bool isModified() const;
  // tag=1041
  bool isReadOnly() const;
  // tag=1041
  bool isRedoAvailable() const;
  // tag=1041
  bool isUndoAvailable() const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  int maxLength() const;
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *arg__1);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *arg__1);
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
  void paste();
  // tag=1041
  QString placeholderText() const;
  // tag=1041
  void redo();
  // tag=1041
  void returnPressed();
  // tag=1041
  void selectAll();
  // tag=1041
  QString selectedText() const;
  // tag=1041
  void selectionChanged();
  // tag=1041
  int selectionEnd() const;
  // tag=1041
  int selectionLength() const;
  // tag=1041
  int selectionStart() const;
  // tag=1041
  void setClearButtonEnabled(bool enable);
  // tag=1041
  void setCursorPosition(int arg__1);
  // tag=1041
  void setDragEnabled(bool b);
  // tag=1041
  void setFrame(bool arg__1);
  // tag=1041
  void setInputMask(const QString &inputMask);
  // tag=1041
  void setMaxLength(int arg__1);
  // tag=1041
  void setModified(bool arg__1);
  // tag=1041
  void setPlaceholderText(const QString &arg__1);
  // tag=1041
  void setReadOnly(bool arg__1);
  // tag=1041
  void setSelection(int arg__1, int arg__2);
  // tag=1041
  void setText(const QString &arg__1);
  // tag=1041
  void setTextMargins(int left, int top, int right, int bottom);
  // tag=1041
  virtual void setVisible(bool visible);
  // tag=1008
  virtual void setVisible_nocallback(bool visible);
  // tag=1041
  virtual QPainter *sharedPainter() const;
  // tag=1008
  virtual QPainter *sharedPainter_nocallback() const;
  // tag=1041
  virtual QSize sizeHint() const;
  // tag=1008
  virtual QSize sizeHint_nocallback() const;
  // tag=1041
  QString text() const;
  // tag=1041
  void textChanged(const QString &arg__1);
  // tag=1041
  void textEdited(const QString &arg__1);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1041
  void undo();
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
  typedef void (*Callback_leaveEvent)(void *, QEvent *event);
  Callback_leaveEvent m_leaveEventCallback = nullptr;
  // tag=1042
  typedef QSize *(*Callback_minimumSizeHint)(void *);
  Callback_minimumSizeHint m_minimumSizeHintCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *arg__1);
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
//  QLineEdit::QLineEdit(QWidget * parent)
QtDartBindings_EXPORT void *c_QLineEdit__constructor_QWidget(void *parent_);

// tag=1067
//  QLineEdit::QLineEdit(const QString & arg__1, QWidget * parent)
QtDartBindings_EXPORT void *
c_QLineEdit__constructor_QString_QWidget(const char *arg__1_, void *parent_);

// tag=1067
//  QLineEdit::backspace()
QtDartBindings_EXPORT void c_QLineEdit__backspace(void *thisObj);

// tag=1067
//  QLineEdit::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QLineEdit__changeEvent_QEvent(void *thisObj,
                                                           void *arg__1_);

// tag=1067
//  QLineEdit::clear()
QtDartBindings_EXPORT void c_QLineEdit__clear(void *thisObj);

// tag=1067
//  QLineEdit::copy() const
QtDartBindings_EXPORT void c_QLineEdit__copy(void *thisObj);

// tag=1067
//  QLineEdit::createStandardContextMenu()
QtDartBindings_EXPORT void *
c_QLineEdit__createStandardContextMenu(void *thisObj);

// tag=1067
//  QLineEdit::cursorBackward(bool mark, int steps)
QtDartBindings_EXPORT void
c_QLineEdit__cursorBackward_bool_int(void *thisObj, bool mark, int steps);

// tag=1067
//  QLineEdit::cursorForward(bool mark, int steps)
QtDartBindings_EXPORT void
c_QLineEdit__cursorForward_bool_int(void *thisObj, bool mark, int steps);

// tag=1067
//  QLineEdit::cursorPosition() const
QtDartBindings_EXPORT int c_QLineEdit__cursorPosition(void *thisObj);

// tag=1067
//  QLineEdit::cursorPositionAt(const QPoint & pos)
QtDartBindings_EXPORT int c_QLineEdit__cursorPositionAt_QPoint(void *thisObj,
                                                               void *pos_);

// tag=1067
//  QLineEdit::cursorPositionChanged(int arg__1, int arg__2)
QtDartBindings_EXPORT void
c_QLineEdit__cursorPositionChanged_int_int(void *thisObj, int arg__1,
                                           int arg__2);

// tag=1078
QtDartBindings_EXPORT void c_QLineEdit__onCursorPositionChanged_int_int(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QLineEdit::cursorRect() const
QtDartBindings_EXPORT void *c_QLineEdit__cursorRect(void *thisObj);

// tag=1067
//  QLineEdit::cursorWordBackward(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__cursorWordBackward_bool(void *thisObj,
                                                                bool mark);

// tag=1067
//  QLineEdit::cursorWordForward(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__cursorWordForward_bool(void *thisObj,
                                                               bool mark);

// tag=1067
//  QLineEdit::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLineEdit__customEvent_QEvent(void *thisObj,
                                                           void *event_);

// tag=1067
//  QLineEdit::cut()
QtDartBindings_EXPORT void c_QLineEdit__cut(void *thisObj);

// tag=1067
//  QLineEdit::del()
QtDartBindings_EXPORT void c_QLineEdit__del(void *thisObj);

// tag=1067
//  QLineEdit::deselect()
QtDartBindings_EXPORT void c_QLineEdit__deselect(void *thisObj);

// tag=1067
//  QLineEdit::devType() const
QtDartBindings_EXPORT int c_QLineEdit__devType(void *thisObj);

// tag=1067
//  QLineEdit::displayText() const
QtDartBindings_EXPORT void *c_QLineEdit__displayText(void *thisObj);

// tag=1067
//  QLineEdit::dragEnabled() const
QtDartBindings_EXPORT bool c_QLineEdit__dragEnabled(void *thisObj);

// tag=1067
//  QLineEdit::editingFinished()
QtDartBindings_EXPORT void c_QLineEdit__editingFinished(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QLineEdit__onEditingFinished(void *thisObj,
                                                          void *contextQObject,
                                                          void *callback);
// tag=1067
//  QLineEdit::end(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__end_bool(void *thisObj, bool mark);

// tag=1067
//  QLineEdit::event(QEvent * arg__1)
QtDartBindings_EXPORT bool c_QLineEdit__event_QEvent(void *thisObj,
                                                     void *arg__1_);

// tag=1067
//  QLineEdit::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool
c_QLineEdit__eventFilter_QObject_QEvent(void *thisObj, void *watched_,
                                        void *event_);

// tag=1067
//  QLineEdit::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QLineEdit__focusNextPrevChild_bool(void *thisObj,
                                                                bool next);

// tag=1067
//  QLineEdit::hasAcceptableInput() const
QtDartBindings_EXPORT bool c_QLineEdit__hasAcceptableInput(void *thisObj);

// tag=1067
//  QLineEdit::hasFrame() const
QtDartBindings_EXPORT bool c_QLineEdit__hasFrame(void *thisObj);

// tag=1067
//  QLineEdit::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLineEdit__hasHeightForWidth(void *thisObj);

// tag=1067
//  QLineEdit::hasSelectedText() const
QtDartBindings_EXPORT bool c_QLineEdit__hasSelectedText(void *thisObj);

// tag=1067
//  QLineEdit::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLineEdit__heightForWidth_int(void *thisObj,
                                                          int arg__1);

// tag=1067
//  QLineEdit::home(bool mark)
QtDartBindings_EXPORT void c_QLineEdit__home_bool(void *thisObj, bool mark);

// tag=1067
//  QLineEdit::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QLineEdit__initPainter_QPainter(void *thisObj,
                                                             void *painter_);

// tag=1067
//  QLineEdit::inputMask() const
QtDartBindings_EXPORT void *c_QLineEdit__inputMask(void *thisObj);

// tag=1067
//  QLineEdit::inputRejected()
QtDartBindings_EXPORT void c_QLineEdit__inputRejected(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QLineEdit__onInputRejected(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback);
// tag=1067
//  QLineEdit::insert(const QString & arg__1)
QtDartBindings_EXPORT void c_QLineEdit__insert_QString(void *thisObj,
                                                       const char *arg__1_);

// tag=1067
//  QLineEdit::isClearButtonEnabled() const
QtDartBindings_EXPORT bool c_QLineEdit__isClearButtonEnabled(void *thisObj);

// tag=1067
//  QLineEdit::isModified() const
QtDartBindings_EXPORT bool c_QLineEdit__isModified(void *thisObj);

// tag=1067
//  QLineEdit::isReadOnly() const
QtDartBindings_EXPORT bool c_QLineEdit__isReadOnly(void *thisObj);

// tag=1067
//  QLineEdit::isRedoAvailable() const
QtDartBindings_EXPORT bool c_QLineEdit__isRedoAvailable(void *thisObj);

// tag=1067
//  QLineEdit::isUndoAvailable() const
QtDartBindings_EXPORT bool c_QLineEdit__isUndoAvailable(void *thisObj);

// tag=1067
//  QLineEdit::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLineEdit__leaveEvent_QEvent(void *thisObj,
                                                          void *event_);

// tag=1067
//  QLineEdit::maxLength() const
QtDartBindings_EXPORT int c_QLineEdit__maxLength(void *thisObj);

// tag=1067
//  QLineEdit::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QLineEdit__minimumSizeHint(void *thisObj);

// tag=1067
//  QLineEdit::mouseDoubleClickEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QLineEdit::mouseMoveEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mouseMoveEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QLineEdit::mousePressEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mousePressEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QLineEdit::mouseReleaseEvent(QMouseEvent * arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__mouseReleaseEvent_QMouseEvent(void *thisObj, void *arg__1_);

// tag=1067
//  QLineEdit::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QLineEdit__paintEvent_QPaintEvent(void *thisObj,
                                                               void *arg__1_);

// tag=1067
//  QLineEdit::paste()
QtDartBindings_EXPORT void c_QLineEdit__paste(void *thisObj);

// tag=1067
//  QLineEdit::placeholderText() const
QtDartBindings_EXPORT void *c_QLineEdit__placeholderText(void *thisObj);

// tag=1067
//  QLineEdit::redo()
QtDartBindings_EXPORT void c_QLineEdit__redo(void *thisObj);

// tag=1067
//  QLineEdit::returnPressed()
QtDartBindings_EXPORT void c_QLineEdit__returnPressed(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QLineEdit__onReturnPressed(void *thisObj,
                                                        void *contextQObject,
                                                        void *callback);
// tag=1067
//  QLineEdit::selectAll()
QtDartBindings_EXPORT void c_QLineEdit__selectAll(void *thisObj);

// tag=1067
//  QLineEdit::selectedText() const
QtDartBindings_EXPORT void *c_QLineEdit__selectedText(void *thisObj);

// tag=1067
//  QLineEdit::selectionChanged()
QtDartBindings_EXPORT void c_QLineEdit__selectionChanged(void *thisObj);

// tag=1078
QtDartBindings_EXPORT void c_QLineEdit__onSelectionChanged(void *thisObj,
                                                           void *contextQObject,
                                                           void *callback);
// tag=1067
//  QLineEdit::selectionEnd() const
QtDartBindings_EXPORT int c_QLineEdit__selectionEnd(void *thisObj);

// tag=1067
//  QLineEdit::selectionLength() const
QtDartBindings_EXPORT int c_QLineEdit__selectionLength(void *thisObj);

// tag=1067
//  QLineEdit::selectionStart() const
QtDartBindings_EXPORT int c_QLineEdit__selectionStart(void *thisObj);

// tag=1067
//  QLineEdit::setClearButtonEnabled(bool enable)
QtDartBindings_EXPORT void
c_QLineEdit__setClearButtonEnabled_bool(void *thisObj, bool enable);

// tag=1067
//  QLineEdit::setCursorPosition(int arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setCursorPosition_int(void *thisObj,
                                                              int arg__1);

// tag=1067
//  QLineEdit::setDragEnabled(bool b)
QtDartBindings_EXPORT void c_QLineEdit__setDragEnabled_bool(void *thisObj,
                                                            bool b);

// tag=1067
//  QLineEdit::setFrame(bool arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setFrame_bool(void *thisObj,
                                                      bool arg__1);

// tag=1067
//  QLineEdit::setInputMask(const QString & inputMask)
QtDartBindings_EXPORT void
c_QLineEdit__setInputMask_QString(void *thisObj, const char *inputMask_);

// tag=1067
//  QLineEdit::setMaxLength(int arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setMaxLength_int(void *thisObj,
                                                         int arg__1);

// tag=1067
//  QLineEdit::setModified(bool arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setModified_bool(void *thisObj,
                                                         bool arg__1);

// tag=1067
//  QLineEdit::setPlaceholderText(const QString & arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__setPlaceholderText_QString(void *thisObj, const char *arg__1_);

// tag=1067
//  QLineEdit::setReadOnly(bool arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setReadOnly_bool(void *thisObj,
                                                         bool arg__1);

// tag=1067
//  QLineEdit::setSelection(int arg__1, int arg__2)
QtDartBindings_EXPORT void
c_QLineEdit__setSelection_int_int(void *thisObj, int arg__1, int arg__2);

// tag=1067
//  QLineEdit::setText(const QString & arg__1)
QtDartBindings_EXPORT void c_QLineEdit__setText_QString(void *thisObj,
                                                        const char *arg__1_);

// tag=1067
//  QLineEdit::setTextMargins(int left, int top, int right, int bottom)
QtDartBindings_EXPORT void
c_QLineEdit__setTextMargins_int_int_int_int(void *thisObj, int left, int top,
                                            int right, int bottom);

// tag=1067
//  QLineEdit::setVisible(bool visible)
QtDartBindings_EXPORT void c_QLineEdit__setVisible_bool(void *thisObj,
                                                        bool visible);

// tag=1067
//  QLineEdit::sharedPainter() const
QtDartBindings_EXPORT void *c_QLineEdit__sharedPainter(void *thisObj);

// tag=1067
//  QLineEdit::sizeHint() const
QtDartBindings_EXPORT void *c_QLineEdit__sizeHint(void *thisObj);

// tag=1067
//  QLineEdit::text() const
QtDartBindings_EXPORT void *c_QLineEdit__text(void *thisObj);

// tag=1067
//  QLineEdit::textChanged(const QString & arg__1)
QtDartBindings_EXPORT void
c_QLineEdit__textChanged_QString(void *thisObj, const char *arg__1_);

// tag=1078
QtDartBindings_EXPORT void
c_QLineEdit__onTextChanged_QString(void *thisObj, void *contextQObject,
                                   void *callback);
// tag=1067
//  QLineEdit::textEdited(const QString & arg__1)
QtDartBindings_EXPORT void c_QLineEdit__textEdited_QString(void *thisObj,
                                                           const char *arg__1_);

// tag=1078
QtDartBindings_EXPORT void
c_QLineEdit__onTextEdited_QString(void *thisObj, void *contextQObject,
                                  void *callback);
// tag=1067
//  QLineEdit::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QLineEdit__tr_char_char_int(const char *s, const char *c, int n);

// tag=1067
//  QLineEdit::undo()
QtDartBindings_EXPORT void c_QLineEdit__undo(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QLineEdit__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QLineEdit__registerVirtualMethodCallback(void *ptr, void *callback,
                                           int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QLineEdit_Finalizer(void *, void *cppObj, void *);
}

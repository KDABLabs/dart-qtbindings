/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdialog.h>
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
#include <qwidget.h>
#include <qwindow.h>

namespace QtDartBindings_wrappersNS {
class QDialog_wrapper : public ::QDialog {
public:
  ~QDialog_wrapper();
  QDialog_wrapper(QWidget *parent = nullptr);
  virtual void accept();
  virtual void accept_nocallback();
  void accepted();
  void adjustPosition(QWidget *arg__1);
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual void done(int arg__1);
  virtual void done_nocallback(int arg__1);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
  virtual int exec();
  virtual int exec_nocallback();
  void finished(int result);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  bool isSizeGripEnabled() const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *event);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  virtual void mousePressEvent(QMouseEvent *event);
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  virtual void mouseReleaseEvent(QMouseEvent *event);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  virtual void open();
  virtual void open_nocallback();
  virtual void paintEvent(QPaintEvent *event);
  virtual void paintEvent_nocallback(QPaintEvent *event);
  virtual void reject();
  virtual void reject_nocallback();
  void rejected();
  int result() const;
  void setModal(bool modal);
  void setResult(int r);
  void setSizeGripEnabled(bool arg__1);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_accept)(void *);
  Callback_accept m_acceptCallback = nullptr;
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef void (*Callback_done)(void *, int arg__1);
  Callback_done m_doneCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  typedef bool (*Callback_eventFilter)(void *, QObject *arg__1, QEvent *arg__2);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  typedef int (*Callback_exec)(void *);
  Callback_exec m_execCallback = nullptr;
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
  typedef void (*Callback_open)(void *);
  Callback_open m_openCallback = nullptr;
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
  Callback_paintEvent m_paintEventCallback = nullptr;
  typedef void (*Callback_reject)(void *);
  Callback_reject m_rejectCallback = nullptr;
  typedef void (*Callback_setVisible)(void *, bool visible);
  Callback_setVisible m_setVisibleCallback = nullptr;
  typedef QPainter *(*Callback_sharedPainter)(void *);
  Callback_sharedPainter m_sharedPainterCallback = nullptr;
  typedef QSize *(*Callback_sizeHint)(void *);
  Callback_sizeHint m_sizeHintCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QDialog::QDialog(QWidget * parent)
QtDartBindings_EXPORT void *c_QDialog__constructor_QWidget(void *parent_);
// QDialog::accept()
QtDartBindings_EXPORT void c_QDialog__accept(void *thisObj);
// QDialog::accepted()
QtDartBindings_EXPORT void c_QDialog__accepted(void *thisObj);
QtDartBindings_EXPORT void c_QDialog__onAccepted(
    void *thisObj, void *contextQObject,
    void *callback); // QDialog::adjustPosition(QWidget * arg__1)
QtDartBindings_EXPORT void c_QDialog__adjustPosition_QWidget(void *thisObj,
                                                             void *arg__1_);
// QDialog::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QDialog__changeEvent_QEvent(void *thisObj,
                                                         void *arg__1_);
// QDialog::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QDialog__customEvent_QEvent(void *thisObj,
                                                         void *event_);
// QDialog::devType() const
QtDartBindings_EXPORT int c_QDialog__devType(void *thisObj);
// QDialog::done(int arg__1)
QtDartBindings_EXPORT void c_QDialog__done_int(void *thisObj, int arg__1);
// QDialog::event(QEvent * event)
QtDartBindings_EXPORT bool c_QDialog__event_QEvent(void *thisObj, void *event_);
// QDialog::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool c_QDialog__eventFilter_QObject_QEvent(void *thisObj,
                                                                 void *arg__1_,
                                                                 void *arg__2_);
// QDialog::exec()
QtDartBindings_EXPORT int c_QDialog__exec(void *thisObj);
// QDialog::finished(int result)
QtDartBindings_EXPORT void c_QDialog__finished_int(void *thisObj, int result);
QtDartBindings_EXPORT void c_QDialog__onFinished_int(
    void *thisObj, void *contextQObject,
    void *callback); // QDialog::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QDialog__focusNextPrevChild_bool(void *thisObj,
                                                              bool next);
// QDialog::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QDialog__hasHeightForWidth(void *thisObj);
// QDialog::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QDialog__heightForWidth_int(void *thisObj,
                                                        int arg__1);
// QDialog::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QDialog__initPainter_QPainter(void *thisObj,
                                                           void *painter_);
// QDialog::isSizeGripEnabled() const
QtDartBindings_EXPORT bool c_QDialog__isSizeGripEnabled(void *thisObj);
// QDialog::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QDialog__leaveEvent_QEvent(void *thisObj,
                                                        void *event_);
// QDialog::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QDialog__minimumSizeHint(void *thisObj);
// QDialog::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QDialog::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QDialog__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                 void *event_);
// QDialog::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void c_QDialog__mousePressEvent_QMouseEvent(void *thisObj,
                                                                  void *event_);
// QDialog::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QDialog::open()
QtDartBindings_EXPORT void c_QDialog__open(void *thisObj);
// QDialog::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QDialog__paintEvent_QPaintEvent(void *thisObj,
                                                             void *event_);
// QDialog::reject()
QtDartBindings_EXPORT void c_QDialog__reject(void *thisObj);
// QDialog::rejected()
QtDartBindings_EXPORT void c_QDialog__rejected(void *thisObj);
QtDartBindings_EXPORT void
c_QDialog__onRejected(void *thisObj, void *contextQObject,
                      void *callback); // QDialog::result() const
QtDartBindings_EXPORT int c_QDialog__result(void *thisObj);
// QDialog::setModal(bool modal)
QtDartBindings_EXPORT void c_QDialog__setModal_bool(void *thisObj, bool modal);
// QDialog::setResult(int r)
QtDartBindings_EXPORT void c_QDialog__setResult_int(void *thisObj, int r);
// QDialog::setSizeGripEnabled(bool arg__1)
QtDartBindings_EXPORT void c_QDialog__setSizeGripEnabled_bool(void *thisObj,
                                                              bool arg__1);
// QDialog::setVisible(bool visible)
QtDartBindings_EXPORT void c_QDialog__setVisible_bool(void *thisObj,
                                                      bool visible);
// QDialog::sharedPainter() const
QtDartBindings_EXPORT void *c_QDialog__sharedPainter(void *thisObj);
// QDialog::sizeHint() const
QtDartBindings_EXPORT void *c_QDialog__sizeHint(void *thisObj);
// QDialog::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QDialog__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QDialog__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
QtDartBindings_EXPORT void c_QDialog_Finalizer(void *cppObj);
}

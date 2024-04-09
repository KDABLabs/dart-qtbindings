/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qevent.h>
#include <qlabel.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QLabel_wrapper : public ::QLabel {
public:
  ~QLabel_wrapper();
  QLabel_wrapper(QWidget *parent = nullptr);
  QLabel_wrapper(const QString &text, QWidget *parent = nullptr);
  QWidget *buddy() const;
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  void clear();
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual bool event(QEvent *e);
  virtual bool event_nocallback(QEvent *e);
  virtual bool eventFilter(QObject *watched, QEvent *event);
  virtual bool eventFilter_nocallback(QObject *watched, QEvent *event);
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  bool hasScaledContents() const;
  bool hasSelectedText() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  int indent() const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  virtual void leaveEvent(QEvent *event);
  virtual void leaveEvent_nocallback(QEvent *event);
  void linkActivated(const QString &link);
  void linkHovered(const QString &link);
  int margin() const;
  virtual QSize minimumSizeHint() const;
  virtual QSize minimumSizeHint_nocallback() const;
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  virtual void mouseMoveEvent(QMouseEvent *ev);
  virtual void mouseMoveEvent_nocallback(QMouseEvent *ev);
  virtual void mousePressEvent(QMouseEvent *ev);
  virtual void mousePressEvent_nocallback(QMouseEvent *ev);
  virtual void mouseReleaseEvent(QMouseEvent *ev);
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *ev);
  bool openExternalLinks() const;
  virtual void paintEvent(QPaintEvent *arg__1);
  virtual void paintEvent_nocallback(QPaintEvent *arg__1);
  QPixmap pixmap() const;
  QString selectedText() const;
  int selectionStart() const;
  void setBuddy(QWidget *arg__1);
  void setIndent(int arg__1);
  void setMargin(int arg__1);
  void setNum(double arg__1);
  void setNum(int arg__1);
  void setOpenExternalLinks(bool open);
  void setPixmap(const QPixmap &arg__1);
  void setScaledContents(bool arg__1);
  void setSelection(int arg__1, int arg__2);
  void setText(const QString &arg__1);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  void setWordWrap(bool on);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QString text() const;
  static QString tr(const char *s, const char *c, int n);
  bool wordWrap() const;
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef bool (*Callback_event)(void *, QEvent *e);
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
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *ev);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *ev);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *ev);
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
// QLabel::QLabel(QWidget * parent)
QtDartBindings_EXPORT void *c_QLabel__constructor_QWidget(void *parent_);
// QLabel::QLabel(const QString & text, QWidget * parent)
QtDartBindings_EXPORT void *
c_QLabel__constructor_QString_QWidget(const char *text_, void *parent_);
// QLabel::buddy() const
QtDartBindings_EXPORT void *c_QLabel__buddy(void *thisObj);
// QLabel::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QLabel__changeEvent_QEvent(void *thisObj,
                                                        void *arg__1_);
// QLabel::clear()
QtDartBindings_EXPORT void c_QLabel__clear(void *thisObj);
// QLabel::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLabel__customEvent_QEvent(void *thisObj,
                                                        void *event_);
// QLabel::devType() const
QtDartBindings_EXPORT int c_QLabel__devType(void *thisObj);
// QLabel::event(QEvent * e)
QtDartBindings_EXPORT bool c_QLabel__event_QEvent(void *thisObj, void *e_);
// QLabel::eventFilter(QObject * watched, QEvent * event)
QtDartBindings_EXPORT bool c_QLabel__eventFilter_QObject_QEvent(void *thisObj,
                                                                void *watched_,
                                                                void *event_);
// QLabel::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool c_QLabel__focusNextPrevChild_bool(void *thisObj,
                                                             bool next);
// QLabel::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QLabel__hasHeightForWidth(void *thisObj);
// QLabel::hasScaledContents() const
QtDartBindings_EXPORT bool c_QLabel__hasScaledContents(void *thisObj);
// QLabel::hasSelectedText() const
QtDartBindings_EXPORT bool c_QLabel__hasSelectedText(void *thisObj);
// QLabel::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QLabel__heightForWidth_int(void *thisObj,
                                                       int arg__1);
// QLabel::indent() const
QtDartBindings_EXPORT int c_QLabel__indent(void *thisObj);
// QLabel::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QLabel__initPainter_QPainter(void *thisObj,
                                                          void *painter_);
// QLabel::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QLabel__leaveEvent_QEvent(void *thisObj,
                                                       void *event_);
// QLabel::linkActivated(const QString & link)
QtDartBindings_EXPORT void c_QLabel__linkActivated_QString(void *thisObj,
                                                           const char *link_);
QtDartBindings_EXPORT void c_QLabel__onLinkActivated_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QLabel::linkHovered(const QString & link)
QtDartBindings_EXPORT void c_QLabel__linkHovered_QString(void *thisObj,
                                                         const char *link_);
QtDartBindings_EXPORT void
c_QLabel__onLinkHovered_QString(void *thisObj, void *contextQObject,
                                void *callback); // QLabel::margin() const
QtDartBindings_EXPORT int c_QLabel__margin(void *thisObj);
// QLabel::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QLabel__minimumSizeHint(void *thisObj);
// QLabel::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QLabel__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QLabel::mouseMoveEvent(QMouseEvent * ev)
QtDartBindings_EXPORT void c_QLabel__mouseMoveEvent_QMouseEvent(void *thisObj,
                                                                void *ev_);
// QLabel::mousePressEvent(QMouseEvent * ev)
QtDartBindings_EXPORT void c_QLabel__mousePressEvent_QMouseEvent(void *thisObj,
                                                                 void *ev_);
// QLabel::mouseReleaseEvent(QMouseEvent * ev)
QtDartBindings_EXPORT void
c_QLabel__mouseReleaseEvent_QMouseEvent(void *thisObj, void *ev_);
// QLabel::openExternalLinks() const
QtDartBindings_EXPORT bool c_QLabel__openExternalLinks(void *thisObj);
// QLabel::paintEvent(QPaintEvent * arg__1)
QtDartBindings_EXPORT void c_QLabel__paintEvent_QPaintEvent(void *thisObj,
                                                            void *arg__1_);
// QLabel::pixmap() const
QtDartBindings_EXPORT void *c_QLabel__pixmap(void *thisObj);
// QLabel::selectedText() const
QtDartBindings_EXPORT void *c_QLabel__selectedText(void *thisObj);
// QLabel::selectionStart() const
QtDartBindings_EXPORT int c_QLabel__selectionStart(void *thisObj);
// QLabel::setBuddy(QWidget * arg__1)
QtDartBindings_EXPORT void c_QLabel__setBuddy_QWidget(void *thisObj,
                                                      void *arg__1_);
// QLabel::setIndent(int arg__1)
QtDartBindings_EXPORT void c_QLabel__setIndent_int(void *thisObj, int arg__1);
// QLabel::setMargin(int arg__1)
QtDartBindings_EXPORT void c_QLabel__setMargin_int(void *thisObj, int arg__1);
// QLabel::setNum(double arg__1)
QtDartBindings_EXPORT void c_QLabel__setNum_double(void *thisObj,
                                                   double arg__1);
// QLabel::setNum(int arg__1)
QtDartBindings_EXPORT void c_QLabel__setNum_int(void *thisObj, int arg__1);
// QLabel::setOpenExternalLinks(bool open)
QtDartBindings_EXPORT void c_QLabel__setOpenExternalLinks_bool(void *thisObj,
                                                               bool open);
// QLabel::setPixmap(const QPixmap & arg__1)
QtDartBindings_EXPORT void c_QLabel__setPixmap_QPixmap(void *thisObj,
                                                       void *arg__1_);
// QLabel::setScaledContents(bool arg__1)
QtDartBindings_EXPORT void c_QLabel__setScaledContents_bool(void *thisObj,
                                                            bool arg__1);
// QLabel::setSelection(int arg__1, int arg__2)
QtDartBindings_EXPORT void
c_QLabel__setSelection_int_int(void *thisObj, int arg__1, int arg__2);
// QLabel::setText(const QString & arg__1)
QtDartBindings_EXPORT void c_QLabel__setText_QString(void *thisObj,
                                                     const char *arg__1_);
// QLabel::setVisible(bool visible)
QtDartBindings_EXPORT void c_QLabel__setVisible_bool(void *thisObj,
                                                     bool visible);
// QLabel::setWordWrap(bool on)
QtDartBindings_EXPORT void c_QLabel__setWordWrap_bool(void *thisObj, bool on);
// QLabel::sharedPainter() const
QtDartBindings_EXPORT void *c_QLabel__sharedPainter(void *thisObj);
// QLabel::sizeHint() const
QtDartBindings_EXPORT void *c_QLabel__sizeHint(void *thisObj);
// QLabel::text() const
QtDartBindings_EXPORT void *c_QLabel__text(void *thisObj);
// QLabel::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QLabel__tr_char_char_int(const char *s, const char *c, int n);
// QLabel::wordWrap() const
QtDartBindings_EXPORT bool c_QLabel__wordWrap(void *thisObj);
QtDartBindings_EXPORT void c_QLabel__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QLabel__registerVirtualMethodCallback(void *ptr, void *callback,
                                        int methodId);
QtDartBindings_EXPORT void c_QLabel_Finalizer(void *cppObj);
}

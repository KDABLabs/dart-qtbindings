/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qcoreevent.h>
#include <qevent.h>
#include <qinputdialog.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qsize.h>
#include <qstring.h>
#include <qwidget.h>

namespace QtDartBindings_wrappersNS {
class QInputDialog_wrapper : public ::QInputDialog {
public:
  ~QInputDialog_wrapper();
  QInputDialog_wrapper(QWidget *parent = nullptr);
  virtual void accept();
  virtual void accept_nocallback();
  QString cancelButtonText() const;
  virtual void changeEvent(QEvent *arg__1);
  virtual void changeEvent_nocallback(QEvent *arg__1);
  QList<QString> comboBoxItems() const;
  virtual void customEvent(QEvent *event);
  virtual void customEvent_nocallback(QEvent *event);
  virtual int devType() const;
  virtual int devType_nocallback() const;
  virtual void done(int result);
  virtual void done_nocallback(int result);
  int doubleDecimals() const;
  double doubleMaximum() const;
  double doubleMinimum() const;
  double doubleStep() const;
  double doubleValue() const;
  void doubleValueChanged(double value);
  void doubleValueSelected(double value);
  virtual bool event(QEvent *event);
  virtual bool event_nocallback(QEvent *event);
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
  virtual int exec();
  virtual int exec_nocallback();
  virtual bool focusNextPrevChild(bool next);
  virtual bool focusNextPrevChild_nocallback(bool next);
  static QString getText(QWidget *parent, const QString &title,
                         const QString &label);
  virtual bool hasHeightForWidth() const;
  virtual bool hasHeightForWidth_nocallback() const;
  virtual int heightForWidth(int arg__1) const;
  virtual int heightForWidth_nocallback(int arg__1) const;
  virtual void initPainter(QPainter *painter) const;
  virtual void initPainter_nocallback(QPainter *painter) const;
  int intMaximum() const;
  int intMinimum() const;
  int intStep() const;
  int intValue() const;
  void intValueChanged(int value);
  void intValueSelected(int value);
  bool isComboBoxEditable() const;
  QString labelText() const;
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
  QString okButtonText() const;
  virtual void open();
  virtual void open_nocallback();
  virtual void paintEvent(QPaintEvent *event);
  virtual void paintEvent_nocallback(QPaintEvent *event);
  virtual void reject();
  virtual void reject_nocallback();
  void setCancelButtonText(const QString &text);
  void setComboBoxEditable(bool editable);
  void setComboBoxItems(const QList<QString> &items);
  void setDoubleDecimals(int decimals);
  void setDoubleMaximum(double max);
  void setDoubleMinimum(double min);
  void setDoubleRange(double min, double max);
  void setDoubleStep(double step);
  void setDoubleValue(double value);
  void setIntMaximum(int max);
  void setIntMinimum(int min);
  void setIntRange(int min, int max);
  void setIntStep(int step);
  void setIntValue(int value);
  void setLabelText(const QString &text);
  void setOkButtonText(const QString &text);
  void setTextValue(const QString &text);
  virtual void setVisible(bool visible);
  virtual void setVisible_nocallback(bool visible);
  virtual QPainter *sharedPainter() const;
  virtual QPainter *sharedPainter_nocallback() const;
  virtual QSize sizeHint() const;
  virtual QSize sizeHint_nocallback() const;
  QString textValue() const;
  void textValueChanged(const QString &text);
  void textValueSelected(const QString &text);
  static QString tr(const char *s, const char *c, int n);
  typedef void (*Callback_accept)(void *);
  Callback_accept m_acceptCallback = nullptr;
  typedef void (*Callback_changeEvent)(void *, QEvent *arg__1);
  Callback_changeEvent m_changeEventCallback = nullptr;
  typedef void (*Callback_customEvent)(void *, QEvent *event);
  Callback_customEvent m_customEventCallback = nullptr;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
  typedef void (*Callback_done)(void *, int result);
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
// QInputDialog::QInputDialog(QWidget * parent)
QtDartBindings_EXPORT void *c_QInputDialog__constructor_QWidget(void *parent_);
// QInputDialog::accept()
QtDartBindings_EXPORT void c_QInputDialog__accept(void *thisObj);
// QInputDialog::cancelButtonText() const
QtDartBindings_EXPORT void *c_QInputDialog__cancelButtonText(void *thisObj);
// QInputDialog::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QInputDialog__changeEvent_QEvent(void *thisObj,
                                                              void *arg__1_);
// QInputDialog::comboBoxItems() const
QtDartBindings_EXPORT void *c_QInputDialog__comboBoxItems(void *thisObj);
// QInputDialog::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QInputDialog__customEvent_QEvent(void *thisObj,
                                                              void *event_);
// QInputDialog::devType() const
QtDartBindings_EXPORT int c_QInputDialog__devType(void *thisObj);
// QInputDialog::done(int result)
QtDartBindings_EXPORT void c_QInputDialog__done_int(void *thisObj, int result);
// QInputDialog::doubleDecimals() const
QtDartBindings_EXPORT int c_QInputDialog__doubleDecimals(void *thisObj);
// QInputDialog::doubleMaximum() const
QtDartBindings_EXPORT double c_QInputDialog__doubleMaximum(void *thisObj);
// QInputDialog::doubleMinimum() const
QtDartBindings_EXPORT double c_QInputDialog__doubleMinimum(void *thisObj);
// QInputDialog::doubleStep() const
QtDartBindings_EXPORT double c_QInputDialog__doubleStep(void *thisObj);
// QInputDialog::doubleValue() const
QtDartBindings_EXPORT double c_QInputDialog__doubleValue(void *thisObj);
// QInputDialog::doubleValueChanged(double value)
QtDartBindings_EXPORT void
c_QInputDialog__doubleValueChanged_double(void *thisObj, double value);
QtDartBindings_EXPORT void c_QInputDialog__onDoubleValueChanged_double(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::doubleValueSelected(double value)
QtDartBindings_EXPORT void
c_QInputDialog__doubleValueSelected_double(void *thisObj, double value);
QtDartBindings_EXPORT void c_QInputDialog__onDoubleValueSelected_double(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::event(QEvent * event)
QtDartBindings_EXPORT bool c_QInputDialog__event_QEvent(void *thisObj,
                                                        void *event_);
// QInputDialog::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QInputDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_);
// QInputDialog::exec()
QtDartBindings_EXPORT int c_QInputDialog__exec(void *thisObj);
// QInputDialog::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QInputDialog__focusNextPrevChild_bool(void *thisObj, bool next);
// QInputDialog::getText(QWidget * parent, const QString & title, const QString
// & label)
QtDartBindings_EXPORT void *
c_static_QInputDialog__getText_QWidget_QString_QString(void *parent_,
                                                       const char *title_,
                                                       const char *label_);
// QInputDialog::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QInputDialog__hasHeightForWidth(void *thisObj);
// QInputDialog::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QInputDialog__heightForWidth_int(void *thisObj,
                                                             int arg__1);
// QInputDialog::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QInputDialog__initPainter_QPainter(void *thisObj,
                                                                void *painter_);
// QInputDialog::intMaximum() const
QtDartBindings_EXPORT int c_QInputDialog__intMaximum(void *thisObj);
// QInputDialog::intMinimum() const
QtDartBindings_EXPORT int c_QInputDialog__intMinimum(void *thisObj);
// QInputDialog::intStep() const
QtDartBindings_EXPORT int c_QInputDialog__intStep(void *thisObj);
// QInputDialog::intValue() const
QtDartBindings_EXPORT int c_QInputDialog__intValue(void *thisObj);
// QInputDialog::intValueChanged(int value)
QtDartBindings_EXPORT void c_QInputDialog__intValueChanged_int(void *thisObj,
                                                               int value);
QtDartBindings_EXPORT void c_QInputDialog__onIntValueChanged_int(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::intValueSelected(int value)
QtDartBindings_EXPORT void c_QInputDialog__intValueSelected_int(void *thisObj,
                                                                int value);
QtDartBindings_EXPORT void c_QInputDialog__onIntValueSelected_int(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::isComboBoxEditable() const
QtDartBindings_EXPORT bool c_QInputDialog__isComboBoxEditable(void *thisObj);
// QInputDialog::labelText() const
QtDartBindings_EXPORT void *c_QInputDialog__labelText(void *thisObj);
// QInputDialog::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QInputDialog__leaveEvent_QEvent(void *thisObj,
                                                             void *event_);
// QInputDialog::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QInputDialog__minimumSizeHint(void *thisObj);
// QInputDialog::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);
// QInputDialog::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);
// QInputDialog::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_);
// QInputDialog::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);
// QInputDialog::okButtonText() const
QtDartBindings_EXPORT void *c_QInputDialog__okButtonText(void *thisObj);
// QInputDialog::open()
QtDartBindings_EXPORT void c_QInputDialog__open(void *thisObj);
// QInputDialog::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QInputDialog__paintEvent_QPaintEvent(void *thisObj,
                                                                  void *event_);
// QInputDialog::reject()
QtDartBindings_EXPORT void c_QInputDialog__reject(void *thisObj);
// QInputDialog::setCancelButtonText(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setCancelButtonText_QString(void *thisObj, const char *text_);
// QInputDialog::setComboBoxEditable(bool editable)
QtDartBindings_EXPORT void
c_QInputDialog__setComboBoxEditable_bool(void *thisObj, bool editable);
// QInputDialog::setComboBoxItems(const QList<QString > & items)
QtDartBindings_EXPORT void
c_QInputDialog__setComboBoxItems_QList_QString(void *thisObj, void *items_);
// QInputDialog::setDoubleDecimals(int decimals)
QtDartBindings_EXPORT void c_QInputDialog__setDoubleDecimals_int(void *thisObj,
                                                                 int decimals);
// QInputDialog::setDoubleMaximum(double max)
QtDartBindings_EXPORT void
c_QInputDialog__setDoubleMaximum_double(void *thisObj, double max);
// QInputDialog::setDoubleMinimum(double min)
QtDartBindings_EXPORT void
c_QInputDialog__setDoubleMinimum_double(void *thisObj, double min);
// QInputDialog::setDoubleRange(double min, double max)
QtDartBindings_EXPORT void
c_QInputDialog__setDoubleRange_double_double(void *thisObj, double min,
                                             double max);
// QInputDialog::setDoubleStep(double step)
QtDartBindings_EXPORT void c_QInputDialog__setDoubleStep_double(void *thisObj,
                                                                double step);
// QInputDialog::setDoubleValue(double value)
QtDartBindings_EXPORT void c_QInputDialog__setDoubleValue_double(void *thisObj,
                                                                 double value);
// QInputDialog::setIntMaximum(int max)
QtDartBindings_EXPORT void c_QInputDialog__setIntMaximum_int(void *thisObj,
                                                             int max);
// QInputDialog::setIntMinimum(int min)
QtDartBindings_EXPORT void c_QInputDialog__setIntMinimum_int(void *thisObj,
                                                             int min);
// QInputDialog::setIntRange(int min, int max)
QtDartBindings_EXPORT void
c_QInputDialog__setIntRange_int_int(void *thisObj, int min, int max);
// QInputDialog::setIntStep(int step)
QtDartBindings_EXPORT void c_QInputDialog__setIntStep_int(void *thisObj,
                                                          int step);
// QInputDialog::setIntValue(int value)
QtDartBindings_EXPORT void c_QInputDialog__setIntValue_int(void *thisObj,
                                                           int value);
// QInputDialog::setLabelText(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setLabelText_QString(void *thisObj, const char *text_);
// QInputDialog::setOkButtonText(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setOkButtonText_QString(void *thisObj, const char *text_);
// QInputDialog::setTextValue(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setTextValue_QString(void *thisObj, const char *text_);
// QInputDialog::setVisible(bool visible)
QtDartBindings_EXPORT void c_QInputDialog__setVisible_bool(void *thisObj,
                                                           bool visible);
// QInputDialog::sharedPainter() const
QtDartBindings_EXPORT void *c_QInputDialog__sharedPainter(void *thisObj);
// QInputDialog::sizeHint() const
QtDartBindings_EXPORT void *c_QInputDialog__sizeHint(void *thisObj);
// QInputDialog::textValue() const
QtDartBindings_EXPORT void *c_QInputDialog__textValue(void *thisObj);
// QInputDialog::textValueChanged(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__textValueChanged_QString(void *thisObj, const char *text_);
QtDartBindings_EXPORT void c_QInputDialog__onTextValueChanged_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::textValueSelected(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__textValueSelected_QString(void *thisObj, const char *text_);
QtDartBindings_EXPORT void c_QInputDialog__onTextValueSelected_QString(
    void *thisObj, void *contextQObject,
    void *callback); // QInputDialog::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QInputDialog__tr_char_char_int(const char *s, const char *c, int n);
QtDartBindings_EXPORT void c_QInputDialog__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QInputDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
QtDartBindings_EXPORT void c_QInputDialog_Finalizer(void *cppObj);
}


// tag=1040
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
// tag=1017
class QInputDialog_wrapper : public ::QInputDialog {
public:
  ~QInputDialog_wrapper();
  // tag=1041
  QInputDialog_wrapper(QWidget *parent = nullptr);
  // tag=1041
  virtual void accept();
  // tag=1008
  virtual void accept_nocallback();
  // tag=1041
  QString cancelButtonText() const;
  // tag=1041
  virtual void changeEvent(QEvent *arg__1);
  // tag=1008
  virtual void changeEvent_nocallback(QEvent *arg__1);
  // tag=1041
  QList<QString> comboBoxItems() const;
  // tag=1041
  virtual void customEvent(QEvent *event);
  // tag=1008
  virtual void customEvent_nocallback(QEvent *event);
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  virtual void done(int result);
  // tag=1008
  virtual void done_nocallback(int result);
  // tag=1041
  int doubleDecimals() const;
  // tag=1041
  double doubleMaximum() const;
  // tag=1041
  double doubleMinimum() const;
  // tag=1041
  double doubleStep() const;
  // tag=1041
  double doubleValue() const;
  // tag=1041
  void doubleValueChanged(double value);
  // tag=1041
  void doubleValueSelected(double value);
  // tag=1041
  virtual bool event(QEvent *event);
  // tag=1008
  virtual bool event_nocallback(QEvent *event);
  // tag=1041
  virtual bool eventFilter(QObject *arg__1, QEvent *arg__2);
  // tag=1008
  virtual bool eventFilter_nocallback(QObject *arg__1, QEvent *arg__2);
  // tag=1041
  virtual int exec();
  // tag=1008
  virtual int exec_nocallback();
  // tag=1041
  virtual bool focusNextPrevChild(bool next);
  // tag=1008
  virtual bool focusNextPrevChild_nocallback(bool next);
  // tag=1041
  static QString getText(QWidget *parent, const QString &title,
                         const QString &label);
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
  int intMaximum() const;
  // tag=1041
  int intMinimum() const;
  // tag=1041
  int intStep() const;
  // tag=1041
  int intValue() const;
  // tag=1041
  void intValueChanged(int value);
  // tag=1041
  void intValueSelected(int value);
  // tag=1041
  bool isComboBoxEditable() const;
  // tag=1041
  QString labelText() const;
  // tag=1041
  virtual void leaveEvent(QEvent *event);
  // tag=1008
  virtual void leaveEvent_nocallback(QEvent *event);
  // tag=1041
  virtual QSize minimumSizeHint() const;
  // tag=1008
  virtual QSize minimumSizeHint_nocallback() const;
  // tag=1041
  virtual void mouseDoubleClickEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseDoubleClickEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseMoveEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseMoveEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mousePressEvent(QMouseEvent *event);
  // tag=1008
  virtual void mousePressEvent_nocallback(QMouseEvent *event);
  // tag=1041
  virtual void mouseReleaseEvent(QMouseEvent *event);
  // tag=1008
  virtual void mouseReleaseEvent_nocallback(QMouseEvent *event);
  // tag=1041
  QString okButtonText() const;
  // tag=1041
  virtual void open();
  // tag=1008
  virtual void open_nocallback();
  // tag=1041
  virtual void paintEvent(QPaintEvent *event);
  // tag=1008
  virtual void paintEvent_nocallback(QPaintEvent *event);
  // tag=1041
  virtual void reject();
  // tag=1008
  virtual void reject_nocallback();
  // tag=1041
  void setCancelButtonText(const QString &text);
  // tag=1041
  void setComboBoxEditable(bool editable);
  // tag=1041
  void setComboBoxItems(const QList<QString> &items);
  // tag=1041
  void setDoubleDecimals(int decimals);
  // tag=1041
  void setDoubleMaximum(double max);
  // tag=1041
  void setDoubleMinimum(double min);
  // tag=1041
  void setDoubleRange(double min, double max);
  // tag=1041
  void setDoubleStep(double step);
  // tag=1041
  void setDoubleValue(double value);
  // tag=1041
  void setIntMaximum(int max);
  // tag=1041
  void setIntMinimum(int min);
  // tag=1041
  void setIntRange(int min, int max);
  // tag=1041
  void setIntStep(int step);
  // tag=1041
  void setIntValue(int value);
  // tag=1041
  void setLabelText(const QString &text);
  // tag=1041
  void setOkButtonText(const QString &text);
  // tag=1041
  void setTextValue(const QString &text);
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
  QString textValue() const;
  // tag=1041
  void textValueChanged(const QString &text);
  // tag=1041
  void textValueSelected(const QString &text);
  // tag=1041
  static QString tr(const char *s, const char *c, int n);
  // tag=1042
  typedef void (*Callback_accept)(void *);
  Callback_accept m_acceptCallback = nullptr;
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
  typedef void (*Callback_done)(void *, int result);
  Callback_done m_doneCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_event)(void *, QEvent *event);
  Callback_event m_eventCallback = nullptr;
  // tag=1042
  typedef bool (*Callback_eventFilter)(void *, QObject *arg__1, QEvent *arg__2);
  Callback_eventFilter m_eventFilterCallback = nullptr;
  // tag=1042
  typedef int (*Callback_exec)(void *);
  Callback_exec m_execCallback = nullptr;
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
  typedef void (*Callback_mouseDoubleClickEvent)(void *, QMouseEvent *event);
  Callback_mouseDoubleClickEvent m_mouseDoubleClickEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseMoveEvent)(void *, QMouseEvent *event);
  Callback_mouseMoveEvent m_mouseMoveEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mousePressEvent)(void *, QMouseEvent *event);
  Callback_mousePressEvent m_mousePressEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_mouseReleaseEvent)(void *, QMouseEvent *event);
  Callback_mouseReleaseEvent m_mouseReleaseEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_open)(void *);
  Callback_open m_openCallback = nullptr;
  // tag=1042
  typedef void (*Callback_paintEvent)(void *, QPaintEvent *event);
  Callback_paintEvent m_paintEventCallback = nullptr;
  // tag=1042
  typedef void (*Callback_reject)(void *);
  Callback_reject m_rejectCallback = nullptr;
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
//  QInputDialog::QInputDialog(QWidget * parent)
QtDartBindings_EXPORT void *c_QInputDialog__constructor_QWidget(void *parent_);

// tag=1067
//  QInputDialog::accept()
QtDartBindings_EXPORT void c_QInputDialog__accept(void *thisObj);

// tag=1067
//  QInputDialog::cancelButtonText() const
QtDartBindings_EXPORT void *c_QInputDialog__cancelButtonText(void *thisObj);

// tag=1067
//  QInputDialog::changeEvent(QEvent * arg__1)
QtDartBindings_EXPORT void c_QInputDialog__changeEvent_QEvent(void *thisObj,
                                                              void *arg__1_);

// tag=1067
//  QInputDialog::comboBoxItems() const
QtDartBindings_EXPORT void *c_QInputDialog__comboBoxItems(void *thisObj);

// tag=1067
//  QInputDialog::customEvent(QEvent * event)
QtDartBindings_EXPORT void c_QInputDialog__customEvent_QEvent(void *thisObj,
                                                              void *event_);

// tag=1067
//  QInputDialog::devType() const
QtDartBindings_EXPORT int c_QInputDialog__devType(void *thisObj);

// tag=1067
//  QInputDialog::done(int result)
QtDartBindings_EXPORT void c_QInputDialog__done_int(void *thisObj, int result);

// tag=1067
//  QInputDialog::doubleDecimals() const
QtDartBindings_EXPORT int c_QInputDialog__doubleDecimals(void *thisObj);

// tag=1067
//  QInputDialog::doubleMaximum() const
QtDartBindings_EXPORT double c_QInputDialog__doubleMaximum(void *thisObj);

// tag=1067
//  QInputDialog::doubleMinimum() const
QtDartBindings_EXPORT double c_QInputDialog__doubleMinimum(void *thisObj);

// tag=1067
//  QInputDialog::doubleStep() const
QtDartBindings_EXPORT double c_QInputDialog__doubleStep(void *thisObj);

// tag=1067
//  QInputDialog::doubleValue() const
QtDartBindings_EXPORT double c_QInputDialog__doubleValue(void *thisObj);

// tag=1067
//  QInputDialog::doubleValueChanged(double value)
QtDartBindings_EXPORT void
c_QInputDialog__doubleValueChanged_double(void *thisObj, double value);

// tag=1078
QtDartBindings_EXPORT void
c_QInputDialog__onDoubleValueChanged_double(void *thisObj, void *contextQObject,
                                            void *callback);
// tag=1067
//  QInputDialog::doubleValueSelected(double value)
QtDartBindings_EXPORT void
c_QInputDialog__doubleValueSelected_double(void *thisObj, double value);

// tag=1078
QtDartBindings_EXPORT void c_QInputDialog__onDoubleValueSelected_double(
    void *thisObj, void *contextQObject, void *callback);
// tag=1067
//  QInputDialog::event(QEvent * event)
QtDartBindings_EXPORT bool c_QInputDialog__event_QEvent(void *thisObj,
                                                        void *event_);

// tag=1067
//  QInputDialog::eventFilter(QObject * arg__1, QEvent * arg__2)
QtDartBindings_EXPORT bool
c_QInputDialog__eventFilter_QObject_QEvent(void *thisObj, void *arg__1_,
                                           void *arg__2_);

// tag=1067
//  QInputDialog::exec()
QtDartBindings_EXPORT int c_QInputDialog__exec(void *thisObj);

// tag=1067
//  QInputDialog::focusNextPrevChild(bool next)
QtDartBindings_EXPORT bool
c_QInputDialog__focusNextPrevChild_bool(void *thisObj, bool next);

// tag=1067
//  QInputDialog::getText(QWidget * parent, const QString & title, const QString
//  & label)
QtDartBindings_EXPORT void *
c_static_QInputDialog__getText_QWidget_QString_QString(void *parent_,
                                                       const char *title_,
                                                       const char *label_);

// tag=1067
//  QInputDialog::hasHeightForWidth() const
QtDartBindings_EXPORT bool c_QInputDialog__hasHeightForWidth(void *thisObj);

// tag=1067
//  QInputDialog::heightForWidth(int arg__1) const
QtDartBindings_EXPORT int c_QInputDialog__heightForWidth_int(void *thisObj,
                                                             int arg__1);

// tag=1067
//  QInputDialog::initPainter(QPainter * painter) const
QtDartBindings_EXPORT void c_QInputDialog__initPainter_QPainter(void *thisObj,
                                                                void *painter_);

// tag=1067
//  QInputDialog::intMaximum() const
QtDartBindings_EXPORT int c_QInputDialog__intMaximum(void *thisObj);

// tag=1067
//  QInputDialog::intMinimum() const
QtDartBindings_EXPORT int c_QInputDialog__intMinimum(void *thisObj);

// tag=1067
//  QInputDialog::intStep() const
QtDartBindings_EXPORT int c_QInputDialog__intStep(void *thisObj);

// tag=1067
//  QInputDialog::intValue() const
QtDartBindings_EXPORT int c_QInputDialog__intValue(void *thisObj);

// tag=1067
//  QInputDialog::intValueChanged(int value)
QtDartBindings_EXPORT void c_QInputDialog__intValueChanged_int(void *thisObj,
                                                               int value);

// tag=1078
QtDartBindings_EXPORT void
c_QInputDialog__onIntValueChanged_int(void *thisObj, void *contextQObject,
                                      void *callback);
// tag=1067
//  QInputDialog::intValueSelected(int value)
QtDartBindings_EXPORT void c_QInputDialog__intValueSelected_int(void *thisObj,
                                                                int value);

// tag=1078
QtDartBindings_EXPORT void
c_QInputDialog__onIntValueSelected_int(void *thisObj, void *contextQObject,
                                       void *callback);
// tag=1067
//  QInputDialog::isComboBoxEditable() const
QtDartBindings_EXPORT bool c_QInputDialog__isComboBoxEditable(void *thisObj);

// tag=1067
//  QInputDialog::labelText() const
QtDartBindings_EXPORT void *c_QInputDialog__labelText(void *thisObj);

// tag=1067
//  QInputDialog::leaveEvent(QEvent * event)
QtDartBindings_EXPORT void c_QInputDialog__leaveEvent_QEvent(void *thisObj,
                                                             void *event_);

// tag=1067
//  QInputDialog::minimumSizeHint() const
QtDartBindings_EXPORT void *c_QInputDialog__minimumSizeHint(void *thisObj);

// tag=1067
//  QInputDialog::mouseDoubleClickEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mouseDoubleClickEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QInputDialog::mouseMoveEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mouseMoveEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QInputDialog::mousePressEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mousePressEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QInputDialog::mouseReleaseEvent(QMouseEvent * event)
QtDartBindings_EXPORT void
c_QInputDialog__mouseReleaseEvent_QMouseEvent(void *thisObj, void *event_);

// tag=1067
//  QInputDialog::okButtonText() const
QtDartBindings_EXPORT void *c_QInputDialog__okButtonText(void *thisObj);

// tag=1067
//  QInputDialog::open()
QtDartBindings_EXPORT void c_QInputDialog__open(void *thisObj);

// tag=1067
//  QInputDialog::paintEvent(QPaintEvent * event)
QtDartBindings_EXPORT void c_QInputDialog__paintEvent_QPaintEvent(void *thisObj,
                                                                  void *event_);

// tag=1067
//  QInputDialog::reject()
QtDartBindings_EXPORT void c_QInputDialog__reject(void *thisObj);

// tag=1067
//  QInputDialog::setCancelButtonText(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setCancelButtonText_QString(void *thisObj, const char *text_);

// tag=1067
//  QInputDialog::setComboBoxEditable(bool editable)
QtDartBindings_EXPORT void
c_QInputDialog__setComboBoxEditable_bool(void *thisObj, bool editable);

// tag=1067
//  QInputDialog::setComboBoxItems(const QList<QString > & items)
QtDartBindings_EXPORT void
c_QInputDialog__setComboBoxItems_QList_QString(void *thisObj, void *items_);

// tag=1067
//  QInputDialog::setDoubleDecimals(int decimals)
QtDartBindings_EXPORT void c_QInputDialog__setDoubleDecimals_int(void *thisObj,
                                                                 int decimals);

// tag=1067
//  QInputDialog::setDoubleMaximum(double max)
QtDartBindings_EXPORT void
c_QInputDialog__setDoubleMaximum_double(void *thisObj, double max);

// tag=1067
//  QInputDialog::setDoubleMinimum(double min)
QtDartBindings_EXPORT void
c_QInputDialog__setDoubleMinimum_double(void *thisObj, double min);

// tag=1067
//  QInputDialog::setDoubleRange(double min, double max)
QtDartBindings_EXPORT void
c_QInputDialog__setDoubleRange_double_double(void *thisObj, double min,
                                             double max);

// tag=1067
//  QInputDialog::setDoubleStep(double step)
QtDartBindings_EXPORT void c_QInputDialog__setDoubleStep_double(void *thisObj,
                                                                double step);

// tag=1067
//  QInputDialog::setDoubleValue(double value)
QtDartBindings_EXPORT void c_QInputDialog__setDoubleValue_double(void *thisObj,
                                                                 double value);

// tag=1067
//  QInputDialog::setIntMaximum(int max)
QtDartBindings_EXPORT void c_QInputDialog__setIntMaximum_int(void *thisObj,
                                                             int max);

// tag=1067
//  QInputDialog::setIntMinimum(int min)
QtDartBindings_EXPORT void c_QInputDialog__setIntMinimum_int(void *thisObj,
                                                             int min);

// tag=1067
//  QInputDialog::setIntRange(int min, int max)
QtDartBindings_EXPORT void
c_QInputDialog__setIntRange_int_int(void *thisObj, int min, int max);

// tag=1067
//  QInputDialog::setIntStep(int step)
QtDartBindings_EXPORT void c_QInputDialog__setIntStep_int(void *thisObj,
                                                          int step);

// tag=1067
//  QInputDialog::setIntValue(int value)
QtDartBindings_EXPORT void c_QInputDialog__setIntValue_int(void *thisObj,
                                                           int value);

// tag=1067
//  QInputDialog::setLabelText(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setLabelText_QString(void *thisObj, const char *text_);

// tag=1067
//  QInputDialog::setOkButtonText(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setOkButtonText_QString(void *thisObj, const char *text_);

// tag=1067
//  QInputDialog::setTextValue(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__setTextValue_QString(void *thisObj, const char *text_);

// tag=1067
//  QInputDialog::setVisible(bool visible)
QtDartBindings_EXPORT void c_QInputDialog__setVisible_bool(void *thisObj,
                                                           bool visible);

// tag=1067
//  QInputDialog::sharedPainter() const
QtDartBindings_EXPORT void *c_QInputDialog__sharedPainter(void *thisObj);

// tag=1067
//  QInputDialog::sizeHint() const
QtDartBindings_EXPORT void *c_QInputDialog__sizeHint(void *thisObj);

// tag=1067
//  QInputDialog::textValue() const
QtDartBindings_EXPORT void *c_QInputDialog__textValue(void *thisObj);

// tag=1067
//  QInputDialog::textValueChanged(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__textValueChanged_QString(void *thisObj, const char *text_);

// tag=1078
QtDartBindings_EXPORT void
c_QInputDialog__onTextValueChanged_QString(void *thisObj, void *contextQObject,
                                           void *callback);
// tag=1067
//  QInputDialog::textValueSelected(const QString & text)
QtDartBindings_EXPORT void
c_QInputDialog__textValueSelected_QString(void *thisObj, const char *text_);

// tag=1078
QtDartBindings_EXPORT void
c_QInputDialog__onTextValueSelected_QString(void *thisObj, void *contextQObject,
                                            void *callback);
// tag=1067
//  QInputDialog::tr(const char * s, const char * c, int n)
QtDartBindings_EXPORT void *
c_static_QInputDialog__tr_char_char_int(const char *s, const char *c, int n);

// tag=1066
QtDartBindings_EXPORT void c_QInputDialog__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QInputDialog__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QInputDialog_Finalizer(void *, void *cppObj,
                                                    void *);
}


// tag=1040
#include "QtDartBindings_exports.h"
#include <qbytearray.h>
#include <qcolor.h>
#include <qiodevice.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1017
class QPixmap_wrapper : public ::QPixmap {
public:
  ~QPixmap_wrapper();
  // tag=1041
  QPixmap_wrapper();
  // tag=1041
  QPixmap_wrapper(const QSize &arg__1);
  // tag=1041
  QPixmap_wrapper(const QString &fileName, const char *format = nullptr);
  // tag=1041
  QPixmap_wrapper(int w, int h);
  // tag=1041
  qint64 cacheKey() const;
  // tag=1041
  QPixmap copy(const QRect &rect = QRect()) const;
  // tag=1041
  QPixmap copy(int x, int y, int width, int height) const;
  // tag=1041
  static int defaultDepth();
  // tag=1041
  int depth() const;
  // tag=1041
  void detach();
  // tag=1041
  virtual int devType() const;
  // tag=1008
  virtual int devType_nocallback() const;
  // tag=1041
  QSizeF deviceIndependentSize() const;
  // tag=1041
  qreal devicePixelRatio() const;
  // tag=1041
  void fill(const QColor &fillColor = Qt::white);
  // tag=1041
  bool hasAlpha() const;
  // tag=1041
  bool hasAlphaChannel() const;
  // tag=1041
  int height() const;
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  bool isQBitmap() const;
  // tag=1041
  bool load(const QString &fileName, const char *format = nullptr);
  // tag=1041
  bool loadFromData(const QByteArray &data, const char *format = nullptr);
  // tag=1041
  QRect rect() const;
  // tag=1041
  bool save(QIODevice *device, const char *format = nullptr,
            int quality = -1) const;
  // tag=1041
  bool save(const QString &fileName, const char *format = nullptr,
            int quality = -1) const;
  // tag=1041
  QPixmap scaled(const QSize &s) const;
  // tag=1041
  QPixmap scaled(int w, int h) const;
  // tag=1041
  QPixmap scaledToHeight(int h) const;
  // tag=1041
  QPixmap scaledToWidth(int w) const;
  // tag=1041
  void scroll(int dx, int dy, const QRect &rect, QRegion *exposed = nullptr);
  // tag=1041
  void scroll(int dx, int dy, int x, int y, int width, int height,
              QRegion *exposed = nullptr);
  // tag=1041
  void setDevicePixelRatio(qreal scaleFactor);
  // tag=1041
  QSize size() const;
  // tag=1041
  int width() const;
  // tag=1042
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QPixmap::QPixmap()
QtDartBindings_EXPORT void *c_QPixmap__constructor();

// tag=1067
//  QPixmap::QPixmap(const QSize & arg__1)
QtDartBindings_EXPORT void *c_QPixmap__constructor_QSize(void *arg__1_);

// tag=1067
//  QPixmap::QPixmap(const QString & fileName, const char * format)
QtDartBindings_EXPORT void *
c_QPixmap__constructor_QString_char(const char *fileName_, const char *format);

// tag=1067
//  QPixmap::QPixmap(int w, int h)
QtDartBindings_EXPORT void *c_QPixmap__constructor_int_int(int w, int h);

// tag=1067
//  QPixmap::cacheKey() const
QtDartBindings_EXPORT qint64 c_QPixmap__cacheKey(void *thisObj);

// tag=1067
//  QPixmap::copy(const QRect & rect) const
QtDartBindings_EXPORT void *c_QPixmap__copy_QRect(void *thisObj, void *rect_);

// tag=1067
//  QPixmap::copy(int x, int y, int width, int height) const
QtDartBindings_EXPORT void *c_QPixmap__copy_int_int_int_int(void *thisObj,
                                                            int x, int y,
                                                            int width,
                                                            int height);

// tag=1067
//  QPixmap::defaultDepth()
QtDartBindings_EXPORT int c_static_QPixmap__defaultDepth();

// tag=1067
//  QPixmap::depth() const
QtDartBindings_EXPORT int c_QPixmap__depth(void *thisObj);

// tag=1067
//  QPixmap::detach()
QtDartBindings_EXPORT void c_QPixmap__detach(void *thisObj);

// tag=1067
//  QPixmap::devType() const
QtDartBindings_EXPORT int c_QPixmap__devType(void *thisObj);

// tag=1067
//  QPixmap::deviceIndependentSize() const
QtDartBindings_EXPORT void *c_QPixmap__deviceIndependentSize(void *thisObj);

// tag=1067
//  QPixmap::devicePixelRatio() const
QtDartBindings_EXPORT qreal c_QPixmap__devicePixelRatio(void *thisObj);

// tag=1067
//  QPixmap::fill(const QColor & fillColor)
QtDartBindings_EXPORT void c_QPixmap__fill_QColor(void *thisObj,
                                                  void *fillColor_);

// tag=1067
//  QPixmap::hasAlpha() const
QtDartBindings_EXPORT bool c_QPixmap__hasAlpha(void *thisObj);

// tag=1067
//  QPixmap::hasAlphaChannel() const
QtDartBindings_EXPORT bool c_QPixmap__hasAlphaChannel(void *thisObj);

// tag=1067
//  QPixmap::height() const
QtDartBindings_EXPORT int c_QPixmap__height(void *thisObj);

// tag=1067
//  QPixmap::isDetached() const
QtDartBindings_EXPORT bool c_QPixmap__isDetached(void *thisObj);

// tag=1067
//  QPixmap::isNull() const
QtDartBindings_EXPORT bool c_QPixmap__isNull(void *thisObj);

// tag=1067
//  QPixmap::isQBitmap() const
QtDartBindings_EXPORT bool c_QPixmap__isQBitmap(void *thisObj);

// tag=1067
//  QPixmap::load(const QString & fileName, const char * format)
QtDartBindings_EXPORT bool c_QPixmap__load_QString_char(void *thisObj,
                                                        const char *fileName_,
                                                        const char *format);

// tag=1067
//  QPixmap::loadFromData(const QByteArray & data, const char * format)
QtDartBindings_EXPORT bool
c_QPixmap__loadFromData_QByteArray_char(void *thisObj, void *data_,
                                        const char *format);

// tag=1067
//  QPixmap::rect() const
QtDartBindings_EXPORT void *c_QPixmap__rect(void *thisObj);

// tag=1067
//  QPixmap::save(QIODevice * device, const char * format, int quality) const
QtDartBindings_EXPORT bool
c_QPixmap__save_QIODevice_char_int(void *thisObj, void *device_,
                                   const char *format, int quality);

// tag=1067
//  QPixmap::save(const QString & fileName, const char * format, int quality)
//  const
QtDartBindings_EXPORT bool
c_QPixmap__save_QString_char_int(void *thisObj, const char *fileName_,
                                 const char *format, int quality);

// tag=1067
//  QPixmap::scaled(const QSize & s) const
QtDartBindings_EXPORT void *c_QPixmap__scaled_QSize(void *thisObj, void *s_);

// tag=1067
//  QPixmap::scaled(int w, int h) const
QtDartBindings_EXPORT void *c_QPixmap__scaled_int_int(void *thisObj, int w,
                                                      int h);

// tag=1067
//  QPixmap::scaledToHeight(int h) const
QtDartBindings_EXPORT void *c_QPixmap__scaledToHeight_int(void *thisObj, int h);

// tag=1067
//  QPixmap::scaledToWidth(int w) const
QtDartBindings_EXPORT void *c_QPixmap__scaledToWidth_int(void *thisObj, int w);

// tag=1067
//  QPixmap::scroll(int dx, int dy, const QRect & rect, QRegion * exposed)
QtDartBindings_EXPORT void
c_QPixmap__scroll_int_int_QRect_QRegion(void *thisObj, int dx, int dy,
                                        void *rect_, void *exposed_);

// tag=1067
//  QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion
//  * exposed)
QtDartBindings_EXPORT void
c_QPixmap__scroll_int_int_int_int_int_int_QRegion(void *thisObj, int dx, int dy,
                                                  int x, int y, int width,
                                                  int height, void *exposed_);

// tag=1067
//  QPixmap::setDevicePixelRatio(qreal scaleFactor)
QtDartBindings_EXPORT void
c_QPixmap__setDevicePixelRatio_qreal(void *thisObj, qreal scaleFactor);

// tag=1067
//  QPixmap::size() const
QtDartBindings_EXPORT void *c_QPixmap__size(void *thisObj);

// tag=1067
//  QPixmap::width() const
QtDartBindings_EXPORT int c_QPixmap__width(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QPixmap__destructor(void *thisObj);

// tag=1046
QtDartBindings_EXPORT void
c_QPixmap__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
// tag=1047
QtDartBindings_EXPORT void c_QPixmap_Finalizer(void *, void *cppObj, void *);
}

/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QPixmap_wrapper : public ::QPixmap {
public:
  ~QPixmap_wrapper();
  QPixmap_wrapper();
  QPixmap_wrapper(const QSize &arg__1);
  QPixmap_wrapper(const QString &fileName, const char *format = nullptr);
  QPixmap_wrapper(int w, int h);
  qint64 cacheKey() const;
  QPixmap copy(const QRect &rect = QRect()) const;
  QPixmap copy(int x, int y, int width, int height) const;
  static int defaultDepth();
  int depth() const;
  void detach();
  virtual int devType() const;
  virtual int devType_nocallback() const;
  QSizeF deviceIndependentSize() const;
  qreal devicePixelRatio() const;
  void fill(const QColor &fillColor = Qt::white);
  bool hasAlpha() const;
  bool hasAlphaChannel() const;
  int height() const;
  bool isDetached() const;
  bool isNull() const;
  bool isQBitmap() const;
  bool load(const QString &fileName, const char *format = nullptr);
  bool loadFromData(const QByteArray &data, const char *format = nullptr);
  QRect rect() const;
  bool save(QIODevice *device, const char *format = nullptr,
            int quality = -1) const;
  bool save(const QString &fileName, const char *format = nullptr,
            int quality = -1) const;
  QPixmap scaled(const QSize &s) const;
  QPixmap scaled(int w, int h) const;
  QPixmap scaledToHeight(int h) const;
  QPixmap scaledToWidth(int w) const;
  void scroll(int dx, int dy, const QRect &rect, QRegion *exposed = nullptr);
  void scroll(int dx, int dy, int x, int y, int width, int height,
              QRegion *exposed = nullptr);
  void setDevicePixelRatio(qreal scaleFactor);
  QSize size() const;
  int width() const;
  typedef int (*Callback_devType)(void *);
  Callback_devType m_devTypeCallback = nullptr;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QPixmap::QPixmap()
QtDartBindings_EXPORT void *c_QPixmap__constructor();
// QPixmap::QPixmap(const QSize & arg__1)
QtDartBindings_EXPORT void *c_QPixmap__constructor_QSize(void *arg__1_);
// QPixmap::QPixmap(const QString & fileName, const char * format)
QtDartBindings_EXPORT void *
c_QPixmap__constructor_QString_char(const char *fileName_, const char *format);
// QPixmap::QPixmap(int w, int h)
QtDartBindings_EXPORT void *c_QPixmap__constructor_int_int(int w, int h);
// QPixmap::cacheKey() const
QtDartBindings_EXPORT qint64 c_QPixmap__cacheKey(void *thisObj);
// QPixmap::copy(const QRect & rect) const
QtDartBindings_EXPORT void *c_QPixmap__copy_QRect(void *thisObj, void *rect_);
// QPixmap::copy(int x, int y, int width, int height) const
QtDartBindings_EXPORT void *c_QPixmap__copy_int_int_int_int(void *thisObj,
                                                            int x, int y,
                                                            int width,
                                                            int height);
// QPixmap::defaultDepth()
QtDartBindings_EXPORT int c_static_QPixmap__defaultDepth();
// QPixmap::depth() const
QtDartBindings_EXPORT int c_QPixmap__depth(void *thisObj);
// QPixmap::detach()
QtDartBindings_EXPORT void c_QPixmap__detach(void *thisObj);
// QPixmap::devType() const
QtDartBindings_EXPORT int c_QPixmap__devType(void *thisObj);
// QPixmap::deviceIndependentSize() const
QtDartBindings_EXPORT void *c_QPixmap__deviceIndependentSize(void *thisObj);
// QPixmap::devicePixelRatio() const
QtDartBindings_EXPORT qreal c_QPixmap__devicePixelRatio(void *thisObj);
// QPixmap::fill(const QColor & fillColor)
QtDartBindings_EXPORT void c_QPixmap__fill_QColor(void *thisObj,
                                                  void *fillColor_);
// QPixmap::hasAlpha() const
QtDartBindings_EXPORT bool c_QPixmap__hasAlpha(void *thisObj);
// QPixmap::hasAlphaChannel() const
QtDartBindings_EXPORT bool c_QPixmap__hasAlphaChannel(void *thisObj);
// QPixmap::height() const
QtDartBindings_EXPORT int c_QPixmap__height(void *thisObj);
// QPixmap::isDetached() const
QtDartBindings_EXPORT bool c_QPixmap__isDetached(void *thisObj);
// QPixmap::isNull() const
QtDartBindings_EXPORT bool c_QPixmap__isNull(void *thisObj);
// QPixmap::isQBitmap() const
QtDartBindings_EXPORT bool c_QPixmap__isQBitmap(void *thisObj);
// QPixmap::load(const QString & fileName, const char * format)
QtDartBindings_EXPORT bool c_QPixmap__load_QString_char(void *thisObj,
                                                        const char *fileName_,
                                                        const char *format);
// QPixmap::loadFromData(const QByteArray & data, const char * format)
QtDartBindings_EXPORT bool
c_QPixmap__loadFromData_QByteArray_char(void *thisObj, void *data_,
                                        const char *format);
// QPixmap::rect() const
QtDartBindings_EXPORT void *c_QPixmap__rect(void *thisObj);
// QPixmap::save(QIODevice * device, const char * format, int quality) const
QtDartBindings_EXPORT bool
c_QPixmap__save_QIODevice_char_int(void *thisObj, void *device_,
                                   const char *format, int quality);
// QPixmap::save(const QString & fileName, const char * format, int quality)
// const
QtDartBindings_EXPORT bool
c_QPixmap__save_QString_char_int(void *thisObj, const char *fileName_,
                                 const char *format, int quality);
// QPixmap::scaled(const QSize & s) const
QtDartBindings_EXPORT void *c_QPixmap__scaled_QSize(void *thisObj, void *s_);
// QPixmap::scaled(int w, int h) const
QtDartBindings_EXPORT void *c_QPixmap__scaled_int_int(void *thisObj, int w,
                                                      int h);
// QPixmap::scaledToHeight(int h) const
QtDartBindings_EXPORT void *c_QPixmap__scaledToHeight_int(void *thisObj, int h);
// QPixmap::scaledToWidth(int w) const
QtDartBindings_EXPORT void *c_QPixmap__scaledToWidth_int(void *thisObj, int w);
// QPixmap::scroll(int dx, int dy, const QRect & rect, QRegion * exposed)
QtDartBindings_EXPORT void
c_QPixmap__scroll_int_int_QRect_QRegion(void *thisObj, int dx, int dy,
                                        void *rect_, void *exposed_);
// QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion
// * exposed)
QtDartBindings_EXPORT void
c_QPixmap__scroll_int_int_int_int_int_int_QRegion(void *thisObj, int dx, int dy,
                                                  int x, int y, int width,
                                                  int height, void *exposed_);
// QPixmap::setDevicePixelRatio(qreal scaleFactor)
QtDartBindings_EXPORT void
c_QPixmap__setDevicePixelRatio_qreal(void *thisObj, qreal scaleFactor);
// QPixmap::size() const
QtDartBindings_EXPORT void *c_QPixmap__size(void *thisObj);
// QPixmap::width() const
QtDartBindings_EXPORT int c_QPixmap__width(void *thisObj);
QtDartBindings_EXPORT void c_QPixmap__destructor(void *thisObj);
QtDartBindings_EXPORT void
c_QPixmap__registerVirtualMethodCallback(void *ptr, void *callback,
                                         int methodId);
QtDartBindings_EXPORT void c_QPixmap_Finalizer(void *cppObj);
}

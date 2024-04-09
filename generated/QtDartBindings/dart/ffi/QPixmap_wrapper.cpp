#include "QPixmap_wrapper.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
// tag=1006
QPixmap_wrapper::QPixmap_wrapper() : ::QPixmap() {}

// tag=1006
QPixmap_wrapper::QPixmap_wrapper(const QSize &arg__1) : ::QPixmap(arg__1) {}

// tag=1006
QPixmap_wrapper::QPixmap_wrapper(const QString &fileName, const char *format)
    : ::QPixmap(fileName, format) {}

// tag=1006
QPixmap_wrapper::QPixmap_wrapper(int w, int h) : ::QPixmap(w, h) {}
qint64 QPixmap_wrapper::cacheKey() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::cacheKey();
}
QPixmap QPixmap_wrapper::copy(const QRect &rect) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::copy(rect);
}
QPixmap QPixmap_wrapper::copy(int x, int y, int width, int height) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::copy(x, y, width, height);
}
int QPixmap_wrapper::defaultDepth() {
  // tag=1000

  // tag=1004
  return ::QPixmap::defaultDepth();
}
int QPixmap_wrapper::depth() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::depth();
}
void QPixmap_wrapper::detach() {
  // tag=1000

  // tag=1004
  ::QPixmap::detach();
}
int QPixmap_wrapper::devType() const {
  // tag=1000
  if (m_devTypeCallback) {
    // tag=1001
    const void *thisPtr = this;
    return m_devTypeCallback(const_cast<void *>(thisPtr));
  } else {
    // tag=1002
    return ::QPixmap::devType();
  }
}
// tag=1009
int QPixmap_wrapper::devType_nocallback() const {
  // tag=1003
  return ::QPixmap::devType();
}
QSizeF QPixmap_wrapper::deviceIndependentSize() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::deviceIndependentSize();
}
qreal QPixmap_wrapper::devicePixelRatio() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::devicePixelRatio();
}
void QPixmap_wrapper::fill(const QColor &fillColor) {
  // tag=1000

  // tag=1004
  ::QPixmap::fill(fillColor);
}
bool QPixmap_wrapper::hasAlpha() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::hasAlpha();
}
bool QPixmap_wrapper::hasAlphaChannel() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::hasAlphaChannel();
}
int QPixmap_wrapper::height() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::height();
}
bool QPixmap_wrapper::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::isDetached();
}
bool QPixmap_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::isNull();
}
bool QPixmap_wrapper::isQBitmap() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::isQBitmap();
}
bool QPixmap_wrapper::load(const QString &fileName, const char *format) {
  // tag=1000

  // tag=1004
  return ::QPixmap::load(fileName, format);
}
bool QPixmap_wrapper::loadFromData(const QByteArray &data, const char *format) {
  // tag=1000

  // tag=1004
  return ::QPixmap::loadFromData(data, format);
}
QRect QPixmap_wrapper::rect() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::rect();
}
bool QPixmap_wrapper::save(QIODevice *device, const char *format,
                           int quality) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::save(device, format, quality);
}
bool QPixmap_wrapper::save(const QString &fileName, const char *format,
                           int quality) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::save(fileName, format, quality);
}
QPixmap QPixmap_wrapper::scaled(const QSize &s) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::scaled(s);
}
QPixmap QPixmap_wrapper::scaled(int w, int h) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::scaled(w, h);
}
QPixmap QPixmap_wrapper::scaledToHeight(int h) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::scaledToHeight(h);
}
QPixmap QPixmap_wrapper::scaledToWidth(int w) const {
  // tag=1000

  // tag=1004
  return ::QPixmap::scaledToWidth(w);
}
void QPixmap_wrapper::scroll(int dx, int dy, const QRect &rect,
                             QRegion *exposed) {
  // tag=1000

  // tag=1004
  ::QPixmap::scroll(dx, dy, rect, exposed);
}
void QPixmap_wrapper::scroll(int dx, int dy, int x, int y, int width,
                             int height, QRegion *exposed) {
  // tag=1000

  // tag=1004
  ::QPixmap::scroll(dx, dy, x, y, width, height, exposed);
}
void QPixmap_wrapper::setDevicePixelRatio(qreal scaleFactor) {
  // tag=1000

  // tag=1004
  ::QPixmap::setDevicePixelRatio(scaleFactor);
}
QSize QPixmap_wrapper::size() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::size();
}
int QPixmap_wrapper::width() const {
  // tag=1000

  // tag=1004
  return ::QPixmap::width();
}

// tag=1005
QPixmap_wrapper::~QPixmap_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QPixmap *fromPtr(void *ptr) { return reinterpret_cast<QPixmap *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QPixmap_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QPixmap_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QPixmap_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QPixmap_wrapper *>(cppObj);
}
void *c_QPixmap__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QPixmap__constructor_QSize(void *arg__1_) {
  auto &arg__1 = *reinterpret_cast<QSize *>(arg__1_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper(arg__1);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPixmap__constructor_QString_char(const char *fileName_,
                                          const char *format) {
  const auto fileName = QString::fromUtf8(fileName_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper(fileName, format);
  return reinterpret_cast<void *>(ptr);
}
void *c_QPixmap__constructor_int_int(int w, int h) {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QPixmap_wrapper(w, h);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// cacheKey() const
qint64 c_QPixmap__cacheKey(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cacheKey();
}

// tag=1050
// copy(const QRect & rect) const
void *c_QPixmap__copy_QRect(void *thisObj, void *rect_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->copy(rect)};
}

// tag=1050
// copy(int x, int y, int width, int height) const
void *c_QPixmap__copy_int_int_int_int(void *thisObj, int x, int y, int width,
                                      int height) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{
          fromPtr(thisObj)->copy(x, y, width, height)};
}

// tag=1050
// defaultDepth()
int c_static_QPixmap__defaultDepth() {
  return
      // tag=1068
      QtDartBindings_wrappersNS::QPixmap_wrapper::defaultDepth();
}

// tag=1050
// depth() const
int c_QPixmap__depth(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->depth();
}

// tag=1050
// detach()
void c_QPixmap__detach(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->detach();
}

// tag=1050
// devType() const
int c_QPixmap__devType(void *thisObj) {
  return
      // tag=1016
      [&] {
        auto targetPtr = fromPtr(thisObj);
        auto wrapperPtr =
            dynamic_cast<QtDartBindings_wrappersNS::QPixmap_wrapper *>(
                targetPtr);
        if (wrapperPtr) {
          return wrapperPtr->devType_nocallback();
        } else {
          return targetPtr->devType();
        }
      }();
}

// tag=1050
// deviceIndependentSize() const
void *c_QPixmap__deviceIndependentSize(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSizeF>{
          fromPtr(thisObj)->deviceIndependentSize()};
}

// tag=1050
// devicePixelRatio() const
qreal c_QPixmap__devicePixelRatio(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->devicePixelRatio();
}

// tag=1050
// fill(const QColor & fillColor)
void c_QPixmap__fill_QColor(void *thisObj, void *fillColor_) {
  auto &fillColor = *reinterpret_cast<QColor *>(fillColor_);
  // tag=1010
  fromPtr(thisObj)->fill(fillColor);
}

// tag=1050
// hasAlpha() const
bool c_QPixmap__hasAlpha(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasAlpha();
}

// tag=1050
// hasAlphaChannel() const
bool c_QPixmap__hasAlphaChannel(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->hasAlphaChannel();
}

// tag=1050
// height() const
int c_QPixmap__height(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->height();
}

// tag=1050
// isDetached() const
bool c_QPixmap__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isNull() const
bool c_QPixmap__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// isQBitmap() const
bool c_QPixmap__isQBitmap(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isQBitmap();
}

// tag=1050
// load(const QString & fileName, const char * format)
bool c_QPixmap__load_QString_char(void *thisObj, const char *fileName_,
                                  const char *format) {
  const auto fileName = QString::fromUtf8(fileName_);
  return
      // tag=1010
      fromPtr(thisObj)->load(fileName, format);
}

// tag=1050
// loadFromData(const QByteArray & data, const char * format)
bool c_QPixmap__loadFromData_QByteArray_char(void *thisObj, void *data_,
                                             const char *format) {
  auto &data = *reinterpret_cast<QByteArray *>(data_);
  return
      // tag=1010
      fromPtr(thisObj)->loadFromData(data, format);
}

// tag=1050
// rect() const
void *c_QPixmap__rect(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QRect>{fromPtr(thisObj)->rect()};
}

// tag=1050
// save(QIODevice * device, const char * format, int quality) const
bool c_QPixmap__save_QIODevice_char_int(void *thisObj, void *device_,
                                        const char *format, int quality) {
  auto device = reinterpret_cast<QIODevice *>(device_);
  return
      // tag=1010
      fromPtr(thisObj)->save(device, format, quality);
}

// tag=1050
// save(const QString & fileName, const char * format, int quality) const
bool c_QPixmap__save_QString_char_int(void *thisObj, const char *fileName_,
                                      const char *format, int quality) {
  const auto fileName = QString::fromUtf8(fileName_);
  return
      // tag=1010
      fromPtr(thisObj)->save(fileName, format, quality);
}

// tag=1050
// scaled(const QSize & s) const
void *c_QPixmap__scaled_QSize(void *thisObj, void *s_) {
  auto &s = *reinterpret_cast<QSize *>(s_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaled(s)};
}

// tag=1050
// scaled(int w, int h) const
void *c_QPixmap__scaled_int_int(void *thisObj, int w, int h) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaled(w, h)};
}

// tag=1050
// scaledToHeight(int h) const
void *c_QPixmap__scaledToHeight_int(void *thisObj, int h) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaledToHeight(h)};
}

// tag=1050
// scaledToWidth(int w) const
void *c_QPixmap__scaledToWidth_int(void *thisObj, int w) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->scaledToWidth(w)};
}

// tag=1050
// scroll(int dx, int dy, const QRect & rect, QRegion * exposed)
void c_QPixmap__scroll_int_int_QRect_QRegion(void *thisObj, int dx, int dy,
                                             void *rect_, void *exposed_) {
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  auto exposed = reinterpret_cast<QRegion *>(exposed_);
  // tag=1010
  fromPtr(thisObj)->scroll(dx, dy, rect, exposed);
}

// tag=1050
// scroll(int dx, int dy, int x, int y, int width, int height, QRegion *
// exposed)
void c_QPixmap__scroll_int_int_int_int_int_int_QRegion(void *thisObj, int dx,
                                                       int dy, int x, int y,
                                                       int width, int height,
                                                       void *exposed_) {
  auto exposed = reinterpret_cast<QRegion *>(exposed_);
  // tag=1010
  fromPtr(thisObj)->scroll(dx, dy, x, y, width, height, exposed);
}

// tag=1050
// setDevicePixelRatio(qreal scaleFactor)
void c_QPixmap__setDevicePixelRatio_qreal(void *thisObj, qreal scaleFactor) {
  // tag=1010
  fromPtr(thisObj)->setDevicePixelRatio(scaleFactor);
}

// tag=1050
// size() const
void *c_QPixmap__size(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{fromPtr(thisObj)->size()};
}

// tag=1050
// width() const
int c_QPixmap__width(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->width();
}
void c_QPixmap__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
void c_QPixmap__registerVirtualMethodCallback(void *ptr, void *callback,
                                              int methodId) {
  // tag=1048
  auto wrapper = fromWrapperPtr(ptr);
  switch (methodId) {
  case 693:
    wrapper->m_devTypeCallback = reinterpret_cast<
        QtDartBindings_wrappersNS::QPixmap_wrapper::Callback_devType>(callback);
    break;
  }
}
}

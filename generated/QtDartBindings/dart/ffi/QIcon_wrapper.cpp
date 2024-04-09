#include "QIcon_wrapper.h"

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
QIcon_wrapper::QIcon_wrapper() : ::QIcon() {}

// tag=1006
QIcon_wrapper::QIcon_wrapper(const QPixmap &pixmap) : ::QIcon(pixmap) {}

// tag=1006
QIcon_wrapper::QIcon_wrapper(const QString &fileName) : ::QIcon(fileName) {}
QSize QIcon_wrapper::actualSize(const QSize &size, QIcon::Mode mode,
                                QIcon::State state) const {
  // tag=1000

  // tag=1004
  return ::QIcon::actualSize(size, mode, state);
}
void QIcon_wrapper::addFile(const QString &fileName, const QSize &size,
                            QIcon::Mode mode, QIcon::State state) {
  // tag=1000

  // tag=1004
  ::QIcon::addFile(fileName, size, mode, state);
}
void QIcon_wrapper::addPixmap(const QPixmap &pixmap, QIcon::Mode mode,
                              QIcon::State state) {
  // tag=1000

  // tag=1004
  ::QIcon::addPixmap(pixmap, mode, state);
}
QList<QSize> QIcon_wrapper::availableSizes(QIcon::Mode mode,
                                           QIcon::State state) const {
  // tag=1000

  // tag=1004
  return ::QIcon::availableSizes(mode, state);
}
qint64 QIcon_wrapper::cacheKey() const {
  // tag=1000

  // tag=1004
  return ::QIcon::cacheKey();
}
void QIcon_wrapper::detach() {
  // tag=1000

  // tag=1004
  ::QIcon::detach();
}
QList<QString> QIcon_wrapper::fallbackSearchPaths() {
  // tag=1000

  // tag=1004
  return ::QIcon::fallbackSearchPaths();
}
QString QIcon_wrapper::fallbackThemeName() {
  // tag=1000

  // tag=1004
  return ::QIcon::fallbackThemeName();
}
QIcon QIcon_wrapper::fromTheme(const QString &name) {
  // tag=1000

  // tag=1004
  return ::QIcon::fromTheme(name);
}
QIcon QIcon_wrapper::fromTheme(const QString &name, const QIcon &fallback) {
  // tag=1000

  // tag=1004
  return ::QIcon::fromTheme(name, fallback);
}
bool QIcon_wrapper::hasThemeIcon(const QString &name) {
  // tag=1000

  // tag=1004
  return ::QIcon::hasThemeIcon(name);
}
bool QIcon_wrapper::isDetached() const {
  // tag=1000

  // tag=1004
  return ::QIcon::isDetached();
}
bool QIcon_wrapper::isMask() const {
  // tag=1000

  // tag=1004
  return ::QIcon::isMask();
}
bool QIcon_wrapper::isNull() const {
  // tag=1000

  // tag=1004
  return ::QIcon::isNull();
}
QString QIcon_wrapper::name() const {
  // tag=1000

  // tag=1004
  return ::QIcon::name();
}
void QIcon_wrapper::paint(QPainter *painter, const QRect &rect) const {
  // tag=1000

  // tag=1004
  ::QIcon::paint(painter, rect);
}
void QIcon_wrapper::paint(QPainter *painter, int x, int y, int w, int h) const {
  // tag=1000

  // tag=1004
  ::QIcon::paint(painter, x, y, w, h);
}
QPixmap QIcon_wrapper::pixmap(const QSize &size, QIcon::Mode mode,
                              QIcon::State state) const {
  // tag=1000

  // tag=1004
  return ::QIcon::pixmap(size, mode, state);
}
QPixmap QIcon_wrapper::pixmap(const QSize &size, qreal devicePixelRatio,
                              QIcon::Mode mode, QIcon::State state) const {
  // tag=1000

  // tag=1004
  return ::QIcon::pixmap(size, devicePixelRatio, mode, state);
}
QPixmap QIcon_wrapper::pixmap(int extent, QIcon::Mode mode,
                              QIcon::State state) const {
  // tag=1000

  // tag=1004
  return ::QIcon::pixmap(extent, mode, state);
}
QPixmap QIcon_wrapper::pixmap(int w, int h, QIcon::Mode mode,
                              QIcon::State state) const {
  // tag=1000

  // tag=1004
  return ::QIcon::pixmap(w, h, mode, state);
}
void QIcon_wrapper::setFallbackSearchPaths(const QList<QString> &paths) {
  // tag=1000

  // tag=1004
  ::QIcon::setFallbackSearchPaths(paths);
}
void QIcon_wrapper::setFallbackThemeName(const QString &name) {
  // tag=1000

  // tag=1004
  ::QIcon::setFallbackThemeName(name);
}
void QIcon_wrapper::setIsMask(bool isMask) {
  // tag=1000

  // tag=1004
  ::QIcon::setIsMask(isMask);
}
void QIcon_wrapper::setThemeName(const QString &path) {
  // tag=1000

  // tag=1004
  ::QIcon::setThemeName(path);
}
void QIcon_wrapper::setThemeSearchPaths(const QList<QString> &searchpath) {
  // tag=1000

  // tag=1004
  ::QIcon::setThemeSearchPaths(searchpath);
}
QString QIcon_wrapper::themeName() {
  // tag=1000

  // tag=1004
  return ::QIcon::themeName();
}
QList<QString> QIcon_wrapper::themeSearchPaths() {
  // tag=1000

  // tag=1004
  return ::QIcon::themeSearchPaths();
}

// tag=1005
QIcon_wrapper::~QIcon_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QIcon *fromPtr(void *ptr) { return reinterpret_cast<QIcon *>(ptr); }
// tag=1014
static QtDartBindings_wrappersNS::QIcon_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QIcon_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QIcon_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QIcon_wrapper *>(cppObj);
}
void *c_QIcon__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QIcon_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QIcon__constructor_QPixmap(void *pixmap_) {
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QIcon_wrapper(pixmap);
  return reinterpret_cast<void *>(ptr);
}
void *c_QIcon__constructor_QString(const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QIcon_wrapper(fileName);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__actualSize_QSize_Mode_State(void *thisObj, void *size_, int mode,
                                           int state) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QSize>{
          fromPtr(thisObj)->actualSize(size, static_cast<QIcon::Mode>(mode),
                                       static_cast<QIcon::State>(state))};
}

// tag=1050
// addFile(const QString & fileName, const QSize & size, QIcon::Mode mode,
// QIcon::State state)
void c_QIcon__addFile_QString_QSize_Mode_State(void *thisObj,
                                               const char *fileName_,
                                               void *size_, int mode,
                                               int state) {
  const auto fileName = QString::fromUtf8(fileName_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  // tag=1010
  fromPtr(thisObj)->addFile(fileName, size, static_cast<QIcon::Mode>(mode),
                            static_cast<QIcon::State>(state));
}

// tag=1050
// addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state)
void c_QIcon__addPixmap_QPixmap_Mode_State(void *thisObj, void *pixmap_,
                                           int mode, int state) {
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  // tag=1010
  fromPtr(thisObj)->addPixmap(pixmap, static_cast<QIcon::Mode>(mode),
                              static_cast<QIcon::State>(state));
}

// tag=1050
// availableSizes(QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__availableSizes_Mode_State(void *thisObj, int mode, int state) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QSize>>{
          fromPtr(thisObj)->availableSizes(static_cast<QIcon::Mode>(mode),
                                           static_cast<QIcon::State>(state))};
}

// tag=1050
// cacheKey() const
qint64 c_QIcon__cacheKey(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->cacheKey();
}

// tag=1050
// detach()
void c_QIcon__detach(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->detach();
}

// tag=1050
// fallbackSearchPaths()
void *c_static_QIcon__fallbackSearchPaths() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QIcon_wrapper::fallbackSearchPaths()};
}

// tag=1050
// fallbackThemeName()
void *c_static_QIcon__fallbackThemeName() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QIcon_wrapper::fallbackThemeName()};
}

// tag=1050
// fromTheme(const QString & name)
void *c_static_QIcon__fromTheme_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{
          QtDartBindings_wrappersNS::QIcon_wrapper::fromTheme(name)};
}

// tag=1050
// fromTheme(const QString & name, const QIcon & fallback)
void *c_static_QIcon__fromTheme_QString_QIcon(const char *name_,
                                              void *fallback_) {
  const auto name = QString::fromUtf8(name_);
  auto &fallback = *reinterpret_cast<QIcon *>(fallback_);
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QIcon>{
          QtDartBindings_wrappersNS::QIcon_wrapper::fromTheme(name, fallback)};
}

// tag=1050
// hasThemeIcon(const QString & name)
bool c_static_QIcon__hasThemeIcon_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QIcon_wrapper::hasThemeIcon(name);
}

// tag=1050
// isDetached() const
bool c_QIcon__isDetached(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDetached();
}

// tag=1050
// isMask() const
bool c_QIcon__isMask(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isMask();
}

// tag=1050
// isNull() const
bool c_QIcon__isNull(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNull();
}

// tag=1050
// name() const
void *c_QIcon__name(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->name()};
}

// tag=1050
// paint(QPainter * painter, const QRect & rect) const
void c_QIcon__paint_QPainter_QRect(void *thisObj, void *painter_, void *rect_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  // tag=1010
  fromPtr(thisObj)->paint(painter, rect);
}

// tag=1050
// paint(QPainter * painter, int x, int y, int w, int h) const
void c_QIcon__paint_QPainter_int_int_int_int(void *thisObj, void *painter_,
                                             int x, int y, int w, int h) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  // tag=1010
  fromPtr(thisObj)->paint(painter, x, y, w, h);
}

// tag=1050
// pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_QSize_Mode_State(void *thisObj, void *size_, int mode,
                                       int state) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{
          fromPtr(thisObj)->pixmap(size, static_cast<QIcon::Mode>(mode),
                                   static_cast<QIcon::State>(state))};
}

// tag=1050
// pixmap(const QSize & size, qreal devicePixelRatio, QIcon::Mode mode,
// QIcon::State state) const
void *c_QIcon__pixmap_QSize_qreal_Mode_State(void *thisObj, void *size_,
                                             qreal devicePixelRatio, int mode,
                                             int state) {
  auto &size = *reinterpret_cast<QSize *>(size_);
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->pixmap(
          size, devicePixelRatio, static_cast<QIcon::Mode>(mode),
          static_cast<QIcon::State>(state))};
}

// tag=1050
// pixmap(int extent, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_int_Mode_State(void *thisObj, int extent, int mode,
                                     int state) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{
          fromPtr(thisObj)->pixmap(extent, static_cast<QIcon::Mode>(mode),
                                   static_cast<QIcon::State>(state))};
}

// tag=1050
// pixmap(int w, int h, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_int_int_Mode_State(void *thisObj, int w, int h, int mode,
                                         int state) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QPixmap>{
          fromPtr(thisObj)->pixmap(w, h, static_cast<QIcon::Mode>(mode),
                                   static_cast<QIcon::State>(state))};
}

// tag=1050
// setFallbackSearchPaths(const QList<QString > & paths)
void c_static_QIcon__setFallbackSearchPaths_QList_QString(void *paths_) {
  auto &paths = *reinterpret_cast<QList<QString> *>(paths_);
  // tag=1068
  QtDartBindings_wrappersNS::QIcon_wrapper::setFallbackSearchPaths(paths);
}

// tag=1050
// setFallbackThemeName(const QString & name)
void c_static_QIcon__setFallbackThemeName_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  // tag=1068
  QtDartBindings_wrappersNS::QIcon_wrapper::setFallbackThemeName(name);
}

// tag=1050
// setIsMask(bool isMask)
void c_QIcon__setIsMask_bool(void *thisObj, bool isMask) {
  // tag=1010
  fromPtr(thisObj)->setIsMask(isMask);
}

// tag=1050
// setThemeName(const QString & path)
void c_static_QIcon__setThemeName_QString(const char *path_) {
  const auto path = QString::fromUtf8(path_);
  // tag=1068
  QtDartBindings_wrappersNS::QIcon_wrapper::setThemeName(path);
}

// tag=1050
// setThemeSearchPaths(const QList<QString > & searchpath)
void c_static_QIcon__setThemeSearchPaths_QList_QString(void *searchpath_) {
  auto &searchpath = *reinterpret_cast<QList<QString> *>(searchpath_);
  // tag=1068
  QtDartBindings_wrappersNS::QIcon_wrapper::setThemeSearchPaths(searchpath);
}

// tag=1050
// themeName()
void *c_static_QIcon__themeName() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          QtDartBindings_wrappersNS::QIcon_wrapper::themeName()};
}

// tag=1050
// themeSearchPaths()
void *c_static_QIcon__themeSearchPaths() {
  return
      // tag=1068

      // tag=1072
      new Dartagnan::ValueWrapper<QList<QString>>{
          QtDartBindings_wrappersNS::QIcon_wrapper::themeSearchPaths()};
}
void c_QIcon__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}

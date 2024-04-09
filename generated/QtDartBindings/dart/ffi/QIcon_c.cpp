/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QIcon_c.h"

#include <iostream>

#include <cassert>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
namespace QtDartBindings_wrappersNS {
QIcon_wrapper::QIcon_wrapper() : ::QIcon() {}
QIcon_wrapper::QIcon_wrapper(const QPixmap &pixmap) : ::QIcon(pixmap) {}
QIcon_wrapper::QIcon_wrapper(const QString &fileName) : ::QIcon(fileName) {}
QSize QIcon_wrapper::actualSize(const QSize &size, QIcon::Mode mode,
                                QIcon::State state) const {
  return ::QIcon::actualSize(size, mode, state);
}
void QIcon_wrapper::addFile(const QString &fileName, const QSize &size,
                            QIcon::Mode mode, QIcon::State state) {
  ::QIcon::addFile(fileName, size, mode, state);
}
void QIcon_wrapper::addPixmap(const QPixmap &pixmap, QIcon::Mode mode,
                              QIcon::State state) {
  ::QIcon::addPixmap(pixmap, mode, state);
}
QList<QSize> QIcon_wrapper::availableSizes(QIcon::Mode mode,
                                           QIcon::State state) const {
  return ::QIcon::availableSizes(mode, state);
}
qint64 QIcon_wrapper::cacheKey() const { return ::QIcon::cacheKey(); }
void QIcon_wrapper::detach() { ::QIcon::detach(); }
QList<QString> QIcon_wrapper::fallbackSearchPaths() {
  return ::QIcon::fallbackSearchPaths();
}
QString QIcon_wrapper::fallbackThemeName() {
  return ::QIcon::fallbackThemeName();
}
QIcon QIcon_wrapper::fromTheme(const QString &name) {
  return ::QIcon::fromTheme(name);
}
QIcon QIcon_wrapper::fromTheme(const QString &name, const QIcon &fallback) {
  return ::QIcon::fromTheme(name, fallback);
}
bool QIcon_wrapper::hasThemeIcon(const QString &name) {
  return ::QIcon::hasThemeIcon(name);
}
bool QIcon_wrapper::isDetached() const { return ::QIcon::isDetached(); }
bool QIcon_wrapper::isMask() const { return ::QIcon::isMask(); }
bool QIcon_wrapper::isNull() const { return ::QIcon::isNull(); }
QString QIcon_wrapper::name() const { return ::QIcon::name(); }
void QIcon_wrapper::paint(QPainter *painter, const QRect &rect) const {
  ::QIcon::paint(painter, rect);
}
void QIcon_wrapper::paint(QPainter *painter, int x, int y, int w, int h) const {
  ::QIcon::paint(painter, x, y, w, h);
}
QPixmap QIcon_wrapper::pixmap(const QSize &size, QIcon::Mode mode,
                              QIcon::State state) const {
  return ::QIcon::pixmap(size, mode, state);
}
QPixmap QIcon_wrapper::pixmap(const QSize &size, qreal devicePixelRatio,
                              QIcon::Mode mode, QIcon::State state) const {
  return ::QIcon::pixmap(size, devicePixelRatio, mode, state);
}
QPixmap QIcon_wrapper::pixmap(int extent, QIcon::Mode mode,
                              QIcon::State state) const {
  return ::QIcon::pixmap(extent, mode, state);
}
QPixmap QIcon_wrapper::pixmap(int w, int h, QIcon::Mode mode,
                              QIcon::State state) const {
  return ::QIcon::pixmap(w, h, mode, state);
}
void QIcon_wrapper::setFallbackSearchPaths(const QList<QString> &paths) {
  ::QIcon::setFallbackSearchPaths(paths);
}
void QIcon_wrapper::setFallbackThemeName(const QString &name) {
  ::QIcon::setFallbackThemeName(name);
}
void QIcon_wrapper::setIsMask(bool isMask) { ::QIcon::setIsMask(isMask); }
void QIcon_wrapper::setThemeName(const QString &path) {
  ::QIcon::setThemeName(path);
}
void QIcon_wrapper::setThemeSearchPaths(const QList<QString> &searchpath) {
  ::QIcon::setThemeSearchPaths(searchpath);
}
QString QIcon_wrapper::themeName() { return ::QIcon::themeName(); }
QList<QString> QIcon_wrapper::themeSearchPaths() {
  return ::QIcon::themeSearchPaths();
}
QIcon_wrapper::~QIcon_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QIcon *fromPtr(void *ptr) { return reinterpret_cast<QIcon *>(ptr); }
static QtDartBindings_wrappersNS::QIcon_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QIcon_wrapper *>(ptr);
}
extern "C" {
void c_QIcon_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QIcon_wrapper *>(cppObj);
}
void *c_QIcon__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QIcon_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QIcon__constructor_QPixmap(void *pixmap_) {
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  auto ptr = new QtDartBindings_wrappersNS::QIcon_wrapper(pixmap);
  return reinterpret_cast<void *>(ptr);
}
void *c_QIcon__constructor_QString(const char *fileName_) {
  const auto fileName = QString::fromUtf8(fileName_);
  auto ptr = new QtDartBindings_wrappersNS::QIcon_wrapper(fileName);
  return reinterpret_cast<void *>(ptr);
}
// actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__actualSize_QSize_Mode_State(void *thisObj, void *size_, int mode,
                                           int state) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  const auto &result = new Dartagnan::ValueWrapper<QSize>{
      fromPtr(thisObj)->actualSize(size, static_cast<QIcon::Mode>(mode),
                                   static_cast<QIcon::State>(state))};
  return result;
}
// addFile(const QString & fileName, const QSize & size, QIcon::Mode mode,
// QIcon::State state)
void c_QIcon__addFile_QString_QSize_Mode_State(void *thisObj,
                                               const char *fileName_,
                                               void *size_, int mode,
                                               int state) {
  const auto fileName = QString::fromUtf8(fileName_);
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  fromPtr(thisObj)->addFile(fileName, size, static_cast<QIcon::Mode>(mode),
                            static_cast<QIcon::State>(state));
  free((char *)fileName_);
}
// addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State state)
void c_QIcon__addPixmap_QPixmap_Mode_State(void *thisObj, void *pixmap_,
                                           int mode, int state) {
  assert(pixmap_);
  auto &pixmap = *reinterpret_cast<QPixmap *>(pixmap_);
  fromPtr(thisObj)->addPixmap(pixmap, static_cast<QIcon::Mode>(mode),
                              static_cast<QIcon::State>(state));
}
// availableSizes(QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__availableSizes_Mode_State(void *thisObj, int mode, int state) {
  const auto &result = new Dartagnan::ValueWrapper<QList<QSize>>{
      fromPtr(thisObj)->availableSizes(static_cast<QIcon::Mode>(mode),
                                       static_cast<QIcon::State>(state))};
  return result;
}
// cacheKey() const
qint64 c_QIcon__cacheKey(void *thisObj) {
  const auto &result = fromPtr(thisObj)->cacheKey();
  return result;
}
// detach()
void c_QIcon__detach(void *thisObj) { fromPtr(thisObj)->detach(); }
// fallbackSearchPaths()
void *c_static_QIcon__fallbackSearchPaths() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QIcon_wrapper::fallbackSearchPaths()};
  return result;
}
// fallbackThemeName()
void *c_static_QIcon__fallbackThemeName() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QIcon_wrapper::fallbackThemeName()};
  return result;
}
// fromTheme(const QString & name)
void *c_static_QIcon__fromTheme_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  const auto &result = new Dartagnan::ValueWrapper<QIcon>{
      QtDartBindings_wrappersNS::QIcon_wrapper::fromTheme(name)};
  free((char *)name_);
  return result;
}
// fromTheme(const QString & name, const QIcon & fallback)
void *c_static_QIcon__fromTheme_QString_QIcon(const char *name_,
                                              void *fallback_) {
  const auto name = QString::fromUtf8(name_);
  assert(fallback_);
  auto &fallback = *reinterpret_cast<QIcon *>(fallback_);
  const auto &result = new Dartagnan::ValueWrapper<QIcon>{
      QtDartBindings_wrappersNS::QIcon_wrapper::fromTheme(name, fallback)};
  free((char *)name_);
  return result;
}
// hasThemeIcon(const QString & name)
bool c_static_QIcon__hasThemeIcon_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  const auto &result =
      QtDartBindings_wrappersNS::QIcon_wrapper::hasThemeIcon(name);
  free((char *)name_);
  return result;
}
// isDetached() const
bool c_QIcon__isDetached(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDetached();
  return result;
}
// isMask() const
bool c_QIcon__isMask(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isMask();
  return result;
}
// isNull() const
bool c_QIcon__isNull(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNull();
  return result;
}
// name() const
void *c_QIcon__name(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->name()};
  return result;
}
// paint(QPainter * painter, const QRect & rect) const
void c_QIcon__paint_QPainter_QRect(void *thisObj, void *painter_, void *rect_) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  assert(rect_);
  auto &rect = *reinterpret_cast<QRect *>(rect_);
  fromPtr(thisObj)->paint(painter, rect);
}
// paint(QPainter * painter, int x, int y, int w, int h) const
void c_QIcon__paint_QPainter_int_int_int_int(void *thisObj, void *painter_,
                                             int x, int y, int w, int h) {
  auto painter = reinterpret_cast<QPainter *>(painter_);
  fromPtr(thisObj)->paint(painter, x, y, w, h);
}
// pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_QSize_Mode_State(void *thisObj, void *size_, int mode,
                                       int state) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  const auto &result = new Dartagnan::ValueWrapper<QPixmap>{
      fromPtr(thisObj)->pixmap(size, static_cast<QIcon::Mode>(mode),
                               static_cast<QIcon::State>(state))};
  return result;
}
// pixmap(const QSize & size, qreal devicePixelRatio, QIcon::Mode mode,
// QIcon::State state) const
void *c_QIcon__pixmap_QSize_qreal_Mode_State(void *thisObj, void *size_,
                                             qreal devicePixelRatio, int mode,
                                             int state) {
  assert(size_);
  auto &size = *reinterpret_cast<QSize *>(size_);
  const auto &result =
      new Dartagnan::ValueWrapper<QPixmap>{fromPtr(thisObj)->pixmap(
          size, devicePixelRatio, static_cast<QIcon::Mode>(mode),
          static_cast<QIcon::State>(state))};
  return result;
}
// pixmap(int extent, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_int_Mode_State(void *thisObj, int extent, int mode,
                                     int state) {
  const auto &result = new Dartagnan::ValueWrapper<QPixmap>{
      fromPtr(thisObj)->pixmap(extent, static_cast<QIcon::Mode>(mode),
                               static_cast<QIcon::State>(state))};
  return result;
}
// pixmap(int w, int h, QIcon::Mode mode, QIcon::State state) const
void *c_QIcon__pixmap_int_int_Mode_State(void *thisObj, int w, int h, int mode,
                                         int state) {
  const auto &result = new Dartagnan::ValueWrapper<QPixmap>{
      fromPtr(thisObj)->pixmap(w, h, static_cast<QIcon::Mode>(mode),
                               static_cast<QIcon::State>(state))};
  return result;
}
// setFallbackSearchPaths(const QList<QString > & paths)
void c_static_QIcon__setFallbackSearchPaths_QList_QString(void *paths_) {
  assert(paths_);
  auto &paths = *reinterpret_cast<QList<QString> *>(paths_);
  QtDartBindings_wrappersNS::QIcon_wrapper::setFallbackSearchPaths(paths);
}
// setFallbackThemeName(const QString & name)
void c_static_QIcon__setFallbackThemeName_QString(const char *name_) {
  const auto name = QString::fromUtf8(name_);
  QtDartBindings_wrappersNS::QIcon_wrapper::setFallbackThemeName(name);
  free((char *)name_);
}
// setIsMask(bool isMask)
void c_QIcon__setIsMask_bool(void *thisObj, bool isMask) {
  fromPtr(thisObj)->setIsMask(isMask);
}
// setThemeName(const QString & path)
void c_static_QIcon__setThemeName_QString(const char *path_) {
  const auto path = QString::fromUtf8(path_);
  QtDartBindings_wrappersNS::QIcon_wrapper::setThemeName(path);
  free((char *)path_);
}
// setThemeSearchPaths(const QList<QString > & searchpath)
void c_static_QIcon__setThemeSearchPaths_QList_QString(void *searchpath_) {
  assert(searchpath_);
  auto &searchpath = *reinterpret_cast<QList<QString> *>(searchpath_);
  QtDartBindings_wrappersNS::QIcon_wrapper::setThemeSearchPaths(searchpath);
}
// themeName()
void *c_static_QIcon__themeName() {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      QtDartBindings_wrappersNS::QIcon_wrapper::themeName()};
  return result;
}
// themeSearchPaths()
void *c_static_QIcon__themeSearchPaths() {
  const auto &result = new Dartagnan::ValueWrapper<QList<QString>>{
      QtDartBindings_wrappersNS::QIcon_wrapper::themeSearchPaths()};
  return result;
}
void c_QIcon__destructor(void *thisObj) { delete fromPtr(thisObj); }
}

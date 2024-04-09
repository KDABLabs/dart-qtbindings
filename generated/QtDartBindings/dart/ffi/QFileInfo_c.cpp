/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QFileInfo_c.h"

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
QFileInfo_wrapper::QFileInfo_wrapper() : ::QFileInfo() {}
QFileInfo_wrapper::QFileInfo_wrapper(const QString &file) : ::QFileInfo(file) {}
QString QFileInfo_wrapper::absoluteFilePath() const {
  return ::QFileInfo::absoluteFilePath();
}
QString QFileInfo_wrapper::absolutePath() const {
  return ::QFileInfo::absolutePath();
}
QString QFileInfo_wrapper::baseName() const { return ::QFileInfo::baseName(); }
QString QFileInfo_wrapper::bundleName() const {
  return ::QFileInfo::bundleName();
}
bool QFileInfo_wrapper::caching() const { return ::QFileInfo::caching(); }
QString QFileInfo_wrapper::canonicalFilePath() const {
  return ::QFileInfo::canonicalFilePath();
}
QString QFileInfo_wrapper::canonicalPath() const {
  return ::QFileInfo::canonicalPath();
}
QString QFileInfo_wrapper::completeBaseName() const {
  return ::QFileInfo::completeBaseName();
}
QString QFileInfo_wrapper::completeSuffix() const {
  return ::QFileInfo::completeSuffix();
}
bool QFileInfo_wrapper::exists() const { return ::QFileInfo::exists(); }
bool QFileInfo_wrapper::exists(const QString &file) {
  return ::QFileInfo::exists(file);
}
QString QFileInfo_wrapper::fileName() const { return ::QFileInfo::fileName(); }
QString QFileInfo_wrapper::filePath() const { return ::QFileInfo::filePath(); }
QString QFileInfo_wrapper::group() const { return ::QFileInfo::group(); }
bool QFileInfo_wrapper::isAbsolute() const { return ::QFileInfo::isAbsolute(); }
bool QFileInfo_wrapper::isAlias() const { return ::QFileInfo::isAlias(); }
bool QFileInfo_wrapper::isBundle() const { return ::QFileInfo::isBundle(); }
bool QFileInfo_wrapper::isDir() const { return ::QFileInfo::isDir(); }
bool QFileInfo_wrapper::isExecutable() const {
  return ::QFileInfo::isExecutable();
}
bool QFileInfo_wrapper::isFile() const { return ::QFileInfo::isFile(); }
bool QFileInfo_wrapper::isHidden() const { return ::QFileInfo::isHidden(); }
bool QFileInfo_wrapper::isJunction() const { return ::QFileInfo::isJunction(); }
bool QFileInfo_wrapper::isNativePath() const {
  return ::QFileInfo::isNativePath();
}
bool QFileInfo_wrapper::isReadable() const { return ::QFileInfo::isReadable(); }
bool QFileInfo_wrapper::isRelative() const { return ::QFileInfo::isRelative(); }
bool QFileInfo_wrapper::isRoot() const { return ::QFileInfo::isRoot(); }
bool QFileInfo_wrapper::isShortcut() const { return ::QFileInfo::isShortcut(); }
bool QFileInfo_wrapper::isSymLink() const { return ::QFileInfo::isSymLink(); }
bool QFileInfo_wrapper::isSymbolicLink() const {
  return ::QFileInfo::isSymbolicLink();
}
bool QFileInfo_wrapper::isWritable() const { return ::QFileInfo::isWritable(); }
QString QFileInfo_wrapper::junctionTarget() const {
  return ::QFileInfo::junctionTarget();
}
bool QFileInfo_wrapper::makeAbsolute() { return ::QFileInfo::makeAbsolute(); }
QString QFileInfo_wrapper::owner() const { return ::QFileInfo::owner(); }
QString QFileInfo_wrapper::path() const { return ::QFileInfo::path(); }
void QFileInfo_wrapper::refresh() { ::QFileInfo::refresh(); }
void QFileInfo_wrapper::setCaching(bool on) { ::QFileInfo::setCaching(on); }
void QFileInfo_wrapper::setFile(const QString &file) {
  ::QFileInfo::setFile(file);
}
qint64 QFileInfo_wrapper::size() const { return ::QFileInfo::size(); }
void QFileInfo_wrapper::stat() { ::QFileInfo::stat(); }
QString QFileInfo_wrapper::suffix() const { return ::QFileInfo::suffix(); }
QString QFileInfo_wrapper::symLinkTarget() const {
  return ::QFileInfo::symLinkTarget();
}
QFileInfo_wrapper::~QFileInfo_wrapper() {}

} // namespace QtDartBindings_wrappersNS
static QFileInfo *fromPtr(void *ptr) {
  return reinterpret_cast<QFileInfo *>(ptr);
}
static QtDartBindings_wrappersNS::QFileInfo_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFileInfo_wrapper *>(ptr);
}
extern "C" {
void c_QFileInfo_Finalizer(void *cppObj) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFileInfo_wrapper *>(
      cppObj);
}
void *c_QFileInfo__constructor() {
  auto ptr = new QtDartBindings_wrappersNS::QFileInfo_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QFileInfo__constructor_QString(const char *file_) {
  const auto file = QString::fromUtf8(file_);
  auto ptr = new QtDartBindings_wrappersNS::QFileInfo_wrapper(file);
  return reinterpret_cast<void *>(ptr);
}
// absoluteFilePath() const
void *c_QFileInfo__absoluteFilePath(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->absoluteFilePath()};
  return result;
}
// absolutePath() const
void *c_QFileInfo__absolutePath(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->absolutePath()};
  return result;
}
// baseName() const
void *c_QFileInfo__baseName(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->baseName()};
  return result;
}
// bundleName() const
void *c_QFileInfo__bundleName(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->bundleName()};
  return result;
}
// caching() const
bool c_QFileInfo__caching(void *thisObj) {
  const auto &result = fromPtr(thisObj)->caching();
  return result;
}
// canonicalFilePath() const
void *c_QFileInfo__canonicalFilePath(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->canonicalFilePath()};
  return result;
}
// canonicalPath() const
void *c_QFileInfo__canonicalPath(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->canonicalPath()};
  return result;
}
// completeBaseName() const
void *c_QFileInfo__completeBaseName(void *thisObj) {
  const auto &result = new Dartagnan::ValueWrapper<QString>{
      fromPtr(thisObj)->completeBaseName()};
  return result;
}
// completeSuffix() const
void *c_QFileInfo__completeSuffix(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->completeSuffix()};
  return result;
}
// exists() const
bool c_QFileInfo__exists(void *thisObj) {
  const auto &result = fromPtr(thisObj)->exists();
  return result;
}
// exists(const QString & file)
bool c_static_QFileInfo__exists_QString(const char *file_) {
  const auto file = QString::fromUtf8(file_);
  const auto &result =
      QtDartBindings_wrappersNS::QFileInfo_wrapper::exists(file);
  free((char *)file_);
  return result;
}
// fileName() const
void *c_QFileInfo__fileName(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->fileName()};
  return result;
}
// filePath() const
void *c_QFileInfo__filePath(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->filePath()};
  return result;
}
// group() const
void *c_QFileInfo__group(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->group()};
  return result;
}
// isAbsolute() const
bool c_QFileInfo__isAbsolute(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isAbsolute();
  return result;
}
// isAlias() const
bool c_QFileInfo__isAlias(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isAlias();
  return result;
}
// isBundle() const
bool c_QFileInfo__isBundle(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isBundle();
  return result;
}
// isDir() const
bool c_QFileInfo__isDir(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isDir();
  return result;
}
// isExecutable() const
bool c_QFileInfo__isExecutable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isExecutable();
  return result;
}
// isFile() const
bool c_QFileInfo__isFile(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isFile();
  return result;
}
// isHidden() const
bool c_QFileInfo__isHidden(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isHidden();
  return result;
}
// isJunction() const
bool c_QFileInfo__isJunction(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isJunction();
  return result;
}
// isNativePath() const
bool c_QFileInfo__isNativePath(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isNativePath();
  return result;
}
// isReadable() const
bool c_QFileInfo__isReadable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isReadable();
  return result;
}
// isRelative() const
bool c_QFileInfo__isRelative(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isRelative();
  return result;
}
// isRoot() const
bool c_QFileInfo__isRoot(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isRoot();
  return result;
}
// isShortcut() const
bool c_QFileInfo__isShortcut(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isShortcut();
  return result;
}
// isSymLink() const
bool c_QFileInfo__isSymLink(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSymLink();
  return result;
}
// isSymbolicLink() const
bool c_QFileInfo__isSymbolicLink(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isSymbolicLink();
  return result;
}
// isWritable() const
bool c_QFileInfo__isWritable(void *thisObj) {
  const auto &result = fromPtr(thisObj)->isWritable();
  return result;
}
// junctionTarget() const
void *c_QFileInfo__junctionTarget(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->junctionTarget()};
  return result;
}
// makeAbsolute()
bool c_QFileInfo__makeAbsolute(void *thisObj) {
  const auto &result = fromPtr(thisObj)->makeAbsolute();
  return result;
}
// owner() const
void *c_QFileInfo__owner(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->owner()};
  return result;
}
// path() const
void *c_QFileInfo__path(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->path()};
  return result;
}
// refresh()
void c_QFileInfo__refresh(void *thisObj) { fromPtr(thisObj)->refresh(); }
// setCaching(bool on)
void c_QFileInfo__setCaching_bool(void *thisObj, bool on) {
  fromPtr(thisObj)->setCaching(on);
}
// setFile(const QString & file)
void c_QFileInfo__setFile_QString(void *thisObj, const char *file_) {
  const auto file = QString::fromUtf8(file_);
  fromPtr(thisObj)->setFile(file);
  free((char *)file_);
}
// size() const
qint64 c_QFileInfo__size(void *thisObj) {
  const auto &result = fromPtr(thisObj)->size();
  return result;
}
// stat()
void c_QFileInfo__stat(void *thisObj) { fromPtr(thisObj)->stat(); }
// suffix() const
void *c_QFileInfo__suffix(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->suffix()};
  return result;
}
// symLinkTarget() const
void *c_QFileInfo__symLinkTarget(void *thisObj) {
  const auto &result =
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->symLinkTarget()};
  return result;
}
void c_QFileInfo__destructor(void *thisObj) { delete fromPtr(thisObj); }
}

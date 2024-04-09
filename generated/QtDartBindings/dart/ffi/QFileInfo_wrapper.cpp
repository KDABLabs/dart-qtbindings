#include "QFileInfo_wrapper.h"

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
QFileInfo_wrapper::QFileInfo_wrapper() : ::QFileInfo() {}

// tag=1006
QFileInfo_wrapper::QFileInfo_wrapper(const QString &file) : ::QFileInfo(file) {}
QString QFileInfo_wrapper::absoluteFilePath() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::absoluteFilePath();
}
QString QFileInfo_wrapper::absolutePath() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::absolutePath();
}
QString QFileInfo_wrapper::baseName() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::baseName();
}
QString QFileInfo_wrapper::bundleName() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::bundleName();
}
bool QFileInfo_wrapper::caching() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::caching();
}
QString QFileInfo_wrapper::canonicalFilePath() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::canonicalFilePath();
}
QString QFileInfo_wrapper::canonicalPath() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::canonicalPath();
}
QString QFileInfo_wrapper::completeBaseName() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::completeBaseName();
}
QString QFileInfo_wrapper::completeSuffix() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::completeSuffix();
}
bool QFileInfo_wrapper::exists() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::exists();
}
bool QFileInfo_wrapper::exists(const QString &file) {
  // tag=1000

  // tag=1004
  return ::QFileInfo::exists(file);
}
QString QFileInfo_wrapper::fileName() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::fileName();
}
QString QFileInfo_wrapper::filePath() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::filePath();
}
QString QFileInfo_wrapper::group() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::group();
}
bool QFileInfo_wrapper::isAbsolute() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isAbsolute();
}
bool QFileInfo_wrapper::isBundle() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isBundle();
}
bool QFileInfo_wrapper::isDir() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isDir();
}
bool QFileInfo_wrapper::isExecutable() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isExecutable();
}
bool QFileInfo_wrapper::isFile() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isFile();
}
bool QFileInfo_wrapper::isHidden() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isHidden();
}
bool QFileInfo_wrapper::isJunction() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isJunction();
}
bool QFileInfo_wrapper::isNativePath() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isNativePath();
}
bool QFileInfo_wrapper::isReadable() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isReadable();
}
bool QFileInfo_wrapper::isRelative() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isRelative();
}
bool QFileInfo_wrapper::isRoot() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isRoot();
}
bool QFileInfo_wrapper::isShortcut() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isShortcut();
}
bool QFileInfo_wrapper::isSymLink() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isSymLink();
}
bool QFileInfo_wrapper::isSymbolicLink() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isSymbolicLink();
}
bool QFileInfo_wrapper::isWritable() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::isWritable();
}
QString QFileInfo_wrapper::junctionTarget() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::junctionTarget();
}
bool QFileInfo_wrapper::makeAbsolute() {
  // tag=1000

  // tag=1004
  return ::QFileInfo::makeAbsolute();
}
QString QFileInfo_wrapper::owner() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::owner();
}
QString QFileInfo_wrapper::path() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::path();
}
void QFileInfo_wrapper::refresh() {
  // tag=1000

  // tag=1004
  ::QFileInfo::refresh();
}
void QFileInfo_wrapper::setCaching(bool on) {
  // tag=1000

  // tag=1004
  ::QFileInfo::setCaching(on);
}
void QFileInfo_wrapper::setFile(const QString &file) {
  // tag=1000

  // tag=1004
  ::QFileInfo::setFile(file);
}
qint64 QFileInfo_wrapper::size() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::size();
}
void QFileInfo_wrapper::stat() {
  // tag=1000

  // tag=1004
  ::QFileInfo::stat();
}
QString QFileInfo_wrapper::suffix() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::suffix();
}
QString QFileInfo_wrapper::symLinkTarget() const {
  // tag=1000

  // tag=1004
  return ::QFileInfo::symLinkTarget();
}

// tag=1005
QFileInfo_wrapper::~QFileInfo_wrapper() {}

} // namespace QtDartBindings_wrappersNS
// tag=1013
static QFileInfo *fromPtr(void *ptr) {
  return reinterpret_cast<QFileInfo *>(ptr);
}
// tag=1014
static QtDartBindings_wrappersNS::QFileInfo_wrapper *fromWrapperPtr(void *ptr) {
  return reinterpret_cast<QtDartBindings_wrappersNS::QFileInfo_wrapper *>(ptr);
}
extern "C" {

// tag=1049
void c_QFileInfo_Finalizer(void *, void *cppObj, void *) {
  delete reinterpret_cast<QtDartBindings_wrappersNS::QFileInfo_wrapper *>(
      cppObj);
}
void *c_QFileInfo__constructor() {

  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QFileInfo_wrapper();
  return reinterpret_cast<void *>(ptr);
}
void *c_QFileInfo__constructor_QString(const char *file_) {
  const auto file = QString::fromUtf8(file_);
  // tag=1056
  auto ptr = new QtDartBindings_wrappersNS::QFileInfo_wrapper(file);
  return reinterpret_cast<void *>(ptr);
}

// tag=1050
// absoluteFilePath() const
void *c_QFileInfo__absoluteFilePath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->absoluteFilePath()};
}

// tag=1050
// absolutePath() const
void *c_QFileInfo__absolutePath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->absolutePath()};
}

// tag=1050
// baseName() const
void *c_QFileInfo__baseName(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->baseName()};
}

// tag=1050
// bundleName() const
void *c_QFileInfo__bundleName(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->bundleName()};
}

// tag=1050
// caching() const
bool c_QFileInfo__caching(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->caching();
}

// tag=1050
// canonicalFilePath() const
void *c_QFileInfo__canonicalFilePath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->canonicalFilePath()};
}

// tag=1050
// canonicalPath() const
void *c_QFileInfo__canonicalPath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->canonicalPath()};
}

// tag=1050
// completeBaseName() const
void *c_QFileInfo__completeBaseName(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{
          fromPtr(thisObj)->completeBaseName()};
}

// tag=1050
// completeSuffix() const
void *c_QFileInfo__completeSuffix(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->completeSuffix()};
}

// tag=1050
// exists() const
bool c_QFileInfo__exists(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->exists();
}

// tag=1050
// exists(const QString & file)
bool c_static_QFileInfo__exists_QString(const char *file_) {
  const auto file = QString::fromUtf8(file_);
  return
      // tag=1068
      QtDartBindings_wrappersNS::QFileInfo_wrapper::exists(file);
}

// tag=1050
// fileName() const
void *c_QFileInfo__fileName(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->fileName()};
}

// tag=1050
// filePath() const
void *c_QFileInfo__filePath(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->filePath()};
}

// tag=1050
// group() const
void *c_QFileInfo__group(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->group()};
}

// tag=1050
// isAbsolute() const
bool c_QFileInfo__isAbsolute(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isAbsolute();
}

// tag=1050
// isBundle() const
bool c_QFileInfo__isBundle(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isBundle();
}

// tag=1050
// isDir() const
bool c_QFileInfo__isDir(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isDir();
}

// tag=1050
// isExecutable() const
bool c_QFileInfo__isExecutable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isExecutable();
}

// tag=1050
// isFile() const
bool c_QFileInfo__isFile(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isFile();
}

// tag=1050
// isHidden() const
bool c_QFileInfo__isHidden(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isHidden();
}

// tag=1050
// isJunction() const
bool c_QFileInfo__isJunction(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isJunction();
}

// tag=1050
// isNativePath() const
bool c_QFileInfo__isNativePath(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isNativePath();
}

// tag=1050
// isReadable() const
bool c_QFileInfo__isReadable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isReadable();
}

// tag=1050
// isRelative() const
bool c_QFileInfo__isRelative(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isRelative();
}

// tag=1050
// isRoot() const
bool c_QFileInfo__isRoot(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isRoot();
}

// tag=1050
// isShortcut() const
bool c_QFileInfo__isShortcut(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isShortcut();
}

// tag=1050
// isSymLink() const
bool c_QFileInfo__isSymLink(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSymLink();
}

// tag=1050
// isSymbolicLink() const
bool c_QFileInfo__isSymbolicLink(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isSymbolicLink();
}

// tag=1050
// isWritable() const
bool c_QFileInfo__isWritable(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->isWritable();
}

// tag=1050
// junctionTarget() const
void *c_QFileInfo__junctionTarget(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->junctionTarget()};
}

// tag=1050
// makeAbsolute()
bool c_QFileInfo__makeAbsolute(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->makeAbsolute();
}

// tag=1050
// owner() const
void *c_QFileInfo__owner(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->owner()};
}

// tag=1050
// path() const
void *c_QFileInfo__path(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->path()};
}

// tag=1050
// refresh()
void c_QFileInfo__refresh(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->refresh();
}

// tag=1050
// setCaching(bool on)
void c_QFileInfo__setCaching_bool(void *thisObj, bool on) {
  // tag=1010
  fromPtr(thisObj)->setCaching(on);
}

// tag=1050
// setFile(const QString & file)
void c_QFileInfo__setFile_QString(void *thisObj, const char *file_) {
  const auto file = QString::fromUtf8(file_);
  // tag=1010
  fromPtr(thisObj)->setFile(file);
}

// tag=1050
// size() const
qint64 c_QFileInfo__size(void *thisObj) {
  return
      // tag=1010
      fromPtr(thisObj)->size();
}

// tag=1050
// stat()
void c_QFileInfo__stat(void *thisObj) {
  // tag=1010
  fromPtr(thisObj)->stat();
}

// tag=1050
// suffix() const
void *c_QFileInfo__suffix(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->suffix()};
}

// tag=1050
// symLinkTarget() const
void *c_QFileInfo__symLinkTarget(void *thisObj) {
  return
      // tag=1010

      // tag=1072
      new Dartagnan::ValueWrapper<QString>{fromPtr(thisObj)->symLinkTarget()};
}
void c_QFileInfo__destructor(void *thisObj) {

  // tag=1055
  delete fromPtr(thisObj);
}
}

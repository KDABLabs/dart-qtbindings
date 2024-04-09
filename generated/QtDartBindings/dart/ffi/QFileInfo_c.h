/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
#include "QtDartBindings_exports.h"
#include <qfileinfo.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
class QFileInfo_wrapper : public ::QFileInfo {
public:
  ~QFileInfo_wrapper();
  QFileInfo_wrapper();
  QFileInfo_wrapper(const QString &file);
  QString absoluteFilePath() const;
  QString absolutePath() const;
  QString baseName() const;
  QString bundleName() const;
  bool caching() const;
  QString canonicalFilePath() const;
  QString canonicalPath() const;
  QString completeBaseName() const;
  QString completeSuffix() const;
  bool exists() const;
  static bool exists(const QString &file);
  QString fileName() const;
  QString filePath() const;
  QString group() const;
  bool isAbsolute() const;
  bool isAlias() const;
  bool isBundle() const;
  bool isDir() const;
  bool isExecutable() const;
  bool isFile() const;
  bool isHidden() const;
  bool isJunction() const;
  bool isNativePath() const;
  bool isReadable() const;
  bool isRelative() const;
  bool isRoot() const;
  bool isShortcut() const;
  bool isSymLink() const;
  bool isSymbolicLink() const;
  bool isWritable() const;
  QString junctionTarget() const;
  bool makeAbsolute();
  QString owner() const;
  QString path() const;
  void refresh();
  void setCaching(bool on);
  void setFile(const QString &file);
  qint64 size() const;
  void stat();
  QString suffix() const;
  QString symLinkTarget() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QFileInfo::QFileInfo()
QtDartBindings_EXPORT void *c_QFileInfo__constructor();
// QFileInfo::QFileInfo(const QString & file)
QtDartBindings_EXPORT void *c_QFileInfo__constructor_QString(const char *file_);
// QFileInfo::absoluteFilePath() const
QtDartBindings_EXPORT void *c_QFileInfo__absoluteFilePath(void *thisObj);
// QFileInfo::absolutePath() const
QtDartBindings_EXPORT void *c_QFileInfo__absolutePath(void *thisObj);
// QFileInfo::baseName() const
QtDartBindings_EXPORT void *c_QFileInfo__baseName(void *thisObj);
// QFileInfo::bundleName() const
QtDartBindings_EXPORT void *c_QFileInfo__bundleName(void *thisObj);
// QFileInfo::caching() const
QtDartBindings_EXPORT bool c_QFileInfo__caching(void *thisObj);
// QFileInfo::canonicalFilePath() const
QtDartBindings_EXPORT void *c_QFileInfo__canonicalFilePath(void *thisObj);
// QFileInfo::canonicalPath() const
QtDartBindings_EXPORT void *c_QFileInfo__canonicalPath(void *thisObj);
// QFileInfo::completeBaseName() const
QtDartBindings_EXPORT void *c_QFileInfo__completeBaseName(void *thisObj);
// QFileInfo::completeSuffix() const
QtDartBindings_EXPORT void *c_QFileInfo__completeSuffix(void *thisObj);
// QFileInfo::exists() const
QtDartBindings_EXPORT bool c_QFileInfo__exists(void *thisObj);
// QFileInfo::exists(const QString & file)
QtDartBindings_EXPORT bool
c_static_QFileInfo__exists_QString(const char *file_);
// QFileInfo::fileName() const
QtDartBindings_EXPORT void *c_QFileInfo__fileName(void *thisObj);
// QFileInfo::filePath() const
QtDartBindings_EXPORT void *c_QFileInfo__filePath(void *thisObj);
// QFileInfo::group() const
QtDartBindings_EXPORT void *c_QFileInfo__group(void *thisObj);
// QFileInfo::isAbsolute() const
QtDartBindings_EXPORT bool c_QFileInfo__isAbsolute(void *thisObj);
// QFileInfo::isAlias() const
QtDartBindings_EXPORT bool c_QFileInfo__isAlias(void *thisObj);
// QFileInfo::isBundle() const
QtDartBindings_EXPORT bool c_QFileInfo__isBundle(void *thisObj);
// QFileInfo::isDir() const
QtDartBindings_EXPORT bool c_QFileInfo__isDir(void *thisObj);
// QFileInfo::isExecutable() const
QtDartBindings_EXPORT bool c_QFileInfo__isExecutable(void *thisObj);
// QFileInfo::isFile() const
QtDartBindings_EXPORT bool c_QFileInfo__isFile(void *thisObj);
// QFileInfo::isHidden() const
QtDartBindings_EXPORT bool c_QFileInfo__isHidden(void *thisObj);
// QFileInfo::isJunction() const
QtDartBindings_EXPORT bool c_QFileInfo__isJunction(void *thisObj);
// QFileInfo::isNativePath() const
QtDartBindings_EXPORT bool c_QFileInfo__isNativePath(void *thisObj);
// QFileInfo::isReadable() const
QtDartBindings_EXPORT bool c_QFileInfo__isReadable(void *thisObj);
// QFileInfo::isRelative() const
QtDartBindings_EXPORT bool c_QFileInfo__isRelative(void *thisObj);
// QFileInfo::isRoot() const
QtDartBindings_EXPORT bool c_QFileInfo__isRoot(void *thisObj);
// QFileInfo::isShortcut() const
QtDartBindings_EXPORT bool c_QFileInfo__isShortcut(void *thisObj);
// QFileInfo::isSymLink() const
QtDartBindings_EXPORT bool c_QFileInfo__isSymLink(void *thisObj);
// QFileInfo::isSymbolicLink() const
QtDartBindings_EXPORT bool c_QFileInfo__isSymbolicLink(void *thisObj);
// QFileInfo::isWritable() const
QtDartBindings_EXPORT bool c_QFileInfo__isWritable(void *thisObj);
// QFileInfo::junctionTarget() const
QtDartBindings_EXPORT void *c_QFileInfo__junctionTarget(void *thisObj);
// QFileInfo::makeAbsolute()
QtDartBindings_EXPORT bool c_QFileInfo__makeAbsolute(void *thisObj);
// QFileInfo::owner() const
QtDartBindings_EXPORT void *c_QFileInfo__owner(void *thisObj);
// QFileInfo::path() const
QtDartBindings_EXPORT void *c_QFileInfo__path(void *thisObj);
// QFileInfo::refresh()
QtDartBindings_EXPORT void c_QFileInfo__refresh(void *thisObj);
// QFileInfo::setCaching(bool on)
QtDartBindings_EXPORT void c_QFileInfo__setCaching_bool(void *thisObj, bool on);
// QFileInfo::setFile(const QString & file)
QtDartBindings_EXPORT void c_QFileInfo__setFile_QString(void *thisObj,
                                                        const char *file_);
// QFileInfo::size() const
QtDartBindings_EXPORT qint64 c_QFileInfo__size(void *thisObj);
// QFileInfo::stat()
QtDartBindings_EXPORT void c_QFileInfo__stat(void *thisObj);
// QFileInfo::suffix() const
QtDartBindings_EXPORT void *c_QFileInfo__suffix(void *thisObj);
// QFileInfo::symLinkTarget() const
QtDartBindings_EXPORT void *c_QFileInfo__symLinkTarget(void *thisObj);
QtDartBindings_EXPORT void c_QFileInfo__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QFileInfo_Finalizer(void *cppObj);
}

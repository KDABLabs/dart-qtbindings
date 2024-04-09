
// tag=1040
#include "QtDartBindings_exports.h"
#include <qfileinfo.h>
#include <qstring.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QFileInfo_wrapper : public ::QFileInfo {
public:
  ~QFileInfo_wrapper();
  // tag=1041
  QFileInfo_wrapper();
  // tag=1041
  QFileInfo_wrapper(const QString &file);
  // tag=1041
  QString absoluteFilePath() const;
  // tag=1041
  QString absolutePath() const;
  // tag=1041
  QString baseName() const;
  // tag=1041
  QString bundleName() const;
  // tag=1041
  bool caching() const;
  // tag=1041
  QString canonicalFilePath() const;
  // tag=1041
  QString canonicalPath() const;
  // tag=1041
  QString completeBaseName() const;
  // tag=1041
  QString completeSuffix() const;
  // tag=1041
  bool exists() const;
  // tag=1041
  static bool exists(const QString &file);
  // tag=1041
  QString fileName() const;
  // tag=1041
  QString filePath() const;
  // tag=1041
  QString group() const;
  // tag=1041
  bool isAbsolute() const;
  // tag=1041
  bool isBundle() const;
  // tag=1041
  bool isDir() const;
  // tag=1041
  bool isExecutable() const;
  // tag=1041
  bool isFile() const;
  // tag=1041
  bool isHidden() const;
  // tag=1041
  bool isJunction() const;
  // tag=1041
  bool isNativePath() const;
  // tag=1041
  bool isReadable() const;
  // tag=1041
  bool isRelative() const;
  // tag=1041
  bool isRoot() const;
  // tag=1041
  bool isShortcut() const;
  // tag=1041
  bool isSymLink() const;
  // tag=1041
  bool isSymbolicLink() const;
  // tag=1041
  bool isWritable() const;
  // tag=1041
  QString junctionTarget() const;
  // tag=1041
  bool makeAbsolute();
  // tag=1041
  QString owner() const;
  // tag=1041
  QString path() const;
  // tag=1041
  void refresh();
  // tag=1041
  void setCaching(bool on);
  // tag=1041
  void setFile(const QString &file);
  // tag=1041
  qint64 size() const;
  // tag=1041
  void stat();
  // tag=1041
  QString suffix() const;
  // tag=1041
  QString symLinkTarget() const;
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QFileInfo::QFileInfo()
QtDartBindings_EXPORT void *c_QFileInfo__constructor();

// tag=1067
//  QFileInfo::QFileInfo(const QString & file)
QtDartBindings_EXPORT void *c_QFileInfo__constructor_QString(const char *file_);

// tag=1067
//  QFileInfo::absoluteFilePath() const
QtDartBindings_EXPORT void *c_QFileInfo__absoluteFilePath(void *thisObj);

// tag=1067
//  QFileInfo::absolutePath() const
QtDartBindings_EXPORT void *c_QFileInfo__absolutePath(void *thisObj);

// tag=1067
//  QFileInfo::baseName() const
QtDartBindings_EXPORT void *c_QFileInfo__baseName(void *thisObj);

// tag=1067
//  QFileInfo::bundleName() const
QtDartBindings_EXPORT void *c_QFileInfo__bundleName(void *thisObj);

// tag=1067
//  QFileInfo::caching() const
QtDartBindings_EXPORT bool c_QFileInfo__caching(void *thisObj);

// tag=1067
//  QFileInfo::canonicalFilePath() const
QtDartBindings_EXPORT void *c_QFileInfo__canonicalFilePath(void *thisObj);

// tag=1067
//  QFileInfo::canonicalPath() const
QtDartBindings_EXPORT void *c_QFileInfo__canonicalPath(void *thisObj);

// tag=1067
//  QFileInfo::completeBaseName() const
QtDartBindings_EXPORT void *c_QFileInfo__completeBaseName(void *thisObj);

// tag=1067
//  QFileInfo::completeSuffix() const
QtDartBindings_EXPORT void *c_QFileInfo__completeSuffix(void *thisObj);

// tag=1067
//  QFileInfo::exists() const
QtDartBindings_EXPORT bool c_QFileInfo__exists(void *thisObj);

// tag=1067
//  QFileInfo::exists(const QString & file)
QtDartBindings_EXPORT bool
c_static_QFileInfo__exists_QString(const char *file_);

// tag=1067
//  QFileInfo::fileName() const
QtDartBindings_EXPORT void *c_QFileInfo__fileName(void *thisObj);

// tag=1067
//  QFileInfo::filePath() const
QtDartBindings_EXPORT void *c_QFileInfo__filePath(void *thisObj);

// tag=1067
//  QFileInfo::group() const
QtDartBindings_EXPORT void *c_QFileInfo__group(void *thisObj);

// tag=1067
//  QFileInfo::isAbsolute() const
QtDartBindings_EXPORT bool c_QFileInfo__isAbsolute(void *thisObj);

// tag=1067
//  QFileInfo::isBundle() const
QtDartBindings_EXPORT bool c_QFileInfo__isBundle(void *thisObj);

// tag=1067
//  QFileInfo::isDir() const
QtDartBindings_EXPORT bool c_QFileInfo__isDir(void *thisObj);

// tag=1067
//  QFileInfo::isExecutable() const
QtDartBindings_EXPORT bool c_QFileInfo__isExecutable(void *thisObj);

// tag=1067
//  QFileInfo::isFile() const
QtDartBindings_EXPORT bool c_QFileInfo__isFile(void *thisObj);

// tag=1067
//  QFileInfo::isHidden() const
QtDartBindings_EXPORT bool c_QFileInfo__isHidden(void *thisObj);

// tag=1067
//  QFileInfo::isJunction() const
QtDartBindings_EXPORT bool c_QFileInfo__isJunction(void *thisObj);

// tag=1067
//  QFileInfo::isNativePath() const
QtDartBindings_EXPORT bool c_QFileInfo__isNativePath(void *thisObj);

// tag=1067
//  QFileInfo::isReadable() const
QtDartBindings_EXPORT bool c_QFileInfo__isReadable(void *thisObj);

// tag=1067
//  QFileInfo::isRelative() const
QtDartBindings_EXPORT bool c_QFileInfo__isRelative(void *thisObj);

// tag=1067
//  QFileInfo::isRoot() const
QtDartBindings_EXPORT bool c_QFileInfo__isRoot(void *thisObj);

// tag=1067
//  QFileInfo::isShortcut() const
QtDartBindings_EXPORT bool c_QFileInfo__isShortcut(void *thisObj);

// tag=1067
//  QFileInfo::isSymLink() const
QtDartBindings_EXPORT bool c_QFileInfo__isSymLink(void *thisObj);

// tag=1067
//  QFileInfo::isSymbolicLink() const
QtDartBindings_EXPORT bool c_QFileInfo__isSymbolicLink(void *thisObj);

// tag=1067
//  QFileInfo::isWritable() const
QtDartBindings_EXPORT bool c_QFileInfo__isWritable(void *thisObj);

// tag=1067
//  QFileInfo::junctionTarget() const
QtDartBindings_EXPORT void *c_QFileInfo__junctionTarget(void *thisObj);

// tag=1067
//  QFileInfo::makeAbsolute()
QtDartBindings_EXPORT bool c_QFileInfo__makeAbsolute(void *thisObj);

// tag=1067
//  QFileInfo::owner() const
QtDartBindings_EXPORT void *c_QFileInfo__owner(void *thisObj);

// tag=1067
//  QFileInfo::path() const
QtDartBindings_EXPORT void *c_QFileInfo__path(void *thisObj);

// tag=1067
//  QFileInfo::refresh()
QtDartBindings_EXPORT void c_QFileInfo__refresh(void *thisObj);

// tag=1067
//  QFileInfo::setCaching(bool on)
QtDartBindings_EXPORT void c_QFileInfo__setCaching_bool(void *thisObj, bool on);

// tag=1067
//  QFileInfo::setFile(const QString & file)
QtDartBindings_EXPORT void c_QFileInfo__setFile_QString(void *thisObj,
                                                        const char *file_);

// tag=1067
//  QFileInfo::size() const
QtDartBindings_EXPORT qint64 c_QFileInfo__size(void *thisObj);

// tag=1067
//  QFileInfo::stat()
QtDartBindings_EXPORT void c_QFileInfo__stat(void *thisObj);

// tag=1067
//  QFileInfo::suffix() const
QtDartBindings_EXPORT void *c_QFileInfo__suffix(void *thisObj);

// tag=1067
//  QFileInfo::symLinkTarget() const
QtDartBindings_EXPORT void *c_QFileInfo__symLinkTarget(void *thisObj);

// tag=1066
QtDartBindings_EXPORT void c_QFileInfo__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QFileInfo_Finalizer(void *, void *cppObj, void *);
}

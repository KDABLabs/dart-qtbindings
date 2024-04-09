
// tag=1040
#include "QtDartBindings_exports.h"
#include <qicon.h>
#include <qlist.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>
#include <qstring.h>
#include <qvariant.h>

namespace QtDartBindings_wrappersNS {
// tag=1043
class QIcon_wrapper : public ::QIcon {
public:
  ~QIcon_wrapper();
  // tag=1041
  QIcon_wrapper();
  // tag=1041
  QIcon_wrapper(const QPixmap &pixmap);
  // tag=1041
  QIcon_wrapper(const QString &fileName);
  // tag=1041
  QSize actualSize(const QSize &size, QIcon::Mode mode = QIcon::Mode::Normal,
                   QIcon::State state = QIcon::State::Off) const;
  // tag=1041
  void addFile(const QString &fileName, const QSize &size = QSize(),
               QIcon::Mode mode = QIcon::Mode::Normal,
               QIcon::State state = QIcon::State::Off);
  // tag=1041
  void addPixmap(const QPixmap &pixmap, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off);
  // tag=1041
  QList<QSize> availableSizes(QIcon::Mode mode = QIcon::Mode::Normal,
                              QIcon::State state = QIcon::State::Off) const;
  // tag=1041
  qint64 cacheKey() const;
  // tag=1041
  void detach();
  // tag=1041
  static QList<QString> fallbackSearchPaths();
  // tag=1041
  static QString fallbackThemeName();
  // tag=1041
  static QIcon fromTheme(const QString &name);
  // tag=1041
  static QIcon fromTheme(const QString &name, const QIcon &fallback);
  // tag=1041
  static bool hasThemeIcon(const QString &name);
  // tag=1041
  bool isDetached() const;
  // tag=1041
  bool isMask() const;
  // tag=1041
  bool isNull() const;
  // tag=1041
  QString name() const;
  // tag=1041
  void paint(QPainter *painter, const QRect &rect) const;
  // tag=1041
  void paint(QPainter *painter, int x, int y, int w, int h) const;
  // tag=1041
  QPixmap pixmap(const QSize &size, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  // tag=1041
  QPixmap pixmap(const QSize &size, qreal devicePixelRatio,
                 QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  // tag=1041
  QPixmap pixmap(int extent, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  // tag=1041
  QPixmap pixmap(int w, int h, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  // tag=1041
  static void setFallbackSearchPaths(const QList<QString> &paths);
  // tag=1041
  static void setFallbackThemeName(const QString &name);
  // tag=1041
  void setIsMask(bool isMask);
  // tag=1041
  static void setThemeName(const QString &path);
  // tag=1041
  static void setThemeSearchPaths(const QList<QString> &searchpath);
  // tag=1041
  static QString themeName();
  // tag=1041
  static QList<QString> themeSearchPaths();
};
} // namespace QtDartBindings_wrappersNS
extern "C" {

// tag=1067
//  QIcon::QIcon()
QtDartBindings_EXPORT void *c_QIcon__constructor();

// tag=1067
//  QIcon::QIcon(const QPixmap & pixmap)
QtDartBindings_EXPORT void *c_QIcon__constructor_QPixmap(void *pixmap_);

// tag=1067
//  QIcon::QIcon(const QString & fileName)
QtDartBindings_EXPORT void *c_QIcon__constructor_QString(const char *fileName_);

// tag=1067
//  QIcon::actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state)
//  const
QtDartBindings_EXPORT void *c_QIcon__actualSize_QSize_Mode_State(void *thisObj,
                                                                 void *size_,
                                                                 int mode,
                                                                 int state);

// tag=1067
//  QIcon::addFile(const QString & fileName, const QSize & size, QIcon::Mode
//  mode, QIcon::State state)
QtDartBindings_EXPORT void
c_QIcon__addFile_QString_QSize_Mode_State(void *thisObj, const char *fileName_,
                                          void *size_, int mode, int state);

// tag=1067
//  QIcon::addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State
//  state)
QtDartBindings_EXPORT void c_QIcon__addPixmap_QPixmap_Mode_State(void *thisObj,
                                                                 void *pixmap_,
                                                                 int mode,
                                                                 int state);

// tag=1067
//  QIcon::availableSizes(QIcon::Mode mode, QIcon::State state) const
QtDartBindings_EXPORT void *
c_QIcon__availableSizes_Mode_State(void *thisObj, int mode, int state);

// tag=1067
//  QIcon::cacheKey() const
QtDartBindings_EXPORT qint64 c_QIcon__cacheKey(void *thisObj);

// tag=1067
//  QIcon::detach()
QtDartBindings_EXPORT void c_QIcon__detach(void *thisObj);

// tag=1067
//  QIcon::fallbackSearchPaths()
QtDartBindings_EXPORT void *c_static_QIcon__fallbackSearchPaths();

// tag=1067
//  QIcon::fallbackThemeName()
QtDartBindings_EXPORT void *c_static_QIcon__fallbackThemeName();

// tag=1067
//  QIcon::fromTheme(const QString & name)
QtDartBindings_EXPORT void *
c_static_QIcon__fromTheme_QString(const char *name_);

// tag=1067
//  QIcon::fromTheme(const QString & name, const QIcon & fallback)
QtDartBindings_EXPORT void *
c_static_QIcon__fromTheme_QString_QIcon(const char *name_, void *fallback_);

// tag=1067
//  QIcon::hasThemeIcon(const QString & name)
QtDartBindings_EXPORT bool
c_static_QIcon__hasThemeIcon_QString(const char *name_);

// tag=1067
//  QIcon::isDetached() const
QtDartBindings_EXPORT bool c_QIcon__isDetached(void *thisObj);

// tag=1067
//  QIcon::isMask() const
QtDartBindings_EXPORT bool c_QIcon__isMask(void *thisObj);

// tag=1067
//  QIcon::isNull() const
QtDartBindings_EXPORT bool c_QIcon__isNull(void *thisObj);

// tag=1067
//  QIcon::name() const
QtDartBindings_EXPORT void *c_QIcon__name(void *thisObj);

// tag=1067
//  QIcon::paint(QPainter * painter, const QRect & rect) const
QtDartBindings_EXPORT void
c_QIcon__paint_QPainter_QRect(void *thisObj, void *painter_, void *rect_);

// tag=1067
//  QIcon::paint(QPainter * painter, int x, int y, int w, int h) const
QtDartBindings_EXPORT void
c_QIcon__paint_QPainter_int_int_int_int(void *thisObj, void *painter_, int x,
                                        int y, int w, int h);

// tag=1067
//  QIcon::pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state)
//  const
QtDartBindings_EXPORT void *c_QIcon__pixmap_QSize_Mode_State(void *thisObj,
                                                             void *size_,
                                                             int mode,
                                                             int state);

// tag=1067
//  QIcon::pixmap(const QSize & size, qreal devicePixelRatio, QIcon::Mode mode,
//  QIcon::State state) const
QtDartBindings_EXPORT void *c_QIcon__pixmap_QSize_qreal_Mode_State(
    void *thisObj, void *size_, qreal devicePixelRatio, int mode, int state);

// tag=1067
//  QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state) const
QtDartBindings_EXPORT void *
c_QIcon__pixmap_int_Mode_State(void *thisObj, int extent, int mode, int state);

// tag=1067
//  QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state) const
QtDartBindings_EXPORT void *c_QIcon__pixmap_int_int_Mode_State(void *thisObj,
                                                               int w, int h,
                                                               int mode,
                                                               int state);

// tag=1067
//  QIcon::setFallbackSearchPaths(const QList<QString > & paths)
QtDartBindings_EXPORT void
c_static_QIcon__setFallbackSearchPaths_QList_QString(void *paths_);

// tag=1067
//  QIcon::setFallbackThemeName(const QString & name)
QtDartBindings_EXPORT void
c_static_QIcon__setFallbackThemeName_QString(const char *name_);

// tag=1067
//  QIcon::setIsMask(bool isMask)
QtDartBindings_EXPORT void c_QIcon__setIsMask_bool(void *thisObj, bool isMask);

// tag=1067
//  QIcon::setThemeName(const QString & path)
QtDartBindings_EXPORT void
c_static_QIcon__setThemeName_QString(const char *path_);

// tag=1067
//  QIcon::setThemeSearchPaths(const QList<QString > & searchpath)
QtDartBindings_EXPORT void
c_static_QIcon__setThemeSearchPaths_QList_QString(void *searchpath_);

// tag=1067
//  QIcon::themeName()
QtDartBindings_EXPORT void *c_static_QIcon__themeName();

// tag=1067
//  QIcon::themeSearchPaths()
QtDartBindings_EXPORT void *c_static_QIcon__themeSearchPaths();

// tag=1066
QtDartBindings_EXPORT void c_QIcon__destructor(void *thisObj);

// tag=1047
QtDartBindings_EXPORT void c_QIcon_Finalizer(void *, void *cppObj, void *);
}

/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group
/// company <info@kdab.com> SPDX-License-Identifier: MIT
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
class QIcon_wrapper : public ::QIcon {
public:
  ~QIcon_wrapper();
  QIcon_wrapper();
  QIcon_wrapper(const QPixmap &pixmap);
  QIcon_wrapper(const QString &fileName);
  QSize actualSize(const QSize &size, QIcon::Mode mode = QIcon::Mode::Normal,
                   QIcon::State state = QIcon::State::Off) const;
  void addFile(const QString &fileName, const QSize &size = QSize(),
               QIcon::Mode mode = QIcon::Mode::Normal,
               QIcon::State state = QIcon::State::Off);
  void addPixmap(const QPixmap &pixmap, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off);
  QList<QSize> availableSizes(QIcon::Mode mode = QIcon::Mode::Normal,
                              QIcon::State state = QIcon::State::Off) const;
  qint64 cacheKey() const;
  void detach();
  static QList<QString> fallbackSearchPaths();
  static QString fallbackThemeName();
  static QIcon fromTheme(const QString &name);
  static QIcon fromTheme(const QString &name, const QIcon &fallback);
  static bool hasThemeIcon(const QString &name);
  bool isDetached() const;
  bool isMask() const;
  bool isNull() const;
  QString name() const;
  void paint(QPainter *painter, const QRect &rect) const;
  void paint(QPainter *painter, int x, int y, int w, int h) const;
  QPixmap pixmap(const QSize &size, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  QPixmap pixmap(const QSize &size, qreal devicePixelRatio,
                 QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  QPixmap pixmap(int extent, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  QPixmap pixmap(int w, int h, QIcon::Mode mode = QIcon::Mode::Normal,
                 QIcon::State state = QIcon::State::Off) const;
  static void setFallbackSearchPaths(const QList<QString> &paths);
  static void setFallbackThemeName(const QString &name);
  void setIsMask(bool isMask);
  static void setThemeName(const QString &path);
  static void setThemeSearchPaths(const QList<QString> &searchpath);
  static QString themeName();
  static QList<QString> themeSearchPaths();
};
} // namespace QtDartBindings_wrappersNS
extern "C" {
// QIcon::QIcon()
QtDartBindings_EXPORT void *c_QIcon__constructor();
// QIcon::QIcon(const QPixmap & pixmap)
QtDartBindings_EXPORT void *c_QIcon__constructor_QPixmap(void *pixmap_);
// QIcon::QIcon(const QString & fileName)
QtDartBindings_EXPORT void *c_QIcon__constructor_QString(const char *fileName_);
// QIcon::actualSize(const QSize & size, QIcon::Mode mode, QIcon::State state)
// const
QtDartBindings_EXPORT void *c_QIcon__actualSize_QSize_Mode_State(void *thisObj,
                                                                 void *size_,
                                                                 int mode,
                                                                 int state);
// QIcon::addFile(const QString & fileName, const QSize & size, QIcon::Mode
// mode, QIcon::State state)
QtDartBindings_EXPORT void
c_QIcon__addFile_QString_QSize_Mode_State(void *thisObj, const char *fileName_,
                                          void *size_, int mode, int state);
// QIcon::addPixmap(const QPixmap & pixmap, QIcon::Mode mode, QIcon::State
// state)
QtDartBindings_EXPORT void c_QIcon__addPixmap_QPixmap_Mode_State(void *thisObj,
                                                                 void *pixmap_,
                                                                 int mode,
                                                                 int state);
// QIcon::availableSizes(QIcon::Mode mode, QIcon::State state) const
QtDartBindings_EXPORT void *
c_QIcon__availableSizes_Mode_State(void *thisObj, int mode, int state);
// QIcon::cacheKey() const
QtDartBindings_EXPORT qint64 c_QIcon__cacheKey(void *thisObj);
// QIcon::detach()
QtDartBindings_EXPORT void c_QIcon__detach(void *thisObj);
// QIcon::fallbackSearchPaths()
QtDartBindings_EXPORT void *c_static_QIcon__fallbackSearchPaths();
// QIcon::fallbackThemeName()
QtDartBindings_EXPORT void *c_static_QIcon__fallbackThemeName();
// QIcon::fromTheme(const QString & name)
QtDartBindings_EXPORT void *
c_static_QIcon__fromTheme_QString(const char *name_);
// QIcon::fromTheme(const QString & name, const QIcon & fallback)
QtDartBindings_EXPORT void *
c_static_QIcon__fromTheme_QString_QIcon(const char *name_, void *fallback_);
// QIcon::hasThemeIcon(const QString & name)
QtDartBindings_EXPORT bool
c_static_QIcon__hasThemeIcon_QString(const char *name_);
// QIcon::isDetached() const
QtDartBindings_EXPORT bool c_QIcon__isDetached(void *thisObj);
// QIcon::isMask() const
QtDartBindings_EXPORT bool c_QIcon__isMask(void *thisObj);
// QIcon::isNull() const
QtDartBindings_EXPORT bool c_QIcon__isNull(void *thisObj);
// QIcon::name() const
QtDartBindings_EXPORT void *c_QIcon__name(void *thisObj);
// QIcon::paint(QPainter * painter, const QRect & rect) const
QtDartBindings_EXPORT void
c_QIcon__paint_QPainter_QRect(void *thisObj, void *painter_, void *rect_);
// QIcon::paint(QPainter * painter, int x, int y, int w, int h) const
QtDartBindings_EXPORT void
c_QIcon__paint_QPainter_int_int_int_int(void *thisObj, void *painter_, int x,
                                        int y, int w, int h);
// QIcon::pixmap(const QSize & size, QIcon::Mode mode, QIcon::State state) const
QtDartBindings_EXPORT void *c_QIcon__pixmap_QSize_Mode_State(void *thisObj,
                                                             void *size_,
                                                             int mode,
                                                             int state);
// QIcon::pixmap(const QSize & size, qreal devicePixelRatio, QIcon::Mode mode,
// QIcon::State state) const
QtDartBindings_EXPORT void *c_QIcon__pixmap_QSize_qreal_Mode_State(
    void *thisObj, void *size_, qreal devicePixelRatio, int mode, int state);
// QIcon::pixmap(int extent, QIcon::Mode mode, QIcon::State state) const
QtDartBindings_EXPORT void *
c_QIcon__pixmap_int_Mode_State(void *thisObj, int extent, int mode, int state);
// QIcon::pixmap(int w, int h, QIcon::Mode mode, QIcon::State state) const
QtDartBindings_EXPORT void *c_QIcon__pixmap_int_int_Mode_State(void *thisObj,
                                                               int w, int h,
                                                               int mode,
                                                               int state);
// QIcon::setFallbackSearchPaths(const QList<QString > & paths)
QtDartBindings_EXPORT void
c_static_QIcon__setFallbackSearchPaths_QList_QString(void *paths_);
// QIcon::setFallbackThemeName(const QString & name)
QtDartBindings_EXPORT void
c_static_QIcon__setFallbackThemeName_QString(const char *name_);
// QIcon::setIsMask(bool isMask)
QtDartBindings_EXPORT void c_QIcon__setIsMask_bool(void *thisObj, bool isMask);
// QIcon::setThemeName(const QString & path)
QtDartBindings_EXPORT void
c_static_QIcon__setThemeName_QString(const char *path_);
// QIcon::setThemeSearchPaths(const QList<QString > & searchpath)
QtDartBindings_EXPORT void
c_static_QIcon__setThemeSearchPaths_QList_QString(void *searchpath_);
// QIcon::themeName()
QtDartBindings_EXPORT void *c_static_QIcon__themeName();
// QIcon::themeSearchPaths()
QtDartBindings_EXPORT void *c_static_QIcon__themeSearchPaths();
QtDartBindings_EXPORT void c_QIcon__destructor(void *thisObj);
QtDartBindings_EXPORT void c_QIcon_Finalizer(void *cppObj);
}

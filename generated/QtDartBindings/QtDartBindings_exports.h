#pragma once

#include <QtCore/QtGlobal>

#if defined(BUILDING_QtDartBindings)
#  define QtDartBindings_EXPORT Q_DECL_EXPORT
#else
#  define QtDartBindings_EXPORT Q_DECL_IMPORT
#endif

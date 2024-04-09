/// This file is part of dart-qtbindings
///
/// SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
/// SPDX-License-Identifier: MIT

#pragma once

#include <QtCore/QtGlobal>

#if defined(BUILDING_TEST_LIBRARY)
#  define TEST_EXPORT Q_DECL_EXPORT
#else
#  define TEST_EXPORT Q_DECL_IMPORT
#endif

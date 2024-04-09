# This file is part of dart-qtbindings
#
# SPDX-FileCopyrightText: 2022 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
# SPDX-License-Identifier: MIT

cmake_minimum_required(VERSION 3.10)

project(DartQt6Bindings LANGUAGES CXX)

# Uncomment once Qt bindings are exported too
# set(CMAKE_CXX_VISIBILITY_PRESET hidden)

set(ECM_MODULE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/cmake/ECM/modules/")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake" ${ECM_MODULE_DIR})

include(ECMEnableSanitizers)


find_package(Qt6Widgets)

add_subdirectory(generated/QtDartBindings/)

install(TARGETS QtDartBindings)

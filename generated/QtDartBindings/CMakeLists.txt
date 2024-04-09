cmake_minimum_required(VERSION 3.10)

project(QtDartBindings LANGUAGES CXX)

set(SOURCES
    dart/ffi/Qt_c.cpp
    dart/ffi/QVariant_c.cpp
    dart/ffi/QStyleHintReturn_c.cpp
    dart/ffi/QStyleFactory_c.cpp
    dart/ffi/QString_c.cpp
    dart/ffi/QStandardItem_c.cpp
    dart/ffi/QSizePolicy_c.cpp
    dart/ffi/QSizeF_c.cpp
    dart/ffi/QSize_c.cpp
    dart/ffi/QRegion_c.cpp
    dart/ffi/QRectF_c.cpp
    dart/ffi/QRect_c.cpp
    dart/ffi/QPointF_c.cpp
    dart/ffi/QPoint_c.cpp
    dart/ffi/QPixmap_c.cpp
    dart/ffi/QPen_c.cpp
    dart/ffi/QPalette_c.cpp
    dart/ffi/QPainter_c.cpp
    dart/ffi/QObject_c.cpp
    dart/ffi/QWindow_c.cpp
    dart/ffi/QWidget_c.cpp
    dart/ffi/QToolBar_c.cpp
    dart/ffi/QStatusBar_c.cpp
    dart/ffi/QTimer_c.cpp
    dart/ffi/QStyleOption_c.cpp
    dart/ffi/QStyleOptionComplex_c.cpp
    dart/ffi/QStyle_c.cpp
    dart/ffi/QShortcut_c.cpp
    dart/ffi/QModelIndex_c.cpp
    dart/ffi/QMenuBar_c.cpp
    dart/ffi/QMenu_c.cpp
    dart/ffi/QMainWindow_c.cpp
    dart/ffi/QList_c.cpp
    dart/ffi/QLineF_c.cpp
    dart/ffi/QLineEdit_c.cpp
    dart/ffi/QLine_c.cpp
    dart/ffi/QLayoutItem_c.cpp
    dart/ffi/QLayout_c.cpp
    dart/ffi/QKeySequence_c.cpp
    dart/ffi/QItemSelectionRange_c.cpp
    dart/ffi/QItemSelectionModel_c.cpp
    dart/ffi/QItemSelection_c.cpp
    dart/ffi/QIcon_c.cpp
    dart/ffi/QIODevice_c.cpp
    dart/ffi/QProcess_c.cpp
    dart/ffi/QGridLayout_c.cpp
    dart/ffi/QFrame_c.cpp
    dart/ffi/QSplitter_c.cpp
    dart/ffi/QLabel_c.cpp
    dart/ffi/QFormLayout_c.cpp
    dart/ffi/QFontDatabase_c.cpp
    dart/ffi/QFont_c.cpp
    dart/ffi/QFileInfo_c.cpp
    dart/ffi/QEvent_c.cpp
    dart/ffi/QPaintEvent_c.cpp
    dart/ffi/QInputEvent_c.cpp
    dart/ffi/QPointerEvent_c.cpp
    dart/ffi/QSinglePointEvent_c.cpp
    dart/ffi/QMouseEvent_c.cpp
    dart/ffi/QDialog_c.cpp
    dart/ffi/QInputDialog_c.cpp
    dart/ffi/QCoreApplication_c.cpp
    dart/ffi/QGuiApplication_c.cpp
    dart/ffi/QColor_c.cpp
    dart/ffi/QByteArray_c.cpp
    dart/ffi/QBrush_c.cpp
    dart/ffi/QBoxLayout_c.cpp
    dart/ffi/QVBoxLayout_c.cpp
    dart/ffi/QHBoxLayout_c.cpp
    dart/ffi/QApplication_c.cpp
    dart/ffi/QAction_c.cpp
    dart/ffi/QAbstractScrollArea_c.cpp
    dart/ffi/QTextEdit_c.cpp
    dart/ffi/QScrollArea_c.cpp
    dart/ffi/QPlainTextEdit_c.cpp
    dart/ffi/QAbstractItemView_c.cpp
    dart/ffi/QTreeView_c.cpp
    dart/ffi/QTableView_c.cpp
    dart/ffi/QListView_c.cpp
    dart/ffi/QAbstractItemModel_c.cpp
    dart/ffi/QStandardItemModel_c.cpp
    dart/ffi/QAbstractProxyModel_c.cpp
    dart/ffi/QSortFilterProxyModel_c.cpp
    dart/ffi/QAbstractListModel_c.cpp
    dart/ffi/QAbstractButton_c.cpp
    dart/ffi/QPushButton_c.cpp
    dart/ffi/QCheckBox_c.cpp
)

set(CMAKE_CXX_VISIBILITY_PRESET hidden)

find_package(Qt6Widgets)

add_library(QtDartBindings SHARED ${SOURCES})

include(GenerateExportHeader)
generate_export_header(QtDartBindings EXPORT_FILE_NAME "${CMAKE_CURRENT_BINARY_DIR}/QtDartBindings_exports.h" EXPORT_MACRO_NAME QtDartBindings_EXPORT)
set_property(TARGET QtDartBindings PROPERTY CXX_STANDARD 14)

target_link_libraries(QtDartBindings Qt6::Widgets Qt6::Core Qt6::Widgets)
target_include_directories(QtDartBindings PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/cpp/include>  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)


#include "Qt_wrapper.h"

#include "qproperty.h"

#include <QDebug>

namespace Dartagnan {

typedef int (*CleanupCallback)(void *thisPtr);
static CleanupCallback s_cleanupCallback = nullptr;

template <typename T> struct ValueWrapper {
  T value;
};

} // namespace Dartagnan
extern "C" {

// tag=1050
// beginPropertyUpdateGroup()
void c_static_Qt__beginPropertyUpdateGroup() {
  // tag=1068
  Qt::beginPropertyUpdateGroup();
}

// tag=1050
// endPropertyUpdateGroup()
void c_static_Qt__endPropertyUpdateGroup() {
  // tag=1068
  Qt::endPropertyUpdateGroup();
}

// tag=1050
// qt_getEnumName(QFlags<Qt::KeyboardModifier> arg__1)
const char *c_static_Qt__qt_getEnumName_KeyboardModifiers(int arg__1_) {
  auto arg__1 = static_cast<QFlags<Qt::KeyboardModifier>>(arg__1_);
  return
      // tag=1068
      Qt::qt_getEnumName(arg__1);
}

// tag=1050
// qt_getEnumName(QFlags<Qt::Orientation> arg__1)
const char *c_static_Qt__qt_getEnumName_Orientations(int arg__1_) {
  auto arg__1 = static_cast<QFlags<Qt::Orientation>>(arg__1_);
  return
      // tag=1068
      Qt::qt_getEnumName(arg__1);
}

// tag=1050
// qt_getEnumName(Qt::ItemDataRole arg__1)
const char *c_static_Qt__qt_getEnumName_ItemDataRole(int arg__1) {
  return
      // tag=1068
      Qt::qt_getEnumName(static_cast<Qt::ItemDataRole>(arg__1));
}

// tag=1050
// qt_getEnumName(Qt::KeyboardModifier arg__1)
const char *c_static_Qt__qt_getEnumName_KeyboardModifier(int arg__1) {
  return
      // tag=1068
      Qt::qt_getEnumName(static_cast<Qt::KeyboardModifier>(arg__1));
}

// tag=1050
// qt_getEnumName(Qt::LayoutDirection arg__1)
const char *c_static_Qt__qt_getEnumName_LayoutDirection(int arg__1) {
  return
      // tag=1068
      Qt::qt_getEnumName(static_cast<Qt::LayoutDirection>(arg__1));
}

// tag=1050
// qt_getEnumName(Qt::Orientation arg__1)
const char *c_static_Qt__qt_getEnumName_Orientation(int arg__1) {
  return
      // tag=1068
      Qt::qt_getEnumName(static_cast<Qt::Orientation>(arg__1));
}

// tag=1050
// qt_getEnumName(Qt::SortOrder arg__1)
const char *c_static_Qt__qt_getEnumName_SortOrder(int arg__1) {
  return
      // tag=1068
      Qt::qt_getEnumName(static_cast<Qt::SortOrder>(arg__1));
}
}

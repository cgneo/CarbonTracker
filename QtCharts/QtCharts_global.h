#ifndef QTCHARTS_GLOBAL_H
#define QTCHARTS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTCHARTS_LIBRARY)
#  define QTCHARTS_EXPORT Q_DECL_EXPORT
#else
#  define QTCHARTS_EXPORT Q_DECL_IMPORT
#endif

#endif // QTCHARTS_GLOBAL_H

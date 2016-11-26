/****************************************************************************
**
** Copyright (C) 2016 Jolla Ltd.
** Contact: Bea Lam <bea.lam@jolla.com>
**
** This file is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This file is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this file; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
**
****************************************************************************/

#ifndef QBLUEZ_EXPORT_H
#define QBLUEZ_EXPORT_H

#include <QtCore>

#if defined(BLUEZQT_LIBRARY)
#  define BLUEZQT_EXPORT Q_DECL_EXPORT
#else
#  define BLUEZQT_EXPORT Q_DECL_IMPORT
#endif

#endif // QBLUEZ_EXPORT_H

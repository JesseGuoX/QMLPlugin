/*
 * @Date: 2023-05-05 14:57:33
 * @LastEditors: JessGuo
 * @LastEditTime: 2023-05-22 16:29:58
 * @FilePath: /pluginTest/main.cpp
 */
// Copyright (C) 2021 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause

#include <QGuiApplication>
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtQuick3D/qquick3d.h>
#include "src/register.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    QQmlApplicationEngine engine;
    const QStringList additionalImportPaths {
        QML_IMPORT_ROOT + QStringLiteral("/src/"),
        QML_IMPORT_ROOT + QStringLiteral("/build/src/"),
    };

    for (const auto& path : additionalImportPaths){
        engine.addImportPath(path);
    }

    engine.load(QUrl(QStringLiteral("app.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
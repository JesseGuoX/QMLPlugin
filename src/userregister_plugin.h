/*
 * @Date: 2023-05-13 14:28:59
 * @LastEditors: JessGuo
 * @LastEditTime: 2023-05-14 16:54:35
 * @FilePath: /pluginTest/src/userregister_plugin.h
 */
#pragma once

#include <QQmlExtensionPlugin>
#include <QQmlEngine>
#include "register.h"
class UserRegisterPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char* uri) override;
};
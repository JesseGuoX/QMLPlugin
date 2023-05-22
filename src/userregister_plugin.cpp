/*
 * @Date: 2023-05-13 14:29:11
 * @LastEditors: JessGuo
 * @LastEditTime: 2023-05-22 16:18:37
 * @FilePath: /pluginTest/src/userregister_plugin.cpp
 */
#include "userregister_plugin.h"
#include <QDebug>
void UserRegisterPlugin::registerTypes(const char* uri)
{
    Q_ASSERT(uri == QLatin1String("User"));
    qmlRegisterType<Register>("User.Register", 1, 0, "Register");

    // qmlRegisterSingletonType<Register>( "User.Register", 1, 0, "Register", &Register::qmlInstance);
    qDebug() << "i am called" ;
}


#include "userregister_plugin.h"

void UserRegisterPlugin::registerTypes(const char* uri)
{
    qmlRegisterType<Register>("User.Register", 1, 0, "Register");
}
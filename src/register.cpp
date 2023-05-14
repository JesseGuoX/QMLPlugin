#include "register.h"

Register::Register(QObject* parent) : QObject(parent) { }

const QString& Register::getFirstName() const { return m_firstName; }

void Register::setFirstName(const QString& newFirstName)
{
    if (m_firstName == newFirstName)
        return;
    m_firstName = newFirstName;
    emit firstNameChanged();
}

const QString& Register::getLastName() const { return m_lastName; }

void Register::setLastName(const QString& newLastName)
{
    if (m_lastName == newLastName)
        return;
    m_lastName = newLastName;
    emit lastNameChanged();
}

const QString& Register::getNickname() const { return m_nickname; }

void Register::setNickname(const QString& newNickname)
{
    if (m_nickname == newNickname)
        return;
    m_nickname = newNickname;
    emit nicknameChanged();
}
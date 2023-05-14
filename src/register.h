#pragma once

#include <QObject>
#include <QString>

class Register : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString firstName READ getFirstName WRITE setFirstName NOTIFY firstNameChanged)
    Q_PROPERTY(QString lastName READ getLastName WRITE setLastName NOTIFY lastNameChanged)
    Q_PROPERTY(QString nickname READ getNickname WRITE setNickname NOTIFY nicknameChanged)

public:
    explicit Register(QObject* parent = nullptr);

    const QString& getFirstName() const;
    void setFirstName(const QString& newFirstName);

    const QString& getLastName() const;
    void setLastName(const QString& newLastName);

    const QString& getNickname() const;
    void setNickname(const QString& newNickname);

signals:
    void firstNameChanged();
    void lastNameChanged();
    void nicknameChanged();

private:
    QString m_firstName;
    QString m_lastName;
    QString m_nickname;
};
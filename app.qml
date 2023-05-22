import QtQuick 2.15
import QtQuick.Controls 2.15
import User.Register 1.0 

import Company.Controls 0.1

ApplicationWindow {
    id: window

    height: 640
    width: 480
    visible: true

    title: qsTr("Test User Register")

    Register {
        id: register

        onFirstNameChanged: console.log("First name:", firstName)
        onLastNameChanged: console.log("Last name:", lastName)
        onNicknameChanged: console.log("Nickname:", nickname)
    }

    Column {
        anchors.centerIn: parent
        spacing: 10

        TextField {
            id: fieldFirstName

            placeholderText: qsTr("First Name")
        }

        TextField {
            id: fieldLastName

            placeholderText: qsTr("Last Name")
        }

        TextField {
            id: fieldNickname

            placeholderText: qsTr("Nickname")
        }

        Button {
            id: buttonRegister

            text: qsTr("Register")

            onClicked: {
                register.firstName = fieldFirstName.text
                register.lastName = fieldLastName.text
                register.nickname = fieldNickname.text

                fieldFirstName.text = ""
                fieldLastName.text = ""
                fieldNickname.text = ""
            }
        }
        CompanyBaseButton{

        }
    }
}
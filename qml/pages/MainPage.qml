import QtQuick 2.0
import Sailfish.Silica 1.0

Page {
    objectName: "mainPage"
    allowedOrientations: Orientation.All

    PageHeader {
        id: pageHeader
        objectName: "DBus"
        title: qsTr("DBus-service")
    }

    Button {
        id: buttonSend
        width: Theme.buttonWidthLarge
        height: Theme.buttonWidthSmall
        backgroundColor: palette.highlightColor
        anchors.centerIn: parent
        text: qsTr("Send a request")

        onClicked: {
            console.log("Button clicked");
            dbus.call();
        }
    }
}

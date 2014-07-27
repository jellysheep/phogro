import QtQuick 2.2
import QtQuick.Controls 1.1

ApplicationWindow {
    visible: true
    width: 800
    height: 600

    SplitView {
        id: splitView
        anchors.fill: parent
        orientation: Qt.Horizontal

        ImageList {
            id: imageList
        }
    }
}

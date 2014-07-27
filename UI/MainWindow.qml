import QtQuick 2.2
import QtQuick.Controls 1.1

ApplicationWindow {
    visible: true
    width: 800
    height: 600

    Rectangle {
        anchors.fill: parent

        gradient: Gradient {
            GradientStop {
                position: 0.00;
                color: "#ffffff";
            }
            GradientStop {
                position: 0.72;
                color: "#c0c0c0";
            }
            GradientStop {
                position: 1.00;
                color: "#e6e6e6";
            }
        }

        SplitView {
            id: splitView
            anchors.fill: parent
            orientation: Qt.Horizontal

            ImageList {
                id: imageList
            }
        }
    }
}

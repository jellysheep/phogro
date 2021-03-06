import QtQuick 2.0
import QtGraphicalEffects 1.0

Rectangle {
    anchors.fill: parent.Center
    id: rectangle
    property real imageWidth: 500
    property real imageHeight: 350
    property real imageMargin: 40
    property real imageBorderWidth: 2
    property real imageBoxWidth: imageWidth + 2*imageMargin
    property real imageBoxHeight: imageHeight + 2*imageMargin
    color: "transparent"

    Component {
        id: imageDelegate
        Item {
            width: imageBoxWidth
            height: imageBoxHeight
            anchors.verticalCenter: parent.verticalCenter

            RectangularGlow {
                anchors.fill: image
                color: parent.ListView.isCurrentItem
                       ? "#90000000" : "#50000000"
                glowRadius: 30
                spread: 0.1
            }

            Image {
                id: image
                x: imageMargin
                y: imageMargin
                width: imageWidth
                height: imageHeight
                fillMode: Image.PreserveAspectCrop
                source: imageUrl

                MouseArea {
                    anchors.fill: parent
                    z: 1
                    onClicked: listView.currentIndex = index
                }
            }
        }
    }

    ListView {
        id: listView
        boundsBehavior: Flickable.DragOverBounds
        flickableDirection: Flickable.HorizontalFlick
        orientation: ListView.Horizontal
        anchors.fill: parent

        focus: true

        highlightRangeMode: ListView.StrictlyEnforceRange
        preferredHighlightBegin: width/2-imageBoxWidth/2
        preferredHighlightEnd: width/2-imageBoxWidth/2

        model: ImageModel {}
        delegate: imageDelegate
    }
}


// Main //
function __main__() {
    print("script loaded!");
}


var lastKeyState = false;
function render() {
    // IGraphic_drawLine(100, 100, 200, 400, 4, 114514, 1, 0, 0, 0);

    Graphic.setLineWidth(4);
    Graphic.setColor(114514);
    Graphic.drawLine(100, 100, 200, 400);

    if (GetKeyState(VK.Right_Button)) {
        print("Right Button Released!");
    }

}
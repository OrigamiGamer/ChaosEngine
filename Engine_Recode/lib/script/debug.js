
// Main //
function __main__() {
    print("script loaded!");
}


var lastKeyState = false;
function render() {
    
    if (GetKeyState(VK.Right_Button)) {
        print("Right Button Released!");
    }

}
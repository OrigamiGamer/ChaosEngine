
// Interfaces //
function print(content) { };

function render() { };

function IGraphic_drawLine(
    x1 = 0.0,   // Pos_1
    y1 = 0.0,
    x2 = 0.0,   // Pos_2
    y2 = 0.0,
    lw = 1.0,   // LineWidth
    c_rgb = 0,  // ColorRGB
    c_a = 1.0,  // ColorAlpha (0.0-1.0)
    ax = 0.0,   // AnchorPos
    ay = 0.0,
    az = 0.0,
    rt = 0.0    // Rotation
) { };

function GetKeyState(newVirtKey = Number()) { return Boolean() };



// Standard Function Libraries //
function isdef(newVariable) {
    return newVariable != undefined;
}






// Standard Structure Libraries //
const Pos = {
    x: 0.0,
    y: 0.0,
    z: 0.0
}

const Make = {
    Pos: function (x, y, z) {
        let newPos = Pos;
        newPos.x = x;
        newPos.y = y;
        newPos.z = z;
        return newPos;
    }
}






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


var Graphic = new class IGraphic {
    constructor() {
        this.LineWidth = 1.0;
        this.ColorRGB;
        this.ColorAlpha = 1.0;
        this.AnchorPos = Pos;
        this.Rotation;

    };

    setLineWidth(newLineWidth) {
        if (isdef(newLineWidth)) { this.LineWidth = newLineWidth };
    };

    setColor(newColorRGB, newColorAlpha) {
        if (isdef(newColorRGB)) { this.ColorRGB = newColorRGB };
        if (isdef(newColorAlpha)) { this.ColorAlpha = newColorAlpha };
    };

    setAnchorPos(x, y, z) {
        if (isdef(x)) { this.AnchorPos.x = x };
        if (isdef(y)) { this.AnchorPos.y = y };
        if (isdef(z)) { this.AnchorPos.z = z };
    };

    setRotation(newRotation) {
        if (isdef(newRotation)) { this.Rotation = newRotation };
    }

    drawLine(x1, y1, x2, y2) {
        IGraphic_drawLine(x1, y1, x2, y2, this.LineWidth, this.ColorRGB, this.ColorAlpha, this.AnchorPos.x, this.AnchorPos.y, this.AnchorPos.z, this.Rotation);
    };
}

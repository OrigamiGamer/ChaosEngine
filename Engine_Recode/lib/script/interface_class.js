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

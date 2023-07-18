"use strict";

function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }

function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, descriptor.key, descriptor); } }

function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); return Constructor; }

var Graphic = new (
/*#__PURE__*/
function () {
  function IGraphic() {
    _classCallCheck(this, IGraphic);

    this.LineWidth = 1.0;
    this.ColorRGB;
    this.ColorAlpha = 1.0;
    this.AnchorPos = Pos;
    this.Rotation;
  }

  _createClass(IGraphic, [{
    key: "setLineWidth",
    value: function setLineWidth(newLineWidth) {
      if (isdef(newLineWidth)) {
        this.LineWidth = newLineWidth;
      }

      ;
    }
  }, {
    key: "setColor",
    value: function setColor(newColorRGB, newColorAlpha) {
      if (isdef(newColorRGB)) {
        this.ColorRGB = newColorRGB;
      }

      ;

      if (isdef(newColorAlpha)) {
        this.ColorAlpha = newColorAlpha;
      }

      ;
    }
  }, {
    key: "setAnchorPos",
    value: function setAnchorPos(x, y, z) {
      if (isdef(x)) {
        this.AnchorPos.x = x;
      }

      ;

      if (isdef(y)) {
        this.AnchorPos.y = y;
      }

      ;

      if (isdef(z)) {
        this.AnchorPos.z = z;
      }

      ;
    }
  }, {
    key: "setRotation",
    value: function setRotation(newRotation) {
      if (isdef(newRotation)) {
        this.Rotation = newRotation;
      }

      ;
    }
  }, {
    key: "drawLine",
    value: function drawLine(x1, y1, x2, y2) {
      IGraphic_drawLine(x1, y1, x2, y2, this.LineWidth, this.ColorRGB, this.ColorAlpha, this.AnchorPos.x, this.AnchorPos.y, this.AnchorPos.z, this.Rotation);
    }
  }]);

  return IGraphic;
}())();
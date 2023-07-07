"use strict";

function _classCallCheck(instance, Constructor) { if (!(instance instanceof Constructor)) { throw new TypeError("Cannot call a class as a function"); } }

function _defineProperties(target, props) { for (var i = 0; i < props.length; i++) { var descriptor = props[i]; descriptor.enumerable = descriptor.enumerable || false; descriptor.configurable = true; if ("value" in descriptor) descriptor.writable = true; Object.defineProperty(target, descriptor.key, descriptor); } }

function _createClass(Constructor, protoProps, staticProps) { if (protoProps) _defineProperties(Constructor.prototype, protoProps); if (staticProps) _defineProperties(Constructor, staticProps); return Constructor; }

// Standard Function Libraries //
function isdef(newVariable) {
  return newVariable != undefined;
} // Standard Structure Libraries //


var _Pos = {
  x: 0.0,
  y: 0.0,
  z: 0.0
};
var Make = {
  Pos: function Pos(x, y, z) {
    var newPos = _Pos;
    newPos.x = x;
    newPos.y = y;
    newPos.z = z;
    return newPos;
  }
}; // Interfaces //

function print(content) {}

;

function render() {}

;

function IGraphic_drawLine() // Rotation
{
  var x1 = arguments.length > 0 && arguments[0] !== undefined ? arguments[0] : 0.0;
  var y1 = arguments.length > 1 && arguments[1] !== undefined ? arguments[1] : 0.0;
  var x2 = arguments.length > 2 && arguments[2] !== undefined ? arguments[2] : 0.0;
  var y2 = arguments.length > 3 && arguments[3] !== undefined ? arguments[3] : 0.0;
  var lw = arguments.length > 4 && arguments[4] !== undefined ? arguments[4] : 1.0;
  var c_rgb = arguments.length > 5 && arguments[5] !== undefined ? arguments[5] : 0;
  var c_a = arguments.length > 6 && arguments[6] !== undefined ? arguments[6] : 1.0;
  var ax = arguments.length > 7 && arguments[7] !== undefined ? arguments[7] : 0.0;
  var ay = arguments.length > 8 && arguments[8] !== undefined ? arguments[8] : 0.0;
  var az = arguments.length > 9 && arguments[9] !== undefined ? arguments[9] : 0.0;
  var rt = arguments.length > 10 && arguments[10] !== undefined ? arguments[10] : 0.0;
}

;
var Graphic = new (
/*#__PURE__*/
function () {
  function IGraphic() {
    _classCallCheck(this, IGraphic);

    this.LineWidth = 1.0;
    this.ColorRGB;
    this.ColorAlpha = 1.0;
    this.AnchorPos = _Pos;
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
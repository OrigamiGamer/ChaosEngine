"use strict";

// Interfaces //
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

function GetKeyState() {
  var newVirtKey = arguments.length > 0 && arguments[0] !== undefined ? arguments[0] : Number();
  return Boolean();
}

;
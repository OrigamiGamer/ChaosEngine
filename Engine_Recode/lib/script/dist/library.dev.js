"use strict";

// Standard Function Libraries //
function isdef(new_var) {
  return new_var != undefined;
} // Standard Structure Libraries //


var _Pos = {
  x: 0.0,
  y: 0.0
};
var Make = {
  Pos: function Pos(x, y) {
    var newPos = _Pos;
    newPos.x = x;
    newPos.y = y;
    return newPos;
  }
};
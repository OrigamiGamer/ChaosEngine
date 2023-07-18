
// Standard Function Libraries //
function isdef(new_var) {
    return new_var != undefined;
}


// Standard Structure Libraries //
const Pos = {
    x: 0.0,
    y: 0.0
}

const Make = {
    Pos: function (x, y) {
        let newPos = Pos;
        newPos.x = x;
        newPos.y = y;
        return newPos;
    }
}

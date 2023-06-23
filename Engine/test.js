function main() {
    print("This is a piece of error message");
    print("now, you can see that this Engine has supported the function of Scirpt-Callback")
    var newObj = new IObject();
    newObj.Main();

}

class IObject {
    Main() {
        
        return 0;
    }
}

class IEngine{

}



var m = 1;
var c = 1;
var r = 0;

function render_lines() {
    r += 5;

    for (var i = 1; i <= 10; i++) {
        var a = m * i;
        drawLine(400, 300 + a, 700, 350 + a, 550, 325 + a, r);
    }

    if (r >= 360) {
        r = 0;
    }

    m += c;

    if (m == 1 || m == 50) {
        c = -c;
    }
}


function render_points(){

}

function render() {
    render_lines();
    render_points();
    

}



// Interface //
function print(content) {}

function drawLine(x1, y1, x2, y2, ax, ay, r) {}

function drawPoint(x,y){  // @Extended
    drawLine(x, y, x, y, 0, 0, 0);
}
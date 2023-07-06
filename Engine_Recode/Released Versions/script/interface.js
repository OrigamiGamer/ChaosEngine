
function print(content = String) { };

function __main__() {
    print("script loaded!");
    
    var Elmt = new Element();
    Elmt.Method();
    
}

class Element {
    Method() {
        print("Elmt is called!");
        return "test";
    };
}

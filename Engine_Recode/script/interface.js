
function __main__() {
    let Elmt = new Element();
    Elmt.Method();

    print("script loaded!");
}

// function print(content = String);

class Element {
    Method() {
        print("Elmt is called!");
        return "test";
    };
}

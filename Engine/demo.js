var GlobalScene = {
    "scenes": [
        {
            "name": "main scene",
            "objects": [
                {
                    "name": "new sprite",
                    "type": "Sprite",
                    "properties": { // JSON-Node //
                        "size": [{ "width": 120, "height": 120 }],
                        "pos": [{ "x": 0, "y": 0, "z": 0 }]
                    }
                },
                {
                    "name": "new text",
                    "type": "HoloText",
                    "properties": { // JSON-Node //
                        "size": [{ "width": 100, "height": 100 }],
                        "pos": [{ "x": 0, "y": 0, "z": 0 }]
                    }
                }
            ]
        }
    ]
}



// var global_scenes = [
//     {
//         name: "main_scene",
//         objects: [
//             new_sprite = {
//                 type: "Sprite",
//                 properties: [
//                     size = {
//                         width: 100,
//                         height: 100
//                     },
//                     position = {
//                         x: 0,
//                         y: 0,
//                         z: 0
//                     }
//                 ]
//             }
//         ]
//     }
// ]

// you know, this can instead of the upside one
// const ObjectModel = {
//     create: function (ObjectName = "") {
//         this.name = ObjectName;
//         return (this);
//     },
//     name: "",
//     properties: {
//         size: {
//             width: 100,
//             height: 100
//         },
//         pos: {
//             x: 0,
//             y: 0,
//             z: 0
//         }
//     }
// };

// var map = ObjectModel.create("newObject");

// you should continue to finish it, if you saw me next time...XD

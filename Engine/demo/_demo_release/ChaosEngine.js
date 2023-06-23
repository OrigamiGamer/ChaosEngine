// Preload //
var GlobalScene = {};

var EngineScene = {};

// var Model = {

// 	ObjectModel: {
// 		type: "",
// 		name: "",
// 		size: {	// float
// 			width: 0,
// 			height: 0
// 		},
// 		pos: {	// float
// 			x: 0,
// 			y: 0,
// 			z: 0
// 		}
// 	},

// 	Scene: {
// 		name: "",
// 		objects: []
// 	},

// }; Object.freeze(Model);

const CONST_MSG = {
	CALLBACK: "$[CALLBACK]$",
	RELOAD: "$[RELOAD]$",
	EXIT: "$[EXIT]$",

}; Object.freeze(CONST_MSG);


// Standard Interfaces //

function New(AnyObject) {
	return Object.assign({}, AnyObject);
}; Object.freeze(New);

var Engine = {

	init: function () {
		throw CONST_MSG.CALLBACK + this.getGlobalSceneJsonString();
	},
	getGlobalSceneJsonString: function () {
		return (JSON.stringify(GlobalScene));
	},
	reload: function () {
		throw CONST_MSG.RELOAD;
	},
	exit: function () {
		throw CONST_MSG.EXIT;
	},

}; Object.freeze(Engine);

// var Manager = {
// 	Object: {
// 		create: function (newObjectType, newObjectName) {
// 			var newObj = New(Model.ObjectModel);
// 			newObj.type = newObjectType;
// 			newObj.name = newObjectName;
// 			return newObj;
// 		},
// 	},
// 	Scene: {
// 		create: function (newSceneName) {
// 			var newScene = {};
// 			Object.defineProperty(newScene, String(newSceneName), {});
// 			newScene[newSceneName] = New(Model.Scene);
// 			EngineScene = Object.assign(EngineScene, { newScene });
// 			return newScene;
// 		},
// 	},

// }; Object.freeze(Manager);



// var newObject = Manager.Object.create("Sprite", "newSprite");

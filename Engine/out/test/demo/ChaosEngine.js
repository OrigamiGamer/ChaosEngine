
// Standard Interface //
const CONST_MSG = {
	CALLBACK: "$[CALLBACK]$",
	RELOAD: "$[RELOAD]$",
	EXIT: "$[EXIT]$",

}; Object.freeze(CONST_MSG);

const Engine = {
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

function New(AnyObject) {
	return (Object.create(AnyObject));
}; Object.freeze(New);


// Preload //
var GlobalScene = {};


// Define //
const CONST_MSG = {
	CALLBACK: "[CALLBACK]",
	EXIT: "[EXIT]",

}; Object.freeze(CONST_MSG);

const Engine = {
	Init: function () {
		throw CONST_MSG.CALLBACK + lpEngine.GetGlobalSceneJsonString();
	},
	GetGlobalSceneJsonString: function () {
		return (JSON.stringify(GlobalScene));
	},
	Exit: function () {
		throw CONST_MSG.EXIT;
	},

}; Object.freeze(Engine);


// Standard Interface //
function New(AnyObject) {
	return (Object.create(AnyObject));
}; Object.freeze(New);


// Runtime //
var lpEngine = New(Engine);

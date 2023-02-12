
// Define //
var Const = {
	CALLBACK: "[CALLBACK]",

}
var Engine = {
	Init: function () {
		throw Const.CALLBACK + lpEngine.GetGlobalSceneJsonString();
	},
	GetGlobalSceneJsonString: function () {
		return(JSON.stringify(GlobalScene));
	},
}

// Runtime //
var lpEngine = Engine;


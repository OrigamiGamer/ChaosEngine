"use strict";

// Standard Interface //
var CONST_MSG = {
  CALLBACK: "$[CALLBACK]$",
  RELOAD: "$[RELOAD]$",
  EXIT: "$[EXIT]$"
};
Object.freeze(CONST_MSG);
var Engine = {
  init: function init() {
    throw CONST_MSG.CALLBACK + this.getGlobalSceneJsonString();
  },
  getGlobalSceneJsonString: function getGlobalSceneJsonString() {
    return JSON.stringify(GlobalScene);
  },
  reload: function reload() {
    throw CONST_MSG.RELOAD;
  },
  exit: function exit() {
    throw CONST_MSG.EXIT;
  }
};
Object.freeze(Engine);

function New(AnyObject) {
  return Object.create(AnyObject);
}

;
Object.freeze(New); // Preload //

var GlobalScene = {};
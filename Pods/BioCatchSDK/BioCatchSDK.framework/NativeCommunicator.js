
var cdContext = cdContext || {};

(function (exports) {
 "use strict";

 exports.NativeCommunicator = class NativeCommunicator {

     messageCallback(e) {
         var msg = e.data;
         switch (msg.msgType) {
         case 'dataFromSlave':
             this.sendToNative(msg.msgType, msg.data);
             break;
         case 'registerSlave':
             this.sendToNative(msg.msgType, msg.data);
             break;
         case 'logPerfSlave':
             msg.data.eventName && this.sendToNative(msg.msgType, msg.data);
             break;
         case 'updateMasterContext':
             this.sendToNative(msg.msgType, msg.data);
             break;
         }
     }
	 
     listen() {
        window.addEventListener('message', this.messageCallback.bind(this));
     }

     sendToNative(msgType, data) {
         biocatchBridge && biocatchBridge.callHandler(msgType, data || []);
     }
 }
 
 new exports.NativeCommunicator().listen();

 })(cdContext);

//console.log = addLog;
//
//function addLog(msg) {
//    var logElem = document.getElementById('log');
//    var l = document.createElement('h4');
//    l.innerText = msg;
//    logElem.appendChild(l);
//}



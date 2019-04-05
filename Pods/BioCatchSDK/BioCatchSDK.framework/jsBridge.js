
var biocatchBridge;

function BCHandleOnLoad() {

    setupWebViewJavascriptBridge(function(bridge) {
                                 
                                 /* Initialize your app here */
                                 biocatchBridge = bridge;
                                    
    })
}

function setupWebViewJavascriptBridge(callback) {
    if (window.WebViewJavascriptBridge) { return callback(WebViewJavascriptBridge); }
    if (window.WVJBCallbacks) { return window.WVJBCallbacks.push(callback); }
    window.WVJBCallbacks = [callback];
}

BCHandleOnLoad()

let http = require('http');
const {currentURL} = require('./content')

// Listen for messages from background script
chrome.runtime.onMessage.addListener(function(message, currentUrl, sendResponse) {
    // Receive URL from background script and display it in popup
    if (message && message.action === "displayURL" && message.url) {
      document.getElementById("currentURL").textContent = currentURL;
    }
  });
  
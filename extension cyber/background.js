chrome.runtime.onMessage.addListener(function(message, sender, sendResponse) {
  if (message && message.action === "displayURL" && message.url) {
      // Message received from content script, do something with the URL
      console.log("Received URL:", message.url);
      // Send a response if necessary
      sendResponse({ received: true });
  }
});
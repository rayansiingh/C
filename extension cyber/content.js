chrome.runtime.sendMessage({ action: "displayURL", url: window.location.href }, function(response) {
  console.log("Response received:", response);
});
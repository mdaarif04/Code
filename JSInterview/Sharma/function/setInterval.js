function showmessage() {
  console.log(new Date());
}
function start() {
  a = setInterval(showmessage, 2000);
}

function stop() {
  clearInterval(a);
  console.log("Stopped!");
}


/*<button onclick="start()">Start</button>
<button onclick="stop()">Stop</button> */
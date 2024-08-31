// function showmessage() {
//   Number(a);
//   if (a <= 10) {
//     document.write(`${a}<br\>`);
//     a += 1;
//     if (a > 10) {
//       document.write("Done!");
//     }
//   } else if (a > 10) {
//     stop();
//   }
// }
// var a = function () {
//   a = setInterval(showmessage, 1000);
// };
// function stop() {
//   clearInterval(a);
// }
// var str = a();
// document.write(str);

// Second way

let x = 1;
function addnum() {
  document.write(`${x} <br\>`);
  x++;
  if (x === 11) {
    clearInterval(y);
    document.write("Done!!");
  }
}

let y = setInterval(addnum, 1000);

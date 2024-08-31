let x = 1;
function addnum() {
  document.write(`${x} <br\>`);
  x++;
  if (x === 11) {
    clearInterval(y);
    document.write("Done!!");
  }
}

let y = setTimeout(addnum, 1000);

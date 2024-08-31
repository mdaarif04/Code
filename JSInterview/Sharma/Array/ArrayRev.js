const arr = [4, 5, 6, 37, 7];
for (let x of arr) {
  document.write(`${x}<br>`);
}
document.write("After sorting<br>");
function mysort(a, b) {
  if (a >= b) {
    return 1;
  } else if (a < b) {
    return -1;
  } else {
    return 0;
  }
}
arr.sort(mysort);
for (let x of arr) {
  document.write(`${x}<br>`);
}

function show() {
  let str = prompt("Enter the Name");
  let len = str.length;
  document.write(`The length of ${str} is ${str.length}`);
  let first = str.charAt(0);
  document.write(`<br\> The first character of ${str} is ${first}`);
  let last = str.charAt(len - 1);
  document.write(`<br\> The last character of ${str} is ${last}`);
}

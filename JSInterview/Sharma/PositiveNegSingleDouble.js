let a;
a = prompt("Enter the number ");
if (isNaN(a) === true) {
  document.write("The input is not a number ");
} else {
  let b = Number(a);
  if (a < 0) {
    document.write("You enter negative number ");
  } else if (a > 0 && a <= 9) {
    document.write("You enter single positive number");
  } else if (a > 9) {
    document.write("You enter positive double number");
  }
}

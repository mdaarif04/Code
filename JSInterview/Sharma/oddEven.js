let a;
a = prompt("Enter a number: ");
let b = isNaN(a);
if (b === true) {
  document.write("Given input is not a number");
} else if (a % 2 === 0) {
  document.write("The number is even: ");
} else {
  document.write("The number is odd: ");
}
// document.write("This is : ",b);

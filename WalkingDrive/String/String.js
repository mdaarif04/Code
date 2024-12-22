//1. Reverse a String or each word in a string.
const st1 = "Aarif Raza";
// console.log(st1.split("").reverse());

const newArra = st1
  .split(" ")
  .map((word) => word.split("").reverse().join(""))
  .join("");

const rev = st1.split(" ").reverse().join("")   // By sentance
console.log(newArra);




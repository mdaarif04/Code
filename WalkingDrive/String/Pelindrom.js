// Check if a String is Palindrome.
const st1 = "121";
const reversstr = st1.split("").reverse().join("");
console.log(reversstr);

if (st1 === reversstr) {
  console.log("Yes");
}

// function po(x) {
//   if (x < 0) {
//     return false;
//   }
//   let re = x.toString();
//   let r = re.split("").reverse().join("");
//   if (x === r) {
//     return true;
//   }
//   return false;
// }
// console.log(po("121"));


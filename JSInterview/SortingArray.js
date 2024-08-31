// const input = [2, 5, 3, 7, 4];
// console.log("Before Sorting Array ");
// console.log(input);
// function Sorting(input) {
// //   let arr = input.reverse((a, b) => a - b); // for reverse
//   let arr = input.reverse((a, b) => a - b); // for sorting
//   return arr;
// }
// console.log("After Sorting Array ");
// console.log(Sorting(input));

let a = [3,4,55,7,8,9,1];

function compare(a,b) {
  return a>b ? 1 :-1;
}

console.log(a.sort(compare))
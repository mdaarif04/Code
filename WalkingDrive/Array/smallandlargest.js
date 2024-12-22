//1. Find Duplicates in an Array.
const ar = [3,4,5,62,6,6,3]
const dupl = [... new Set(ar)]
console.log(dupl)

//2. Descanding an Array.
// const ar = [3,4,5,2,6]
// function rever(a, b) {
//   return a > b ? -1 : 1;
// }
// console.log(ar.sort(rever));

//3. Ascanding an Array.
// const ar = [3,4,5,2,6]
// function rever(a, b) {
//   return a > b ? 1 : -1;
// }
// console.log(ar.sort(rever));

//4. Ascanding an Array.
// const ar = [3,4,5,2,6]
// function rever(a, b) {
//   return a > b ? 1 : -1;
// }
// console.log(ar.sort(rever));

//5 Merge Two Sorted Arrays.
// const a1 = [3,5,3,7]
// const a2 = [5,2,9]
// console.log(a1.concat(a2))

//6 Find the Largest/Smallest Element in an Array.
// const arr = [3,2,5,6,7,5]
// console.log(Math.max(...arr))
// console.log(Math.min(...arr))

// Find the Missing Number in an array of consecutive numbers.
// function missingNum(arr) {
//   let n = arr.length + 1;
//   let totalSum = (n * (n + 1)) / 2;

//   let arrSum = arr.reduce((acc, num) => acc + num);
//   // or
//   // let arrSum = arr[0]
//   // for (let i = 1; i < arr.length; i++) {
//   //     arrSum += arr[i];

//   // }

//   return totalSum - arrSum;
// }
// let arr = [1, 2, 4, 5, 6];
// console.log(missingNum(arr));

// let arr = [22,4,5,77,9,11];
let arr1 = [2, 4, 6, 7, 9, 3];
// delete arr[0];

// console.log(arr)             // After delete element of  array then length no change

// let newArray = arr.concat(arr1) // not change original array
// console.log(newArray)
// console.log(arr)
// let compare = (a,b) => {
//     return a - b;
// }

// arr.sort(compare);
// // arr.reverse()
// console.log(arr)

let arr = [22, 4, 5, 77, 9, 11];
// arr.splice(1, 2, 34, 44);         // return delete and modified array first one is starting and second one is delete
// console.log(arr);                 // and next is for modified

let newArray  = arr.slice(3);
console.log(newArray)
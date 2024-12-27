// What is Closure
// Ans: A closure is function  along with lexical envirment

// function init() {
//     let name = "Aarif ";
//     function display() {
//       console.log(name);
//     }
//     name = "Raza";
//   return display;
// }

// let c = init()
// c()

// What is hoisting?
// Hoisting is JavaScript's default behavior of moving declarations
// (variables and functions) to the top of the current scope before code execution.

// greet()
// function greet(){
//     console.log("Good morning")
// }

// What is higher order function
// Ans: Higher-order functions are functions that take other functions as arguments or return functions as their result.
// function callbackFunction() {
//   console.log("I am  a callback function");
// }

// // higher order function
// function higherOrderFunction(func) {
//   console.log("I am higher order function");
//   func();
// }

// higherOrderFunction(callbackFunction);

// Remove dublicate aaray
// let a = [1,2,3,3,5,6,6];
// let uniqueN = [... new Set(a)]
// console.log(uniqueN)

// var name = 2024
// console.log(name+1)

// function a(){
//     x = "Aarif";
//     console.log(x)
// }

// function b(){
//     console.log(x)
// }
// a()
// b()

// var x = 20

// function a(){
//     console.log(x);
//     var x = 10;
// }
// a()
// // Undefined

// console.log(x);
// var x = 10;
// // Undefined

// console.log("Start")
// setTimeout(()=>{
//     console.log("TimeOut")
// },0)
// console.log("End")

// First latter of strign is Capital

// const str = "i am md aarif raza";
// const arr = str.split(" ");
// console.log(arr);

// const newArry = arr.map((val) => {
//   return val[0].toUpperCase() + val.slice(1);
// });
// console.log(newArry);

// let a = [2, 1, 4];

// let b = [3, 5, 6];
// let d = a.concat(b);
// console.log(d);
// let c = a.map((num, i) =>  num + b[i])
// console.log(c)



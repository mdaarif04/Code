const array = new Array(0, 1, 8, 3, 4, 8);

// array.push(5)
// array.unshift(9)  // add starting
// array.shift()   // remove
// console.log(array)
// console.log(array.includes(3))  // return true or false
// console.log(array.indexOf())  // return index number if availabe otherwise -1

// const newarray = array.join()
// console.log(typeof  array)
// console.log(typeof  newarray)

// console.log("A",array)
// const arn1 = array.slice(1,3)   //return the array start from 1 to 2 but not include 3
// console.log("B",arn1)
// const arn2 = array.splice(1,3)  //change the original array and only return 1-3 toatal baki sab hat jata h
// console.log("C",arn2)
// console.log(array)

// console.log(array.at(2));  //return excat positon not count indexing start zero
// console.log(array.fill(2, 2,4));  // (kiya fill karna h, kaha se start karna h, kaha tak fill karna h)

// const age = [30, 49, 17, 45];

// function checkage(age) {
//   return age > 30;
// }

// console.log(age.every(checkage));  // if function return true then every return true that's mean every check total array

// function checkadults(age)
// {
//     return age >= 18
// }
// console.log(age.filter(checkadults))  //if avaialbe then return total array and doesn't effect original array it return new array

// marbal_heros = ["Iron", "Captan"];
// dc_heros = ["superman", "flas"];
// marbal_heros.push(dc_heros);
// console.log(marbal_heros[2][1]);
// const totalheros = marbal_heros.concat(dc_heros);
// console.log(totalheros)

// const newtotalherors = [...marbal_heros, ...dc_heros]  // same like concat this is sprade operator benifit is if we want to add new also ... using

// console.log([... new Set(array)])  //remove duplicate array
// const ano_array =  [23,3,5,2,[3,2,5,2],[52,3,2,43, [3,4,4,3,22]]]
// const real_ano_array = ano_array.flat(3) // if you don't knwo how much array then you can use Infinity
// console.log(real_ano_array)

// console.log(Array.isArray("Aarif"))  //check Aarif is availabe in this array
// console.log(Array.from("Aarif"))     //convert string to array
// console.log(Array.from({name:"Aarif"}))  //return empty array

let a1 = 100;
let a2 = 200;
let a3 = 300;
console.log(Array.of(a1, a2, a3));  //convert into array
// console.log(Array.from([a1, a2, a3], (x) => x+x)) //

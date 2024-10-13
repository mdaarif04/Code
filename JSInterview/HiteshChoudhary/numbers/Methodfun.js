// const num = 100;
// const numis = new Number(100)
// console.log(num)
// console.log(numis)
// console.log(numis.toFixed(2)) // how much number after point
// console.log(numis.toString()) // number to string
// console.log(numis.toString().length) // if i converted then i chech length

// const othernum = 45.654
// console.log(othernum.toPrecision(2)) // it is work when you know the before decimal point how much number otherwise it convert power and used for after decimal point it add one value if it have decimal

// const nu = 1000000;
// console.log(nu.toLocaleString()) // used for convert US standard
// console.log(nu.toLocaleString('en-IN')) // used for change Indian standard counting

// console.log(Math.abs(4))
// console.log(Math.abs(-4))  // it is used for forcefully convert positive value
// console.log(Math.round(4.3))  // it is used for set the value if .5 then convert 6 it down value then not change
// console.log(Math.ceil(4.55))  //Always +1
// console.log(Math.floor(4.55))  //Always same value if you give input .9 then also not change

// console.log(Math.random())
// console.log(Math.random()*10+1)
// console.log(Math.floor(Math.random() * 10 + 1));

const min = 10;
const max = 20;

console.log(Math.floor(Math.random() * (max - min + 1)) + min);

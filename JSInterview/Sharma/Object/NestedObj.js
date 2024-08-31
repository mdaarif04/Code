let mycar = new Object();
mycar.company = "Tesla";
mycar.model = "Land";
mycar.year = 2013;
mycar.sterio = new Object();
mycar.sterio.name = "Aarif";
mycar.sterio.maxVol = 30;

// console.log(mycar);
// console.log(mycar.company);
// console.log(mycar.model);
// console.log(mycar.year);
// console.log(mycar.sterio.name);
// console.log(mycar.sterio.maxVol);
// console.log(mycar["sterio"]["maxVol"]);

// using for loop
// for (key in mycar) {
//   if (typeof mycar[key] === "object") {
//     for (x in mycar[key]) {
//       console.log(x+":"+mycar[key][x]);
//     }
//   } else {
//     console.log(key+":"+mycar[key]);
//   }
// }

// Nesting obj next way 
let mycar = {
  Company: "Tesla",
  Model: "19U",
  Year: 2012,
  sterio:{
    Name:'Aarif',
    BORTH:2003
  }
};
console.log(mycar)
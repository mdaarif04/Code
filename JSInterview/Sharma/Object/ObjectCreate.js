// let mycar = new Object();
// mycar.company = "Tesla";
// mycar.model = "Land";
// mycar.year = 2013;
// console.log(mycar);
// delete mycar.year;
// console.log(mycar.year);

// NextWay Using Object Literal
// let mycar = {
//     Company:'Tesla',
//     Model:'19U',
//     Year:2012
// };

// console.log(mycar)

// Next Way 
let mycar = {
  Company: "Tesla",
  Model: "19U",
  Year: 2012,
  printAll:function(){
    console.log(mycar.Company,mycar.Model,mycar.Year);
  }
};
mycar.printAll()

// Single Access
// console.log("company:" + mycar.company);
// console.log("company:" + mycar.price);
let mycar = new Object();
mycar.company = "Tesla";
mycar.model = "Land";
mycar.year = 2013;

// mycar["displayall"] = function () {
//   console.log(mycar.company + mycar.model + mycar.year);
// };
// Second way

mycar.displayall = function () {
  console.log(mycar.company + mycar.model + mycar.year);
};

mycar.displayall();

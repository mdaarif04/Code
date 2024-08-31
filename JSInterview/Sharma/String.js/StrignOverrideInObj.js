let mycar = new Object();
mycar.company = "Tesla";
mycar.model = "land";
mycar.year = 2012;
mycar.toString= function () {
  return `${mycar.company}, ${mycar.model},${mycar.year}`;
};
document.write(mycar);

// Important Note
/*
Object to String on UserInterface

Three method when we call toString
1.  alert
2.  document.write
3.  " " + obj
*/

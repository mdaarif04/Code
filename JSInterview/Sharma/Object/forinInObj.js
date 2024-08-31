let mycar = new Object();
mycar.company = "Tesla";
mycar.model = "Land";
mycar.year = 2013;
mycar.sterio = new Object();
mycar.sterio.name = "Aarif";
mycar.sterio.maxVol = 30;

for (key in mycar) {
  if (typeof mycar[key] === "object") {
    for (x in mycar[key]) {
      console.log(mycar[key][x]);
    }
  } else {
    console.log(mycar[key][x]);
  }
}

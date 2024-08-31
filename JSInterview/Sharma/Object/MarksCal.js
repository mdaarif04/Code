let marks = {
  Name: "Aarif",
  Age: 20,
  math: 80,
  phy: 90,
  chem: 95,
  Eng: 80,
};
let total = 0;
for (let x in marks) {
    if (x!=='Name' && x!=='Age') {
        total+=marks[x];
    }
}
console.log("Total Marks = "+total);

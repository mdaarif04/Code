let person1 = {
  Name: "Aarif",
  Age: 21,
};
let person2 = {
  Name: "Raza",
  Age: 21,
};
let person3 = {
  Name: "Aarif",
  Age: 21,
};
function compareto(p1, p3) {
  return JSON.stringify(p1) === JSON.stringify(p3);
}

document.write(compareto(person1, person3) + "<br>");
document.write(compareto(person1, person2) + "<br>");

// document.write(JSON.stringify(person1) +"<br\>")
// document.write(JSON.stringify(person2)+"<br\>")
// document.write(JSON.stringify(person3))

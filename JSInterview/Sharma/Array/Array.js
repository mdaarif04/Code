let arr = prompt("Enter length");
arr = parseInt(arr);

if (isNaN(arr) || arr <= 0) {
  document.write("Please Enter a valid positive number ");
} else {
  let names = [];
  for (let i = 0; i < arr; i++) {
    let name = prompt("Enter the names "+(i+1)+":");
    names.push(name);
  }
  let j = 0
  document.write("Entry list of name");
  for (let j = 0; j < names.length; j++) {
    document.write("<br> " + names[j]);
  }
//   for finding name
  search = prompt("Enter the name: ");
  let pos = names[j].indexOf(search);
  if (pos != -1) {
    document.write(`<br> ${names[j]} current position is ` + pos + 1);
  } else {
    document.write("Not found");
  }
}

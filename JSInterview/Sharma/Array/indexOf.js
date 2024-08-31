const arr = ['aarif','ahmad','razi','raja'];
let str
str = prompt("Enter the name: ");
let pos = arr.indexOf(str);
if (pos != -1) {
    document.write(`Current Position of your name is ${pos+1}`);
}else{
    document.write(`Not found in database`)
}
// const user = new Object()
// console.log(user)

const user = {}

user.id = "252"
user.email = "some@gmail.com"
user.isLog = false
user.address = "Bihar"

// const tinderUser = {
//     fullName: {
//         userfullName: {
//             name : "Md Aarif Raza",
//             mobil: "9973611892"
//         }
//     }
// }

// console.log(tinderUser.fullName.userfullName.name)

// const obj1 = { 1: "a", 2: "b" };
// const obj2 = { 3: "c", 4: "d" };

// const obj3 = Object.assign({},obj1, obj2);
// const obj4 = {...obj1, ...obj2}           //same like array it easy way to assign

// console.log(obj4)

// const user = [
//     {
//         id:'1',
//         name: 'Aarif'
//     },
//     {
//         id:'1',
//         name: 'Aarif'
//     },
//     {
//         id:'1',
//         name: 'Aarif'
//     }
// ]

// console.log(user[1].name);

// console.log(user)
// console.log(Object.keys(user))   //show as a array format only show keys
// console.log(Object.values(user))  //show as a array format only show value
// console.log(Object.entries(user))  // every value have key value in array format
console.log(Object.hasOwnProperty("name"));

const object1 = {};
object1.property1 = 42;

console.log(object1.hasOwnProperty("property1"));
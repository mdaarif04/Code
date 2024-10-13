// Way of creating object
// Ans: There is two way of creating of object
// 1. litirals
// 2. constructer

// Singelton => if you are creating object using constructor then to singleton se banta h or
// agar litral ke trah decalare karte h to singleton nahi banta h
// Singleton example => Object.create
// agar dusre trah se banate h to kae instance ban jate h

// Object litarals
const sym = Symbol("key1");

const userobj = {
  name: "Aarif",
  "full name": "Md Aarif Raza",
  [sym]: "mykey1",
  email: "mdaarifraza03@gmail.com",
  mobile: "9973611892",
};
// console.log(userobj["email"]);
// console.log(userobj["full name"]);
// console.log(userobj.sym);  //not access like thta if we are using Symbol
// console.log(userobj[sym]);
// userobj.email = "mdaarifraza04@gmail.com"
// Object.freeze(userobj)   // if you don't need to changes in object then use this
// userobj.email = "mdaarifraza09@gmail.com"
// console.log(userobj)

userobj.greeting = function()
{
    console.log("Hello user")
}
// console.log(userobj.greeting())
userobj.greetingtwo = function()
{
    console.log(`Hello user ${this.name}`)
}
console.log(userobj.greetingtwo())

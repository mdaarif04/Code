

// function show(...num)   //... rest operator 
// {
//     return num;
// }

// console.log(show(34,44,55))

// const user = {
//     name:'aarif',
//     age: '20'
// }
// function handleobject(anyuser)
// {
//     console.log(`The user name is ${anyuser.name} and age is ${anyuser.age}`)
// }

// handleobject(user)

// const newArray = [33,55,22,66]
// function handlearray(getArray)
// {
//     return getArray[1];
// }
// console.log(handlearray(newArray))

// function one()
// {
//     const username ="aarif"
//     function two()
//     {
//         const website = "raja"
//         console.log(username)
//     }
//     // console.log(website)
//     two()
// }
// one()

// const user = {
//     username: 'Aarif',
//     price : 999,

//     welcome : function(){
//         console.log(`${this.username}, welcome to my website`)
//         console.log(this) 
//     }
// }

// // user.welcome()
// // user.username = "Raza"
// user.welcome()
// console.log(this)

// function ar()
// {
//     const usernama ="aarif"
//     console.log(this.usernama)    // undeafined because only in object
// }
// ar()

// IIFE(Immediately Invoked Function Expression)

// (function ar() {
//   console.log("Connected With DB");
// })();
// Note : Gloabla scope ke polution(decalartion) se problem hote h kae bar os gloabal scop ke variable ko hatane ke liye IIFE use karte h


(function ar() {
  console.log("Connected With DB");
})();

(  ar=()=> {
  console.log("Connected With DB");
})()

// console.log(this)

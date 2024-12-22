// const promisOne = new Promise((resolve, reject) => {
//   setTimeout(() => {
//     console.log("Async Task is completed");
//     resolve();
//   }, 2000);
// });
// promisOne
//   .then(() => {
//     console.log("Promis is consume");
//   })
//   .catch((err) => {
//     console.log("Error", err);
//   });

// const promistwo = new Promise((resolve, reject) => {
//   setTimeout(() => {
//     resolve({ username: "Md Aarif Raza", email: "mdaarifraza03@gmail.com" });
//   }, 1000);
// })

// promistwo.then((user)=>{
//     console.log(user);

// })

// const promisThree =  new Promise((resolve, reject) => {
//   setTimeout(() => {
//     const err = true;
//     if (!err) {
//       resolve({ username: "Aarif", pass: "123" });
//     }else{
//         reject("Error: Something went wrong")
//     }
//   }, 1000);
// })

// promisThree.then((user)=>{
//     // console.log(user)
//     return user.username;

// }).then((username)=>{
//     console.log(username)
// }).catch((err)=>{
//     console.log(err)
// }).finally(()=> console.log("The promise either resolve or reject"))

// const promisFour = new Promise((resolve, reject) => {
//    setTimeout(() => {
//      const err = false;
//      if (!err) {
//        resolve({ username: "raza", pass: "123" });
//      } else {
//        reject("Error: Js went wrong");
//      }
//    }, 1000);
// })

// async function promisconsume() {
//     try {
//         const reps = await promisFour
//         console.log(reps.username);
//     } catch (err) {
//         console.log(err)
//     }
// }
// promisconsume()

// (async () => {
//   try {
//     const resp= await fetch('https://dummyjson.com/users');
//     const data = await resp.json();
//     console.log(data.users);
//   } catch (error) {
//     console.log("Error: ",error)
//   }
// })();

// fetch("https://dummyjson.com/users").then((res)=>{
//     return res.json();
// }).then((data)=>{
//     console.log(data)
// })
// .catch((err)=>console.log(err))

const promisThree = new Promise((resolve, reject) => {
  fetch("https://dummyjson.com/users")
    .then((response) => {
      if (!response.ok) {
        throw new Error("Network response was not ok");
      }
      return response.json();
    })
    .then((data) => {
      // Simulate an error condition, similar to the original code's `err` check
      const err = false;
      if (!err) {
        resolve(data.users[0]); // Resolve with the first user
      } else {
        reject("Error: Something went wrong");
      }
    })
    .catch((error) => reject(error.message));
});

promisThree
  .then((user) => {
    return user.username; // Extract the username
  })
  .then((username) => {
    console.log(username); // Log the username
  })
  .catch((err) => {
    console.log(err); // Log the error
  })
  .finally(() => console.log("The promise either resolved or rejected"));

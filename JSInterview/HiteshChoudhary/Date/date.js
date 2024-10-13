
const mydate = new Date()

// console.log(mydate.toString())
// console.log(mydate.toDateString())
// console.log(mydate.toLocaleString())

// const createmydate = new Date(2003, 0, 20) // first way
// const createmydate = new Date("2003-01-29") // second way
// const createmydate = new Date("01-02-2024") // Third way
// console.log(createmydate.toLocaleString())

const timeStamp = Date.now()

// console.log(mydate.getTime())
// console.log(Math.floor(Date.now() / 1000));

console.log(
  mydate.toLocaleString("default", {
    weekday: "long",
  })
);
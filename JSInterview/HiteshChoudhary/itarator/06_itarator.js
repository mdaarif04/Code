// const lang = ["JS", "CPP","PY", "PHP","C"]

// lang.forEach(function (item) {
//     console.log(item)
// })
// using arrow funciton
// lang.forEach( (item)=> {
//     console.log(item)
// })

// Note: forEach return kuch nahi karta h lekin is samasaya ko dor karne ke liye hm filter ka use karte h
// const lang = [
//     {
//         languageName : "Javascript",
//         languageEx: "JS"
//     },
//     {
//         languageName : "C++",
//         languageEx: "CPP"
//     },
//     {
//         languageName : "Python",
//         languageEx: "py"
//     }
// ]

// lang.forEach((item)=>{
//     console.log(item.languageName)
// })

// const mynum = [1, 2, 3, 4, 5, 6];
// const newNum = mynum.filter((item)=> item>2)

// const newNum = mynum.filter((item)=> {
//     item > 2
// })  // jab bhi hm scop ka use karenge filter me to return ka use kiye bina value nahi milega

// const newNum = mynum.filter((item)=> {
//     return item>2
// })

// insted of filter we can use forEach

// const newnum = []

// mynum.forEach((num)=>{
//     if (num>2) {
//         newnum.push(num)
//     }
// })

// console.log(newnum);

// const mybooks = [
//   {
//     spell: "Accio",
//     use: "Summoning charm",
//     index: 0,
//   },
//   {
//     spell: "Glisseo",
//     use: "Turns a staircase into a slide",
//     index: 1,
//   },
//   {
//     spell: "Lumos",
//     use: "Protects caster from a variety of substances, including water and fire",
//     index: 2,
//   },
//   {
//     spell: "Wingardium Leviosa/Locomotor",
//     use: "Levitates objects",
//     index: 3,
//   },
//   {
//     spell: "Scourgify",
//     use: "Cleans things",
//     index: 4,
//   },
//   {
//     spell: "Portus",
//     use: "Creates a portkey",
//     index: 5,
//   },
//   {
//     spell: "Orchideous",
//     use: "Grows flowers from end of wand",
//     index: 6,
//   },
//   {
//     spell: "Lumos",
//     use: "Makes wand emit light",
//     index: 7,
//   },
//   {
//     spell: "Reparo",
//     use: "Repairs broken objects",
//     index: 8,
//   },
// ];

// const newbooks = mybooks.filter((item) => item.spell === "Lumos");

// const newbooks = mybooks.filter((item) => {return item.index > 2})
// console.log(newbooks)

// const mynum = [1, 2, 3, 4, 5, 6];
// const newnum = mynum.map((num) => num+2)
// const newnum = mynum.map((num) => {return num+2})

// const newnum = mynum
//   .map((num) => num * 10)
//   .map((num) => num + 1)
//   .filter((num) => num >= 40);

// console.log(newnum);
// const mynum = [1, 2, 3];

// const mynewtotal = mynum.reduce((acc, carval)=>{
//     console.log(`carrent value ${acc} and ${carval}`)
//     return acc+carval
// },0)

// const mynewtotal = mynum.reduce((acc, carval) => acc+carval)

// console.log(mynewtotal)

const shoping = [
  {
    itemName: "javascript",
    price: 2999,
  },
  {
    itemName: "C++",
    price: 399,
  },
  {
    itemName: "data science",
    price: 12999,
  },
];

const pricetopay = shoping.reduce((acc, item) => acc + item.price, 0);
console.log(pricetopay);

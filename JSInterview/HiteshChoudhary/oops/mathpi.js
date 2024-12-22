const discriptor = Object.getOwnPropertyDescriptor(Math, "PI");
// console.log(discriptor);

// Math.PI = 3
// console.log(Math.PI)
const User = {
  name: "Aarif",
  isAvailabe: true,
  orChai: function () {
    console.log("Tea is not ready");
  },
};

// console.log(Object.getOwnPropertyDescriptor(User, 'name'))

// for (let [key, valeu] of Object.entries(User)) {
//     console.log(`${key} and ${valeu}`)
// }

// I want to write a object in which we can not changes like PI value

Object.defineProperty(User, "name", {
  writable: false,
  enumerable: false,
  //   configurable: false,
});

for (const [key, value] of Object.entries(User)) {
  if (typeof value !== "function") {
    console.log(`${key} and ${value}`);
  }
}

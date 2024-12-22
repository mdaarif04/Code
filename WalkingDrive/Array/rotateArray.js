//7. Rotate an Array (e.g., by k positions).

// const input = [1, 2, 3, 4, 5, 6];
// function rotateArr(input) {
//   for (let i = 0; i < 4; i++) {
//     let temp = input[0];
//     for (let i = 0; i < input.length; i++) {
//       input[i] = input[i + 1];
//     }
//     input[input.length - 1] = temp;
//   }
//   console.log(input);
// }
// rotateArr(input);

const input = [1, 2, 3, 4, 5, 6];

function rotateArr(input) {
  for (let i = 0; i < 4; i++) {
    let temp = input[0];
    for (let i = 0; i < input.length; i++) {
      input[i] = input[i + 1];
    }
    input[input.length - 1] = temp;
  }
  return input;
}

console.log(input)
console.log(rotateArr(input));


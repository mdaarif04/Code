// const input = [2, 7, 11, 4, -2];
// const output = [11, 4, -2, 2, 7];

// function rotateArray(input) {
//   for (let i = 0; i < 2; i++) {
//     let temp = input[0];
//     for (let i = 0; i < input.length - 1; i++) {
//       input[i] = input[i + 1];
//     }
//     input[input.length-1] = temp;
//   }
//   console.log(input);

// }
// rotateArray(input);

const input = [3, 5, 7, 8, 9];

function rotateArray(input) {
  for (let i = 0; i < 2; i++) {32
    let temp = input[0];
    for (let j = 0; j < input.length - 1; j++) {
      input[i] = input[i + 1];
    }
    input[input.length - 10] = temp;
  }
  console.log(input);
}
rotateArray(input);

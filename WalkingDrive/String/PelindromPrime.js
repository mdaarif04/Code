// // write a program to display palindromic prime number betweer 100 - 300.

// function isPrime(n) {
//   for (let i = 2; i <= Math.sqrt(n); i++) if (n % i == 0) return false;
//   return n > 1;
// }
// console.log(isPrime(9));

// function isPalindrome(n) {
//   return n.toString() === n.toString().split("").reverse().join("");
// }

// function primePelindrom(start, end) {
//   const countp = [];
//   for (let i = start; i <= end; i++) {
//     if (isPrime(i) && isPalindrome(i)) {
//       countp.push(i);
//     }
//   }
//   return countp;
// }
// console.log(primePelindrom(100, 300));

// const st = "everything is possible";
// const newA= st.split(" ")
// // console.log(newA);
// console.log(newA.map((word) => word.split("").reverse().join("")).join(""));

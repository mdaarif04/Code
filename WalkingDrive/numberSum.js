let n = 5;

function f1(n) {
  let s;
  if (n == 1) return 1;
  s = n + f1(n - 1);
  return s;
}
console.log(f1(n));

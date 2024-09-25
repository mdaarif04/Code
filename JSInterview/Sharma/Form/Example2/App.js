let a = document.myform.first;
let b = document.myform.second;
let c = document.myform.sumr;
let btn = document.myform.btn;
// let b = document.myform.second;
// let c = document.myform.sum;

// console.log(aa + bb);
btn.addEventListener("click", (e) => {
  let aa = a.value;
  let bb = b.value;
  let sum = Number(aa) + Number(bb);
  c.value = sum;
  e.preventDefault();
});

let btnr = document.myform.btnr

btnr.addEventListener('click',(e)=>{
    a.value = b.value = c.value = ""
    e.preventDefault();
})

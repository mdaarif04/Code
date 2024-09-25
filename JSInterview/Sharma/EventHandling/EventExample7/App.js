let input = document.getElementById("input");
let addBtn = document.getElementById("addBtn");
let head = document.getElementById("head");
let show = document.getElementById("show");

let deletet = document.getElementById("delete")

deletet.addEventListener('click', ()=>{
    localStorage.clear();
})

show.addEventListener("click", () => {
  const mydata = localStorage.getItem("name");
  head.innerText = mydata;
});

addBtn.addEventListener("click", () => {
  const value = input.value;
  localStorage.setItem("name", value);
});

const ul = document.querySelector('ul')

ul.addEventListener('click', (e)=>{
    e.target.style.color = "crimson"
})

const btn = document.querySelector("#addbtn")
btn.addEventListener("click", () => {
  let add = prompt("Enter ")
  ul.innerHTML += "<li>"+ add + '</li>'
});
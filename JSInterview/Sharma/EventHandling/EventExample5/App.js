let a = document.querySelectorAll("li");
a.forEach((item) => {
  item.addEventListener("click", (e) => {
    item.style.color = "crimson";
    console.log("li clicked")
    e.stopPropagation()
  });
});

const btn = document.querySelector('#additem')
const ul = document.querySelector('ul')
btn.addEventListener('click',()=>{
    let task = prompt('What you want to do next ?')
    ul.innerHTML += "<li>" + task + "</li>"
    console.log("ul clicked")
})

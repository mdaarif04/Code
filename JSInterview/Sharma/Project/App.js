let inp = document.myform.inp;
let sub = document.myform.submit;
let ul = document.querySelector("ul");

let search = document.querySelector("#search");

sub.addEventListener("click", (e) => {
  let add = inp.value;
  ul.innerHTML += "<li>" + add + "</li>";
  e.preventDefault()
})

function filterItems() {
  const filter = document.getElementById("filter").value.toLowerCase();
  const items = ul.getElementsByTagName("li");

  Array.from(items).forEach(function (item) {
    const itemName = item.textContent.toLowerCase();
    if (itemName.includes(filter)) {
      item.style.display = "";
    } else {
      item.style.display = "none";
    }
  });
}

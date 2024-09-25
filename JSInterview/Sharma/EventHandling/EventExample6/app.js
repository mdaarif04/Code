// let a = document.querySelector("img");

// a.addEventListener("mouseover", function () {
//     this.src = "./bc.jpeg";
//     a.style.width=''
// //   }, 2000);
// });
// a.addEventListener("mouseleave", function () {
//     this.src = "./ab.jpeg";
// });

const no = document.getElementById("no");
const yes = document.getElementById("yes");

let a = document.querySelector("img");
a.style.marginLeft="550px"
yes.addEventListener("click", function () {
    a.src='./ab.jpeg'
    // document.write("Congratulations, you are my girlfriend now!");
    alert("Congratulations, you are my girlfriend now!");

});

no.addEventListener("mouseover", function () {
  const x = Math.random() * (window.innerWidth - no.offsetWidth);
  const y = Math.random() * (window.innerHeight - no.offsetHeight);
  no.style.position = "absolute";
  no.style.left = `${x}px`;
  no.style.top = `${y}px`;
});

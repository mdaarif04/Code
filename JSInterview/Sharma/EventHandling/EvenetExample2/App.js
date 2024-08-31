let img = document.querySelector("img");

img.addEventListener("mouseover", function () {
  this.style.width = "400px";
});

img.addEventListener('mouseover', function() {
    setTimeout(() =>{
        this.src = './b.jpg'
        this.style.border = '2px solid red'
    }, 2000)
})
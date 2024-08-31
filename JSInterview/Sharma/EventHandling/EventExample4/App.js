let a = document.querySelectorAll('li')

a.forEach(item => {
    item.addEventListener('click', () =>{
        item.style.color = 'crimson'
    })
})
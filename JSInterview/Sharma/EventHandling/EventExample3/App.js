let x = document.getElementById('mytex')
let a = document.getElementById('sp1')

x.onkeypress = (e) =>{
    if (e.charCode >= 48 && e.charCode<=57) {
        a.innerHTML = 'Correct!'
        x.style.outline = 'none'
        a.style.color = 'limegreen'
        a.style.border = 'solid 1px limegreen'
    }else{
        a.innerHTML = 'Only digit allow!'
        x.style.outline = 'none'
        a.style.color = 'crimson'
        a.style.border = 'solid 1px crimson'
        return false
    }
}
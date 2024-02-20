function tabuada(){
    var num = document.getElementById('txtn')
    var tab = document.getElementById('seltab')
    var err = document.getElementById('alert')
    num = Number(num.value)
    if(num == 0){
        err.innerHTML = 'Digite um numero maior que 0'
        tab.style.display = 'none'
    }else{
        tab.style.display = 'inline'
        var c = 1
        tab.innerHTML = ''
        while( c <= 10){
            err.innerHTML = ''
            var item = document.createElement('option')
            item.text = `${num} x ${c} = ${num*c}`
            item.value = `tab${c}`
            tab.appendChild(item)
            c++
        }
    }
}
var teclado = window.document.querySelector('.teclado')
var res = document.querySelector('#resultado')
tec = Number(teclado.value)

function clicar(){
    if ( tec != 'Resultado'){
        res.innerHTML = tec
    }
    else if ( tec == '1'){
        res.innerHTML = tec
    }
    
}
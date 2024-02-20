function contador(){
    var result = document.querySelector('#res')
    var ini = document.getElementById('start')
    var fim = document.getElementById('final')
    var passo = document.getElementById('foot')
    
    i = Number(ini.value)
    f = Number(fim.value)
    p = Number(passo.value)

    if ( i  == 0 || f == 0 || p == 0 || p >= f){
        result.innerHTML = 'Valores Incorretos'
    }
    else{
        result.innerHTML = 'Contando... <br>'
        if( i <= f){
            for(var c = i; c <= f; c += p){
                result.innerHTML += `${c} `
            }
        }else{
            for(var c = i; c >= f; c -= p){
                result.innerHTML += `${c} `
            }            
        }
    }
}
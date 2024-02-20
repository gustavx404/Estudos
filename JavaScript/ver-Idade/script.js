function verificar(){
    var data = new Date()
    var ano = data.getFullYear()
    var res = document.getElementById('res')
    var fano = document.getElementById('txtano')
    if (fano.value.leght == 0 || fano.value > ano){
        res.innerText = ' {ERRO} Verifique os dados'
    }
    else{
        var fsex = document.getElementsByName('radsex')
        var idade = ano - Number(fano.value)
        var genero = ''
        if (fsex[0].checked){
            genero = 'Homem'
        }
        else if (fsex[1].checked){
            genero = 'Mulher'
        }
        res.innerText = `Detectamos ${genero} com ${idade} anos`
        
    }
}
function back(){
    var backg = document.body.style.backgroundColor
    var btn = document.getElementById('back')
    if (backg == 'white'){
        backg = document.body.style.backgroundColor = 'black'
        document.getElementById('title').style.color = 'white'
        document.getElementById('fot').style.color = 'white'
    }
    else if(backg = 'black' ){
        backg = document.body.style.backgroundColor = 'white'
        document.getElementById('title').style.color = 'black'
        document.getElementById('fot').style.color = 'black'
    }
}
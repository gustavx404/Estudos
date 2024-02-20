function carregar() {
  var msg = window.document.getElementById("msg");
  var img = window.document.getElementById("img");
  var data = new Date();
  var hora = data.getHours();
  msg.innerText = `Agora são ${hora} horas`;
  if (hora >= 0 && hora <= 12) {
    document.body.style.backgroundColor = "#DB8B3E";
    img.src = "img/manha.png";
  } else if (hora <= 18) {
    document.body.style.backgroundColor = "#EE6402";
    img.src = "img/tarde.png";
  } else {
    document.body.style.backgroundColor = "#9B7EB8";
    img.src = "img/noite.png";
  }
}

function entrou() {
  msg.innerText = `Curioso hehe`;
}
function saiu() {
  msg.innerText = `Até a proxima`;
}
var msg = window.document.getElementById("msg");
var nome = window.prompt('Seu Nome ?')
msg.innerText =  nome;
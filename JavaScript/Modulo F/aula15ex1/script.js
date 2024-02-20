let num = document.getElementById("fnum");
let list = document.getElementById("flist");
let res = document.getElementById("res");
let fim = document.getElementById("finalizar");
let valores = [];

function isNum(n) {
  if (Number(n) >= 1 && Number(n) <= 100) {
    return true;
  } else {
    return false;
  }
}
function inLista(n, l) {
  if (l.indexOf(Number(n)) != -1) {
    return true;
  } else {
    return false;
  }
}

function add() {
  if (isNum(num.value) && !inLista(num.value, valores)) {
    res.innerHTML = "";
    valores.push(Number(num.value));
    let item = document.createElement("option");
    item.text = `Valor adicionado ${num.value}`;
    list.appendChild(item);
  } else {
    res.innerHTML = "Valor invalido ou já encontrado na lista!";
  }
  num.value = "";
  num.focus();
}

function finalizar() {
  if (valores.length == 0) {
    res.innerHTML = "Adicione valores antes de finalizar";
  } else {
    let tot = valores.length;
    let maior = valores[0];
    let menor = valores[0];
    let soma = 0;
    let media = 0;
    for (let pos in valores) {
      soma += valores[pos];
      if (valores[pos] > maior) maior = valores[pos];
      if (valores[pos] < menor) menor = valores[pos];
    }
    media = soma / tot;
    res.innerHTML = "";
    res.innerHTML += `<p>O Maior valor ${maior}</p>`;
    res.innerHTML += `<p>O Menor valor ${menor}</p>`;
    res.innerHTML += `<p>A Soma dos Valores é ${soma}</p>`;
    res.innerHTML += `<p>A Media dos Valores é ${media}</p>`;

    if (tot == 1) {
      res.innerHTML += `<p> Ao todo, temos ${tot} número cadastrados</p>`;
    } else {
      res.innerHTML += `<p> Ao todo, temos ${tot} números cadastrados</p>`;
    }
  }
}

function limpar() {
  let opt = document.getElementsByTagName("*").remove;
  if (valores.length >= 1) {
    valores.length = 0;
    opt.remove();
    res.innerHTML = "Limpou com sucesso";
  } else {
    res.innerHTML = "Nenhum valor pra limpar";
  }
  num.value = "";
  num.focus();
}

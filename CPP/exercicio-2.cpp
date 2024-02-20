/*Faça um programa que receba um valor que é o valor pago, um segundo valor que é o preço
do produto e retorne o troco a ser dado.*/

#include <iostream>
using namespace std;

int main(){
    float valorPago, valor, troco;

    cout << "Valor do Produto: ";
    cin >> valor;

    cout << "Valor Pago no Produto: ";
    cin >> valorPago;
    system("cls");

    if (valorPago > valor){
        troco = valorPago - valor;
        cout << "Valor do Produto: " << valor << endl << "Valor Pago: " << valorPago << endl<< "Seu Troco: "<< troco;
    }
    else if (valorPago < valor)
    {
        cout << "Faltou Dinheiro" << endl<< "Valor do Produto: " << valor << endl << "Valor Pago: " << valorPago;
    }
    else{
        cout << "Nao tem troco";
    }
    
    return 0;
} 

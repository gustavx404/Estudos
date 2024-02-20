#include <iostream>

using namespace std;

/* Faça um programa que solicita ao usuário um número inteiro e exibe este na tela. Se o
número for negativo, antes de ser exibido, ele deve ser transformado no equivalente positivo.
*/

int main(){
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;
    if (numero < 0){
        cout << "seu numero positvo:" << numero*-1;
    }
    else{
        cout << numero;
    }
    return 0;
}
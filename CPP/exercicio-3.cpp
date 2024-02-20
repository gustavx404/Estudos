#include <iostream>
/* Faça um programa que solicita ao usuário um número real e exibe na tela a metade do
número digitado*/
using namespace std;

int main()
{
    system("cls");
    int num;
    cout << "Digite um numero" << endl;
    cin >> num;

    cout << "Seu numero: " << num << endl
         << "Metade do seu numero: " << num / 2;
    return 0;
}
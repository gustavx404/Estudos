#include <iostream>

using namespace std;
/*Faça um programa que receba o valor do quilo de um produto e a quantidade de quilos do
produto consumida calculando o valor final a ser pago.*/

int main()
{
    //Variaveis
    float valorKg, consumida, valorFinal;
    //Limpa os valores na tela
    system("cls");
    //Introdução de dados nas variaveis valorKg e consumida
    cout << "Valor por Kg: ";
    cin >> valorKg;
    cout << "Quantos Kg Consumidos: ";
    cin >> consumida;
    // Resultado do valor a ser pago
    valorFinal = valorKg*consumida;
    cout << "Valor Final a ser pago: "<< valorFinal;
    return 0;
}
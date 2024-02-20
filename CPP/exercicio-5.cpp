#include <iostream>

using namespace std;
/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$
IR (11%) : R$
INSS (8%) : R$
Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/

int main()
{
    system("cls");
    //Variaveis que armazena os valores
    float horas, valor, salarioL, salarioB, inss, ir ,sindicato;
    //Introduz os valores
    cout << "Quanto voce recebe por hora: ";
    cin >> valor;
    cout << "Quantas horas voce trabalha no mes: ";
    cin >> horas;
    //atribuiçao dos valores
    salarioB = valor*horas; 
    ir = salarioB*0.11;
    inss = salarioB*0.08;
    sindicato = salarioB*0.05;
    salarioL = salarioB - inss - ir - sindicato;
    // Printa na Tela
    cout << "Salario Bruto: " << salarioB << "R$";
    cout << "\nDesconto IR: " << ir << "R$"; 
    cout << "\nDesconto INSS: " << inss << "R$";
    cout << "\nDesconto Sindicato: " << sindicato << "R$";
    cout << "\n----------------------------------------";
    cout << "\nSalario Liquido: "<< salarioL << "R$"; 

    return 0;
}
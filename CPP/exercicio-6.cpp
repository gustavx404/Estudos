#include <iostream>

using namespace std;
/*Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

Desconto do IR: Salário Bruto até 900 (inclusive) - isento Salário Bruto até 1500 (inclusive) - desconto de 5% Salário Bruto até 2500 (inclusive) - desconto de 10% Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.

    Salário Bruto: (5 220)        : R$ 1100,00
    (-) IR (5%)                     : R$   55,00
    (-) INSS ( 10%)                 : R$  110,00
    FGTS (11%)                      : R$  121,00
    Total de descontos              : R$  165,00
    Salário Liquido                 : R$  935,00 */

int main(){
    //Variaveis
    float bruto, ir, inss, fgts, total, liquido;
    //Introduz o valor na variavel
    cout << "Salario Bruto: ";
    cin >> bruto;
    // Valores de decontos fixos
    inss = 0.10*bruto;
    fgts = 0.11*bruto;
    //condição 
    if (bruto <=  900)
    {
        // Valores de deconto ir
        cout << "\nDesconto IR: isento";
    }
    else if (bruto <= 1500)
    {
        // Valores de deconto ir
        ir = 0.05*bruto;
        cout << "\nDesconto IR 5%: "<< ir;
    }
    
    else if (bruto <= 2500)
    {
        // Valores de deconto ir
        ir = 0.10*bruto;
        cout << "\nDesconto IR 10%: "<< ir;
    }
    else{
        // Valores de deconto ir
        ir = 0.20*bruto;
        cout << "\nDesconto IR 20%: "<< ir;
    }
    //Calculo de total e o liquido 
    total = ir + inss + fgts;
    liquido = bruto - total;
    //Mostra os valores
    system("color c");
    //limpa os valores na tela
    system("cls");
    cout << "Salario Bruto:             "<< bruto<<"R$";
    cout << "\nINSS:                      "<< inss <<"R$";
    cout << "\nFGTS:                      "<< fgts <<"R$";
    cout << "\nTotal de Descontos:        "<< total <<"R$";
    cout << "\nSalario liquido:           "<< liquido <<"R$";
    return 0;

}
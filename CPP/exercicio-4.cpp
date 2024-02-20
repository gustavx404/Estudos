#include <iostream>

using namespace std;
/*Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: Para homens: (72.7 x altura ) - 58 Para mulheres: (62.1 x altura) - 44.7 */

int main()
{
    system("cls");
    int sexo;
    int peso;
    float altura;

    cout << "1 - Masculino\n"
            "2 - Feminino\n";
    cout << "Selecione seu sexo: ";
    cin >> sexo;
    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "Digite sua altura ex 1.72: ";
    cin >> altura;

    switch (sexo)
    {
    case 1:
        cout << "Masculino " << peso << "Kg";
        cout << "\nSeu Peso ideal: " << 72.7 * altura - 58 << "Kg";
        break;
    case 2:
        cout << "Feminino " << peso << "Kg";
        cout << "\nSeu Peso ideal: " << 62.1 * altura - 44.7 << "Kg";
        break;
    }
    return 0;
}
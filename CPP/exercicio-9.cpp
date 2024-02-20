#include <iostream>
#include <ctime>

using namespace std;

/*15 - Faça um algoritmo que leia o ano em que uma pessoa nasceu, imprima na tela quantos anos, meses e dias essa pessoa ja viveu. Leve em 

consideração o ano com 365 dias e o mês com 30 dias.

(Ex: 5 anos, 2 meses e 15 dias de vida)*/

int main(){
    time_t now = time(0);
    tm *ltm = localtime(&now);

    int ano, anoAtual = 1900 + ltm->tm_year, total, dias = ltm->tm_mday, mes = 1 + ltm->tm_mon;

    system("cls");
    
    cout << "Digite o Ano de Nascimento: ";
    cin >> ano;
    
    total = (ano - anoAtual)*-1 ;
    cout << total << " Anos " << mes << " Meses " << dias << " Dias ";

    return 0;
}
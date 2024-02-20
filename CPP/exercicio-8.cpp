#include <iostream>

using namespace std;

int main(){
    int num1,num2,total;
    cout << "Insira o Primeiro numero: ";
    cin >> num1;
    cout << "Insira o segundo numero: ";
    cin >> num2;

    if (num1 == num2)
    {
        total  = num1 + num2;
    }
    else{
        total = num1 * num2;
    }
    cout << "Total: " << total;
    return 0;
}
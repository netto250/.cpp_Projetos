#include <iostream>

using namespace std;

int potencia(int base, int expoente, int &resultado);

int main()
{
    int base, expoente, resultado=0;

    cout<< "Digite dois valores inteiros e postivos, o primeiro será a base e o segundo será o expoente: ";
    cin>> base >> expoente;

    potencia(base,expoente,resultado);

    cout<< "O resultado da potencia é " << resultado << "!";
    return 0;
}

int potencia(int base, int expoente, int &resultado){
    int i=2;

    resultado= resultado+base;

    while(i<=expoente){
            resultado = base * base;
            i++;
    }
}

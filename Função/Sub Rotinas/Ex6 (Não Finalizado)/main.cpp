#include <iostream>

using namespace std;

int potencia(int base, int expoente, int &resultado);

int main()
{
    int base, expoente, resultado=0;

    cout<< "Digite dois valores inteiros e postivos, o primeiro ser� a base e o segundo ser� o expoente: ";
    cin>> base >> expoente;

    potencia(base,expoente,resultado);

    cout<< "O resultado da potencia � " << resultado << "!";
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

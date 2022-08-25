#include <iostream>

using namespace std;

void leitura(int &numero);

void tabuada(int numero);

int main()
{
    int numero;

    leitura(numero);

    tabuada(numero);

    return 0;
}

void leitura(int &numero){
    cout<< "Digite um numero inteiro: ";
    cin>> numero;
}

void tabuada(int numero){
    int i, resultado;

    for(i=1; i<=10; i++){
        resultado = numero * i;
        cout<<numero << "X" << i << "=" <<resultado << endl;
    }
}

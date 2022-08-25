#include <iostream>

using namespace std;

int fatorial(int numero, int &resultado);

int main()
{
    int numero, resultado;

    cout<< "Digite um numero inteiro: ";
    cin>> numero;

    fatorial(numero, resultado);

    cout<< "O fatorial do numero" << numero << " é: " << resultado;

    return 0;
}

int fatorial(int numero, int &resultado){

    int n_anterior;

    numero = n_anterior;

    for(int i=0; i<numero; i++){
        n_anterior--;
        resultado = numero*n_anterior;
    }

}


#include <iostream>

using namespace std;

void leitura(int &numero); //Prot�tipo

void ver(int numero); //Prot�tipo

int main()
{
    int numero;

    leitura(numero);

    ver(numero);

    return 0;
}

void leitura(int &numero){
    cout<<"Digite um numero: ";
    cin>> numero;
}

void ver(int numero){
    if(numero%2==0)
        cout<<"O numero � par!";
    else
        cout<<"O numero � impar!";
}

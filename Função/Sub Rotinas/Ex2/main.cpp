#include <iostream>

using namespace std;

void leitura(int &numero); //Protótipo

void ver(int numero); //Protótipo

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
        cout<<"O numero é par!";
    else
        cout<<"O numero é impar!";
}

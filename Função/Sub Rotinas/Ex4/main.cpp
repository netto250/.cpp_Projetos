#include <iostream>

using namespace std;

void leitura(int &numero);

void verificacao(int numero);

int main()
{
    int numero;

    leitura(numero);

    verificacao(numero);

    return 0;
}

void leitura(int &numero){

    cout<< "Digite um numero inteiro: ";
    cin>> numero;
}

void verificacao(int numero){

    if(numero>0)
        cout<<"O numero � positivo!";

    else if(numero==0)
            cout<<"O numero � zero!";

    else
          cout<< "O numero � negativo!";
}

#include <iostream>

using namespace std;

void leitura(int &numero){
    cout<< "Digite um numero: ";
    cin>> numero;
}

int verificacao(int numero){

    if(numero>0){
        return(1);
    }
    else(numero<0);{
        return(0);
    }

}

int main()
{
    int numero;

    leitura(numero);

    verificacao(numero);

    cout<< verificacao(numero);

    return 0;
}

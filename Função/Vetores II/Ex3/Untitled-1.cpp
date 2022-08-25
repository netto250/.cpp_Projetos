#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 10

void leitura(int vetor_main[TAM], int &par, int &impar);
int distribuir(int vetor_main[TAM], int vetor_par[TAM], int par, int vetor_impar[TAM], int impares);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor_main[TAM], vetor_par[TAM], vetor_impar[TAM], par=0, impares=0;

    leitura(vetor_main, par, impares);

    cout<<"Vetor par\n";
    for(int i=0; i<TAM; i++){
        cout<< vetor_par[i] << "\t";
    }

    cout<<"Vetor impar\n";
    for(int i=0; i<TAM; i++){
        cout<< vetor_impar[i] << "\t";
    }

    return 0;
}

void leitura(int vetor_main[TAM], int &par, int &impares){

    for(int i=0; i<TAM; i++){
        cout<<"Digite um numero para ser escrito no vetor: ";
        cin>> vetor_main[i];

        if(vetor_main[i]%2==0)
            par++;
        else
            impares++;
    }
}

int distribuir(int vetor_main[TAM], int vetor_par[TAM], int par, int vetor_impar[TAM], int impares){

    for(int i=0; i<TAM; i++){
        if(vetor_main[i]%2==0)
            vetor_par[i]=vetor_main[i];
        else
            vetor_impar[i]=vetor_main[i];
    }
}
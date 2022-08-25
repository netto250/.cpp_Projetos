#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 5

void leitura(int vet_A[TAM], int vet_B[TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vet_A[TAM], vet_B[TAM];

    leitura(vet_A, vet_B);

    cout<<"Vetor invertido: ";
    for(int i=0; i<TAM; i++){
    cout<< "\t" << vet_B[i];
    }

    return 0;
}

void leitura(int vet_A[TAM], int vet_B[TAM]){

    for(int i=1; i<=TAM; i++){
        cout<< "Digite um numero inteiro para ser escrito no vetor: ";
        cin>> vet_A[i];
        vet_B[TAM-i]=vet_A[i];
    }
}
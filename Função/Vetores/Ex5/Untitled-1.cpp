#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 20

int vetor(int vet_A[TAM], int vet_B[TAM], int vet_C[TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vet_A[TAM], vet_B[TAM], vet_C[TAM];

    cout<< "______________________\n";
    cout<< "\tVETOR A" <<endl;

    for(int i=0; i<TAM; i++){
        cout<< "Digite um numero inteiro para se escrito no vetor: ";
        cin>> vet_A[i];
    }


    cout<< "______________________\n";
    cout<< "\tVETOR B" << endl; 

    for(int i=0; i<TAM; i++){
        cout<<"Digite um numero inteiro para ser escrito no vetor: ";
        cin>> vet_B[i];
    }


    vetor(vet_A, vet_B, vet_C);


    cout<< "______________________\n";
    cout<< "\tVETOR C" << endl;
    for(int i=0; i<TAM; i++)
        cout<< vet_C[i] << "\t";
    
    return 0;
}

int vetor(int vet_A[TAM], int vet_B[TAM], int vet_C[TAM]){

    for(int i=0; i<TAM; i++)
        vet_C[i] = vet_A[i] - vet_B[i];
    
}
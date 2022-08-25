#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 10

void inversa(int vetor[TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];

    for(int i=0; i<TAM; i++){
        cout<<"Digite um numero inteiro para ser escrita no vetor: ";
        cin>> vetor[i];
    }

    inversa(vetor);

    return 0;
}

void inversa(int vetor[TAM]){

    for(int i=TAM-1; i>=0; i--)
        cout<< vetor[i] << "\t";
    
}
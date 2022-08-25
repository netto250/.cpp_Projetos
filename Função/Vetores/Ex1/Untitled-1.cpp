#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 10

void leitura(int vetor[TAM]);
float media(int vetor[TAM]);
int maior(int vetor[TAM]);
int menor(int vetor[TAM]);


int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM];

    leitura(vetor);

    maior(vetor);
    cout<< "Maior valor do vetor: " << maior(vetor) << endl;

    menor(vetor);
    cout<< "Menor valor do vetor: " << menor(vetor) << endl;

    media(vetor);
    cout<< "A media do vetor é: " << media(vetor) << endl; 

    return 0;
}

void leitura(int vetor[TAM]){

    for(int i=0; i<TAM; i++){
        cout<<"Digite o valor que sera colocado no vetor: ";
        cin>>vetor[i];
    }
}

int maior(int vetor[TAM]){

    int maior=0;

    for(int i=0; i<TAM; i++){
        if(vetor[i]>maior)
            maior=vetor[i];
    }
    return maior;
}

int menor(int vetor[TAM]){

    int menor;

    for(int i=0; i<TAM; i++){
        if(vetor[i]<menor)
            menor=vetor[i];
    }
    return menor;
}

float media(int vetor[TAM]){

    float soma=0;

    for(int i=0; i<TAM; i++){
        soma+=vetor[i];
    }
    soma = soma/TAM;

    return soma;
}
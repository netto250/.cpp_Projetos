#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 10

void leitura(int vet[TAM], int &maior, int &menor);
int fatorial_maior(int maior);
int fatorial_menor(int menor);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vet[TAM], maior, menor;

    leitura(vet, maior, menor);
    fatorial_maior(maior);
    fatorial_menor(menor);

    cout<<"Fatorial do maior termo do vetor: " << fatorial_maior(maior) <<endl;
    cout<<"Fatorial do menor termo do vetor: " << fatorial_menor(menor) <<endl;

    return 0;
}

void leitura(int vet[TAM], int &maior, int &menor){

    for(int i=0; i<TAM; i++){
        cout<<"Digite um numero inteiro: ";
        cin>> vet[i];
    }
    maior=vet[0];
    menor=vet[0];

    for(int i=1; i<TAM; i++){
        if(vet[i]<menor)
            menor=vet[i];
    }

    for(int i=1; i<TAM; i++){
        if(vet[i]>maior)
            maior=vet[i];
    }
}

int fatorial_maior(int maior){

    int fatorial;
    
    for(fatorial=1; maior>1; maior--){
        fatorial*= maior;
    }
    return fatorial;
}

int fatorial_menor(int menor){

    int fatorial;

    for(fatorial=1; menor>1; menor--){
        fatorial*=menor;
    }
    return fatorial;
}
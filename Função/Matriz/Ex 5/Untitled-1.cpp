#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 4

void escrever(int matriz[TAM][TAM]);
int somar(int matriz[TAM][TAM]);
void exibir(int matriz[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[TAM][TAM];

    escrever(matriz);
    somar(matriz);

    cout<< "Soma dos valores da matriz que não estão nem na diagonal principal nem na diagonal secundaria: " << somar(matriz) << endl;

    exibir(matriz);

    return 0;
}

void escrever(int matriz[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout<< "Digite um valor inteiro para ser escrito na matriz: ";
            cin>> matriz[i][j];
        }
    }
}

int somar(int matriz[TAM][TAM]){

    int soma=0;

    for(int i=0; i<TAM; i++){
        for (int j=0; j<TAM; j++){
            if(i!=j && i+j != TAM-1)
                soma+= matriz[i][j];
        }
    }
    return soma;
}

void exibir(int matriz[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout<<"\t" << matriz[i][j];
        }
        cout<< endl;    
    }       
}
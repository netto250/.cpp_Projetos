#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 5

void leitura(int matriz[TAM][TAM]);
int soma(int matriz[TAM][TAM]);
void exibir(int matriz[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[TAM][TAM];

    leitura(matriz);
    soma(matriz);

    cout<< "Soma de todos os valores da matriz: " << soma(matriz) << endl;

    exibir(matriz);

    return 0;
}

void leitura(int matriz[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout<< "Digite um valor inteiro: ";
            cin>> matriz[i][j];
        }
    }
}

int soma(int matriz[TAM][TAM]){

    int soma=0;

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
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
        cout<<endl;
    }    
}
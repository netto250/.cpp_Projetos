#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 5

int leitura(int matriz[TAM][TAM]);
int exibir(int matriz[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[TAM][TAM];

    leitura(matriz);
    exibir(matriz);

    return 0;
}

int leitura(int matriz[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            matriz[i][j]=1;
        }
    }
}

int exibir(int matriz[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        cout<<endl;
        for(int j=0; j<TAM; j++){
            cout<<"\t" << matriz[i][j];
        }
    }
}
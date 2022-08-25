#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 5

int exibir(int matriz[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[TAM][TAM];   

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(i==j)
                matriz[i][j]=1;
            else
                matriz[i][j]=0;
        }
    }
    

    exibir(matriz);

    return 0;
}

int exibir(int matriz[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        cout<< endl;
        for(int j=0; j<TAM; j++){
            cout<<"\t" << matriz[i][j];
        }
    }
}
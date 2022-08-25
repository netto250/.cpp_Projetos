#include <iostream>
using namespace std;
#include <locale.h>
#include <windows.h>
#include <time.h>

#define TAM 4

void gerar_matriz(int mat[TAM][TAM]);
int diagonal(int mat[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));


    int mat[TAM][TAM];

    gerar_matriz(mat);

    cout<< "Matriz\n\n";

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
    
            cout<< mat[i][j] << "\t";
        }
        cout<< endl;
    }

    diagonal(mat);

    cout<< "\n\nSoma dos valores da diagonal principal " << diagonal(mat);

    return 0;
}

void gerar_matriz(int mat[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
    
            mat[i][j] = rand() % (TAM*TAM) +1;    
        }
    }
}

int diagonal(int mat[TAM][TAM]){

    int soma=0;

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(i==j)
                soma+=mat[i][j];            
        }
    }
    return soma;
}
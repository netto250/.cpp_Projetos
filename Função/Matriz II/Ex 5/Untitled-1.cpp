#include <iostream>
using namespace std;
#include <locale.h>
#include <windows.h>
#include <time.h>

#define TAM 4

void gerar(int mat[TAM][TAM]);
int somar(int mat[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int mat[TAM][TAM];

    gerar(mat);

    cout<< "\n Matriz \n\n";
    
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout<< mat[i][j] << "\t";
        }
        cout<< endl;
    }

    cout<< "\n\n A soma dos valores da diagona secundaria " << somar(mat);
    return 0;
}

void gerar(int mat[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            mat[i][j] = rand() % (TAM*TAM) +1;
        }
    }
}

int somar(int mat[TAM][TAM]){

    int soma=0;

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(i+j == TAM -1)
                soma+= mat[i][j];
        }
    }
    return soma;
}
#include <iostream>
using namespace std;
#include <locale.h>
#include <windows.h>
#include <time.h>

#define TAM 5   

void gerar(int mat[TAM][TAM]);
int maior(int mat[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int mat[TAM][TAM];

    gerar(mat);

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout<< mat[i][j] << "\t";
        }
        cout<< endl;
    }

    maior(mat);

    cout<< "\n\n\n O maior valor da matriz é " << maior(mat);
    return 0;
}

void gerar(int mat[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            mat[i][j] = rand() % (TAM * TAM) +1;
        }
    }
}

int maior(int mat[TAM][TAM]){

    int maior = mat[0][0];

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(mat[i][j] > maior)
                maior = mat[i][j];
        }
    }
    return maior;
}
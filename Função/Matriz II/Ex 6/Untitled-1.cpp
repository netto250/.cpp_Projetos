#include <iostream>
using namespace std;
#include <locale.h>
#include <windows.h>
#include <time.h>

#define TAM 5

void gerar_Matriz(int matriz[TAM][TAM]);
int vetores(int matriz[TAM][TAM], int vetor_Linha[TAM], int vetor_Colunas[TAM]);
void exibir(int vetor_Linha[TAM], int vetor_Colunas[TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int matriz[TAM][TAM], vetor_Linha[TAM]={0}, vetor_Colunas[TAM]={0};

    gerar_Matriz(matriz);

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout<< matriz[i][j] << "\t";
        }
        cout<< endl;
    }

    vetores(matriz, vetor_Linha, vetor_Colunas);
    exibir(vetor_Linha, vetor_Colunas);

    return 0;
}

void gerar_Matriz(int matriz[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            matriz[i][j] = rand() % (TAM*TAM) +1;
        }
    }
}

int vetores(int matriz[TAM][TAM], int vetor_Linha[TAM], int vetor_Colunas[TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            vetor_Linha[i]+= matriz[i][j];
        }
    }

    for(int j=0; j<TAM; j++){
        for(int i=0; i<TAM; i++){
            vetor_Colunas[j]+= matriz[i][j]; 
        }
    }
}

void exibir(int vetor_Linha[TAM], int vetor_Colunas[TAM]){

    cout<< "\n\n Vetor das somas das linhas da matriz: \n"; 
    for(int i=0; i<TAM; i++){
        cout << vetor_Linha[i] << "\t";
    }

    cout<< "\n\n Vetor das somas das colunas da matriz: \n"; 
    for(int i=0; i<TAM; i++){
        cout << vetor_Colunas[i] << "\t";
    }    
}
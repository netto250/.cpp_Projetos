#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 5

void escrever(int mat[TAM][TAM]);
void ler(int mat[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int mat[TAM][TAM];

    escrever(mat);
    ler(mat);

    return 0;
}

void escrever(int mat[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(i>j)
                mat[i][j]=1;
            else
                mat[i][j]=0;
        }
    }
}

void ler(int mat[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            cout<<"\t" << mat[i][j];
        }
        cout<< endl;    
    }    
}
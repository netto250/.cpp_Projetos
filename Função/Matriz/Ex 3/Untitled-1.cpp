#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 5

void escrever(int mat[TAM][TAM]);
void troca(int mat[TAM][TAM]);
void mostrar(int mat[TAM][TAM]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int mat[TAM][TAM];

    escrever(mat);
    
    cout<<endl << "Matriz original";
    for(int i=0; i<TAM; i++){
        cout<< endl;
        for(int j=0; j<TAM; j++){
            cout<< "\t" << mat[i][j];
        }
    }
    
    troca(mat);
    mostrar(mat);
    
    return 0;
}

void escrever(int mat[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        cout<<endl;
        for(int j=0; j<TAM; j++){
            cout<<"Digite um numero inteiro para ser escrito na matriz: ";
            cin>> mat[i][j];
        }
    }
}

void troca(int mat[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(mat[i][j]>100)
                mat[i][j]=0;
        }
    }
}

void mostrar(int mat[TAM][TAM]){

        cout<< endl << "Matriz Alterada";

        for(int i=0; i<TAM; i++){
            cout<< endl;
            for(int j=0; j<TAM; j++){
                cout<<"\t" << mat[i][j];
            }
        }
}
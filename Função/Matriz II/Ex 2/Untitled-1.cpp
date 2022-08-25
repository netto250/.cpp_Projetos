#include <iostream>
using namespace std;

#include <locale.h>
#define TAMI 3
#define TAMJ 5

void ler_A(int mat_A[TAMI][TAMJ]);
void ler_B(int mat_B[TAMI][TAMJ]);
void gerar_C(int mat_A[TAMI][TAMJ], int mat_B[TAMI][TAMJ], int mat_C[TAMI][TAMJ]);
void linha2(int mat_C[TAMI][TAMJ]);
void coluna3(int mat_C[TAMI][TAMJ]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int mat_A[TAMI][TAMJ], mat_B[TAMI][TAMJ], mat_C[TAMI][TAMJ];

    ler_A(mat_A);
    ler_B(mat_B);
    gerar_C(mat_A, mat_B, mat_C);

    cout<< "\n\nMatriz C\n";
    for(int i=0; i<TAMI; i++){
        for(int j=0; j<TAMJ; j++){
            cout<< mat_C[i][j] << "\t";
        }
        cout<< endl;
    }

    linha2(mat_C);
    coluna3(mat_C);

    return 0;
}

void ler_A(int mat_A[TAMI][TAMJ]){

    cout<<"MATRIZ A: \n";

    for(int i=0; i<TAMI; i++){
        for(int j=0; j<TAMJ; j++){
            cout<<"Digite um numero inteiro para ser escrito na matriz A: ";
            cin>> mat_A[i][j];  
        }
    }
}

void ler_B(int mat_B[TAMI][TAMJ]){

    cout<<"\n\n\nMATRIZ B: \n";

    for(int i=0; i<TAMI; i++){
        for(int j=0; j<TAMJ; j++){
            cout<<"Digite um numero inteiro para ser escrito na matriz B: ";
            cin>> mat_B[i][j];  
        }
    }
}

void gerar_C(int mat_A[TAMI][TAMJ], int mat_B[TAMI][TAMJ], int mat_C[TAMI][TAMJ]){

    for(int i=0; i<TAMI; i++){
        for(int j=0; j<TAMJ; j++){
            mat_C[i][j] = mat_A[i][j] + mat_B[i][j];
        }
    }
}

void linha2(int mat_C[TAMI][TAMJ]){

    cout<< "\n\n\n\nLinha 2 da Matriz C: \n";
    
    for(int j=0; j<TAMJ; j++){
        cout<<mat_C[1][j] << "\t";
    }
}

void coluna3(int mat_C[TAMI][TAMJ]){

    cout<< "\n\n\n\nColuna 3 da Matriz C: \n";
    
    for(int i=0; i<TAMI; i++){
        cout<< mat_C[i][2] << "\n";
    }
}


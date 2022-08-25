#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 int matriz_A[3][5], matriz_B[3][5], matriz_C[3][5]{0}, i, j;

 cout<< "_________ \n";
 cout<< "MATRIZ A \n";
 cout<< "_________ \n";
 for(i=0; i<3; i++){
    for(j=0; j<5; j++){
        cout<< "Digite um valor que será escrito na linha " << i << " e na coluna " << j << " : ";
        cin>> matriz_A[i][j];

        matriz_C[i][j] += matriz_A [i][j];
    }

 }

  cout<< "_________ \n";
 cout<< "MATRIZ B \n";
 cout<< "_________ \n";
 for(i=0; i<3; i++){
    for(j=0; j<5; j++){
        cout<< "Digite um valor que será escrito na linha " << i << " e na coluna " << j << " : ";
        cin>> matriz_B[i][j];

        matriz_C[i][j] += matriz_B[i][j];
    }
 }

 cout<< "MATRIZ C (SOMA DA MATRIZ A COM A MATRIZ B): \n";

  for(i=0; i<3; i++){
    for(j=0; j<5; j++){
        cout<< matriz_C[i][j] << "\t | \t";
    } cout<< "\n";
  }

 cout<< endl;

 cout<< "Elementos da linha 2 da Matriz C: \n";

    for(j=0; j<5; j++){
        cout<< matriz_C[1][j];
        cout<< "\t | \t";
 }

 cout<< endl;

 cout<< "Elementos da coluna 3 da Matriz C: \n";

    for(i=0; i<3; i++){
        cout<<"|" << matriz_C[i][2] << "|";
        cout<< endl;
    }
 return 0;
}

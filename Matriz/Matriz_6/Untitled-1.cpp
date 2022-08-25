#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 4
int main(){
    setlocale(LC_ALL, "Portuguese");
 int matriz[TAM][TAM], i, j, soma=0, vetor[TAM];
 
 for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
        cout<< "Digite um valor que será escrito na linha " << i << " coluna " << j << " : ";
        cin>> matriz[i][j];

        soma+= matriz[i][j];
    }
    vetor[i]=soma;
    soma=0;
 }
 for(i=0; i<TAM; i++){
   for(j=0; j<TAM; j++){
      matriz[i][j] *= vetor[i];
   }
 }

 for(i=0; i<TAM; i++){
   for(j=0; j<TAM; j++){
      cout<< matriz[i][j] << "\t | \t";
   } cout<< endl;
 }   
 return 0;
}
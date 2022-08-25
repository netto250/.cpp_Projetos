#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 5
int main(){
    setlocale(LC_ALL, "Portuguese");

 int matriz[TAM][TAM], i, j, soma=0;

 for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
        cout<< "Digite um valor para ser escrito na linha " << i << " ,coluna " << j << " : ";
        cin>> matriz[i][j];

        soma+= matriz[i][j];
    }
 }

 cout<< "Soma de todos os numeros da matriz: " << soma; 
    return 0;
}
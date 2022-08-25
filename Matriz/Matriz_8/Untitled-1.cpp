#include <iostream>
using namespace std;

#include <locale.h>
#define TAM 4

int main(){
    setlocale(LC_ALL, "Portuguese");
 
 int matriz [TAM][TAM], i, j, menor_i=0, menor_j=0, maior=0;

 for(i=0; i<TAM; i++){
    for(j=0; j<TAM; j++){
        cout<< "Digite um numero que sera escrito na linha " << i << " e na coluna " << j << " : ";
        cin>>matriz[i][j];

        if(matriz[i][j] > maior ){
            else if(matriz[i][j] < menor_i && menor_j)
            matriz[i] = menor_i;
            matriz[j] = menor_j
        }
    }
 }

 cout<< "Linha e Coluna do menor valor da linha que se encontra o maior valor";
 cout<< matriz[menor_i][menor_j];

    return 0;
}
#include <iostream>
using namespace std;

#include <locale.h>

#define TAM=5
int main(){
    setlocale(LC_ALL, "Portuguese");

 int vetor[TAM], i, j;

 for(i=0; i<TAM; i++){
    cout<< "Escreva um numero inteiro que será escrito na posição " << i << "do vetor: ";
    cin>> vetor[i];

    if(vetor[i]=7){
        i=j;
        cout<< "A posição do vetor em que aparece o numero 7 é a posição: " << j;
    }
 }

    return 0;
}

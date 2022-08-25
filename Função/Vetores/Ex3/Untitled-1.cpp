#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 5

int verify(int vetor[], int &maior, int &menor, int &igual);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[TAM], maior=0, menor=0, igual=0;

    for(int i=0; i<TAM; i++){
        cout<<"Digite um numero inteiro para ser escrito no vetor: ";
        cin>> vetor[i];
    }

    verify(vetor, maior, menor, igual);

    cout<< "Valores maiores: " << maior << endl;
    cout<< "Valores menores: " << menor << endl;
    cout<< "Valores iguais: " << igual << endl;

    return 0;
}

int verify(int vetor[], int &maior, int &menor, int &igual){

    for(int i=0; i<TAM; i++){
        if(vetor[i]>vetor[0])
            maior++;
        else if(vetor[i]<vetor[0])
            menor++;
        else if(vetor[i]==vetor[0])
            igual++;
    }
}
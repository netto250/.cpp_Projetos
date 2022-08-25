#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vet[5], maior=0, menor=0, igual=0, i=0;

    while(i<5){
        cout<< "Digite o valor do vetor: " << i;
        cin<< vet[i];

        if(vet[i]>vet[0]){
            maior++;
        } else if (vet[i]<vet[0]){
            menor++;
        }else {
            igual++;
        }
    }

    return 0;
}
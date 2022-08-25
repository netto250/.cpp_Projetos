#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor[10], i=0, maior=1 , menor=1;
    float  soma=0;

    while(i<10){
        cout<< "Digite o numero do vetor " << i << ": ";
        cin>> vetor[i];
        
        if(vetor[i]<menor){
            menor = vetor[i];
        } else if (vetor[i]>maior){
            maior = vetor[i];
        }

        soma = soma + vetor[i];
        i++;

    }
    soma = soma / i;
    
    cout<< "O maior valor do vetor é " <<maior;
    cout<< "\n O menor valor do vetor é " <<menor;
    cout<< "\n A média do vetor é " <<soma;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int vet[10], menor=0, maior=0, i=0;

    while(i<10){
        cout<< "Digite o valor que ser� escrio na posi��o " << i << " do vetor: ";
        cin>> vet[i];

        if(vet[i] > maior){
            maior = vet[i];
        }
        else if(vet[i] < menor){
                menor = vet[i];
        }
        i++;
    }
    for (i=1; maior>1; i--){
        i = i * maior;
    }

    cout<< "Fatorial do maior: " << i << endl;

        for (i=1; menor>1; i--){
        i = i * menor;
    }

    cout<< "Fatorial do menor: " << i << endl;
    return 0;
}

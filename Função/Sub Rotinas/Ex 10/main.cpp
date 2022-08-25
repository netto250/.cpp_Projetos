#include <iostream>

using namespace std;

float calculo(float peso,float &maior, float &menor);

int main()
{
    float peso, maior=0, menor=1000;

    calculo(peso, maior, menor);

    cout<< "O maior peso é: " << maior;
    cout<< "\n5O menor peso é: " << menor;

    return 0;
}

float calculo(float peso, float &maior, float &menor){

    for(int i=1; i<=5; i++){

        cout<< "Digite o peso da pessoa: ";
        cin>> peso;

        if(peso>maior){
            maior = peso;
        }
        else if(peso<menor){
            menor = peso;
        }
    }

}

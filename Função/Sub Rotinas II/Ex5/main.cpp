#include <iostream>

using namespace std;

float peso(float altura, char sexo);

int main()
{
    float altura;
    char sexo;

    cout<< "Digite a altura da pessoa: ";
    cin>> altura;

    cout<< "Digite o sexo da pessoa (m ou f): ";
    cin>> sexo;

    peso(altura, sexo);

    cout<< "O peso ideal para essa pessoa: " << peso(altura, sexo);
    return 0;
}

float peso(float altura, char sexo){

    float pi;

    if(sexo=='m')
        pi=72.7 * altura - 58;
    else if(sexo=='f')
        pi=62.1 * altura - 44.7;

    return pi;
}

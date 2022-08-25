#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 10

int leitura(float vetor[TAM]);
int calculo(float vetor[TAM], float &media);
int alunos(float vetor[TAM], float media, int &superior);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float vetor[TAM], media;
    int superior=0;

    leitura(vetor);
    calculo(vetor, media);
    alunos(vetor, media, superior);

    cout<< "O numero de alunos com media superior a " << media << " é de " << superior << " alunos!";
    return 0;
}

int leitura(float vetor[TAM]){

    for(int i=0; i<TAM; i++){
        cout<< "Digite a nota dos alunos: ";
        cin>> vetor[i];
    }
}

int calculo(float vetor [TAM], float &media){

    float soma=0;

    for(int i=0; i<TAM; i++)
        soma+=vetor[i];

    media = soma/TAM;
}

int alunos(float vetor[TAM], float media, int &superior){

    for(int i=0; i<TAM; i++){
        if(vetor[i]>=media)
            superior++;
    }
    return superior;
}
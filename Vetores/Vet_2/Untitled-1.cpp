#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 int vet[10], i=0, media_maior=0;
 float soma=0;

 while(i<10){
    cout<< "Digite a média do aluno" << i << ": ";
    cin>> vet[i];

    if(vet[i]>=6){
        media_maior++;
    } soma = soma + vet[i];

    i++;
}    
    soma = soma / i;

    cout<< "A media dos alunos é de: " << soma; 
    cout<< "\n O numero de alunos que tiraram media superior a 6 é de: " << media_maior;
 
    return 0;
}

#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 
 int vet[10], i=0;

 while (i!=10){
    cout<< "Digite um valor para ser escrito na posição " << i << " do vetor: ";
    cin>> vet[i];

    i = i + 1;
 }
 cout<< "\nInversa: ";

 for(i=9; i>=0; i--)
   cout<< vet[i] << "\t";

    return 0;
}
#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 int a[20], b[20], i;


 cout<< "Preencha o vetor A: \n";
 for(i=0; i<20; i++){
    cout<< "Digite o valor para ser escrito no vetor: ";
    cin>> a[i];

 }

  cout<< "\n \nPreencha o vetor B: \n";
 for(i=0; i<20; i++){
    cout<< "Digite o valor para ser escrito no vetor: ";
    cin>> b[i];
 }

  int vet_C[20];
cout<< "Resultante da subtração: \n";
 for(i=0; i<20; i++){
   vet_C[i] = a[i] - b[i];
   cout<< vet_C[i]; "\t \t";
 }

    return 0;
}

#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 int vet_A[8], vet_B[8], vet_c[8], i;

 cout<< "Escreva o Vetor A: \n";
 for(i=0; i<8; i++){
    cout<< "Digite um numero que será escrito na posição " << i << " do vetor: ";
    cin>> vet_A[i];
    vet_c[i] = vet_A[i];
 }
  cout<< "Escreva o Vetor B: \n";
  for(i=0; i<8; i++){
    cout<< "Digite um numero que será escrito na posição " << i << " do vetor: ";
    cin>> vet_B[i];
 }
 for(i=0; i<8; i++){
    vet_A[i] = vet_B[i];
    vet_B[i] = vet_c[i];
 }
 cout<< "Vetores invertidos: ";
 
 for(i=0; i>8; i++){
    cout<< "Posição " << i << " do vetor A: " << vet_c[i] << "\t";
 }
  for(i=0; i>8; i++){
    cout<< "Posição " << i << " do vetor B: \t" << vet_B[i] << "\t";
 }

    return 0;
}

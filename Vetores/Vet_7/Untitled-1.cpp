#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

 int vet_A[5], i, j;

 for(i=0; i<5; i++){
    cout<<"Digite um numero inteiro que ira na posição " << i << " do vetor: ";
    cin>> vet_A[i]; 
 }
 int vet_B[5], i=5, j=0;

 while(i>0 && j<5){
    vet_B[i] = vet_A[j];
    i--;
    j++;
 }
 for (j=0; j<5; j++){
    cout<< vet_B[j] "\t";
 }
 
    return 0;
}

#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 5
int main(){
    setlocale(LC_ALL, "Portuguese");

 int matriz[TAM][TAM], matriz_copia[TAM][TAM], linha, coluna;

 for (linha=0; linha<TAM; linha++){
    for (coluna=0; coluna<TAM; coluna++) {
        cout<< "Digite um numero que sera escrito na linha matriz: ";
        cin>> matriz[linha][coluna];
        
        matriz_copia[linha][coluna]=matriz[linha][coluna];

        if(matriz[linha][coluna]>100){
            matriz[linha][coluna]=0;
        }
    }
 }
 cout<< "MATRIZ ALTERADA: \n";
 for (linha=0; linha<TAM; linha++){
    for (coluna=0; coluna<TAM; coluna++){
        cout << matriz[linha][coluna] << " | ";
    }
    cout << endl;
    }

 cout<< "MATRIZ ORIGINAL: \n";
  for (linha=0; linha<TAM; linha++){
    for (coluna=0; coluna<TAM; coluna++){
        cout << matriz_copia[linha][coluna] << " | ";
    }
    cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 5
int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[TAM][TAM], linha, coluna, soma=0;

 for (linha=0; linha<TAM; linha++){
    for (coluna=0; coluna<TAM; coluna++) {
        matriz[linha][coluna] = 1;
        cout<< "Digite um valor para a linha " << linha << " coluna " << coluna << " : ";
        cin>> matriz[linha][coluna];
    }
 }

 for (linha=0; linha<TAM; linha++){
    for (coluna=0; coluna<TAM; coluna++){
        cout << matriz[linha][coluna] << " | ";
    }
    cout << endl;
 }

     for (linha=0; linha<3; linha++){
        soma += matriz[linha][linha];
        //cout << matriz[linha][linha] << "\t"; //diagonal principal é quando o indice da linha é igual ao indice da coluna.
    }
    cout << "" << endl;
    cout << "soma dos elementos da diagonal principal:  >> " << soma << endl;

    return 0;
}

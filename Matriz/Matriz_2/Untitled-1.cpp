
#include <iostream>
using namespace std;
#include <locale.h>

#define TAM 5
int main(){
    setlocale(LC_ALL, "Portuguese");

 int matriz[TAM][TAM], linha, coluna;

 for (linha=0; linha<TAM; linha++){
    for (coluna=0; coluna<TAM; coluna++) {
        matriz[linha][coluna] = 1;
            if(linha==coluna){
                matriz[linha][coluna]=1;
            }
            else{
                matriz[linha][coluna]=0;
            }
        }
    }

 for (linha=0; linha<TAM; linha++){
    for (coluna=0; coluna<TAM; coluna++){
        cout << matriz[linha][coluna] << " | ";
    }
    cout << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
 int matriz_1[4][6], matriz_2[6][4], matriz_produto[4][4] i, j;

   cout<< "MATRIZ M";
 for(i=0, i<4; i++){
    for(j=0; j<6; j++){
        matriz_1[i][j] = 2;
    }
 }
 
    cout<< "MATRIZ N";
 for(i=0, i<4; i++){
    for(j=0; j<6; j++){
        matriz_2[i][j] = 2;
    }
 }

 for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        matriz_produto[i][j] = matriz_1[i] * matriz_2 [j];
    }
 }

 for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        cout<< matriz_produto[i][j] << "\t | \t";
    }
 }
    return 0;
}
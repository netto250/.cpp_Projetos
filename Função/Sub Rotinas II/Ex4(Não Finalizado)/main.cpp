#include <iostream>
using namespace std;

#include <locale.h>

float soma(float e, float x);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float e, x;

    soma(e, x);

    cout<< "O resultado da somatoria é " << soma(e, x);

    return 0;
}

float soma(float e, float x){

    for(x=5; x<=15; x++){
        for(int i=1; i<x; i++){
            e = x/i + x/i+1;
        }
    }
    return e;
}
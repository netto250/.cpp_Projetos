#include <iostream>
using namespace std;

#include <locale.h>

void verificar(char letra);

int main(){
    setlocale(LC_ALL, "Portuguese");

    char letra;

    cout<< "Digite uma letra: ";
    cin>> letra;

    verificar(letra);

    return 0;
}

void verificar(char letra){

    if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
        cout<< "A letra é uma vogal!";
    
    else
        cout<<"A letra não é uma vogal!";
}
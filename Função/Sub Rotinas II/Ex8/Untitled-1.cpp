#include <iostream>
using namespace std;

#include <locale.h>

float triangulo(float l1, float l2, float l3);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float l1, l2, l3;

    cout<< "Digite os 3 lados do trinagulo: ";
    cin>> l1 >> l2 >> l3;

    triangulo(l1, l2, l3);

    if(triangulo(l1, l2, l3)==1)
        cout<< "O triangulo é equliatero!";
    else if(triangulo(l1, l2, l3)==2)
        cout<< "O triangulo é isoceles!";
    else
        cout<< "O triangulo é escaleno!";

    return 0;
}

float triangulo (float l1, float l2, float l3){

    if(l1==l2 && l1==l3)
        return 1;
    else if(l1==l2 || l1==l3 || l2==l3)
        return 2;
    else
        return 3;
}
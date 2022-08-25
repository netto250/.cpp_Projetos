#include <iostream>

using namespace std;

void castigo(int N);

int main()
{
    int N;

    cout<< "Digite um numero inteiro: ";
    cin>> N;

    castigo(N);

    return 0;
}

void castigo(int N){

    for(N=N; N>0; N--){
        cout<< "Não vou colar na prova!" << endl;
    }
}

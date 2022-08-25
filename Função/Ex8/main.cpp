#include <iostream>

using namespace std;

int idades(int idade, int &maior);

int main()
{
    int idade, maior=0;

    idades(idade, maior);

    cout<< maior << " pessoas tem idade maior ou igual a 18 anos!";

    return 0;
}

int idades(int idade, int &maior){

    int i;

    for(i=0; i<10; i++){
        cout<<"Digite a idade da pessoa: ";
        cin>> idade;

        if(idade>=18)
            maior++;
    }
}

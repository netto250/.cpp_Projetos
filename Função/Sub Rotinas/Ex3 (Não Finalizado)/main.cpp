#include <iostream>

using namespace std;

int verIdade(int dia_Atual, int mes_Atual, int ano_Atual, int dia_Nascimento, int mes_Nascimento, int ano_Nascimento);

int main()
{
    int dia_Atual, mes_Atual, ano_Atual, dia_Nascimento, mes_Nascimento, ano_Nascimento;

    cout<< "Digite o dia, mes e ano de nascimento: " << endl;
    cin>> dia_Nascimento >> mes_Nascimento >> ano_Nascimento;

    cout<< "Digite o dia, mes e ano atual: ";
    cin>> dia_Atual >> mes_Atual >> ano_Atual;

    cout<< "A idade da pessoa é " << verIdade (dia_Atual, mes_Atual, ano_Atual, dia_Nascimento, mes_Nascimento, ano_Nascimento);

    return 0;
}

int verIdade(int dia_Atual, int mes_Atual, int ano_Atual, int dia_Nascimento, int mes_Nascimento, int ano_Nascimento){
    if(mes_Nascimento<mes_Atual || mes_Atual==mes_Nascimento && dia_Nascimento<=dia_Atual)
        return ano_Atual - ano_Nascimento;
    else
        return ano_Atual - ano_Nascimento - 1;
}

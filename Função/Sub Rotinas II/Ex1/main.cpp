#include <iostream>

using namespace std;

int menor(int t1, int t2, int t3);

int main()
{
    int t1, t2, t3;

    cout<< "DIGITE TRES NUMEROS INTEIROS: ";
    cin>> t1 >> t2 >> t3;

    menor(t1, t2, t3);

    cout<< "O menor numero dos tres é " << menor(t1, t2, t3);

    return 0;
}

int menor(int t1, int t2, int t3){

    if(t1<t2 && t1<t3)
        return t1;

    else if(t2<t1&& t2<t3)
         return t2;

    else
        return t3;

}

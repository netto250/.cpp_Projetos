#include <iostream>

using namespace std;

void Fibonacci(int n1, int n2);

int main()
{
    int n1=1, n2=1;

    Fibonacci(n1,n2);

    return 0;
}

void Fibonacci(int n1, int n2){
    int i;

    for(i=1; i <= 10; i++){
    cout << n1 << " - " << n2 << " - ";
    n1 = n1 + n2;
    n2 = n1 + n2;
}
}

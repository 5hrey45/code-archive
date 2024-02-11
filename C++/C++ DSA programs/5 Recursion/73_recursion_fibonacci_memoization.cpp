#include <iostream>
using namespace std;

int F[10]; // array size should be increased for calculation of large no

int fib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = fib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = fib(n - 1);
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    for (int i = 0; i < 10; i++) // if array size is increased, initilization should be done for the extra size also
        F[i] = -1;
    cout << fib(6);
    return 0;
}
#include <iostream>
using namespace std;

int fun(int n)
{
    static int x{};
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int n{};
    n = fun(5);
    cout << n;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, res = 0, sum = 0;

    while (res < 4000000)
    {
        if (res % 2 == 0)
        {
            sum = sum + res;
        }
        res = n1 + n2;
        n1 = n2;
        n2 = res;
    }

    cout << sum;

    return 0;
}
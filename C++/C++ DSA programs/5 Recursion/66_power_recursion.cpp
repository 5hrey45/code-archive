#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
        return 1;
    return pow(m, n - 1) * m;
}

// the following function is more efficient O(log n) while above function is O(n)
int pow1(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow1(m * m, n / 2);
    else
        return m * pow1(m * m, (n - 1) / 2);
}

int main()
{
    int n{};
    n = pow1(5, 3);
    cout << n;
    return 0;
}
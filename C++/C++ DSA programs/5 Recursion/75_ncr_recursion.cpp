#include <iostream>
using namespace std;

// factorial function
int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

// funtion to calculate ncr using factorial
int ncr(int n, int r)
{
    int t1, t2, t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n - r);
    return t1 / (t2 * t3);
}
// recursive function to calculate ncr
int rncr(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    else
        return rncr(n - 1, r - 1) + rncr(n - 1, r);
}

int main()
{
    cout << rncr(5, 2);
    return 0;
}
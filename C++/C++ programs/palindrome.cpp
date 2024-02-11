#include <iostream>
using namespace std;

int main()
{
    int n, rem, temp = 0, rev = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n /= 10;
    }

    if (rev >= 0 && rev == temp)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
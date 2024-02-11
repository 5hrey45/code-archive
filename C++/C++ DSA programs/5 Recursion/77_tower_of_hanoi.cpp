#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B); // moving from A to B using C
        cout << "Move " << A << " to " << C << endl;
        TOH(n - 1, B, A, C); // moving from B to C using A
    }
}

int main()
{
    TOH(3, 1, 2, 3);
    return 0;
}
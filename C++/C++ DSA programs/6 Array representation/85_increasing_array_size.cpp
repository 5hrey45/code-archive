#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5];
    int *q = new int[10];

    for (int i = 0; i < 5; i++)
        p[i] = 100;

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;

    for (int i = 0; i < 5; i++)
        q[i] = p[i];

    delete[] p;

    p = q;
    q = nullptr;

    for (int i = 0; i < 10; i++)
        cout << p[i] << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {1, 3, 5, 7}};

    // apparently new on heap is not working as expected, idk what i'm doing wrong!

    // int *A[3]; // array of pointers
    // A[0] = new int[4];
    // A[1] = new int[4];
    // A[2] = new int[4];

    // int **p; // double ptr required for pointing to an array of pointers
    // p[0] = new int[4];
    // p[1] = new int[4];
    // p[2] = new int[4];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << p[i][j] << endl;
    //     }
    // }

    return 0;
}
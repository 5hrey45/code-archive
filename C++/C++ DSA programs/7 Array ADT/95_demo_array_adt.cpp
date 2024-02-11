/************************* FOR BETTER CODE REFER 97_ARRAY_INSERT ***************************************/

#include <iostream>
using namespace std;

// scroll down for normal version without class
// class is used instead of normal version because if the function is declared outside main then
// parameters like length and size is out of scope

class Array
{
public:
    int *A;
    int size;
    int length;
};

void display(class Array arr)
{
    cout << "The array elements are" << endl;
    for (size_t i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}

int main()
{
    int n, i;
    Array arr;
    cout << "Enter the size of the array" << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout << "Enter the array elements" << endl;
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.length = n;

    display(arr);

    return 0;
}

// #include <iostream>
// using namespace std;

// void display(int arr[], int length)
// {
//     cout << "The array elements are" << endl;
//     for (size_t i = 0; i < length; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }

// int main()
// {
//     int size;
//     int length;
//     int n, i;

//     cout << "Enter the size of the array" << endl;
//     cin >> size;
//     int arr[size];
//     length = 0;
//     cout << "Enter the number of elements" << endl;
//     cin >> n;
//     cout << "Enter the array elements" << endl;
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     length = n;

//     display(arr, length);

//     return 0;
// }
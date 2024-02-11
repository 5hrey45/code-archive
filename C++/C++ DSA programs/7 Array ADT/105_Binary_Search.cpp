#include <iostream>
using namespace std;

int BinarySearch(int arr[], int key, int length)
{
    int low, mid, high;
    low = 0;
    high = length - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of the array " << endl;
    cin >> size;
    int arr[size] = {0};

    cout << "Enter the length of the array " << endl;
    int length;
    cin >> length;

    cout << "Enter the array elements" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched " << endl;
    int key;
    cin >> key;

    cout << BinarySearch(arr, key, length);

    return 0;
}
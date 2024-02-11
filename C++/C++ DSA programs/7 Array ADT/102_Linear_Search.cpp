#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;   // size is equal to the total no of elements the array can store
    int length; // length is equal to the total no of elements that is presently stored in the array

public:
    Array(int sz); // constructor takes size as argument in main() and creates array of that size on heap
    void create();
    void display();
    int LinearSearch(int key);
    ~Array();
};

Array::Array(int sz)
{
    sz = size;
    A = new int[sz];
}

void Array::create()
{
    cout << "enter length for array: ";
    cin >> length;
    cout << "enter elements for array: " << endl;
    for (int i{0}; i < length; i++)
    {
        cout << "array at " << i << " : ";
        cin >> A[i];
    }
}
void Array::display()
{
    for (int i{0}; i < length; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int Array::LinearSearch(int key)
{
    for (int i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return -1;
}

Array::~Array()
{
    delete[] A;
}

int main()
{
    Array arr(10);
    arr.create();
    arr.display();
    cout << arr.LinearSearch(5) << endl;
    return 0;
}
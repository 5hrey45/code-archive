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
    void append(int x);
    void insert(int index, int x);
    void Delete(int index);
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

void Array::append(int x)
{
    if (length < size)
    {
        A[length] = x;
        length++;
    }
}

void Array::insert(int index, int x)
{
    if (length < size)
    {
        for (int i{length}; i > index; i--)
        {
            A[i] = A[i - 1];
        }
        A[index] = x;
        length++;
    }
}

void Array::Delete(int index)
{
    if (index < length)
    {
        for (size_t i = index; i < length; i++)
        {
            A[i] = A[i + 1];
        }
        length--;
    }
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
    arr.append(69);
    arr.display();
    arr.insert(2, 66);
    arr.display();
    arr.Delete(0);
    arr.display();
    return 0;
}
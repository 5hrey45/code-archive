#include <bits/stdc++.h>
using namespace std;

class Array
{
public:
    int *A;
    int size;
    int length;

public:
    Array(int size);
    void create();
    void display();
    int get(int index);
    int set(int index, int x);
    int max();
    int min();
    int sum();
    int avg();
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

int Array::get(int index)
{
    if (index >= 0 && index < length)
    {
        return A[index];
    }
    return -1;
}

int Array::set(int index, int x)
{
    if (index >= 0 && index < length)
    {
        return A[index] = x;
    }
    return -1;
}

int Array::max()
{
    int max;
    max = A[0];
    for (int i{1}; i < length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int Array::min()
{
    int min;
    min = A[0];
    for (int i{1}; i < length; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int Array::sum()
{
    int total{0};
    for (int i{0}; i < length; i++)
    {
        total = total + A[i];
    }
    return total;
}

int Array::avg()
{
    int total{0};
    for (int i{0}; i < length; i++)
    {
        total += A[i];
    }
    return total / length;
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
    cout << "get" << endl;
    cout << arr.get(4) << endl;
    cout << "set" << endl;
    cout << arr.set(4, 66) << endl;
    arr.display();
    cout << "max" << endl;
    cout << arr.max() << endl;
    cout << "min" << endl;
    cout << arr.min() << endl;
    cout << "total" << endl;
    cout << arr.sum() << endl;
    cout << "average" << endl;
    cout << arr.avg() << endl;
    return 0;
}
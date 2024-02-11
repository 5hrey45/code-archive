#include <iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;

public:
    Array(int size);
    void create();
    void display();
    void append(int x);
    void insert(int index, int x);
    ~Array();
};
Array::Array(int sz)
{
    sz = size;
    A = new int[sz];
}
void Array::create()
{
    cout << "Enter number of elements: ";
    cin >> length;
    cout << "Enter array elements" << endl;
    for (int i{0}; i < length; i++)
    {
        cout << " enter element at " << i << ":" << endl;
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

Array::~Array()
{
    delete[] A;
}
int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    Array arr(n);
    arr.create();
    arr.display();
    arr.append(69);
    arr.display();
    arr.insert(2, 66);
    arr.display();
    return 0;
}

// #include <iostream>
// using namespace std;

// class Array
// {
// private:
//     int *A;
//     int size;
//     int length;

// public:
//     Array(); // constructor takes size as argument in main() and creates array of that size on heap
//     void create();
//     void display();
//     void append(int x);
//     void insert(int index, int x);
//     ~Array();
// };

// Array::Array()
// {
//     int sz;
//     cout << "Enter the size of the array: " << endl;
//     cin >> sz;
//     sz = size;
//     A = new int[sz];
// }

// void Array::create()
// {
//     cout << "enter length for array: ";
//     cin >> length;
//     if (length > size)
//         cout << "length is greater than size" << endl;
//     else
//     {
//         cout << "enter elements for array: " << endl;
//         for (int i{0}; i < length; i++)
//         {
//             cout << "array at " << i << " : ";
//             cin >> A[i];
//         }
//     }
// }
// void Array::display()
// {
//     for (int i{0}; i < length; i++)
//     {
//         cout << A[i] << " ";
//     }
//     cout << endl;
// }

// void Array::append(int x)
// {
//     if (length < size)
//     {
//         A[length] = x;
//         length++;
//     }
// }

// void Array::insert(int index, int x)
// {
//     if (length < size)
//     {
//         for (int i{length}; i > index; i--)
//         {
//             A[i] = A[i - 1];
//         }
//         A[index] = x;
//         length++;
//     }
// }

// Array::~Array()
// {
//     delete[] A;
// }

// int main()
// {
//     Array arr();
//     Array arr.create();
//     arr.display();
//     arr.append(69);
//     arr.display();
//     arr.insert(2, 66);
//     arr.display();
//     return 0;
// }
#include <iostream>
using namespace std;

class Deep
{
private:
    int *data;

public:
    Deep(int d);              //constructor
    Deep(const Deep &source); //copy constructor
    ~Deep();                  //destructor
    void setdata(int val)
    {
        *data = val;
    }

    int getdata()
    {
        return *data;
    }
};

//constructor
Deep::Deep(int d)
{
    data = new int;
    *data = d;
    cout << "constructor is being called" << endl;
}

//copy constructor
Deep::Deep(const Deep &source)
{
    data = new int;
    *data = *source.data;
    cout << "copy constructor - deep copying" << endl;
}

//destructor
Deep::~Deep()
{
    delete data;
    cout << "destructor freeing memory" << endl;
}

void display(Deep s)
{
    cout << s.getdata() << endl;
}

int main()
{

    Deep obj1(100);
    display(obj1);

    Deep obj2(obj1);

    obj1.setdata(1000);

    return 0;
}

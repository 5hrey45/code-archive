/****************** HAS SOME ERRORS ********************************/

#include <iostream>
#include <vector>
using namespace std;

class Move
{
private:
    int *data;

public:
    Move(int d);              //constructor
    Move(const Move &source); //copy constructor
    ~Move();                  //destructor
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
Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "constructor is being called" << endl;
}

//copy constructor
Move::Move(const Move &source)
    : Move{*source.data}
{
    cout << "copy constructor - deep copying" << endl;
}

//destructor
Move::~Move()
{
    if (data != nullptr)
        cout << "destructor freed data for " << *data << endl;
    else
        cout << "destructor freeing data for nullptr" << endl;
    delete data;
}

void display(Move s)
{
    cout << s.getdata() << endl;
}

int main()
{

    vector<Move> vec{};

    vec.push_back(Move{10});

    return 0;
}

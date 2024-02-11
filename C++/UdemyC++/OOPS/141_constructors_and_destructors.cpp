#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
private:
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    //methods
    void talk(string message);
    bool is_dead();

public:
    //overloaded constructors
    Player()
    {
        cout << "No args constructor called" << endl;
    }
    Player(string name)
    {
        cout << "1 args constructor called" << endl;
    }
    Player(string name, int health, int xp)
    {
        cout << "3 args constructor called" << endl;
    }
    //destructor
    ~Player()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    {
        Player jim;
    }
    Player hero;
    Player frank("Frank");
    Player enemy("enemy", 100, 3);

    return 0;
}
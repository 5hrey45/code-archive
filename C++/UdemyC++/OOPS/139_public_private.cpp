#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
private:
    //attributes
    string name{"Player"};
    int health;
    int xp;

public:
    //methods
    void talk(string message)
    {
        cout << name << " says " << message << endl;
    }
    bool is_dead();
};

int main()
{
    Player frank;
    // frank.name = "Frank";
    // frank.health = 200;
    frank.talk("Hello there!");

    return 0;
}
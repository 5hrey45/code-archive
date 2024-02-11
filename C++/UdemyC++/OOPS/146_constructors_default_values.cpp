#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
private:
    //attributes
    string name;
    int health;
    int xp;

public:
    //methods
    Player(string name_val = "None", int health_val = 0, int xp_val = 0)
        : name{name_val}, health{health_val}, xp{xp_val}
    {
    }
};

int main()
{
    Player jim;
    Player hero{"Hero"};
    Player villain{"Villain", 100};
    Player frank("Frank", 200, 6);

    return 0;
}

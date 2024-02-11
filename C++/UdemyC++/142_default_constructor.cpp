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
    void set_name(string name_val)
    {
        name = name_val;
    }
    string get_name()
    {
        return name;
    }

    // Player()
    // {
    //     name = "None";
    //     health = 100;
    //     xp = 3;
    // }

    Player(string name_val, int health_val, int xp_val)
    {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
};

int main()
{
    // Player frank;
    Player frank("Frank", 200, 6);
    frank.set_name("Frank");
    cout << frank.get_name() << endl;

    return 0;
}
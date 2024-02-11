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
    string getname() { return name; }
    int gethealth() { return health; }
    int getxp() { return xp; }

    //three args constructor with default values
    Player(string name_val = "None", int health_val = 0, int xp_val = 0)
        : name{name_val}, health{health_val}, xp{xp_val}
    {
        cout << "three args constuctor called for " + name << endl;
    }

    //copy constructor
    Player(const Player &source)
        : name(source.name), health(source.health), xp(source.xp)
    {
        cout << "copy constructor is called for " + name << endl;
    }

    //destructor
    ~Player()
    {
        cout << "destructor is being called for " + name << endl;
    }
};

//function to which object is passed by value
//so first copy constructor is used to make a copy of the object
//then the copy is passed to the function
void display_player(Player p)
{
    cout << "name: " << p.getname() << endl;
    cout << "health: " << p.gethealth() << endl;
    cout << "xp: " << p.getxp() << endl;
}

int main()
{
    Player jim;

    display_player(jim); //function call

    Player hero{"Hero"};
    Player villain{"Villain", 100};
    Player frank("Frank", 200, 6);

    display_player(frank); //function call

    //here anotherfrank is a copy of the object frank
    //to make this happen the copy constructor is called
    Player anotherfrank{frank};

    return 0;
}

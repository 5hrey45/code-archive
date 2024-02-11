#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
    //attributes
    string name{"Player"};
    int health{100};
    int xp{3};

    //methods
    void talk(string message);
    bool is_dead();
};

class Account
{
    //attributes
    string name{"Account"};
    double balance{0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player *enemy{nullptr};
    enemy = new Player;

    vector<Player> player_vec{frank};
    player_vec.push_back(hero);

    Player players[] = {frank, hero};

    return 0;
}
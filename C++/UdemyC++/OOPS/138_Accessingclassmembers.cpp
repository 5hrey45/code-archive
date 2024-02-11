#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Player
{
public:
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string message)
    {
        cout << name << " says " << message << endl;
    }
    bool is_dead();
};

class Account
{
public:
    //attributes
    string name;
    double balance{0};

    //methods
    bool deposit(double bal)
    {
        balance += bal;
        cout << "In deposit: " << name << endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout << "In withdraw: " << name << endl;
    }
};

int main()
{
    //accessing class members with an object
    Player frank;
    frank.name = "Frank";
    frank.health = 80;
    frank.xp = 2;
    frank.talk("I will defeat you!");

    //accessing class members with pointers
    Player *enemy = new Player;
    (*enemy).name = "Jim";
    (*enemy).talk("I will win!");
    enemy->talk("I will destroy you!");
    delete enemy;

    //accessing class members with an object
    Account frank_account;
    frank_account.name = "Frank_account";
    cout << frank_account.balance << endl;
    frank_account.deposit(5000);
    cout << frank_account.balance << endl;
    frank_account.withdraw(3000);
    cout << frank_account.balance << endl;

    //accessing class members with pointers
    Account *jim_account = new Account;
    jim_account->name = "Jim_account";
    cout << (*jim_account).balance << endl;
    (*jim_account).deposit(10000);
    cout << jim_account->balance << endl;
    jim_account->withdraw(6000);
    cout << jim_account->balance << endl;
    delete jim_account;

    return 0;
}
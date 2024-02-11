#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Account
{
private:
    //attributes
    string name{"Account"};
    double balance{0.0};

public:
    //methods
    // void set_balance(double bal)
    // {
    //     balance = bal;
    // }
    // double get_balance()
    // {
    //     return balance;
    // }

    //implementing methods outside class
    //function prototypes
    void set_balance(double bal);
    double get_balance();
};

//if we want to implement methods outside class then we have to do it globally, can't do inside main
void Account::set_balance(double bal)
{
    balance = bal;
}
double Account::get_balance()
{
    return balance;
}

int main()
{
    Account frank_account;
    Account jim_account;

    frank_account.set_balance(1000);
    cout << frank_account.get_balance();

    return 0;
}
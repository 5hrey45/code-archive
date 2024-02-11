#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <vector>
#include <string>

class Account
{
private:
    //attributes
    std::string name{"Account"};
    double balance{0.0};

public:
    //function prototypes
    void set_balance(double bal);
    double get_balance();
};

#endif
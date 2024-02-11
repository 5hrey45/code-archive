#include <iostream>
#include <vector>
#include <string>
#include "account.h"
using namespace std;

int main()
{
    Account frank_account;

    frank_account.set_balance(1000);
    cout << frank_account.get_balance();

    return 0;
}
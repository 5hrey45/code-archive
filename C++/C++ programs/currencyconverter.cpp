#include<iostream>
using namespace std;

int main()
{
    int amount;
    const int dollar_value = 100;
    const int quarter_value = 25;
    const int dime_value = 10;
    const int nickel_value = 5;

    cout<<"Enter the total amount: ";
    cin>>amount;

    int dollar = 0, quarter = 0, dime = 0, nickel = 0, penny = 0, balance = 0;

    dollar = amount / dollar_value;
    balance = amount % dollar_value;

    quarter = balance / quarter_value;
    balance = balance % quarter_value;

    dime = balance / dime_value;
    balance = balance % dime_value;

    nickel = balance / nickel_value;
    balance = balance % nickel_value;

    penny = balance;

    cout<<"\n You can distribute "<<amount<<" dollars as follows: "<<endl;

    cout<<"dollars: "<<dollar<<endl;
    cout<<"quarters: "<<quarter<<endl;
    cout<<"dimes: "<<dime<<endl;
    cout<<"nickels: "<<nickel<<endl;
    cout<<"penny: "<<penny<<endl;

    
    return 0;
}
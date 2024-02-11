#include<iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    cout<<"Enter four numbers: ";
    cin>>num1>>num2>>num3>>num4;

    if(num1>num2 && num1>num3 && num1>num4)
    {
        cout<<"\n The greatest number is: "<<num1;
    }
    else if(num2>num1 && num2>num3 && num2>num4)
    {
        cout<<"\n The greatest number is: "<<num2;
    }
    else if(num3>num1 && num3>num2 && num3>num4)
    {
        cout<<"\n The greatest number is: "<<num3;
    }
    else
     {
        cout<<"\n The greatest number is: "<<num4;
    }
    
    return 0;
}
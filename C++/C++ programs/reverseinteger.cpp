#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n, rem, rev=0;

    cin>>n;

    while (n!=0)
    {
        rem=n%10;
        n/=10;

        if (rev > INT_MAX/10 || rev == INT_MAX && rem > 7)
        {
            cout<<"0";
        }

        if (rev < INT_MIN/10 || rev == INT_MIN && rem < -8)
        {
            cout<<"0";
        }
        
        rev=(rev * 10) + rem;
    }
    
    cout<<rev;
    return 0;
}
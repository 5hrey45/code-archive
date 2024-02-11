#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num;
	cout<<"Enter a number\n";
	cin>>num;
	if(num%4==0)
	{
	    num++;
	    cout<<num;
	}
	else
	{
	    num--;
	    cout<<num;
	}
	return 0;
}

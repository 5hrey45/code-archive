#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    vector<int> vec{};
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string test, rev;
        cin >> test;
        int length;
        length = test.size();
        string original;
        original = test;
        for (int j = length; j > 0; j--)
        {
            rev = test[j];
        }

        if (rev == original)
        {
            vec.push_back(1);
        }
        else
        {
            vec.push_back(0);
        }
    }

    for (auto n : vec)
    {
        if (n == 1)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
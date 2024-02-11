#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, q;
    vector<int> vec{};
    cin >> n >> q;
    for (int i = 0; i < q; i++)
    {
        int p;
        cin >> p;
        if (n != 0)
        {
            n -= p;
            vec.push_back(1);
        }
        else
            vec.push_back(0);
    }
    for (auto n : vec)
    {
        if (n == 1)
            cout << "Enjoy your dessert!" << endl;
        else
            cout << "Sorry, we are all out!" << endl;
    }
    return 0;
}
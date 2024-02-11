#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> vec{};
    for (int i = 0; i < t; i++)
    {
        int d, l, r;
        cin >> d >> l >> r;
        if (d >= l && d <= r)
        {
            vec.push_back(1);
        }
        else if (d >= l && d >= r)
        {
            vec.push_back(0);
        }
        else
        {
            vec.push_back(2);
        }
    }

    for (auto n : vec)
    {
        if (n == 1)
            cout << "Take second dose now" << endl;
        else if (n == 0)
            cout << "Too Late" << endl;
        else
            cout << "Too Early" << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    vector<int> vec{};
    char selection{};

    do
    {
        cout << "P" << endl;
        cout << "A" << endl;
        cout << "M" << endl;
        cout << "S" << endl;
        cout << "L" << endl;
        cout << "Q" << endl;
        cout << endl;
        cout << "Enter Your selection" << endl;
        cin >> selection;

        if (selection == 'P' || selection == 'p')
        {
            if (vec.size() != 0)
            {
                for (int n : vec)
                {
                    cout << n << endl;
                }
            }
            else
            {
                cout << "the list is empty" << endl;
            }
        }
        else if (selection == 'A' || selection == 'a')
        {
            int addn;
            cout << "Enter the number to add " << endl;
            cin >> addn;
            vec.push_back(addn);
            cout << addn << " added to the list" << endl;
        }
        else if (selection == 'M' || selection == 'm')
        {

            if (vec.size() == 0)
            {
                cout << "Cannot divide, the list is empty" << endl;
            }
            else
            {
                int sum = 0;

                for (int n : vec)
                {
                    sum = sum + n;
                }
                cout << static_cast<double>(sum / vec.size()) << endl;
            }
        }

        else if (selection == 'S' || selection == 's')
        {
            if (vec.size() == 0)
            {
                cout << "the list is empty";
            }
            else
            {
                int smallest = vec.at(0);
                for (int n : vec)
                {
                    if (smallest > n)
                        smallest = n;
                }
                cout << smallest << endl;
            }
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (vec.size() == 0)
            {
                cout << "the list is empty";
            }
            else
            {
                int largest = vec.at(0);
                for (int n : vec)
                {
                    if (largest < n)
                        largest = n;
                }
                cout << largest << endl;
            }
        }

    } while (selection != 'Q' && selection != 'q');

    cout << endl;

    return 0;
}
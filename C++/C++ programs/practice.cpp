#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "The vector1 elements are " << vector1.at(0) << endl
         << vector1.at(1) << endl;
    cout << "The size of vector1 is " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "The vector2 elements are " << vector2.at(0) << endl
         << vector2.at(1) << endl;
    cout << "The size of vector2 is " << vector2.size() << endl;

    vector<vector<int>> vector2d;
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    cout << "The vector2d elements are " << vector2d.at(0).at(0) << endl
         << vector2d.at(0).at(1) << endl
         << vector2d.at(1).at(0) << endl
         << vector2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "The vector2d elements are " << vector2d.at(0).at(0) << endl
         << vector2d.at(0).at(1) << endl
         << vector2d.at(1).at(0) << endl
         << vector2d.at(1).at(1) << endl;
    cout << "The vector1 elements are " << vector1.at(0) << endl
         << vector1.at(1) << endl;

    return 0;
}

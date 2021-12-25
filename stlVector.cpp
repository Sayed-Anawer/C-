#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vect(vector<int> &v) // here sending the actual vector as an argument.
{

    cout << "Size of Vector: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    v.push_back(13);
}
int main()
{
    vector<int> vect;

    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);

    vector<int> &vect2 = vect; // here storing actual vect to the vect2.
    vect2.push_back(12);

    print_vect(vect);
    print_vect(vect);
}
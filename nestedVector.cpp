#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_vect(vector<pair<int, int>> v)
{
    cout << "\nYour vector size : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
int main()
{
    vector<pair<int, int>> v;
    int n;
    // v = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    // print_vect(v);

    // user defined

    cout << "Enter vector size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cout << "x y : ";
        cin >> x >> y;
        v.push_back({x, y});
    }

    print_vect(v);
}
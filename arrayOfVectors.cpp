#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print_arrayOfvect(vector<int> v, int i)
{

    cout << "\nSize of vector " << i + 1 << " is : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int N;
    cout << "Enter the Number of Vector: ";
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "\n Enter the size of vector " << i + 1 << ": ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cout << "\tEnter the element of this vector: ";
            cin >> x;
            v[i].push_back(x);
        }
    }
    cout << "\nOutput" << endl;
    for (int i = 0; i < N; i++)
    {
        print_arrayOfvect(v[i], i);
    }
}
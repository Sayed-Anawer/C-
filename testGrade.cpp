#include <iostream>
#include <string>
using namespace std;

int main()
{

    int number, sum = 0;

    for (int i = 0; i < 3; i++)
    {
        do

        {
            cout << "Grade " << i + 1 << " : ";
            cin >> number;
        } while (number < 1 || number > 5);
        sum += number;
    }
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << (float)sum / 3.0;
}
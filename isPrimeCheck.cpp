#include <iostream>
#include <string>
using namespace std;

bool primeNumberCheck(int number)
{

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    bool isPrime = primeNumberCheck(number);

    if (isPrime)
    {
        cout << "Prime number";
    }
    else
        cout << "Not Prime number";
}
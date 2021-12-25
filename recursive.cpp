#include <iostream>
#include <string>
using namespace std;

int recursiveSum(int a, int b)
{
    if (a == b)
        return a;
    else
        return a + recursiveSum(a + 1, b); // 2 + 3 + 4 + 5
}
int main()
{
    int a, b;

    cout << "a: "; // 2
    cin >> a;
    cout << "b: "; // 5
    cin >> b;

    cout << "Sum: " << recursiveSum(a, b);
}

// 2+3+4+5
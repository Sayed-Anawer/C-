#include <iostream>
#include <string>
using namespace std;

template <typename fahim>

void Swap(fahim &x, fahim &y)
{
    fahim temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x = 5, y = 8;
    char a = 'a', b = 'b';
    string c = "hello", d = "jello";

    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;

    Swap(x, y);
    Swap(a, b);
    Swap(c, d);

    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
}
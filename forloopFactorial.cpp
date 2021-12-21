#include <iostream>
#include <string>

using namespace std;

int main(){

    int number, factorial=1;
    cout << "Please Enter Integer number: ";
    cin >> number;
    for(int i = number; i>0; i--){
        factorial = factorial * i;
    }
    cout << number <<"! = " << factorial;
}
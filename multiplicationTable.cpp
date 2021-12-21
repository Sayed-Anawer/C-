#include <iostream>
#include <string>
using namespace std;

int main(){
    int number;
    cout << "Please type integer Number: ";
    cin >> number;

    for(int i=1; i<=number; i++){
        cout << "=== Multiplication Of " << i << " === " << endl;
        for(int j=1; j<=10; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        } 
    }
}
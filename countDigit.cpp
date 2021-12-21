#include <iostream>
#include <string>
using namespace std;

int main(){

    int number;

    cout << "Please Enter valid or Integer Number : ";
    cin >> number;

    if(number==0)
        cout << "Your number contains 0 digits.";
    else{
        
        if(number<0)
            number = -1 * number;
        
        int counter= 0;

        while(number>0){
            number /= 10;
            counter++;
        }
        cout << "Your Number contains " << counter << " digits.";
    }
}
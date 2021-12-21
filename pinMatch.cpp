#include <iostream>
#include <string>
using namespace std;

int main(){

    // Simple Way While loop 
    // int userPin = 123, pin,errorPin=0;
    //     cout << "Enter your PIN: " ;
    //     cin >> pin;
    // if(pin !=userPin ){
    //    while(errorPin<2 && pin !=userPin){
    //         cout << "Enter your PIN: " ;
    //         cin >> pin;
    //         errorPin++;
    //    }
    //    if(pin == userPin){
    //        cout << "Login Successfully";
    //    }
    //    else 
    //    cout << "Pin Blocked. Try Again Later.";
        
    // }
    // else 
    //     cout << "Login Successfully";


    // Do While loop 
    int userPin = 123, pin, errorPin = 0;

    do{
        cout << "Enter your Pin: ";
        cin >> pin;
        errorPin++;
    } while(pin != userPin && errorPin<3);

    if(pin == userPin)
        cout << "Login Successfully";
    else
        cout << "Pin Blocked, Try Again Later.";

    return 0;
}
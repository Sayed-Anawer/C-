#include <iostream>
#include <string>
using namespace std;

int main(){
        int number,reverseNum=0;

        cout << "Please Enter valid or Integer Number: ";
        cin >> number;
        
        while(number!=0){
            reverseNum *= 10;
            
            reverseNum += number % 10;

            number /=10;
        }
        cout << "Reverse Number is : " << reverseNum;
        return 0;
}
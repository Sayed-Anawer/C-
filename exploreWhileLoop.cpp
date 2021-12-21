#include <iostream>
#include <string>
using namespace std;

int main(){
    int startNum =100;
    while(startNum <=500){
            if(startNum % 3 == 0 && startNum % 5 == 0)
                cout << startNum << endl;

        startNum++;
    }
    return 0;
}
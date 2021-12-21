#include <iostream>
#include <string>
using namespace std;

int main(){

    string arr[]={"one","two","three","four","five","six","seven","eight","nine"};
    cout << sizeof(arr[0]);
    int a,b;
    cin >> a;
    cin >> b;
    if(b<=9){
        for(int i=a-1; i<b;i++){
        cout << arr[i] << endl;
    }
    }
    
    if(b>9){
        for(int i=a-1; i<9;i++){
        cout << arr[i] << endl;
    }
        for(int i =10; i<=b;i++){
            (i%2==0)?cout << "even\n": cout << "odd\n";
        }
    }
    return 0;
}
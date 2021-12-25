#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int height,width;
    char symbol;

    cout << "Enter Height: ";
    cin >> height;
    // cout << "Enter Width: ";
    // // cin >> width;
    cout << "Enter Symbol: ";
    cin >> symbol;

    // Rectangle Shape (uncomment 12 and 13 no. line)

    // for(int h = 0; h<height; h++){
    //     for(int w = 0; w<width; w++){
    //         cout << "\t" << symbol;
    //     }
    //     cout << endl;
    // }

    // Triangle shape
    // for(int i = 1; i<=height; i++){
    //     for(int j = 1; j<=i; j++){

    //     cout << setw(2) << symbol;
    //     }
    //     cout << endl;
    // }

        // Reverse Rectangle Shape 
        for(int i = height; i>=1; i--){
             for(int j = 1; j<=i; j++){
        cout << setw(2) << symbol;
        }
        cout << endl;
    }

}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int size =0;
    int arr[size]; 
    
    cin >> size;
    
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    reverse(arr, arr + size);
     for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void swapNums(int &x, int &y) { // here one thing is doing that the variable memory addresses are changed by given & for the reference
  int z = x; // z = x(10 passing firstNum), z = 10 
  x = y; // x = y(20 passing secondNum), x = 20
  y = z; // y = z(10 set the value of firstNum)
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << endl << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << endl<< secondNum << "\n";

  return 0;
}


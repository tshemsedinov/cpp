#include <iostream>
using namespace std;

int main() {
  int x = 20;
  int *ptr;

  ptr = &x;

  cout << "Value of x variable: " << x << endl;
  cout << "Access x value by pointer: " << *ptr << endl;

  return 0;
}

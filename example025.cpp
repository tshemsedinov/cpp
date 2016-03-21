#include <iostream>
using namespace std;

int main() {
  int x = 20;
  int *ptr;

  ptr = &x;

  cout << "x = " << x << endl;
  cout << "ptr = " << ptr << endl;

  return 0;
}

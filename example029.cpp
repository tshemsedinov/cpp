#include <iostream>
using namespace std;

void fn(int *d) {
  *d = 5;
}

int main() {
  int x = 20;
  int *ptr;

  ptr = &x;

  fn(ptr);

  cout << "x = " << x << endl;

  return 0;
}

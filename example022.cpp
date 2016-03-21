#include <iostream>
using namespace std;

void fn(int &d) {
  d = 5;
}

int main() {
  int x = 2;
  cout << "x = " << x << endl;
  fn(x);
  cout << "x = " << x << endl;
  return 0;
}

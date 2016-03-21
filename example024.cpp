#include <iostream>
using namespace std;

void exchange(int &a, int &b) {
   int c;
   c = a;
   a = b;
   b = c;
   return;
}

int main() {
  int x = 2;
  int y = 5;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  exchange(x, y);
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double x, y;
  cout << "Enter x = ";
  cin >> x;
  int a;
  cout << "Cases:" << endl;
  cout << "  1) y = pow(x, 3)" << endl;
  cout << "  2) y = exp(x - 1)" << endl;
  cout << "  3) y = atan(x)" << endl;
  cout << "Select case: ";
  cin >> a;
  switch(a) {
    case 1: y = pow(x, 3); break;
    case 2: y = exp(x - 1); break;
    case 3: y = atan(x); break;
    default: cout << "Unknown case "; return 1;
  }
  cout << "Result y = " << y << endl;
  return 0;
}

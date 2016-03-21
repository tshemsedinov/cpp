#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double x, y;
  cout << "Enter x = ";
  cin >> x;
  if (x > 10) {
    y = pow(x, 3);
  } else {
    y = exp(x - 1);
  }
  cout << "Result y = " << y << endl;
  return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double x, y;
  cout << "Enter x = ";
  cin >> x;
  y = pow(x, 3) + log(x / 5) + exp(x - 1);
  cout << "Result y = " << y << endl;
  return 0;
}

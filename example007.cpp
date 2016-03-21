#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void input(string message, double *variable) {
  cout << message;
  cin >> *variable;
}

void check(bool condition, string message) {
  if (!condition) {
    cout << message << endl;
    exit(1);
  }
}

int main() {
  double x1, x2, y;
  input("Enter x1 = ", &x1);
  input("Enter x2 = ", &x2);
  check(x1 > 0 && x2 > 0, "x1 and x2 should be positive nonzero numbers");
  check(x1 + x2 < 100, "x1 + x2 should not be greater then 100");
  y = x1 / (exp(x1) + x2 * 2);
  cout << "Result y = " << y << endl;
  return 0;
}

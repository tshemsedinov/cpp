#include <iostream>
using namespace std;

int main() {
  double x1, x2, y;
  cout << "Enter x1 = ";
  cin >> x1;
  cout << "Enter x2 = ";
  cin >> x2;
  if (x1 > 0 && x2 > 0) {
    if (x1 + x2 <= 100) {
      y = x1 / (exp(x1) + x2 * 2);
      cout << "Result y = " << y << endl;
    } else cout << "x1 + x2 should not be greater then 100" << endl;
  } else cout << "x1 and x2 should be positive nonzero numbers" << endl;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int i = 1, f = 0, f0 = 0, f1 = 1;
  while (i <= 10) {
    f = f0 + f1;
    f0 = f1;
    f1 = f;
    i++;
    cout << "i = " << i << ", ";
    cout << "f = " << f << endl;
  }

  return 0;
}

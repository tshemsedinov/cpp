#include <iostream>
using namespace std;

int main() {
  int i = 0, f = 0, max = 20;
  while (f < max) {
    f = i++ * 2;
    cout << "i = " << i << ", ";
    cout << "f = " << f << endl;
  }

  return 0;
}

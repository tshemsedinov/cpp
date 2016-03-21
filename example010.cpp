#include <iostream>
using namespace std;

int main() {
  for (int i = 1; i < 10; i++) {
    cout << "2*" << i << "=" << 2 * i;
    if (i != 10 - 1) cout << endl;
  }
  return 0;
}

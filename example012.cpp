#include <iostream>
using namespace std;

int main() {
  int x = 10, y = 10, f;
  for (int i = 1; i < x; i++) {
    for (int j = 1; j < y; j++) {
      f = i * j;
      cout << i << "*" << j << "=" << f;
      if (j == y - 1) cout << endl;
      else {
        cout << ", ";
        if (f < 10) cout << " ";
      }
    }
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int x = 10, y = 10;
  for (int i = 1; i < x; i++) {
    for (int j = 1; j < y; j++) {
      cout << i << "*" << j << "=" << i * j;
      if (j == y - 1) cout << endl;
      else cout << ", ";
    }
  }
  return 0;
}

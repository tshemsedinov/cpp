#include <iostream>
using namespace std;

int main() {
  int i = -1, f = 0, f0 = 0, f1 = 1;
  do {
    if (i == -1) f = 0;
    else if (i == 0) f = 1;
    else {
      f = f0 + f1;
      f0 = f1;
      f1 = f;
    }
    i++;
    cout << "i = " << i << ", ";
    cout << "f = " << f << endl;
  } while (i < 10);
  return 0;
}

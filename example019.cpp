#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
  int f[10];
  f[0] = 0;
  f[1] = 1;
  int i = 2;
  do {
    f[i] = f[i-1] + f[i-2];
    i++;
  } while (i < 10);

  for (int j = 0; j < 10; j++) {
    cout << "j = " << j << ", ";
    cout << "f[j] = " << f[j] << endl;
  }

  return 0;
}

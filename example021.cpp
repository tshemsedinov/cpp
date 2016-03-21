#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
  int a[10] = { 0, 5, 3, -2, 1, 0, -5, -10, 1, 7 };
  int length = sizeof(a)/sizeof(*a);
  cout << "Length = " << length << endl;
  int count = 0;
  for (int i = 0; i < length-1; i++) {
    if (a[i] > 0) {
      cout << "i = " << i << ", ";
      cout << "a[i] = " << a[i] << ", ";
      cout << "count = " << ++count << endl;
    }
  }
  return 0;
}

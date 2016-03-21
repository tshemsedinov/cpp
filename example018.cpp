#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
  int arr[10];
  for (int i = 0; i < 10; i++) {
    arr[i] = pow(i, 3);
  }
  cout << "arr[5] = 5*5*5 = " << arr[5];
  return 0;
}

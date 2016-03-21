#include <iostream>
using namespace std;

int main() {

  cout << "for loop" << endl;
  for (int i = 0; i < 10; i++) {
    cout << i << " ";
    if (i == 5) break;
  }
  cout << endl;

  cout << "while loop" << endl;
  int j = 0;
  while (j < 10) {
    cout << j << " ";
    if (j == 5) break;
    j++;
  }
  cout << endl;
  
  cout << "do while loop" << endl;
  int k = 0;
  do {
    cout << k << " ";
    if (k == 5) break;
    k++;
  } while (k < 10);
  cout << endl;

  return 0;

}

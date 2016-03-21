#include <iostream>
using namespace std;

int main() {
  int x = 20;
  int *ptr;

  ptr = &x;

  if (ptr) cout << "ptr is not NULL" << endl;

  ptr = NULL;

  if (!ptr) cout << "ptr in NULL" << endl;

  return 0;
}

#include <iostream>
#include <string>
using namespace std;

void input(string message, int *variable) {
  cout << message;
  cin >> *variable;
}

int main() {
  int count;
  input("Enter count = ", &count);

  for (int i = 0; i < count; i++) {
    cout << i << ", ";
  }

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int b = 3;
  cout << "int a = " << a << "; int b = " << b << endl;

  int c = a/b;
  cout << "int c = a/b = " << c << endl;

  double d = (double)a/b;
  cout << "double d = (double)a/b = " << d << endl;

  double e = a/b;
  cout << "double e = a/b = " << e << endl;

  double f = ((double)a) / ((double)b);
  cout << "double f = ((double)a) / ((double)b) = " << f << endl;

  int g = a%b;
  cout << "int g = a%b = " << g << endl;

  return 0;
}

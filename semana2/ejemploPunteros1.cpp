#include <iostream>

using namespace std;

int main() {
  int x = 20;
  int *ptr = &x;

  cout << *ptr << endl;
  cout << x << endl;

  return 0;
}


#include <iostream>

using namespace std;

int main() {
  int arr[] = {2,5,8,9,6};
  int tam = sizeof(arr) / sizeof(arr[0]);

  int *ptr = arr;

  for(int i = 0; i < tam; i++, ptr++){
    cout << *ptr << " ";
  }
  cout << endl; 

  return 0;
}


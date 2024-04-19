#include <iostream>

using namespace std;

int sumar(int *arr, int tam){
  int sum  = 0;
  for(int i = 0; i < tam; i++, sum += *arr++);
  return sum;
}


int main() {
  int arr[] = {2,5,8,9,6};
  int tam = sizeof(arr) / sizeof(arr[0]);

  cout << sumar(arr, tam) << endl; 

  return 0;
}


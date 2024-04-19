#include <iostream>

using namespace std;

void print(int *arr, int tam){
  cout << "[ ";
  for(int i = 0; i < tam; i++)
      cout << *arr++ << " ";
  cout << "]" << endl;
}

void invertir(int *ini, int *fin) {
  while(ini < fin) {
    int tmp = *ini;
    *ini = *fin;
    *fin = tmp;
    ini++;
    fin--;
  }
}

int main() {
  int arr[] = {2,5,8,9,6};
  int tam = sizeof(arr) / sizeof(arr[0]);

  print(arr, tam);
  invertir(arr, arr+tam-1);
  print(arr, tam);
  
  return 0;
}


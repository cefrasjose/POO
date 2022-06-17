#include <iostream>

using  namespace std;

void soma(int x, int y, int z){
  z = x + y;
}

void soma2(int *x, int *y, int *z){
  *z = *x + *y;
}

void soma3(int &x, int &y, int &z){
  z = x + y;
}

int main(){
  int a = 10, b = 20, c = 0;
  soma(a, b, c);
  cout << "Valor de c (por valor): " << c << "\n";
  soma2(&a, &b, &c);
  cout << "Valor de c (por ref): " << c << "\n";
  soma3(a, b, c);
  cout << "Valor de c (por ref ref): " << c << "\n";

  return 0;
}

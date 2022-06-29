#include "complexo.h"
#include <iostream>

using namespace std;

int main() {
  Complexo n1 {10,20};
  Complexo n2 {5,15};

  cout << "n1 = ";
  n1.print();
  cout << endl;

  cout << "n2 = ";
  n2.print();
  cout << endl;

  Complexo n3, n4;
  n3 = n1 + n2;
  n4 = n1 - n2;

  cout << "n1 (add) = ";
  n3.print();
  cout << endl;

  cout << "n2 (sub) = ";
  n4.print();
  cout << endl;
  
  return 0;
}

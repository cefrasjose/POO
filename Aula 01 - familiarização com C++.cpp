#include <iostream> // entrada e saida
using namespace std;

int square(int); // prototipo

int main(){
  int n = 0;
  cout << "Entre com um inteiro: ";
  cin >> n;
  cout << "Resultado (quadrado) = " << square(n) << "\n";
  return 0;
}

// implementacoes
int square(int num){
  return num*num;
}

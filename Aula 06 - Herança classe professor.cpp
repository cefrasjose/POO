#include "professor.h"
#include <iostream>

using namespace std;

Professor::Professor(string n, string e, int s, int c, string i) : Pessoa{n, e} {
  siepe = s;
  categoria = c;
  instituto = i;
}

void Professor::imprime() {
  Pessoa::imprime();
  cout << "SIEPE: " << siepe << "\n";
  cout << "Categoria: " << categoria << "\n";
  cout << "Instituto: " << instituto << "\n";
}

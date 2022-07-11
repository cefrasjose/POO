#include "forma.h"
#include "retangulo.h"
#include "circulo.h"
#include <iostream>
using namespace std;

int main() {
  Forma* vetor_formas[5];
  vetor_formas[0] = new Retangulo{10, 30, 45, 21};
  vetor_formas[1] = new Retangulo{10, 30, 45, 21};
  vetor_formas[2] = new Circulo{0, 0, 15.5};
  vetor_formas[3] = new Circulo{9.0, 0.75, 18};
  vetor_formas[4] = new Retangulo{0, 0, 10, 10 };

  for(auto x : vetor_formas) {
    cout << "Forma: " << endl;
    x->imprime_dados();
    cout << "\n\n";
  }
    
  return 0;
}

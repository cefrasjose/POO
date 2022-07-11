#ifndef CIRCULO_H
#define CIRCULO_H

#include "forma.h"
#include <iostream>
using namespace std;

class Circulo : public Forma {
  private:
    double r;
  public:
    Circulo(double, double, double);
    ~Circulo() {}
    virtual double area();
    virtual void imprime_dados();
};

#endif

Circulo::Circulo(double xx, double yy, double rr) : Forma{xx, yy}, r{rr} { }

double Circulo::area() {
  return 3.141592*r*r;
}

void Circulo::imprime_dados() {
  Forma::imprime_dados();
  cout << "\nRaio = " << r << endl;
  cout << "Area = " << area() << endl;
}

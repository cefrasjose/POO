#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>
#include <cmath> 
using namespace std;

class Complexo
{
  private:
    double re, im;
  public:
    Complexo(double=0, double=0);
    ~Complexo() {}
    double get_real() {return re;}
    double get_imag() {return im;}

    //definindo operadores
    operator int();
    friend Complexo operator+(Complexo&, Complexo&); // +
    Complexo operator-(Complexo&); // -
    friend ostream& operator<<(ostream&, const Complexo&);
    friend istream& operator>>(istream&,  Complexo&);
};

#endif

//Construtor
Complexo::Complexo(double r, double i): re{r}, im{i} {}

//Sobrecarga de operadores
// soma
Complexo operator+(Complexo& c1, Complexo& c2) 
{
  double r, i;
  r = c1.re + c2.re;
  i = c1.im + c2.im;
  return Complexo{r, i};
}

// subtração
Complexo Complexo::operator-(Complexo& c) {
  double r, i;
  r = re - c.get_real();
  i = im - c.get_imag();
  return Complexo{r, i};
}

Complexo::operator int() {
  return sqrt(re*re + im*im); 
}

ostream& operator<<(ostream& out, const Complexo& c) {
  out << c.re << " + (" << c.im << ")i";
  return out;
}

istream& operator>>(istream& in,  Complexo& c) {
  in >> c.re >> c.im;
  return in;
}


int main() 
{
  Complexo a, b;

  cout << "Entre com o complexo a: ";
  cin >> a;
  cout << "Agora entre com o complexo b: ";
  cin >> b;

  //a = a + b; // notação direta e simples
  //b = b - a; // como em representação aritmética comum

  cout << "Numeros criaddos : \n";
  cout << a << " e " << b << endl;

  cout << "Convertidos para inteiro: \n";
  cout << (int)a << " e " << (int)b << endl;
  
  return 0;
}

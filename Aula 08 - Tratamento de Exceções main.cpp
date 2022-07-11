#include <iostream>
#include <stdexcept> 
#include <exception>
using namespace std;

class DividePorZeroException : public runtime_error {
  public:
    DividePorZeroException() : runtime_error("Tentativa de divisao por zero!") { }
};

int quociente(int n, int m){
  if(m == 0)
    throw DividePorZeroException();
  return n/m;
}

int main() {
  int x = 0, y = 0;
  cout << "Entre com os valores de x e y: ";
  cin >> x >> y;
  try 
  {
    cout << "Resultado: " << quociente(x, y) << endl;
  }
  catch (DividePorZeroException &ex)
  {
    cout << "Entrou em DividePorZero" << endl;
  } 
  catch (runtime_error &ex)
  {
    cout << "Entrou em runtime_error: " << endl;
  } 
  catch (exception &ex) 
  {
    cout << "Capturei uma excecao qualquer" << endl;
  }
  cout << "Programa finalizado!!" << endl;
  return 0;
}

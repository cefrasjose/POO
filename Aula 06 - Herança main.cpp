#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
#include <iostream>

using namespace std;

int main() {
  Pessoa p1 {"Joao", "Itajuba-MG"};
  cout << "Pessoa apenas: " << endl;
  p1.imprime();
  
  Aluno a1 {"Pedro", "Campinas-SP", "Eco", 12345};
   cout << "\nAluno: " << endl;
  a1.imprime();
  
  Professor pr1 {"Jose", "Sao Paulo - SP", 678910, 3, "ICA"};
   cout << "\nProfessor: " << endl;
  pr1.imprime();

  Pessoa p2 = pr1;
  cout << "Outra Pessoa apenas: " << endl;
  p2.imprime();
  
  return 0;
}

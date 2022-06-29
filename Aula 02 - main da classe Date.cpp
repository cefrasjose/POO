#include <iostream>
#include "date.h"

using namespace std;

int main() {
  Date aniversario {10, 8, 2002};
  cout << "Aniversario do aluno: ";
  aniversario.print();

  Date today {27, 6, 2022};
  today.set_day(29).set_month(6).set_year(2022);
  cout << "\nHoje: ";
  today.print();

  cout << "\nQuantas instancias ativas? " << Date::how_many_instances() << endl;
  return 0;
}

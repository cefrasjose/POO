#include "date.h"
#include <iostream>

using namespace  std;

int Date::howmany = 0;

// construtor
Date::Date(int dd, int mm, int yy) : d{dd}, m{mm}, y{yy}{
  count = 0;
  howmany++;
}

Date::~Date() { howmany--;  }

// imprime a data e conta a quantidade de chamdas
void Date::print() const {
  cout << d << "/" << m << "/" << y;
  count++;
}

Date& Date::set_day(int value) {
  if(value > 0 && value <= 31)
    d = value;
  return *this;
}

Date& Date::set_month(int value) {
  if(value > 0 && value <= 12)
    m = value;
  return *this;
}

Date& Date::set_year(int value) {
  if(value >= 0)
    y = value;
  return *this;
}

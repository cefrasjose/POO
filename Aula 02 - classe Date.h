#ifndef DATE_H
#define DATE_H

class Date 
{
private:
  int d, m, y;
  mutable int count;
  static int howmany;

public:
  Date(int = 1, int = 11, int = 1985);
  ~Date(); // In-class
  int get_day() const {return d;}
  int get_month() const {return m;}
  int get_year() const {return y;}
  int get_count() const {return count;}
  void print() const;
  static int how_many_instances() {return howmany;}

  Date& set_day(int);
  Date& set_month(int);
  Date& set_year(int);
};

#endif

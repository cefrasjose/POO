#include <iostream>

using  namespace std;

int main(){
  int vetor[] {1,2,3,4,5,6,7,8,9,10};

  cout << "Percorrendo vetor da maneira normal: \n";
  for(int i = 0; i < 10; i++) {
    cout << vetor[i] << " - ";
  }


  cout  << "\n\nPercorrendo vetor com range-for: \n";
  for(int x : vetor){
    cout << x << " - ";
  }

  return 0;
}

#include <iostream>
#include <string>

using  namespace std;

int main(){
  string nome = "";
  string sobren = "";

  cout  << "Entre com seu nome: ";
  getline(cin, nome);

  cout << "Agora entre com seu sobrenome: ";
  cin >> sobren;

  string nome_completo = nome + " " + sobren;
  cout << "Nome completo: " << nome_completo << "\n";
      
   return 0;
}

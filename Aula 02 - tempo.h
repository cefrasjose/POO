#ifndef TEMPO_H
#define TEMPO_H


// arquivo cabeçalho  (header)
class Tempo {
  // membros privados
  private:
    int hora, minuto, segundo; // membors de dados
    
  public:
    Tempo(); // construtor - inicializar
    Tempo(int, int, int);
    void setTempo(int, int , int);
    void imprime();
    ~Tempo() { } // destruindo 
};


#endif

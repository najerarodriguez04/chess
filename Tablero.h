#ifndef _TABLERO
#define _TABLERO
#include <iostream>
#include "Celda.h"

using namespace std;

class Tablero{
private:
   Tablero* tableroPrt;
   static const int DIMENSION = 8;
   Celda * celdaPtr[DIMENSION][DIMENSION];


public:
  Tablero();
  ~Tablero();
  Celda* getCelda(int x, int y);
  Tablero * getTablero();

};
#endif

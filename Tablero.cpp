#include<iostream>
using namespace std;
#include "Tablero.h"
#include "Ficha.h"


Tablero::Tablero(){
  // Set up squares (_DIMENSION x _DIMENSION)
    for (int i = 0; i < DIMENSION; i++){
        for (int j = 0; j < DIMENSION; j++){
            celdaPtr[i][j] = new Celda(i, j);
        }
    }
}


Tablero::~Tablero(){
  // Delete squares
  for (int i = 0; i < DIMENSION; i++)
  {
      for (int j = 0; j < DIMENSION; j++)
      {
          //delete[] celdaPtr[i][j];
      }
      //delete[] celdaPtr[i];
  }
  //delete[] celdaPtr;
}

Tablero* Tablero::getTablero()
{
    if (!tableroPrt)
        tableroPrt = new Tablero();
    return tableroPrt;
}

/*
 *  square.cpp
 *  ChessProject
 */
#include "Ficha.h"
#include "Celda.h"

Celda::Celda(int x, int y) : x(x), y(y), fichaPtr(NULL)
{
}

Celda::~Celda()
{
}

void Celda::setFicha(Ficha* ficha)
{
  fichaPtr = ficha;
}

int Celda::getX() const
{
    return x;
}

int Celda::getY() const
{
    return y;
}

bool Celda::estaOcupado() const
{
    return fichaPtr;
}

Ficha* Celda::getFicha() const
{
    return fichaPtr;
}

/**
 * square.h
 *
 * This class represents a square on a game board.
 *
 */
#ifndef CELDA_H
#define CELDA_H

class Ficha;

using namespace std;

class Celda
{
private:
   // Private attributes
   int x;
   int y;
   Ficha* fichaPtr;
 public:

    /**
    * Creates a Square
    *
    * @params x, y the location of the square on the board
    */
    Celda(int x, int y);

    /**
     * Default destructor
     */
    ~Celda();

    /**
    * Set the piece that occupies the square
    *
    * @param piece the piece on the square
    */
    void setFicha(Ficha* ficha);

    /**
    * Get the X position of the square
    *
    * @return the position
    */
    int getX() const;

    /**
    * Get the Y position of the square
    *
    * @return the position
    */
    int getY() const;

    /**
    * Determine if the square is occupied by a piece
    *
    * @return if occupied
    */
    bool estaOcupado() const;

    /**
    * Get the Piece that is on the square
    *
    * @return the piece
    */
    Ficha* getFicha() const;


}; // Square

#endif

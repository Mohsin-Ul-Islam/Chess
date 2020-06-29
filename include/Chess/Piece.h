#ifndef PIECE_H
#define PIECE_H

#include "Chess/PiecePosition.h"

class Piece {

  public:

    Piece();
    Piece(const Piece& p);
    Piece(const PiecePosition& p);

    void move(const PiecePosition& to);
    PiecePosition getPiecePosition() const;
    unsigned long getStepsTakenSoFar() const;
    char getPieceSymbol() const;

    virtual bool validateMove(const PiecePosition& p) = 0;

  private:

    void initializePiece(const PiecePosition& p);

  protected:

    virtual void init() = 0;

    PiecePosition position;
    unsigned long stepsTakenSoFar;
    char symbol;

};

#endif

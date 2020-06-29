#ifndef PAWN_H
#define PAWN_H

#include "Chess/Piece.h"

class Pawn : public Piece {

  public:

    Pawn();
    Pawn(const Pawn& p);
    Pawn(const PiecePosition& p);

    bool validateMove(const PiecePosition& p);

  private:

    void init();
};

#endif

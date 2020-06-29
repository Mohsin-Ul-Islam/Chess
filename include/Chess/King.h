#ifndef KING_H
#define KING_H

#include "Chess/Piece.h"

class King : public Piece {

  public:

    King();
    King(const King& k);
    King(const PiecePosition& p);

    bool validateMove(const PiecePosition& p);

  private:

    void init();

};

#endif

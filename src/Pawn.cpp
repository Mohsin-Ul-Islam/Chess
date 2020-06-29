#include "Chess/Pawn.h"

Pawn::Pawn() : Piece() { this->init(); }
Pawn::Pawn(const Pawn& p) : Piece(p) { this->init(); }
Pawn::Pawn(const PiecePosition& p) : Piece(p) { this->init(); }

void Pawn::init() {
  this->symbol = 'P';
}

bool Pawn::validateMove(const PiecePosition& p) {

  const int currentX = this->position.getXCoordinate();
  const int currentY = this->position.getYCoordinate();

  const int toX = p.getXCoordinate();
  const int toY = p.getYCoordinate();

  const int maxMoveSteps = this->stepsTakenSoFar > 0 ? 1 : 2;

  if (toX - currentX <= maxMoveSteps
   && toY == currentY) {
     return true;
   }

   return false;

}

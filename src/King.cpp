#include "Chess/King.h"

King::King() { this->init(); }
King::King(const King& k) : Piece(k) { this->init(); }
King::King(const PiecePosition& p) : Piece(p) { this->init(); }

void King::init() {
  this->symbol = 'K';
}

bool King::validateMove(const PiecePosition& p) {

  const int currentX = this->position.getXCoordinate();
  const int currentY = this->position.getYCoordinate();

  const int toX = p.getXCoordinate();
  const int toY = p.getYCoordinate();

  const int maxMoveSteps { 1 };

  if (std::abs(toX - currentX) <= maxMoveSteps
  &&  std::abs(toY - currentY) <= maxMoveSteps) {
    return true;
  }

  return false;

}

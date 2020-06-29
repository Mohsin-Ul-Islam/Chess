#include "Chess/Piece.h"

Piece::Piece() {
  this->initializePiece(PiecePosition(-1,-1));
}

Piece::Piece(const PiecePosition& p) {
  this->initializePiece(p);
}

Piece::Piece(const Piece& p) {
  this->position = p.getPiecePosition();
  this->stepsTakenSoFar = p.getStepsTakenSoFar();
}

void Piece::move(const PiecePosition& p) {
  if (this->validateMove(p)) {
    this->position = p;
    this->stepsTakenSoFar += 1;
  }
}

void Piece::initializePiece(const PiecePosition& p) {
  this->position = p;
  this->symbol = '0';
  this->stepsTakenSoFar = 0;
}

unsigned long Piece::getStepsTakenSoFar() const {
  return this->stepsTakenSoFar;
}

char Piece::getPieceSymbol() const {
  return this->symbol;
}

PiecePosition Piece::getPiecePosition() const {
  return this->position;
}

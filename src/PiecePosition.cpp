#include "Chess/PiecePosition.h"

PiecePosition::PiecePosition() {
  this->xCoordinate = 0;
  this->yCoordinate = 0;
}

PiecePosition::PiecePosition(const PiecePosition& p) {
  this->xCoordinate = p.getXCoordinate();
  this->yCoordinate = p.getYCoordinate();
}

PiecePosition::PiecePosition(const int& x, const int& y) {
  this->xCoordinate = x;
  this->yCoordinate = y;
}

void PiecePosition::setXCoordinate(const int& x) {
  this->xCoordinate = x;
}

void PiecePosition::setYCoordinate(const int& y) {
  this->yCoordinate = y;
}

int PiecePosition::getXCoordinate() const {
  return this->xCoordinate;
}

int PiecePosition::getYCoordinate() const {
  return this->yCoordinate;
}

std::ostream& PiecePosition::operator<<(std::ostream& os) {
  os << this->getOutputString();
  return os;
}

std::string PiecePosition::getOutputString() const {
  return "(" + std::to_string(this->xCoordinate) + "," + std::to_string(this->yCoordinate) + ")";
}

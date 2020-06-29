#ifndef POSITION_H
#define POSITION_H

#include <string>

class PiecePosition {

  public:

    PiecePosition();
    PiecePosition(const PiecePosition& p);
    PiecePosition(const int& x, const int& y);

    void setXCoordinate(const int& x);
    void setYCoordinate(const int& y);

    int getXCoordinate() const;
    int getYCoordinate() const;

    std::ostream& operator<<(std::ostream& os);

  private:

    int xCoordinate;
    int yCoordinate;

    std::string getOutputString() const;

};

#endif

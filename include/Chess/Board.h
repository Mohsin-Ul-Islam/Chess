#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <iomanip>
#include <regex>
#include "Chess/Piece.h"
#include "Chess/PiecePosition.h"
#include "Chess/King.h"
#include "Chess/Pawn.h"

class Board {

  public:

    Board();
    ~Board();

    void print();

  private:

    void initializeBoard();
    void createBoard();
    void cleanBoard();
    void deleteBoard();

    void placePieces();
    void placeKings();
    void placeQueens();
    void placeKnights();
    void placeBishops();
    void placeRooks();
    void placePawns();

    Piece *** board;

    const unsigned BOARD_ROW_COUNT { 8 };
    const unsigned BOARD_COLUMN_COUNT { 8 };

};

#endif

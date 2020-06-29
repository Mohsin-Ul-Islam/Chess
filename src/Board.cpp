#include "Chess/Board.h"

Board::Board() {
  this->initializeBoard();
}

void Board::initializeBoard() {
  this->createBoard();
  this->cleanBoard();
  this->placePieces();
}

void Board::createBoard() {
  this->board = new Piece ** [this->BOARD_ROW_COUNT];

  for(int i = 0; i < this->BOARD_ROW_COUNT; i++)
    this->board[i] = new Piece * [this->BOARD_COLUMN_COUNT];
}

void Board::cleanBoard() {
  for (int i = 0; i < this->BOARD_ROW_COUNT; i++) {
    for (int j = 0; j < this->BOARD_COLUMN_COUNT; j++) {
      this->board[i][j] = nullptr;
    }
  }
}

void Board::placePieces() {
  this->placeKings();
  this->placeQueens();
  this->placeKnights();
  this->placeBishops();
  this->placeRooks();
  this->placePawns();
}

void Board::placeKings() {
  //player one king
  this->board[0][3] = new King(PiecePosition(0,3));

  //player two king
  this->board[7][4] = new King(PiecePosition(7,4));
}

void Board::placeQueens() {
  //player one queens

  //player two queens
}

void Board::placeKnights() {
  //player one knights

  //player two knights
}

void Board::placeBishops() {
  //player one bishops

  //player two bishops
}

void Board::placeRooks() {
  //player one rooks

  //player two rooks
}

void Board::placePawns() {
  //player one pawns
  for  (int i = 0; i < 8; i++) {
    this->board[1][i] = new Pawn(PiecePosition(1,i));
  }

  //player two pawns
  for  (int i = 0; i < 8; i++) {
    this->board[6][i] = new Pawn(PiecePosition(6,i));
  }
}

Board::~Board() {
  this->cleanBoard();
  this->deleteBoard();
}

void Board::deleteBoard() {

  for (int i = 0; i < this->BOARD_ROW_COUNT; i++) {
    this->board[i] = nullptr;
    delete[] this->board[i];
  }

  this->board = nullptr;
  delete[] this->board;

}

void Board::print() {

  std::string layoutGuideAlpha { "ABCDEFGH" };
  std::string layoutGuideNumeric { "01234567" };

  std::cout<<std::setw(1)<<' ';

  for (char c : layoutGuideAlpha) {
    std::cout<<std::setw(6)<<c;
  }

  std::cout<<"\n\n";

  for (int i = 0; i < this->BOARD_ROW_COUNT; i++) {
    std::cout<<layoutGuideNumeric[i];
    for (int j = 0; j < this->BOARD_COLUMN_COUNT; j++) {
      char symbol;
      if (this->board[i][j] != nullptr) symbol = this->board[i][j]->getPieceSymbol();
      else symbol = '0';
      std::cout<<std::setw(6)<<symbol;
    }
    std::cout<<"\n\n";
  }

  std::cout<<std::endl;

}

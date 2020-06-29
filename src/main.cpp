#include <SFML/Graphics.hpp>
#include "Chess/Board.h"

using namespace sf;

int main() {

	Board* chessBoard = new Board();

	chessBoard->print();

	return 0;

}

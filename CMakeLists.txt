cmake_minimum_required(VERSION 3.0)
project(Chess)
find_package(SFML 2.5 COMPONENTS audio graphics system REQUIRED)
include_directories(./src ./include)
add_executable(game
  ./src/main.cpp
  ./src/PiecePosition.cpp
  ./src/Piece.cpp
  ./src/King.cpp
  ./src/Pawn.cpp
  ./src/Board.cpp
  )
target_link_libraries(game sfml-graphics sfml-system sfml-audio)

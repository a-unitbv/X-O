#pragma once
#include <iostream>
#include <iomanip>

enum PlayerTurn { firstPlayer = 1, secondPlayer = 2 };

class Board
{
private:
	char board[3][3];
	int validMovesCount = 0;
public:
	Board();
	void displayBoard();
	void displayBoardInit();
	void markBoard(char position, char playerSymbol);
	bool isValidPosition(char position);
	bool isAlreadyMarked(char position);
	bool isWinner();
	int getValidMovesCount();
};
#pragma once

#include <utility>

enum class ETicTacToeGameType
{
	Impl1,
	Impl2
};

using IBoardPtr = std::shared_ptr<class IBoard>;

class IBoard
{
public:
	static IBoard Produce(ETicTacToeGameType type);

	virtual void DisplayBoard() const = 0;
	virtual void DisplayBoardInit() const = 0;
	virtual void MarkBoard(char position, char playerSymbol) = 0;
	virtual bool IsValidPosition(char position) const = 0;
	virtual bool IsAlreadyMarked(char position) const = 0;
	virtual bool IsWinner() const = 0;
	virtual int GetValidMovesCount() const = 0;

	virtual ~IBoard() = default;
};
#include "Game.h"
#include "Board.h"

void Game::playerVsPlayer()
{
	Board board;
	char player1, player2, playerSymbol;
	int position;
	PlayerTurn playerTurn;

	srand(time(NULL));

	std::cout << "+-------------+" << std::endl;
	board.displayBoardInit();
	std::cout << "+-------------+" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter symbol for player 1: ";
	std::cin >> player1;
	std::cout << "Enter symbol for player 2: ";
	std::cin >> player2;

	std::cout << std::endl;
	std::cout << "Flipping a coin..." << std::endl;
	int coin = (rand() % 2 + 1);
	coin--;
	if (coin == 0)
		std::cout << "Player 1 is starting.";
	else
		std::cout << "Player 2 is starting.";
	std::cout << std::endl;

	while (board.getValidMovesCount() < 9)
	{
		std::cout << std::endl;
		if (board.getValidMovesCount() % 2 == coin)
		{
			playerTurn = firstPlayer;
			playerSymbol = player1;
			std::cout << "Player " << playerTurn << "'s turn. ";
		}
		else
		{
			playerTurn = secondPlayer;
			playerSymbol = player2;
			std::cout << "Player " << playerTurn << "'s turn. ";
		}
		std::cout << "Enter your position: ";
		std::cin >> position;
		std::cout << std::endl;
		position--;
		if (position <= 1 && position >= 9)
		{
			std::cout << "Invalid position! Please try another." << std::endl;
		}
		else
		{
			char pos = position + 49;
			if (!board.isValidPosition(pos))
			{
				std::cout << "Invalid position! Please try another." << std::endl;
			}
			else
			{
				if (board.isAlreadyMarked(pos))
				{
					board.markBoard(pos, playerSymbol);
					board.displayBoard();
				}
				else
				{
					std::cout << "Position already marked! Please try another." << std::endl;
				}
			}
		}
		if (board.isWinner())
		{
			
			std::cout << std::endl << "Player " << playerTurn << " wins!" << std::endl;
			break;
		}
		if (board.getValidMovesCount() == 9)
		{
			std::cout << std::endl << "Draw!" << std::endl;
			break;
		}
	}
}

void Game::playerVsComputer()
{
	Board board;
	char player, computer, playerSymbol;
	int position;

	srand(time(NULL));

	std::cout << "+-------------+" << std::endl;
	board.displayBoardInit();
	std::cout << "+-------------+" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter symbol for player: ";
	std::cin >> player;
	std::cout << "Enter symbol for computer: ";
	std::cin >> computer;

	std::cout << std::endl;
	std::cout << "Flipping a coin..." << std::endl;
	int coin = (rand() % 2 + 1);
	coin--;
	if (coin == 0)
		std::cout << "Player is starting.";
	else
		std::cout << "Computer is starting.";
	std::cout << std::endl;

	while (board.getValidMovesCount() < 9)
	{
		std::cout << std::endl;
		if (board.getValidMovesCount() % 2 == coin)
		{
			playerSymbol = player;
			std::cout << "Your turn. ";
			std::cout << "Enter your position: ";
			std::cin >> position;
			std::cout << std::endl;
			position--;
			if (position <= 1 && position >= 9)
			{
				std::cout << "Invalid position! Please try another." << std::endl;
			}
			else
			{
				char pos = position + 49;

				if (!board.isValidPosition(pos))
				{
					std::cout << "Invalid position! Please try another." << std::endl;
				}
				else
				{
					if (board.isAlreadyMarked(pos))
					{
						board.markBoard(pos, playerSymbol);
						board.displayBoard();
					}
					else
					{
						std::cout << "Position already marked! Please try another." << std::endl;
					}
				}
			}
			if (board.isWinner())
			{

				std::cout << std::endl << "You win!" << std::endl;
				break;
			}
			if (board.getValidMovesCount() == 9)
			{
				std::cout << std::endl << "Draw!" << std::endl;
				break;
			}
		}
		else
		{
			playerSymbol = computer;
			std::cout << "Computer's turn. ";
			std::cout << "Computer is thinking..." << std::endl;
			position = (rand() % 9 + 1);
			std::cout << std::endl;
			if (position <= 1 && position >= 9)
			{
				std::cout << "Invalid position! Please try another." << std::endl;
			}
			else
			{
				char pos = position + 49;
				board.isValidPosition(pos);

				if (!board.isValidPosition(pos))
				{
					std::cout << "Invalid position! Please try another." << std::endl;
				}
				else
				{
					if (board.isAlreadyMarked(pos))
					{
						board.markBoard(pos, playerSymbol);
						board.displayBoard();
					}
					else
					{
						std::cout << "Position already marked! Please try another." << std::endl;
					}
				}
			}
			if (board.isWinner())
			{

				std::cout << std::endl << "Computer wins!" << std::endl;
				break;
			}
			if (board.getValidMovesCount() == 9)
			{
				std::cout << std::endl << "Draw!" << std::endl;
				break;
			}
		}
	}
}

void Game::playGame()
{
	std::cout << "Press 'a' to play the game, in console, player vs. player." << std::endl;
	std::cout << "Press 'b' to play the game, in console, player vs. computer." << std::endl;
	std::cout << "Press 'c' to play the game, in GUI, player vs. player." << std::endl;
	std::cout << "Press 'd' to play the game, in GUI, player vs. computer." << std::endl;
	std::cout << "Press 'e' to exit." << std::endl;

	std::string option;
	bool menu = true;
	while (menu == true)
	{
		std::cin >> option;
		std::cout << std::endl;
		if (option.length() == 1)
			switch (option[0])
			{
			case 'a':
			{
				playerVsPlayer();
				std::cout << "Would you like to play again or perhabs try another mode? (Y / N)" << std::endl;
				char answer;
				std::cout << std::endl;
				std::cin >> answer;
				if (answer == 'Y' || answer == 'y')
				{
					system("cls");
					std::cout << "Press 'a' to play the game, in console, player vs. player." << std::endl;
					std::cout << "Press 'b' to play the game, in console, player vs. computer." << std::endl;
					std::cout << "Press 'c' to play the game, in GUI, player vs. player." << std::endl;
					std::cout << "Press 'd' to play the game, in GUI, player vs. computer." << std::endl;
				}
				else
				{
					menu = false;
				}
				break;
			}
			case 'b':
			{
				playerVsComputer();
				std::cout << "Would you like to play again or perhabs try another mode? (Y / N)" << std::endl;
				char answer;
				std::cout << std::endl;
				std::cin >> answer;
				if (answer == 'Y' || answer == 'y')
				{
					system("cls");
					std::cout << "Press 'a' to play the game, in console, player vs. player." << std::endl;
					std::cout << "Press 'b' to play the game, in console, player vs. computer." << std::endl;
					std::cout << "Press 'c' to play the game, in GUI, player vs. player." << std::endl;
					std::cout << "Press 'd' to play the game, in GUI, player vs. computer." << std::endl;
				}
				else
				{
					menu = false;
				}
				break;
			}
			case 'c':
			{
				break;
			}
			case 'd':
			{
				break;
			}
			case 'e':
			{
				menu = false;
				break;
			}
			default:
			{
				if (option[0] < 'a' || option[0] > 'e')
				{
					std::cout << "Not an option, try again:" << std::endl;
					std::cout << std::endl;
				}
			}
			}
	}
}
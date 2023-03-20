//#include "gtest/gtest.h"
//
//#include "Game.h"
//#include "Board.h"
//
////Test that the game switches between players in Player vs. Player mode correctly
//
//TEST(TicTacToeTest, PlayerVsPlayerSwitchPlayersTest)
//{
//    Game game;
//    Board board;
//    std::stringstream input;
//    input << "X\nO\n5\n3\n7\n8\n9\n";
//    std::cin.rdbuf(input.rdbuf());
//    game.PlayerVsPlayer();
//    ASSERT_EQ(board.IsWinner(), true);
//}
//
////Test that the game switches between the player and computer in Player vs. Computer mode correctly
//
//TEST(TicTacToeTest, PlayerVsComputerSwitchPlayersTest)
//{
//    Game game;
//    Board board;
//    std::stringstream input;
//    input << "X\nO\n5\n";
//    std::cin.rdbuf(input.rdbuf());
//    game.PlayerVsComputer();
//    ASSERT_EQ(board.IsWinner(), true);
//}
//
////Test that the game declares the winner in Player vs. Player mode correctly
//
//TEST(TicTacToeTest, PlayerVsPlayerWinnerTest)
//{
//    Game game;
//    Board board;
//    std::stringstream input;
//    input << "X\nO\n5\n3\n7\n1\n2\n";
//    std::cin.rdbuf(input.rdbuf());
//    game.PlayerVsPlayer();
//    ASSERT_EQ(board.IsWinner(), true);
//}
//
////Test that the game declares the winner in Player vs. Computer mode correctly
//
//TEST(TicTacToeTest, PlayerVsComputerWinnerTest)
//{
//    Game game;
//    Board board;
//    std::stringstream input;
//    input << "X\nO\n5\n1\n2\n3\n";
//    std::cin.rdbuf(input.rdbuf());
//    game.PlayerVsComputer();
//    ASSERT_EQ(board.IsWinner(), true);
//}
//
////Test that the game declares a draw in Player vs. Player mode correctly
//
//TEST(TicTacToeTest, PlayerVsPlayerDrawTest)
//{
//    Game game;
//    Board board;
//    std::stringstream input;
//    input << "X\nO\n5\n3\n7\n1\n9\n2\n4\n8\n6\n";
//    std::cin.rdbuf(input.rdbuf());
//    game.PlayerVsPlayer();
//    ASSERT_EQ(board.IsWinner(), false);
//}
//
////Test that the game declares a draw in Player vs. Computer mode correctly
//
//TEST(TicTacToeTest, PlayerVsComputerDrawTest)
//{
//    Game game;
//    Board board;
//    std::stringstream input;
//    input << "X\nO\n5\n1\n2\n3\n6\n7\n8\n4\n9\n";
//    std::cin.rdbuf(input.rdbuf());
//    game.PlayerVsComputer();
//    ASSERT_EQ(board.IsWinner(), false);
//}
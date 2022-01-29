#ifndef EIGHTPUZZLE_H
#define EIGHTPUZZLE_H

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "boardgame2d.h"

using namespace std::this_thread;
using namespace std::chrono;
using namespace std;
namespace Games
{
    class EightPuzzle : public BoardGame2D
    {
    public:
        EightPuzzle();

        void playUser(string move); /*playUser takes a string as a parameterand plays the game accordingly */
        void playAuto(); /* playAuto plays the game by the computerfor one move. */
        void print() const;  /* prints the game on the screen starting from the top left corner of the terminal. */
        bool endGame(); /* endGame returns true if the game is ended. */
        bool check_input(string userInput, int gameType);
        bool check_move(string move, int gameType);
        int boardScore(); /* boardScore returns an intscore value for the current board */
        void initialize(); /* initializes the board.  */

    private:
        vector<vector<int>> board;
    };
}

#endif // EIGHTPUZZLE_H
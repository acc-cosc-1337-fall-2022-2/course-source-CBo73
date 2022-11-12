//h
#include "tic_tac_toe.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef TicTacToeManager_H
#define TicTacToeManager_H

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::ostream;
using std::istream;

class TicTacToeManager
{

public:
    void get_winner_totals(int& x,int& o,int& t);
    void save_game(TicTacToe b);
    friend ostream& operator << (ostream &out, const TicTacToeManager& manager);

private:
    vector <TicTacToe> games;
    void update_winner_count(string winner);
    int x_wins = {0};
    int o_wins = {0};
    int ties = {0};
};
#endif
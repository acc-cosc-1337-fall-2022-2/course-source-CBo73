//h
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>

#ifndef TicTacToe_H
#define TicTacToe_H

using std::string;
using std::vector;
using std::cout;
using std::cin;

class TicTacToe
{

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;

private:
    string player;
    vector<string> pegs{" "," "," "," "," "," "," "," "," "};
    void set_next_player();
    bool check_board_full();
    void clear_board();
};

#endif
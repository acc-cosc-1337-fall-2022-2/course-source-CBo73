#include <iostream>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;

int main()
{
    TicTacToe game;

    string first_player;
    int position;
    int select = 0;

    while (select == 0)
    {
        cout << "Player One: Choose X or O\n";
        cin >> first_player;

        if (first_player == "X" || first_player == "O")
        {
            game.start_game(first_player);
            do
            {
                cout << "Player " << game.get_player() << " choose position 1-9\n";
                game.display_board();
                cin >> position;
                game.mark_board(position);
            }
            while (!game.game_over());

            game.display_board();
            game.game_over();
            cout << "Would you like to play again? Press 0 for continue or 1 to Exit\n";
            cin >> select;
        }
        else
        {
            cout << "Invalid entry. Please try again\n";
        }
    }
    while (select != 0)
    {
        cout<<"Thank you for playing!";
        break;
    }
	return 0;
}
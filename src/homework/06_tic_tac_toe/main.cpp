#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;

int main()
{
    TicTacToe game;
    TicTacToeManager manager;

    string first_player;
    int position;
    int select = 0;

    vector<int> allowed_positions{1,2,3,4,5,6,7,8,9};

    while (select == 0)
    {
        cout << "Player One: Choose X or O\n";
        cin >> first_player;

        if (first_player == "X" || first_player == "O")
        {
            game.start_game(first_player);
            do
            {
                cout << game;
                cin >> game;
            }
            while (!game.game_over());

            cout << game;
            manager.save_game(game);

            int x, o, t;
            manager.get_winner_totals(x,o,t);
            cout << "\nX Wins: " << x << "\n";
            cout << "O Wins: " << o << "\n";
            cout << "Ties: " << t << "\n";

            string winner = game.get_winner();

            if(winner == "X")
            {
                cout<<"\nThe winner is "<<winner<<"\n";
            }
            else if(winner == "O")
            {
                cout<<"\nThe winner is "<<winner<<"\n";
            }
            else if(winner == "C")
            {
                cout<<"\nThe game has ended in a tie\n";
            }

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
        cout<<"Thank you for playing!"<<"\n\n";
        break;
    }
    cout<<manager;
	return 0;
}
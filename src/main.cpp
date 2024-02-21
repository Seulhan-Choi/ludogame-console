#include <iostream>
#include <vector>
#include <string>

#include "player.h"
#include "dice.h"
#include "piece.h"
#include "game.h"

using namespace std;

int main()
{
    cout << "Welcome!" << endl;
	system("pause");
	int n;
	cout << "Number of players: ";
	cin >> n;

    vector<player> players(n);

    for (int i = 0; i < n; ++i) {
        player newPlayer;
        string playerName;
        cout << "Please input the name of player " << i+1 << ": ";
        cin >> playerName;
        newPlayer.setName(playerName);
        players[i] = newPlayer;
    }
    cout << "Game start!" << endl;
    
    game gameloop;
    dice dice1;
    dice dice2;

    gameloop.setEndGame(false);
    while (gameloop.getEndGame() == false) {
        //cin >> n;
        //cout << players[n-1].testPrintName() << endl;
        for (int i = 0; i < n; ++i) {
            cout << "Player " << players[i].getName() << ", rolls the dice." << endl;
            dice1.diceRoll();
            dice2.diceRoll();
            system("pause");
            cout << dice1.getRoll() << ", and " << dice2.getRoll() << "! Total of " << dice1.getRoll() + dice2.getRoll() << endl;

            if (dice1.getRoll() == 5 || dice2.getRoll() == 5 || dice1.getRoll() + dice2.getRoll() == 5) {
                if (players[i].getreservePieces() == 0) {
                    cout << "You have rolled a 5, but you don't have any more pieces!" << endl;
                    system("pause");
                }
                else
                {
                    cout << "You have rolled a 5! You can either move a piece out or move an existing piece." << endl;
                    cout << "1. Move a piece out" << endl;
                    cout << "2. Move existing piece" << endl;

                    int a;
                    cin >> a;
                    if (a == 1) {

                    }

                }









                cout << "Next player!" << endl;
                system("pause");
            }
        }
        cout << "loopCheckTest" << endl;
    }
}

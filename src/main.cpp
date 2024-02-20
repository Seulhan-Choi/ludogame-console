#include <iostream>
#include <vector>
#include <string>

#include "player.h"
#include "dice.h"

using namespace std;

int main()
{
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

    while (true) {
        cin >> n;
        cout << players[n-1].testPrintName() << endl;
    }
	
}

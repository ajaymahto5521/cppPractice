#include <iostream>
using namespace std;

class RPS {
public:
    string player1, player2;

    void select() {
        cout << "Player1 choose (rock/paper/scissors): ";
        cin >> player1;

        cout << "Player2 choose (rock/paper/scissors): ";
        cin >> player2;
    }

    void match() {
        select();

        if (player1 == player2) {
            cout << "Draw!";
        }
        else if (
            (player1 == "paper" && player2 == "rock") ||
            (player1 == "rock" && player2 == "scissors") ||
            (player1 == "scissors" && player2 == "paper")
        ) {
            cout << "Player1 wins!";
        }
        else {
            cout << "Player2 wins!";
        }
    }
};

int main() {
    cout << "Start match!\n";

    RPS s;
    s.match();

    return 0;
}
#include <iostream>
using namespace std;

// Global board
char arr[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void display() {
    cout << "\n===== TIC TAC TOE =====\n\n";

    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j];
            if (j < 2)
                cout << " | ";
        }
        cout << "\n";
        if (i < 2)
            cout << "---+---+---\n";
    }
    cout << endl;
}

void move(char player) {
    int pos;

    while (true) {
        cout << "Player " << player << " : Select position (1-9): ";
        cin >> pos;

        if (pos < 1 || pos > 9) {
            cout << "Invalid choice! Try again.\n";
            continue;
        }

        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;

        if (arr[row][col] == 'X' || arr[row][col] == 'O') {
            cout << "Position already occupied! Try again.\n";
            continue;
        }

        arr[row][col] = player;
        break;
    }
}

bool checkWin() {

    // Rows
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == arr[i][1] &&
            arr[i][1] == arr[i][2])
            return true;
    }

    // Columns
    for (int i = 0; i < 3; i++) {
        if (arr[0][i] == arr[1][i] &&
            arr[1][i] == arr[2][i])
            return true;
    }

    // Diagonals
    if (arr[0][0] == arr[1][1] &&
        arr[1][1] == arr[2][2])
        return true;

    if (arr[0][2] == arr[1][1] &&
        arr[1][1] == arr[2][0])
        return true;

    return false;
}

int main() {

    int turns = 0;

    while (turns < 9) {

        display();
        move('X');
        turns++;

        if (checkWin()) {
            display();
            cout << "Player X Wins!\n";
            return 0;
        }

        if (turns == 9)
            break;

        display();
        move('O');
        turns++;

        if (checkWin()) {
            display();
            cout << "Player O Wins!\n";
            return 0;
        }
    }

    display();
    cout << "Match Draw!\n";

    return 0;
}

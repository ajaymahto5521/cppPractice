#include <iostream>
using namespace std;

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

// Function to display the board
void displayBoard()
{
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "\n";
}


// Function to check if a player has won
bool checkWin()
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return true;
    }

    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return true;
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return true;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return true;

    return false;
}

// Function to check draw
bool checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
        }
    }
    return true;
}

// Function to make a move
void makeMove(char player)
{
    int choice;

    while (true)
    {
        cout << "Player " << player << ", enter position (1-9): ";
        cin >> choice;

        if (choice < 1 || choice > 9)
        {
            cout << "Invalid position! Try again.\n";
            continue;
        }

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            cout << "Position already taken! Try again.\n";
        }
        else
        {
            board[row][col] = player;
            break;
        }
    }
}

// Main function
int main()
{
    char player = 'X';

    cout << "===== TIC TAC TOE =====\n";

    while (true)
    {
        displayBoard();

        makeMove(player);

        if (checkWin())
        {
            displayBoard();
            cout << "Player " << player << " wins!\n";
            break;
        }

        if (checkDraw())
        {
            displayBoard();
            cout << "Game Draw!\n";
            break;
        }

        // Switch player
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    return 0;
}
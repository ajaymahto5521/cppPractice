#include <iostream>
using namespace std;

class TicTacToe
{
private:
    char board[3][3];
    char currentPlayer;

public:
    // Constructor
    TicTacToe()
    {
        currentPlayer = 'X';

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = ' ';
            }
        }
    }

    // Display Board
    void displayBoard()
    {
        cout << "\n";

        for (int i = 0; i < 3; i++)
        {
            cout << " ";

            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j];

                if (j < 2)
                    cout << " | ";
            }

            cout << endl;

            if (i < 2)
                cout << "---|---|---" << endl;
        }

        cout << endl;
    }

    // Player Move
    bool makeMove(int row, int col)
    {
        if (row < 0 || row > 2 || col < 0 || col > 2)
        {
            cout << "Invalid Position!\n";
            return false;
        }

        if (board[row][col] != ' ')
        {
            cout << "Cell Already Occupied!\n";
            return false;
        }

        board[row][col] = currentPlayer;
        return true;
    }

    // Check Winner
    bool checkWinner()
    {
        // Rows
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == currentPlayer &&
                board[i][1] == currentPlayer &&
                board[i][2] == currentPlayer)
                return true;
        }

        // Columns
        for (int i = 0; i < 3; i++)
        {
            if (board[0][i] == currentPlayer &&
                board[1][i] == currentPlayer &&
                board[2][i] == currentPlayer)
                return true;
        }

        // Diagonal
        if (board[0][0] == currentPlayer &&
            board[1][1] == currentPlayer &&
            board[2][2] == currentPlayer)
            return true;

        // Anti-diagonal
        if (board[0][2] == currentPlayer &&
            board[1][1] == currentPlayer &&
            board[2][0] == currentPlayer)
            return true;

        return false;
    }

    // Check Draw
    bool isBoardFull()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == ' ')
                    return false;
            }
        }

        return true;
    }

    // Change Player
    void switchPlayer()
    {
        if (currentPlayer == 'X')
            currentPlayer = 'O';
        else
            currentPlayer = 'X';
    }

    // Main Game Loop
    void play()
    {
        int row, col;

        while (true)
        {
            displayBoard();

            cout << "Player " << currentPlayer << endl;
            cout << "Enter Row (0-2): ";
            cin >> row;

            cout << "Enter Column (0-2): ";
            cin >> col;

            if (!makeMove(row, col))
                continue;

            if (checkWinner())
            {
                displayBoard();
                cout << "Player " << currentPlayer << " Wins!\n";
                break;
            }

            if (isBoardFull())
            {
                displayBoard();
                cout << "Match Draw!\n";
                break;
            }

            switchPlayer();
        }
    }
};

int main()
{
    TicTacToe game;
    game.play();

    return 0;
}
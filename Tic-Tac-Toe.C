#include <stdio.h>

int main()
{
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int choice;
    int row, col;
    int moves = 0;

    char currentPlayer = 'X';

    while (moves < 9)
    {
        printf("\n");

        printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);

        printf("\nPlayer %c, enter position (1-9): ", currentPlayer);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9)
        {
            printf("Invalid position! Try again.\n");
            continue;
        }

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O')
        {
            printf("Position already occupied! Try again.\n");
            continue;
        }

        board[row][col] = currentPlayer;
        moves++;

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    printf("\nFinal Board:\n");

    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);

    printf("\nGame Over!\n");

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = 10;
	while(count)
	{
		int x = rand()%9+1;
		int y = rand()%9+1;
		if(board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
// 	int i = 0;
// 	int j = 0;
// 	for(i=0; i<row; i++)
// 	{
// 		for(j=0; j<col; j++)
// 		{
// 			board[i][j] = ' ';
// 		}
// 	}
	memset(&board[0][0], ' ', row*col*sizeof(board[0][0]));
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for(i=0; i<row; i++)
	{
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		int j = 0;
		for(j=0; j<col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if(i<row-1)
		{
			//printf("---|---|---\n");
			for(j=0; j<col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("玩家走:>\n");

	while(1)
	{
		printf("请输入走的坐标:>");
		scanf("%d%d", &x, &y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			//合法
			if(board[x-1][y-1] != ' ')
			{
				printf("该坐标被占用，请重新输入!\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
		{
			printf("输入坐标非法, 请重新输入!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");

	while(1)
	{
		x = rand()%row;
		y = rand()%col;
		if(board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

static int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for(i=0; i<row; i++)
	{
		if(board[i][0]==board[i][1] &&  board[i][1]==board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for(i=0; i<col; i++)
	{
		if(board[0][i]==board[1][i] &&  board[1][i]==board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	//平局
	if(IsFull(board, row, col))
	{
		return 'P';
	}
	//继续
	return 'C';
}
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
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
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			if(board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("输入的坐标非法，请重新输入!\n");
		}
	}
}


void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	//

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
				return 0;//未满
		}
	}
	return 1;//满了
}

char CheckWin(char board[ROW][COL], int row, int col)
{
	//判断行
	int i = 0;
	for(i=0; i<row; i++)
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//判断列
	for(i=0; i<col; i++)
	{
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断对角线
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	//判断平局
	if(IsFull(board, row, col) == 1)
		return 'Q';
	//继续
	return 'C';
}



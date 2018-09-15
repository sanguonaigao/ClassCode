#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROWS][COLS], 
			   int row, int col, char set)
{
	/*int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			board[i][j] = set;
		}
	}*/
	memset(board, set, row*col*sizeof(board[0][0]));
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	//1-row
	//1-col
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;

	while(count)
	{
		x = rand()%row+1;
		y = rand()%col+1;
		if(board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
	
}

void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<=col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for(i=1; i<=row; i++)
	{
		printf("%d ", i);
		for(j=1; j<=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void FindMine(char mine[ROWS][COLS], 
			  char show[ROWS][COLS], int row, int col)
{
	//1. 输入坐标
	//2. 判断坐标的合法
		//a>非法
	    //b>合法
	//3. 判断是否为雷
	    //a>是雷，游戏结束
	    //b>不是雷，就统计周围雷的个数，并记录
	int win = 0;
	while(win<(row*col-EASY_COUNT))
	{
		int x = 0;
		int y = 0;
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);
		if(x>=1 && x<=row && y>=1 && y<=col)
		{
			//合法
			if(mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				PrintBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count+'0';//1
				win++;
				PrintBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
	//
	if(win>=(row*col-EASY_COUNT))
	{
		printf("恭喜你，排雷成功\n");
		PrintBoard(mine, ROW, COL);
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x-1][y]+
	mine[x-1][y-1]+
	mine[x][y-1]+
	mine[x+1][y-1]+
	mine[x+1][y]+
	mine[x+1][y+1]+
	mine[x][y+1]+
	mine[x-1][y+1]-8*'0';
}
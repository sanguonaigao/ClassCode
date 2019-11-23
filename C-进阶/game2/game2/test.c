#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*******************************\n");
	printf("***  1. play     0. exit    ***\n");
	printf("*******************************\n");
}
void game()
{
	//用来存放布置好的雷
	char mine[ROWS][COLS] = {0};//
	//展示排查出的雷的信息
	char show[ROWS][COLS] = {0};
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//1. 布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//2. 扫雷
	FindMine(mine, show, ROW, COL);
}
void Test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("*****          1. play      *****\n");
	printf("*****          0. exit      *****\n");
	printf("*********************************\n");
}

void game()
{
	//存放雷的信息
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	DispalyBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DispalyBoard(mine, ROW, COL);
	//排雷
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
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	Test();
	return 0;
}

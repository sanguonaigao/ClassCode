#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("**   1. play     0. exit **\n");
	printf("***************************\n");
}

void game()
{
	char mine[ROWS][COLS];//存放雷的//'0'
	char show[ROWS][COLS];//存放排查出的雷的信息//'*'
	//1. 初始化
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	//DisplayBoard(mine, ROW, COL);
	//2. 布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//3. 扫雷
	FindMine(mine, show, ROW, COL);
}

void test()
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
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
		//
	} while (input);
}
int main()
{
	//测试游戏
	test();
	return 0;
}
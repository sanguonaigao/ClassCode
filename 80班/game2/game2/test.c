#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//测试游戏
void menu()
{
	printf("********************************\n");
	printf("********      1. play    *******\n");
	printf("********      0. exit    *******\n");
	printf("********************************\n");
}

void game()
{
	//扫雷游戏的过程
	char mine[ROWS][COLS] = {0};//布置好的雷-'0'
	char show[ROWS][COLS] = {0};//排查出的雷的信息-'*'
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//
	DisplayBoard(show, ROW, COL);
	//1. 布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	//2. 排查雷
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
			//玩游戏
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}

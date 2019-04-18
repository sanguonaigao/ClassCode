#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//展开一片

void menu()
{
	printf("************************\n");
	printf("****    1. play     ****\n");
	printf("****    0. exit     ****\n");
	printf("************************\n");
}

void game()
{
	//布置好的雷的信息
	char mine[ROWS][COLS] = {0};//'0'
	//排查出雷的信息
	char show[ROWS][COLS] = {0};//'*'

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}
//测试扫雷代码
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		//打印菜单
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
	//测试
	test();
	system("pause");
	return 0;
}
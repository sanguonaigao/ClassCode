#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


//测试扫雷游戏
void menu()
{
	printf("************************\n");
	printf("*   1.play      0.exit *\n");
	printf("************************\n");
}

void game()
{
	//9*9
	//存储布置好雷的信息
	char mine[ROWS][COLS] = {0};//'0'
	//存放排查出来的雷的信息
	char show[ROWS][COLS] = {0};//'*'
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();
		printf("请选择>:");
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
	test();
	return 0;
}
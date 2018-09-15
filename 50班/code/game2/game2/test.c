#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void test()
{
	//测试游戏
	char mine[ROWS][COLS];//存放雷的信息
	char show[ROWS][COLS];//存放排查到的雷的信息
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	//布置雷
	SetMine(mine, ROW, COL);
	PrintBoard(show, ROW, COL);
	PrintBoard(mine, ROW, COL);

	//排雷
	FindMine(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}
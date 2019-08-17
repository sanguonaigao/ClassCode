#define _CRT_SECURE_NO_WARNINGS 1

//测试游戏的整个逻辑的
#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("******     1. play      ******\n");
	printf("******     0. exit      ******\n");
	printf("******************************\n");
}


void game()
{
	char board[ROW][COL] = {0};
	char ret = 0;
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
			break;
	}
	if(ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else if(ret == 'P')
	{
		printf("平局\n");
	}
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
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误, 请重新选择!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}

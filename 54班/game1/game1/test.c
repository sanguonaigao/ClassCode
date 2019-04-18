#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****     1. play     ****\n");
	printf("*****     0. exit     ****\n");
	printf("**************************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//玩游戏
	while(1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = CheckWin(board, ROW, COL);
		if(ret != 'C')
			break;
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = CheckWin(board, ROW, COL);
		if(ret != 'C')
			break;
	}
	//
	if(ret == '*')
	{
		printf("玩家赢\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢\n");
	}
	else if(ret == 'Q')
	{
		printf("平局\n");
	}
}

//测试游戏
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
			printf("选择错误!\n");
			break;
		}
	} while (input);
}

int main()
{
	//测试三子棋游戏
	test();
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("***********************\n");
	printf("***      1.play     ***\n");
	printf("***      0.exit     ***\n");
	printf("***********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplatBoard(board,	ROW, COL);
	//下棋
	while(1)
	{
		PlayerMove(board, ROW, COL);
		DisplatBoard(board,	ROW, COL);
		//判断
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplatBoard(board,	ROW, COL);
		//判断
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
	}
	if('*' == ret)
	{
		printf("玩家赢\n");
	}
	else if('#' == ret)
	{
		printf("电脑赢\n");
	}
	else if('Q' == ret)
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
			printf("输入错误，请重新输入!!!\n");
			break;
		}
	} while (input);
}

int main()
{
	test();//测试三子棋
	return 0;
}
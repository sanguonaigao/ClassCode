#define _CRT_SECURE_NO_WARNINGS 1
//test.c 测试三子棋游戏的
//game.h 游戏模块的函数声明
//game.c 游戏模块的函数实现

//玩家赢-'X'
//电脑赢-'0'
//平局---'P'
//继续---'C'

#include "game.h"

void menu()
{
	printf("******************************\n");
	printf("*****    1.play  0.exit   ****\n");
	printf("******************************\n");
}

void game()
{
	char ret = 0;
	//存储数据的数组
	char board[ROW][COL] = {0};
	//初始化棋盘的每个位置为空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while(1)
	{
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if(ret == 'X')
	{
		printf("玩家赢\n");
	}
	else if(ret == '0')
	{
		printf("电脑赢\n");
	}
	else if(ret == 'P')
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
void test()
{
	//三子棋游戏的测试
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
			printf("选择错误, 重新选择!\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


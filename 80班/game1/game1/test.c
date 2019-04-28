#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("***   1. play     ***\n");
	printf("***   0. exit     ***\n");
	printf("*********************\n");
}

void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);//´òÓ¡ÆåÅÌ

	while(1)
	{
		PlayerMove(board, ROW, COL);//Íæ¼Ò×ß
		DisplayBoard(board, ROW, COL);//´òÓ¡ÆåÅÌ
		ComputerMove(board, ROW, COL);//µçÄÔ×ß
		DisplayBoard(board, ROW, COL);//´òÓ¡ÆåÅÌ
	}
}

//ÓÎÏ·µÄ²âÊÔ
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do 
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³öÓÎÏ·\n");
			break;
		default:
			printf("Ñ¡Ôñ´íÎó\n");
			break;
		}
	} while (input);
}
int main()
{
	//²âÊÔ
	test();
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
//放的是函数的声明
//类型的声明
//符号的定义

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
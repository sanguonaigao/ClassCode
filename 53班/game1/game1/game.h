
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//公共的符号定义

#define ROW 10
#define COL 10

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplatBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//'*'-玩家赢
//'#'-电脑赢
//'Q'-平局
//'C'-继续

char IsWin(char board[ROW][COL], int row, int col);
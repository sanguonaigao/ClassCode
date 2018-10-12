#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//要求:
//1. 第一步不能炸死
//2. 展开一片,不是周围8个

#define EASY_COUNT 10

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
//打印雷阵
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char arr[ROWS][COLS], int row, int col);
//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

int GetMineCount(char mine[ROWS][COLS], int x, int y);

#endif //__GAME_H__


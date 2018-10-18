#ifndef __GAME_H__
#define __GAME_H__

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 80

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int GetMineCount(char mine[ROWS][COLS], int x, int y);
#endif //__GAME_H__

//
//1. 第一步不能炸死
//2. 展开一片
//

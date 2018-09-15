#ifndef __GAME_H__
#define __GAME_H__

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], 
			   int row, int col, char set);
void SetMine(char board[ROWS][COLS], int row, int col);
void PrintBoard(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], 
			  char show[ROWS][COLS], int row, int col);
int GetMineCount(char mine[ROWS][COLS], int x, int y);


#endif //__GAME_H__


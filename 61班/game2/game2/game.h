#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10

//1. 第一步不能炸死
//2. 展开一片

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void SetMine(char mine[ROWS][COLS], int row, int col);
void DisplayBoard(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


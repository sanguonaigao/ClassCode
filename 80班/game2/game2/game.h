#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
=======
#include <time.h>

//
//1. 第一下不炸死
//2. 展开一片
//

#define EASY_COUNT 10
>>>>>>> 91c89a768dd2b4f013122350fc15b002c60c46dc

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
<<<<<<< HEAD
void SetMine(char mine[ROWS][COLS], int row, int col);
=======
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
>>>>>>> 91c89a768dd2b4f013122350fc15b002c60c46dc

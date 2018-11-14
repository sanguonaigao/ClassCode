#ifndef __GAME_H__
#define __GAME_H__

#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//
//X-玩家赢
//*-电脑赢
//' '-继续
//'Q'-平局
//
char IsWin(char board[ROW][COL], int row, int col);

#endif //__GAME_H__
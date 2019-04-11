#ifndef __SNAKE_H__
#define __SNAKE_H__

#include <windows.h>
#include <time.h>
#include <stdio.h>


//方向
enum DIRECTION
{
	UP=1,
	DOWN,
	LEFT,
	RIGHT
};

//游戏状态
enum GAME_STATUS
{
	OK,//正常运行
	KILL_BY_WALL,//撞墙
	KILL_BY_SELF,//咬到自己
	END_NOMAL//正常结束
};

#define WALL "■"
#define FOOD "★"

//蛇的初始位置
#define POS_X 24
#define POS_Y 5

//蛇身节点
typedef struct SnakeNode
{
	int x;
	int y;
	struct SnakeNode *next;
}SnakeNode, *pSnakeNode;

typedef struct Snake
{
	pSnakeNode _pSnake;//维护整条蛇的指针
	pSnakeNode _pFood;//维护食物的指针
	enum DIRECTION _Dir;//蛇头的方向默认是向右
	enum GAME_STATUS _Status;//游戏状态
	int _Socre;//当前获得分数
	int _Add;//默认每个食物10分
	int _SleepTime;//每走一步休眠时间
}Snake, *pSnake;

void GameStart(pSnake ps);
void GameRun(pSnake ps);
void GameEnd(pSnake ps);

#endif //__SNAKE_H__

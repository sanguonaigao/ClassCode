#define _CRT_SECURE_NO_WARNINGS 1

#include "Snake.h"

//设置光标的坐标
void SetPos(int x, int y)
{
	COORD pos = {0};
	HANDLE hOutput = NULL;
	pos.X = x;
	pos.Y = y;
	//获取标准输出的句柄(用来标识不同设备的数值)
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	//设置标准输出上光标的位置为pos
	SetConsoleCursorPosition(hOutput, pos);
}

void WelcomeToGame()
{
	SetPos(40, 15);
	printf("欢迎来到贪吃蛇小游戏");
	SetPos(40, 25);
	system("pause");
	system("cls");
	SetPos(25, 12);
	printf("用↑.↓.←.→分别控制蛇的移动， F1为加速，F2为减速\n");
	SetPos(25, 13);
	printf("加速将能得到更高的分数。\n");
	system("pause");
	system("cls");
}

void CreateMap()
{
	int i = 0;
	//上(0,0)-(56, 0)
	SetPos(0, 0);
	for(i=0; i<58; i+=2)
	{
		printf(WALL);
	}
	//下(0,26)-(56, 26)
	SetPos(0, 26);
	for(i=0; i<58; i+=2)
	{
		printf(WALL);
	}
	//左
	for(i=1; i<26; i++)
	{
		SetPos(0, i);
		printf(WALL);
	}
	for(i=1; i<26; i++)
	{
		SetPos(56, i);
		printf(WALL);
	}
}

void InitSnake(pSnake ps)
{
	pSnakeNode cur = NULL;
	int i = 0;
	//初始化蛇身体
	cur = (pSnakeNode)malloc(sizeof(SnakeNode));
	cur->x = POS_X;
	cur->y = POS_Y;
	cur->next = NULL;
	for(i=1; i<=4; i++)
	{
		ps->_pSnake = (pSnakeNode)malloc(sizeof(SnakeNode));
		ps->_pSnake->next = cur;
		ps->_pSnake->x = POS_X + i*2;
		ps->_pSnake->y = POS_Y;
		cur = ps->_pSnake;
	}
	while(cur)
	{
		SetPos(cur->x, cur->y);
		printf(FOOD);
		cur = cur->next;
	}
	//初始化贪吃蛇
	ps->_SleepTime = 200;
	ps->_Socre = 0;
	ps->_Status = OK;
	ps->_Dir = RIGHT;
	ps->_Add = 10;
}

void CreateFood(pSnake ps)
{
	//维护食物的节点
	pSnakeNode pFood = NULL;
	pSnakeNode cur = NULL;//获取指向蛇头的指针
again:
	pFood = NULL;
	cur = ps->_pSnake;//获取指向蛇头的指针
	srand((unsigned int)time(NULL));
	pFood = (pSnakeNode)malloc(sizeof(SnakeNode));
	//产生的x坐标应该是2的倍数，这样才可能和蛇头坐标对齐。
	do
	{
		pFood->x = rand()%53+2;
	}while(pFood->x % 2 != 0);
	pFood->y = rand()%25+1;
	
	//食物不能和蛇身冲突
	while(cur)
	{
		if(cur->x == pFood->x && cur->y == pFood->y)
		{
			free(pFood);
			pFood = NULL;
			//CreateFood(ps);
			goto again;
		}
		cur = cur->next;
	}
	SetPos(pFood->x, pFood->y);
	printf(FOOD);
	ps->_pFood = pFood;
}

void PrintHelpInfo()
{
	//打印提示信息
	SetPos(64, 15);
	printf("不能穿墙，不能咬到自己\n");
	SetPos(64, 16);
	printf("用↑.↓.←.→分别控制蛇的移动.");
	SetPos(64, 17);
	printf("F1 为加速，F2 为减速\n");
	SetPos(64, 18);
	printf("ESC ：退出游戏.space：暂停游戏.");
	SetPos(64,20);
	printf("比特科技@版权");
}
void pause()//暂停
{
	while(1)
	{
		Sleep(300);
		if(GetAsyncKeyState(VK_SPACE))
		{
			break;
		}
	}
}

int NextHasFood(pSnakeNode psn, pSnake ps)
{
	return (psn->x == ps->_pFood->x)&&(psn->y == ps->_pFood->y);
}
void EatFood(pSnakeNode psn, pSnake ps)
{
	pSnakeNode cur = NULL;

	psn->next = ps->_pSnake;
	ps->_pSnake = psn;
	cur = ps->_pSnake;
	//打印蛇
	while(cur)
	{
		SetPos(cur->x, cur->y);
		printf(FOOD);
		cur=cur->next;
	}
	ps->_Socre += ps->_Add;
	CreateFood(ps);
}

void NoFood(pSnakeNode psn, pSnake ps)
{
	pSnakeNode cur = NULL;

	psn->next = ps->_pSnake;
	ps->_pSnake = psn;
	cur = ps->_pSnake;
	while(cur->next->next)
	{
		SetPos(cur->x, cur->y);
		printf(FOOD);
		cur = cur->next;
	}
	SetPos(cur->next->x, cur->next->y);
	printf(" ");
	free(cur->next);
	cur->next = NULL;
}

int KillByWall(pSnake ps)
{
	if(  (ps->_pSnake->x == 0)
		||(ps->_pSnake->x == 56)
		||(ps->_pSnake->y == 0)
		||(ps->_pSnake->y == 26))
	{
		ps->_Status = KILL_BY_WALL;
		return 1;
	}
	return 0;
}

int KillBySelf(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake->next;
	while(cur)
	{
		if((ps->_pSnake->x == cur->x)
			&&(ps->_pSnake->y == cur->y))
		{
			ps->_Status = KILL_BY_SELF;
			return 1;
		}
		cur = cur->next;
	}
	return 0;
}

void SnakeMove(pSnake ps)
{
	pSnakeNode nextNode = (pSnakeNode)malloc(sizeof(SnakeNode));
	switch(ps->_Dir)
	{
	case UP:
		{
			nextNode->x = ps->_pSnake->x;
			nextNode->y = ps->_pSnake->y-1;
			//如果下一个位置就是食物
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//如果没有食物
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	case DOWN:
		{
			nextNode->x = ps->_pSnake->x;
			nextNode->y = ps->_pSnake->y+1;
			//如果下一个位置就是食物
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//如果没有食物
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	case LEFT:
		{
			nextNode->x = ps->_pSnake->x-2;
			nextNode->y = ps->_pSnake->y;
			//如果下一个位置就是食物
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//如果没有食物
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	case RIGHT:
		{
			nextNode->x = ps->_pSnake->x+2;
			nextNode->y = ps->_pSnake->y;
			//如果下一个位置就是食物
			if(NextHasFood(nextNode, ps))
			{
				EatFood(nextNode, ps);
			}
			else//如果没有食物
			{
				NoFood(nextNode, ps);
			}
		}
		break;
	}
	KillByWall(ps);
	KillBySelf(ps);
}

void GameStart(pSnake ps)
{
	//设置控制台窗口的大小，30行，100列
	//mode 为DOS命令
	system("mode con cols=100 lines=30");
	//打印欢迎界面
	WelcomeToGame();
	//打印地图
	CreateMap();
	//初始化蛇
	InitSnake(ps);
	//创造第一个食物
	CreateFood(ps);
}


void GameRun(pSnake ps)
{
	//打印右侧帮助信息
	PrintHelpInfo();
	do
	{
		SetPos(64, 10);
		printf("得分：%d ",ps->_Socre);
		printf("每个食物得分：%d分", ps->_Add);
		if(GetAsyncKeyState(VK_UP) && ps->_Dir != DOWN)
		{
			ps->_Dir = UP;
		}
		else if(GetAsyncKeyState(VK_DOWN) && ps->_Dir != UP)
		{
			ps->_Dir = DOWN;
		}
		else if(GetAsyncKeyState(VK_LEFT) && ps->_Dir != RIGHT)
		{
			ps->_Dir = LEFT;
		}
		else if(GetAsyncKeyState(VK_RIGHT) && ps->_Dir != LEFT)
		{
			ps->_Dir = RIGHT;
		}
		else if(GetAsyncKeyState(VK_SPACE))
		{
			pause();
		}
		else if(GetAsyncKeyState(VK_ESCAPE))
		{
			ps->_Status = END_NOMAL;
			break;
		}
		else if(GetAsyncKeyState(VK_F1))
		{
			if(ps->_SleepTime >= 50)
			{
				ps->_SleepTime -= 30;
				ps->_Add += 2;
			}
		}
		else if(GetAsyncKeyState(VK_F2))
		{
			if(ps->_SleepTime < 350)
			{
				ps->_SleepTime += 30;
				ps->_Add -= 2;
				if(ps->_SleepTime == 350)
				{
					ps->_Add = 1;
				}
			}
		}
		Sleep(ps->_SleepTime);
		SnakeMove(ps);
	}while(ps->_Status == OK);
}
void GameEnd(pSnake ps)
{
	pSnakeNode cur = ps->_pSnake;
	//system("cls");
	SetPos(24,12);
	switch(ps->_Status)
	{
	case END_NOMAL:
		printf("您主动退出游戏\n");
		break;
	case KILL_BY_SELF:
		printf("您撞上自己了 ,游戏结束!\n");
		break;
	case KILL_BY_WALL:
		printf("您撞墙了,游戏结束!\n");
		break;
	}
	while(cur)
	{
		pSnakeNode del = cur;
		cur = cur->next;
		free(del);
	}
}





#define _CRT_SECURE_NO_WARNINGS 1
//#include "Add.h"

//函数定义

//外部链接属性
//具有外部链接属性的符号
//在整个过程中都可以使用（extern）

//具有外部链接属性的符号前面加上static，就具有了内部链接属性
//具有内部链接属性的符号，只能在当前源文件内部使用
static int Add(int x, int y)
{
	return x+y;
}
//外部链接属性
static int g_val = 2018;

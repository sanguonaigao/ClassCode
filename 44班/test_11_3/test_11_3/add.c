#define _CRT_SECURE_NO_WARNINGS 1

//
//static修饰全变量
//改变了全局变量的作用域,是的这个静态的全局变量只能在
//所在的源文件内部使用
//
static int g_val = 2020;

//
//static修饰函数
//改变了函数的作用域,是的这个函数只能在
//所在的源文件内部使用
//
static int Add(int x, int y)
{
	int z = x+y;
	return z;
}



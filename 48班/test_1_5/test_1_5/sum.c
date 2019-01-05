#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

static int g_val = 2020;//全局变量的定义

static void print()
{
	printf("g_val = %d\n", g_val);
}

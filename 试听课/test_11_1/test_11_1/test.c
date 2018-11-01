#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意,你得电脑在1分钟后关机,如果输入:我是猪, 就取消关机\n");
	scanf("%s", input);
	if(strcmp("我是猪", input) == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}

// int main()
// {
// 	int a = 3;
// 	int b = 5;
// 	int c = 0;
// 	printf("a = %d b = %d\n", a, b);
// 	//按二进制位异或
// 	//011-b
// 	//101-a
// 	//110-
// 	//
// 	a = a^b;
// 	b = a^b;
// 	a = a^b;
// 	printf("a = %d b = %d\n", a, b);
// 
// 	return 0;
// }

// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = 0;
// 	printf("a = %d b = %d\n", a, b);
// 	a = a+b;
// 	b = a-b;
// 	a = a-b;
// 	printf("a = %d b = %d\n", a, b);
// 
// 	return 0;
// }

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	printf("a = %d b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}




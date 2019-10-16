#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	int b = 20;
	//int c = 0;
	printf("a = %d b = %d\n", a, b);
	//c = a;
	//a = b;
	//b = c;
	//异或
	a = a^b;
	b = a^b;
	a = a^b;

	printf("a = %d b = %d\n", a, b);

	return 0;
}




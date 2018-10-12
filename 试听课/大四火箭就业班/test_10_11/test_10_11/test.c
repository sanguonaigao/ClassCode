#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//shutdown -s t 60
	char input[20] = {0};
	system("shutdown -s -t 60");

	while(1)
	{
		printf("请注意,电脑在1分钟内关进,如果输入:我是猪,就取消关机!\n");
		scanf("%s", input);
		if(0 == strcmp(input, "我是猪"))
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = 0;
//
//	printf("a = %d b = %d\n", a, b);
//	//c = a;
//	//a = b;
//	//b = c;
//
//	//a = a+b;
//	//b = a-b;
//	//a = a-b;
//	//^ --- 按二进制位异或操作符
//	//
//	//01010-b
//	//10100-a
//	//11110-
//	//
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//
//	int c = a+(b-a)/2; 
//
//	//int c = (a+b)/2;//OK??
//	printf("%d\n", c);
//	return 0;
//}
//

//
//VC6.0
//
//主函数--程序的入口
//
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}
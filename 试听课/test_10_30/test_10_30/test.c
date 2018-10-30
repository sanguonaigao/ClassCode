#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意,电脑在1分钟内关机,如果输入:我是猪,就取消关机!\n");
	scanf("%s", input);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//int c = 0;//
//
//	printf("a = %d b = %d\n", a, b);
//
//	//3.
//	// ^ ---按二进制位异或
//	//01010-b
//	//10100-a
//	//11110-
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	//2.
//// 	a = a+b;//a=30 b=20
//// 	b = a-b;//a=30 b=10
//// 	a = a-b;//a=20 b=10
//
//	//1.
//	//c = a;
//	//a = b;
//	//b = c;
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;	
//}

//main--主函数
//int main()
//{
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	printf("hehe\n");//printf-stdio.h
//	return 0;
//}


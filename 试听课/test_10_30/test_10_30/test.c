#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include<stdio.h>


int func(int x,int y)
{
	return(x+y);
}

int main()
{
	int a=1,b=2,c=3,d=4,e=5;
	printf("%d\n",func((a+b,b+c,c+a),(d+e)));
	return 0;
}

// #include <stdio.h>
// int f1(int x)
// {
// 	return x+5;
// }
// int f2(int x)
// {
// 	return 2*x-1;
// }
// int main()
// {
// 	int (*p1)(int),(*p2)(int),(*t)(int), y1, y2;
// 	p1=f1; 
// 	p2=f2;
// 	y1=p2(p1(1));
// 	t=p1;
// 	p1=p2;
// 	p2=t;
// 	y2=p2(p1(2));
// 	printf("%d, %d\n",y1,y2);
// 	return 0;
// }

//
//#define Mul(x,y) ++x*++y
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	printf("%d",Mul(a+b,b+c));
//	return 0;
//}

//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意,电脑在1分钟内关机,如果输入:我是猪,就取消关机!\n");
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


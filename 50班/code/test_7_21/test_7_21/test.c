#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//1234
//print(123) printf(4)
//print(12) printf(3) printf(4)
//print(1) printf(2) printf(3) printf(4)
//
// void print(int n)
// {
// 	if(n>9)
// 	{
// 		print(n/10);//123
// 	}
// 	printf("%d ", n%10);//4
// }
// int main()
// {
// 	int num = 1234;
// 	print(num);
// 	return 0;
// }

#include <assert.h>

// int my_strlen(const char *str)
// {
// 	int count = 0;
// 	assert(str != NULL);
// 	while(*str != '\0')
// 	{
// 		count++;
// 		str++;
// 	}
// 	return count;
// }

//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("len = %d\n", len);
//	return 0;
//}
//

//
//int fac(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*fac(n-1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", fac(n));
//	return 0;
//}

//1 1 2 3 5 8 13 21 34 55 ...
//写一个代码求第n个斐波那契数
//
// int count = 0;
// 
// int fib(int n)
// {
// 	if(n==3)
// 		count++;
// 	if(n<=2)
// 		return 1;
// 	else
// 		return fib(n-1)+fib(n-2);
// }
//
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = a;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
////
////CVTE
////
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	//printf("count = %d\n", count);
//	return 0;
//}
//





 //#include <stdio.h>
 //
 //int Add(int x, int y)
 //{
 //	int z = 0;
 //	z = x+y;
 //	return z;
 //}
 //
 //int main()
 //{
 //	int a = 10;
 //	int b = 20;
 //	int c = 0;
 //	c = Add(a, b);
 //	printf("c = %d\n", c);
 //	return 0;
 //}

//int main(int argc, char **argv, char **envp)
//test.exe
//
//test.exe 
//zhangsan 
//lisi 
//wangwu
//
//int main(int argc, char *argv[], char *envp[])
//{
//	int i = 0;
//	for(i=0; i<argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}
//}
// 
// int main(int argc, char *argv[], char *envp[])
// {
// 	int i = 0;
// 	while(argv[i] != NULL)
// 	{
// 		printf("%s\n", argv[i]);
// 		i++;
// 	}
// }

int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x/y;
}
int main(int argc, char *argv[], char *envp[])
{
	int ret = 0;
	if(argc != 4)	
	{
		printf("参数个数有误:argc=%d\n", argc);
		return 0;
	}
	switch(*(argv[1]+1))
	{
	case 'a':
		ret = Add(atoi(argv[2]), atoi(argv[3]));
		break;
	case 's':
		ret = Sub(atoi(argv[2]), atoi(argv[3]));
		break;
	case 'm':
		ret = Mul(atoi(argv[2]), atoi(argv[3]));
		break;
	case 'd':
		ret = Div(atoi(argv[2]), atoi(argv[3]));
		break;
	}
	printf("ret = %d\n", ret);

	return 0;
}
//
//ls -- 
//

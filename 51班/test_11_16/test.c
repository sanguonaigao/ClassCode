#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int check_sys()
//{
//	int a = 1;
//	//返回1， 小端
//	//返回0， 大端
//	return *(char*)&a;
//}


//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1， 小端
//	//返回0， 大端
//	return u.c;
//}
//
//
//int main()
//{
//	//[01 00 00 00]
//	//[00 00 00 01]
//	int ret = check_sys();
//	if(ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
// 
// union Un
// {
// 	char c[5];//5 1
// 	int i; //4    4
// };
// 
// int main()
// {
// 	printf("%d\n", sizeof(union Un));
// 	return 0;
// }
//

#include <stdlib.h>
#include <errno.h>
#include <string.h>
//
//int main()
//{
//	//int a;//4
//	//char arr[5];//5
//	//动态内存开辟
//	//int arr[10] = {0};//40字节
//	int* p = (int*)malloc(40);
//	int i = 0;
//	//assert(p != NULL);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//
//	free(p);
//	p = NULL;
//// 	while(1)
//// 	{
//// 		malloc(1);
//// 	}
//	return 0;
//}

// int main()
// {
// 	int arr[10] = {0};
// 	int *p = arr;
// 
// 	free(p);//err
// 	p = NULL;
// 	return 0;
// }
//
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	int *ptr = NULL;
//
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	ptr = realloc(p, 2000*sizeof(int));
//	if(ptr != NULL)
//		p = ptr;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//错误的示范
//void test()
//{
//	int* p = (int*)malloc(10);
//	if(p == NULL)
//	{
//		return;
//	}
//
//	if(1)
//		return;
//	//...
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	getchar();
//	return 0;
//}

//
//void test()
//{
//	int *p = (int *)malloc(INT_MAX/4);
//	if(p == NULL)
//	{
//		return;
//	}
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}

//
//int main()
//{
//	return 0;
//}
//
//void test()
//{
//	int a = 10;
//	int *p = &a;
//	free(p);//ok?
//}
//int main()
//{
//	test();
//	return 0;
//}
//

//
//int main()
//{
//	int *p = (int *)malloc(40);
//	int i = 0;
//	if(p == NULL)
//	{
//		return;
//	}
//	//
//	for(i=0; i<5;i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	free(p);
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//


void GetMemory(char **p)
{
	*p = (char *)malloc(100);
}
void Test(void)
{
	char *str = NULL;
	GetMemory(&str);
	strcpy(str, "hello world");
	printf(str);
	free(str);//???
	str = NULL;
}

int main()
{
	Test();
	return 0;
}



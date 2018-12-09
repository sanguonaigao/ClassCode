#define _CRT_SECURE_NO_WARNINGS 1

int g_val = 2019;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//int main()
//{
//	//
//	//int a;//4
//	//int arr[10];//40
//	//
//	//动态内存分配
//	//
//	//int arr[10];
//	int* p = (int*)malloc(10*sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0; i<10; i++)
//		{
//			*(p+i) = i+1;
//		}
//
//		for(i=0; i<10; i++)
//		{
//			printf("%d\n", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//
//	system("pause");
//	return 0;
//}
//
//
//void test()
//{
//	int *p  = (int*)malloc(40);
//	if(p != NULL)
//	{
//		if(1)
//			return;
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

int main()
{
	int* p = calloc(10, sizeof(int));
	int* ptr = NULL;
	//int* p = (int*)malloc(10*sizeof(int));

	if(p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for(i=0; i<10; i++)
		{
			printf("%d\n", p[i]);
		}
	}
	//动态内存的调整
	ptr = realloc(p, 11*sizeof(int));
	if(ptr  != NULL)
	{
		p = ptr;
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}
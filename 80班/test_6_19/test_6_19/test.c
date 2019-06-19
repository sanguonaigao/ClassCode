#define _CRT_SECURE_NO_WARNINGS 1
//动态内存管理
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
//void Test()
//{
//	//动态申请
//	int* p = (int*)malloc(40);
//	//使用
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i+1;
//	}
//	if(1)
//	{
//		return;
//	}
//
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//释放
//	free(p);
//}
//int main()
//{
//	//int a = 0;//4
//	//int arr[10] = {0};//40
//	//动态申请内存，释放内存--动态内存管理
//	//malloc
//	//calloc
//	//realloc
//	//free
//	//内存泄漏
//
//	Test();
//	system("pause");
//
//	return 0;
//}
//
//
//int main()
//{
//	int*p = (int*)malloc(40);
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//开辟成功
//	//使用
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i+1;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	free(p);
//	p = NULL;
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//使用
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//释放
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int*p = (int*)calloc(5, sizeof(int));
//	int i = 0;
//	int *ptr = NULL;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//使用
//	for(i=0; i<5; i++)
//	{
//		*(p+i) = i+1;
//	}
//	for(i=0; i<5; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	printf("\n");
//	//realloc
//	//扩展
//	ptr = realloc(p, 400);
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	printf("\n");
//	//释放
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}

int main()
{
	realloc(NULL, 40);//malloc
	return 0;
}
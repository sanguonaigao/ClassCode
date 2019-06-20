#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	//1. 对NULL的解引用操作
//	int*p = (int*)malloc(INT_MAX);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	*p = 20;
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int *p = (int*)malloc(20);
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//2. 对于动态内存的越界访问
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//3. 释放了非动态开辟的内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int *p = (int*)malloc(20);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	p++;
//	*p = 20;
//
//	//释放动态内存开辟的一部分
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int*p = (int*)malloc(20);
//	//使用
//
//	//对同一块动态内存的多次释放
//	free(p);
//	p = NULL;
//
//	free(p);
//
//	return 0;
//}
//
//
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//char *GetMemory(void)
//{
//	static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}

//
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	system("pause");
//	return 0;
//}

//int* fun()
//{
//	int x = 10;
//	return &x;
//}
//
//int main()
//{
//	int*p = fun();
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int main()
//{
//	char *p = "hello world";
//	printf("hello world\n");
//	printf("%s\n", "hello world");
//	printf("%s\n", p);
//	printf(p);
//	system("pause");
//	return 0;
//}
//
//void Test(void)
//{
//	char *str = (char *) malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if(str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}
//int c = 30;
//static int d = 0;
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int arr[];
//};

//struct S2
//{
//	int n;
//	int arr[10];
//};

//
//int main()
//{
//	int i = 0;
//	struct S* ptr = NULL;
//	struct S* p = (struct S*)malloc(sizeof(struct S)+10*sizeof(int));
//	if(p == NULL)
//	{
//		return 0;
//	}
//	p->n = 10;
//	for(i=0; i<10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	//10
//	ptr = (struct S*)realloc(p, 84);
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
//
//
//struct S
//{
//	int n;//
//	int* ptr;//
//};
//
//int main()
//{
//	int i = 0;
//	int* ptr = NULL;
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if(ps == NULL)
//		return 0;
//	ps->ptr = (int*)malloc(10*sizeof(int));
//	for(i=0; i<10; i++)
//	{
//		ps->ptr[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", ps->ptr[i]);
//	}
//	//
//	ptr = (int*)realloc(ps->ptr, 20*sizeof(int));
//	if(ptr != NULL)
//		ps->ptr = ptr;
//	//使用
//
//	free(ps->ptr);
//	ps->ptr = NULL;
//	free(ps);
//	ps = NULL;
//	system("pause");
//	return 0;
//}




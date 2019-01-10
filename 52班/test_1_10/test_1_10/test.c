#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>


int main()
{

	return 0;
}
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
//
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}

//
//int * test()
//{
//	int x = 10;
//	return &x;
//}
//
//int main()
//{
//	int *p = test();
//	//printf("hehe\n");
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
////
//void GetMemory(char** p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
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
//	while(1)
//	{
//		malloc(1);
//	}
//	return 0;
//}
//
//void test()
//{
//	int *p = malloc(20);
//	if(p == NULL)
//	{
//		return;
//	}
//	
//	if(1)
//		return;
//
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//int  main()
//{
//	int *p = (int *)malloc(20);//
//	int i = 0;
//	if(p == NULL)
//	{
//		perror("use malloc");
//		return 0;
//	}
//	for(i=0; i<3; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	//.....
//	free(p);
//	p = NULL;
//	return 0;
//}


//
//int  main()
//{
//	int *p = (int *)malloc(20);//
//	int i = 0;
//	if(p == NULL)
//	{
//		perror("use malloc");
//		return 0;
//	}
//	for(i=0; i<3; i++)
//	{
//		*p++ = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int  main()
//{
//	int a = 10;
//	int *p = &a;
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//int  main()
//{
//	int *p = (int *)malloc(20);//
//	int i = 0;
//	if(p == NULL)
//	{
//		perror("use malloc");
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//int main()
//{
//	int *p = (int *)malloc(40);
//	int i = 0;
//	int *ptr = NULL;
//
//	if(NULL == p)
//	{
//		perror("use malloc");
//		system("pause");
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		p[i] = i;
//	}
//	ptr = (int*)realloc(p, 8000);
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//	//使用空间
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//realloc
//
//int main()
//{
//	int *p = (int *)calloc(10, sizeof(int));
//	int i = 0;
//
//	if(NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int*p = (int *)malloc(INT_MAX);//开辟失败
//	int*p = (int *)malloc(10*sizeof(int));
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		system("pause");
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i+1;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	free(p);
//	p = NULL;
//	
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a;
//	int arr[10];
//
//	system("pause");
//	return 0;
//}
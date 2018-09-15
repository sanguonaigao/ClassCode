#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//
//struct S
//{
//	int n;
//	char* p;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	int i = 0;
//	char* ptr;
//	ps->p = (char*)malloc(100*sizeof(char));
//
//	for(i=0;i<100; i++)
//	{
//		ps->p[i] = i;
//	}
//
//	ptr = realloc(ps->p, 200*sizeof(char));
//	if(ptr != NULL)
//		ps->p = ptr;
//	
//	free(ps->p);
//	free(ps);
//
//	return 0;
//}


//struct S
//{
//	int n;//4
//	char arr[];
//};
//
//struct S
//{
//	int n;//4
//	char arr[0];
//};
//
//int main()
//{
//	int i = 0;
//
//	struct S* ptr = NULL;
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+100*sizeof(char));
//	if(ps == NULL)
//		return 0;
//	ps->n = 100;
//	for(i=0; i<100; i++)
//	{
//		ps->arr[i] = i;
//	}
//	ptr = realloc(ps, 204);
//	if(ptr != NULL)
//		ps = ptr;
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}
// 
// int main()
// {
// 	printf("%d\n", sizeof(struct S));//
// 	return 0;
// }
// 
// char *GetMemory(void)
// {
// 	char p[] = "hello world";
// 	return p;
// }
// void Test(void)
// {
// 	char *str = NULL;
// 	str = GetMemory();
// 	printf(str);
// }
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
//	return 0;
//}

// 
// char* GetMemory(char *p)
// {
// 	p = (char *)malloc(100);
// 	return p;
// }
// void Test(void)
// {
// 	char *str = NULL;
// 	str = GetMemory(str);
// 	strcpy(str, "hello world");
// 	printf(str);
// 	free(str);
// 	str = NULL;
// }
// 
// int main()
// {
// 	Test();
// 	return 0;
// }
//void GetMemory(char **p)
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
//
//int main()
//{
//	while(1)
//	{
//		malloc(1);
//	}
//	return 0;
//}
//
//
//void test()
//{
//	int *p = (int *)malloc(100);
//	if(p != NULL)
//	{
//		*p = 10;
//	}
//	if(1)
//		return;
//	free(p);
//	p =NULL;
//}
//int main()
//{
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = (int *)malloc(40);
//	//p = &a;
//
//	free(p);
//	p = NULL;
//	free(p);
//
//	return 0;
//}
//
//int main()
//{
//	//realloc(NULL, 10*sizeof(int));
//	int *p = malloc(10*sizeof(int));
//	int i = 0;
//	if(p == NULL)
//		return 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//	}
//	free(p);
//	p = NULL;
//	//if(p != NULL)
//	//	*p = 20;
//
//	return 0;
//}
//
//int main()
//{
//	int *p = malloc(10*sizeof(int));
//	int i = 0;
//	int *ptr = NULL;
//	if(p == NULL)
//	{
//		return 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		p[i] = i;
//	}
//	//
//	ptr = realloc(p, 20*sizeof(int));
//	if(ptr != NULL)
//	{
//		p = ptr;
//	}
//	for(i=0; i<20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//¿ª±Ù³É¹¦
//	//for(i=0; i<10; i++)
//	//{
//	//	*(p+i) = 10-i;
//	//}
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", *(p+i));
//	}
//	//
//	free(p);
//	p = NULL;
//	return 0;
//}

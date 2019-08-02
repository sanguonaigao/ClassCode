#define _CRT_SECURE_NO_WARNINGS 1

//常量
//字面常量，const,#define ，枚举常量
//枚举
//enum Sex 
//{
//	MALE,
//	FEMALE,
//	SECRET
//};

//#define MALE 0
//#define FEMALE 1
//#define SECRET 2

//void test(enum Sex s)
//{

//}

//int main()
//{
//	test(MALE);
//	return 0;
//}
//
//int main()
//{
//	//enum Sex sex = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//
//enum Sex 
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//
//	return 0;
//}
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
////预处理指令
//
//
//#define ADD 1
//int main()
//{
//	enum Option op = ADD;
//	int Op = ADD;
//	return 0;
//}

//联合体
#include <stdio.h>
//
//union Un
//{
//	char c;//1
//	int i;//4
//	double d;//8
//};
//
//int main()
//{
//	union Un u = {0};
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.d));
//
//	return 0;
//}
//
//
//union Un
//{
//	char ch[5];//5
//	int i;//4
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	//01 00 00 00
//	//00 00 00 01
//	/*if(*(char*)&a == 1)
//		return 1;
//	else
//		return 0;*/
//	//返回1表示小端
//	//返回0表示大端
//	return (*(char*)&a);
//}

//
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//[11][22][33][44]-大端字节序存储
//	//低     高
//	//[44][33][22][11]-小端字节序存储
//	//
//	if(check_sys()==1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

#include <errno.h>
#include <stdlib.h>
#include <string.h>

//动态内存
//int main()
//{
//	//int arr[10];
//	//malloc/free
//
//	//int* p = (int*)malloc(10*sizeof(int));
//	int* p = (int*)malloc(INT_MAX);
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0; i<10; i++)
//		{
//			*(p+i) = 10;
//		}
//		for(i=0; i<10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//		
//	}
//	free(p);//释放动态开辟的内存
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0; i<10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//		free(p);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int*ptr = NULL;
//	int*p = (int*)calloc(5, sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0; i<5; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//		//增加空间
//		ptr = (int*)realloc(p, 4*sizeof(int));
//		if(ptr != NULL)
//			p = ptr;
//
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int*ptr = NULL;
//	int*p = (int*)calloc(5, sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0; i<10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//		free(p);
//		p = NULL;
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	free(p);//非动态开辟的空间
//	p = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	int*ptr = NULL;
//	int*p = (int*)calloc(5, sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for(i=0; i<5; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//
//		free(p);
//		p = NULL;
//	}
//
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
//
//void GetMemory(char** p)
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
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

void Test(void)
{
	char *str = (char *) malloc(100);
	strcpy(str, "hello");
	free(str);
	str = NULL;
	if(str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}

int main()
{
	Test();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//struct
//{
//	char name[20];
//	short age;
//	char id[15];
//}s1;
//
//struct
//{
//	char name[20];
//	short age;
//	char id[15];
//}* ps;
//
//struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//};
//
//int main()
//{
//	//ps = &s1;
//	struct Node n;
//	printf("%d\n", sizeof(n));//
//	system("pause");
//	return 0;
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//};
//
//
//int main()
//{
//	//struct Point p = {3, 4};//初始化
//	//printf("%d %d\n", p.x, p.y);
//	struct Node n = {10, {3,5}, NULL};
//	printf("%d\n", n.data);
//	printf("%d %d\n", n.p.x, n.p.y);
//	system("pause");
//	return 0;
//}


//12
//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
////8
#include <stddef.h>
//
//struct S
//{
//	char c1;//1 8 1
//	int i;//4 8 4
//	char c2;//1 8 1
//};
//
//#define my_offsetof(struct S, i) \
//	(int)&(((struct S*)0)->i)
//
//int main()
//{
//	printf("%d\n", my_offsetof(struct S, c1));//0
//	printf("%d\n", my_offsetof(struct S, i));//4
//	printf("%d\n", my_offsetof(struct S, c2));//8
//
//	//offsetof
//	system("pause");
//	return 0;
//}

//
////结构体内存对齐的规则
////1. 结构体的第一个成员永远都对齐到结构体的起始位置处
////2. 从第二个成员开始，每个成员都对齐到某个对齐数的整数倍处
////   对齐数：成员自身大小和默认对齐数的较小值
////   默认对齐数：VS-8 Linux-gcc-4
////3. 结构体的总大小是所有成员中最大对齐数的整数倍
////4. 如果结构体中嵌套了结构体，嵌套结构体要对齐到自身最大对齐数的整数倍处。
////   结构体的总体大小是所有最大对齐数（包含嵌套结构中的最大对齐数）的整数倍。
////
//
//struct S3
//{
//	double d;//0-7
//	char c;//8
//	//9-11
//	int i;//12-15
//};
//struct S4
//{
//	char c1;//0
//	//1-7
//	struct S3 s3;//8-23
//	double d;//24-31
//};
////32
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//
//	//struct S s = {0};
//	//printf("%p\n", &s);
//	//printf("%p\n", &(s.c1));
//	//printf("%p\n", &(s.i));
//	//printf("%p\n", &(s.c2));
//
//
//
//	//printf("%d\n", sizeof(s));//
//
//	//struct S2 s2 = {0};
//	//printf("%d\n", sizeof(s2));//
//
//	system("pause");
//	return 0;
//}
//
//#pragma pack(1)
//struct S
//{
//	double d;//8 4 4
//	char c;//8
//	//9-11
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//16
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char arr[100];
//	int a;
//};
//
//void print1(struct S tmp)
//{
//	printf("%s %d\n", tmp.arr, tmp.a);
//}
//
//void print2(const struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->a);
//}
//
//int main()
//{
//	struct S s = {"zhangsan", 20};
//	print1(s);
//	print2(&s);
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	int a:2;//4-32
//	int b:5;//
//	int c:10;//15
//	int d:30;//4-32
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}
//

//enum Sex
//{
//	MALE=1,
//	FEMALE=2,
//	SECRET=4
//};
//#define MALE 1
//#define FEMALE 2
//#define SECRET 4
//
//int main()
//{
//	int a = MALE;
//
//	return 0;
//}

//#define MALE 1
//#define FEMALE 2
//#define SECRET 4
//
//int main()
//{
//	enum Sex s = MALE;
//	//printf("%d\n", MALE);
//	//printf("%d\n", FEMALE);
//	//printf("%d\n", SECRET);
//	system("pause");
//	return 0;
//}
//
//void menu()
//{
//	printf("*****************************\n");
//	printf("*** 1. add    2. sub      ***\n");
//	printf("*** 3. mul    4. div      ***\n");
//	printf("*** 0. exit               ***\n");
//	printf("*****************************\n");
//}
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case ADD:
//			break;
//		case MUL:
//			break;
//		case SUB:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		default:
//			break;
//		}
//	} while ();
//	return 0;
//}
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
//	union Un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.d));
//	printf("%d\n", sizeof(u));
//	system("pause");
//	return 0;
//}

//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	if(check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	//0x 00 00 00 01
//	//低		高
//	//01 00 00 00-小
//	//00 00 00 01-大
//	return 0;
//}
//

//
//union Un
//{
//	char c[5];//5
//	int i;//4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	system("pause");
//	return 0;
//}


union Un
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un));
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

//typedef int (*p_t)(int, int);
//
//typedef struct Stu
//{
//	char name[20];
//	short int age;
//	char id[15];
//}Stu;
//
//int main()
//{
//	Stu s;
//	s.age = 20;
//	return 0;
//}

//
//struct
//{
//	char name[20];
//	short int age;
//	char id[15];
//}s;
//struct
//{
//	char name[20];
//	short int age;
//	char id[15];
//}* ps;
//
//int main()
//{
//	ps = &s;
//// 	s.age = 20;
//// 	printf("%d\n", s.age);
//	system("pause");
//	return 0;
//}

//struct Node
//{
//	int data;//数据-4
//	struct Node* next;//4
//};
//
//typedef struct Node
//{
//	int data;//数据-4
//	struct Node* next;//4
//}Node;
//
//int main()
//{
//	Node n;
//	n.data = 1;
//	return 0;
//}

//内存对齐

//
//struct S2
//{
//	int i;//4
//	char c1;//1
//	char c2;//1
//};
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1 8 1
//};
////
////内存对齐的规则
////1. 结构体的第一个成员，永远都放在结构体变量起始位置的0偏移处
////2. 从第二个成员开始完后所有成员
////   每个成员都要对齐到某个【对齐数】的整数倍的偏移量处
////   【对齐数】是成员自身大小和【默认对齐数】的较小值
////    linux-gcc-默认对齐数是4
////    win-vs----默认对齐数是8
////3. 结构体的总大小必须是多有成员的对齐数中最大对齐数的整数倍
////4. 如果嵌套了结构体成员，结构体成员应该对齐到自身最大对齐数的
////   整数倍的偏移量处
////   结构体的总大几小是所有对齐数（包含嵌套结构中的对齐数）中最大对齐数的整数倍
////
//
//struct S3
//{
//	double d;//
//	char c;//
//	int i;//
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
////32-4
////40
////
//int main()
//{
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));
//// 	printf("%p\n", &s1);//
//// 	printf("%p\n", &(s1.c1));
//// 	printf("%p\n", &(s1.i));
//// 	printf("%p\n", &(s1.c2));
//
//	//printf("%d\n", sizeof(s1));//12 
//
//	//struct S2 s2;
//	//printf("%d\n", sizeof(s2));//8
//
//	system("pause");
//	return 0;
//}

//#define 预处理指令

// #pragma pack(1)
// struct S
// {
// 	char c1;//0-1-
// 	double d;//2-9
// };
// #pragma pack()
// 
// int main()
// {
// 	printf("%d\n", sizeof(struct S));//
// 	system("pause");
// 	return 0;
// }
//
//struct S
//{
//	int i;//0
//	char c;//4
//	double d;//8
//};
//
//
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//#define OFFSETOF(stName, memName) (size_t)&(((stName*)0)->memName)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//
//	system("pause");
//	return 0;
//}

//位段
//结构体实现位段
//
//
//struct S
//{
//	int a:2;//1-int-32bit[                            ]
//	int b:5;//30-5-25bit
//	int c:10;//10-15bit
//	int d:30;//1-int-32-30-2
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//
//
//	system("pause");
//	return 0;
//}

//
//struct S
//{
//	char a:3;//1
//	char b:4;//
//	char c:5;//1
//	char d:4;//1
//};
//int main()
//{
//	struct S s = {0};//3
//	s.a = 10;//00000000000000000000000000001010
//	s.b = 12;//00000000000000000000000000001100
//	s.c = 3;// 00000000000000000000000000000011
//	s.d = 4;// 00000000000000000000000000000100
//
//	printf("%d\n", sizeof(struct S));
//	system("pause");
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};


enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
//
//#define MALE 0
//#define FEMALE 1
// #define SECRET 2
//
//
//int main()
//{
//	//enum Sex s = FEMALE;
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	int sex = 0;
//	if(1)
//		sex = MALE;
//	else
//		sex = FEMALE;
//	//enum Sex s = MALE;
//	
//	system("pause");
//	return 0;
//}

//
//什么是大小端？
//1-int
//00 00 00 01
//
//从左向后，地址由低到高
//01 00 00 00  -小端
//00 00 00 01  -大端
//
//联合体-共用体
//union U
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(union U));//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.d));
//
//	system("pause");
//	return 0;
//}
//1
//int check_sys()
//{
//	int a = 1;
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
//	//返回1--小端
//	//返回0--大端
//	return u.c;
//}
//
//int main()
//{
//	if(1 == check_sys())
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
//union Un
//{
//	int i;//4-4
//	char c[5];//1
//	//3
//};
// 
// union Un
// {
// 	int i;//4-4
// 	short c[7];//1
// 	//3
// };
// 
// 
// int main()
// {
// 	printf("%d\n", sizeof(union Un));
// 	system("pause");
// 	return 0;
// }
//


#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//位段
//struct S
//{
//	int a:2;
//	int b:5;
//	int c:10;
//	int d:30;
//};
//
//int main()
//{
//	struct S s;
//	//4-32
//	//4
//	printf("%d\n", sizeof(struct S));
//
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
//
//int main()
//{
//	struct S s = {0};
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}


//#define MALE 0
//#define FEMALE 1
//#define SECRET 2

//
//enum Sex
//{
//	MALE=8,
//	FEMALE=20,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex sex = SECRET;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("****   1. add     2. sub    ***\n");
//	printf("****   3. mul     4. div    ***\n");
//	printf("****   0. exit              ***\n");
//	printf("*******************************\n");
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
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		}
//	} while ();
//	return 0;
//}
//联合体-共用体
//
//union U
//{
//	char c[5];//5
//	int i;//4
//};
//
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(u));//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//
//	return 0;
//}
//

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	//int a = 1;
//	//00 00 00 01
//	//01 00 00 00 
//	//00 00 00 01
//	return 0;
//}
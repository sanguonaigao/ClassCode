#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//struct S
//{
//	char ch;
//	int num;
//	double d;
//};
//
//struct Stu
//{
//	char name[20];
//	short age;
//	struct S s;
//	char sex[5];
//};
//
//void Print1(struct Stu s)
//{
//	printf("%s %d %lf %s\n", s.name, s.age, s.s.d, s.sex);
//}
//
//void Print2(struct Stu* ps)
//{
//	printf("%s %d %lf %s\n", ps->name, ps->age, ps->s.d, ps->sex);
//}
//
//int main()
//{
//	//struct Stu s1 = {"张三", 20, "男"};
//	struct Stu s2 = {"张三", 20, {'w', 100, 3.14}, "男"};
//	Print1(s2);
//	Print2(&s2);
//	//printf("%s %d %c %d %lf %s\n", s2.name, s2.age, s2.s.ch, s2.s.num, s2.s.d, s2.sex);
//
//
//	//struct Stu s2;
//	//struct Stu s3;
//	//struct Stu s4,s5,s6;
//
//	return 0;
//}


//
//int  main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 1;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	//断点
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("c = %d\n", c);
//	return 0;
//}

//堆栈
//栈

//堆

//调用堆栈

//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//
//深信服
//

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		int ret = 1;
//		for(i=1; i<=n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//	/*for(i=0; i<=12; i++)
//	{
//	arr[i] = 0;
//	printf("hehe\n");
//	}*/
//	system("pause");
//	return 0;
//}

//
//《C陷阱和缺陷》
//



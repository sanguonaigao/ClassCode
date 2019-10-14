#define _CRT_SECURE_NO_WARNINGS 1

//
//int char short float ...
//

//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//}s1, s2, s3;

//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s = {"ÕÅÈý", 20, "ÄÐ"};
//	Stu ss = {0};
//
//	return 0;
//}
//
//#include <stdio.h>
//
//struct S
//{
//	int a;
//	char c;
//};
//
//struct S2
//{
//	int arr[10];
//	int* p;
//	struct S s;
//	double d;
//};
//
//void Print1(struct S2 tmp)
//{
//	printf("%d %d %c %lf\n", tmp.arr[0], *(tmp.p), tmp.s.c, tmp.d);
//}
//
//void Print2(struct S2* ps)
//{
//	printf("%d %d %c %lf\n", ps->arr[0], *(ps->p), ps->s.c, ps->d);
//}
//
//int main()
//{
//	//NULL; 0 \0  '0'
//	int a = 100;
//	struct S2 s2 = {{1,2,3}, &a, {20, 'q'}, 3.14};
//	Print1(s2);
//	Print2(&s2);
//
//	return 0;
//}
//
//int main()
//{
//	//NULL; 0 \0  '0'
//	int a = 100;
//	struct S2 s2 = {{1,2,3}, &a, {20, 'q'}, 3.14};
//	struct S2* ps = &s2;
//	printf("%c\n", s2.s.c);
//	printf("%c\n", ps->s.c);
//	printf("%d\n", *(s2.p));
//	printf("%d\n", *(ps->p));
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 10-i;
//	}
//
//	return 0;
//}


#include <stdio.h>
//
//void test()
//{
//	printf("hehe\n");
//}
//
// 
// int main()
// {
// 	int i = 0;
// 	int arr[10] = {0};
// 	for(i=0; i<10; i++)
// 	{
// 		arr[i] = 0;
// 		printf("hehe\n");
// 	}
// 
// 	for(i=0; i<10; i++)
// 	{
// 		arr[i] = 10-i;//¶Ïµã
// 	}
// 
// 	return 0;
// }

//
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int  main()
//{
//	test();
//	return 0;
//}
//volatile
//
//int main()
//{
//	const int a = 10;
//	int*pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	for(n=1; n<=3; n++)
//	{
//		ret = 1;
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

int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for(i=0; i<=11; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}

	return 0;
}
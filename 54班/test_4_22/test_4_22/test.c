#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	//a&1
//	//(a>>i)&1
//	//a|b;
//	//a=10;
//	//00000000000000000000000000001010
//	//00000000000000000000000000000100
//	//1<<2;
//	//a^b;
//	//
//	//1 2 3 4 5 1 2 3 4
//	//1 2 1
//	//
//
//	int a = 26;
//	int b = 20;
//	//11010
//	//10100
//	//a^b
//	//01110
//
//	//11010
//	//10100
//	//a&b
//	//10000
//	//int c = (a+b)/2;
//	//c = a+(b-a)/2;
//	int c = (a&b) + ((a^b)/2);
//
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//数组首元素的地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);//数组首元素的地址
//	printf("%p\n", &arr[0]+1);//数组首元素的地址
//
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);//数组的地址
//
//	//int a = 10;
//	//int* p = &a;//指针变量
//
//	//printf("%p\n", &a);
//	//printf("%x\n", &a);
//
//
//	system("pause");
//	return 0;
//}

//void test(int arr[])
//void test(int *arr)
//{
//	printf("%d\n", sizeof(arr));
//}
//
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(arr+0));//4
//	//int a = 1;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof a);
//
//	//printf("%d\n", sizeof(int));
//
//	system("pause");
//	return 0;
//}
//
//void test(int n)
//{
//
//}
//int main()
//{
//	short a = 10;
//	int b = 3;
//	//printf("%d\n", sizeof(a=b+5));//2
//	sizeof(a=b+5);//2
//	printf("%d\n", a);//10
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//
//	//int b = a++;//后置++，先使用，后++
//	//int b = ++a;//前置++，先++，后使用
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//
//	//00000000000000000000000000001110
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	//a = a&(~(1<<2));
//	//a = a|(1<<2);
//	//printf("%d\n", a);
//	//printf("%d\n", ~a);
//	//00000000000000000000000000001010
//	//11111111111111111111111111110101
//	//11111111111111111111111111110100
//	//10000000000000000000000000001011
//	//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	if(arr1 == "abcdef")
//	{
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	//int len = strlen("abc");
// 	//b = 1+2;
// 	char *p = "abcdef";
// 	printf("%c\n", *p);
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	//int c = a && b;
//	//int c = a || b;
//	
//	printf("%d\n", c);//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0,a=1,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//
//	system("pause");
//	//0 3 3 4-3
//	//1 3 3 4
//	//1 3 3 5-8
//	//
//	return 0;
//}
//
//
//int main()
//{
//// 	int a = 3;
//// 	int b = 0;
//// 	int max = 0;
//// 	b = ((a>5) ? (3):(-3));
//// 	max = (a>b) ? (a):(b);
//	int a = 1;
//	int b = 2;
//	int c = (a>b, a=b+10, a, b=a+1);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7};
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", *(arr+5));
//	int* p = arr;
//	//printf("%d\n\n", p[5]);
//	//printf("%d\n", *(p+5));
//	//p[5] == *(p+5)
//	//arr[5] == *(arr+5) == *(5+arr) == 5[arr]
//	//printf("%d\n", *(arr+5));
//	//printf("%d\n", *(5+arr));
//	//printf("%d\n", 5[arr]);
//
//	system("pause");
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//
//	return 0;
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = {"zhangsan", 30, "男"};
//	struct Stu* ps = &s;
//
//	printf("%s\n", ps->name);
//
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//	//printf("%s\n", s.sex);
//
//
//	system("pause");
//	return 0;
////}
//
//int main()
//{
//	//double d = 3;
//	char a = 127;
//	char b = 3;
//	char c = a+b;
//	//
//	//
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111-a
//	//00000000000000000000000000000011-b
//	//00000000000000000000000010000010
//	//10000010-c
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//
//
//	printf("%d\n", c);//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a = 0xb6;//11000110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	system("pause");
//	return 0;
//}

// 
// int main()
// {
// 	char c = 1;
// 	printf("%u\n", sizeof(c));//1
// 	printf("%u\n", sizeof(+c));//4
// 	printf("%u\n", sizeof(!c));//4
// 
// 	system("pause");
// 	return 0;
// }


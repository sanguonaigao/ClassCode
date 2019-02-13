#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int a = 5%2;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a<<1;
//	//左移操作符
//	//二进制位
//	//10
//	//00000000000000000000000000001010
//	//
//	printf("a = %d\n", a);//10
//	printf("b = %d\n", b);//
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = a>>1;
//	//右移操作符
//	//算术右移
//	//右边丢弃，左边补原符号位
//
//	//逻辑右移
//	//右边丢弃，左边补0
//	//
//
//	int a = -1;
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//
//	int b = a>>1;
//
//	printf("a = %d\n", a);//10
//	printf("b = %d\n", b);//5
//
//	system("pause");
//	return 0;
//}
//
//int test(int n)
//{
//	return 0;
//}
//int main()
//{
//	int s = 10;
//	int a = 3;
//	//printf("%d\n", sizeof(s=a+5));//4
//	printf("%d\n", test(s=a+5));
//	printf("%d\n", s);//10
//	printf("%d\n", a);//3
//
//	//int a = 10;
//	//int sz = sizeof(a);
//	//sz = sizeof(int);
//	//printf("%d\n", sz);
//	//int a = 10;
//	//int* p = &a;
//	/*printf("%d\n", 3);
//	printf("%d\n", !3);
//	printf("%d\n", !0);*/
//
//	//int a = -1;
//	//a = a+10;//1
//	//a += 10; //2
//
//	//a = a>>2;
//	//a >>= 2;
//
//	//int a = 3;
//	//int b = 5;
//
//	//a = a^b;
//	//b = a^b;
//	//a = a^b;
//
//	//int c = a^b;
//
//	//011
//	//101
//	//110
//	//6
//
//	//int c = a|b;
//	//011
//	//101
//	//111
//	//7
//	//printf("%d\n", c);
//
//	//a&1;
//	////011
//	////001
//	////001
//	////按（二进制）位与
//	////011
//	////101
//	////001
//	////
//	//int c = a&b;
//	//printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//
//	int b = ~a;
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//
// 
// int main()
// {
// 	int a = 10;
// 	//00000000000000000000000000001110
// 	//11111111111111111111111111111011
// 	//00000000000000000000000000000100
// 	//1<<2;
// 	return 0;
// }
//github
//
//
//int main()
//{
//	//int a = 10;
//	//int b = a++;//后置++：先使用，后++
//	//int b = ++a;//前置++：先++，后使用
//	//int b = --a;
//	//printf("a = %d b = %d\n", a, b);//
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	//4 4 4
//	printf("%d\n", b);
//
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	//int a = 10;
//	//int *p = &a;
//	//*p = 20;//解引用操作符/间接访问操作符
//
//	//int a = 10;
//	//a = (int)3.14;
//	//a = int(3.14);//err
//
//	return 0;
//}
//
//void test(int arr2[10])
//{
//	printf("test::%d\n", sizeof(arr2));//4
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	printf("%d\n", sizeof(arr));//40
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	int a = 0;
// 	int b = 5;
// 	int c = a || b;
// 	printf("%d\n", c);
// 	system("pause");
// 	return 0;
// }
//
//#include <stdio.h>
//int main()
//{
//	int i = 0,a=0,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//1 3 3 4
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = a>b ? a:b;
//	b = (a>5 ? 3 : -3);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	arr[4] = 5;//下标引用操作符
//	
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
//	Add(2, 3);//函数调用操作符
//	return 0;
//}

//
//结构体类型-自定义类型
//
struct Stu
{
	char name[20];
	int age;
};

void print1(struct Stu* ps)
{
	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
}

void print2(struct Stu* ps)
{
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
}

int main()
{
	//.    结构体变量.结构体成员
	//->   结构体指针->结构体成员

	int a = 0;
	struct Stu s = {"zhangsan", 20};
	print2(&s);
	/*printf("%s\n", s.name);
	printf("%d\n", s.age);*/
	system("pause");
	return 0;
}
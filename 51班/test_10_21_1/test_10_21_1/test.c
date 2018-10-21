#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>

//
//结构体
//
struct Student
{
	char name[20];
	int age;
	char sex[5];
};
//int / float
int main()
{
	//int a;
	char* p = "abcdef";//

	struct Student s = {"lisi", 23, "男"};
	struct Student* ps = &s;
	//printf("%s\n", (*ps).name);
	printf("%s\n", ps->name);

	//s.name = "zhangsan";
	//strcpy(s.name, "zhangsan");
	//s.age = 20;
	//s.sex = "男";
	//strcpy(s.sex, "男");
	//printf("%s %d %s\n", s.name, s.age, s.sex);
	return 0;
}

// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	int c = Add(a, b);
// 
// 	return 0;
// }


// int main()
// {
// 	int arr[10] = {0};
// 	arr[4] = 5;
// 	return 0;
// }
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = a>b?a:b;
//	//if(a>5)
//	a>5 ? b=3 : b=-3;//1
//	b = a>5 ? 3: -3; //2
//	return 0;
//}
// int main()
// {
// 	int i = 0,a=1,b=2,c =3,d=4;
// 	//i = a++ && ++b && d++;
// 	i = a++||++b||d++;
// 	printf("a = %d\n b = %d\n c = %d\nd = %d\n", 
// 		a, b, c, d);
// 
// 	return 0;
// }




//
//int main()
//{
//	//int a = (int)3.14;
//// 	int a = 10;
//// 	int *p = &a;
//// 	*p = 20;
//// 	int a = 10;
//// 	int b = 20;
//// 	a||b;//1
//	return 0;
//}

// int main()
// {
// 	int a = 10;
// 	//int b = a++;//后置--
// 	int b = ++a;  //
// 	printf("a = %d b = %d\n", a, b);
// 	return 0;
// }

//
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//00000000000000000000000000011101-
//	//11111111111111111111111111101111
//	//00000000000000000000000000001101-
//	return 0;
//}
// int main()
// {
// 	int a = 0;
// 	printf("%d\n", ~a);
// 	
// 	return 0;
// }

//
//void test(short n)
//{
//
//}
//
//int main()
//{
//	//int a = 0;
//	//printf("%d\n", !a);
//	//int a = 10;
//	//int *p = &a;
//	//int a = 10;
//	//int arr[10] = {0};
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(arr));//40
//	short s = 3;
//	int a = 10;
//	//test(s=a+5);
//	printf("%d\n", sizeof(s=a+5));//2
//	printf("%d\n", s);//3
//	//test.c            test.exe
//	//       编译+链接
//	return 0;
//}

// int main()
// {
// 	int a = 10;
// 	a = a+1;//?
// 	a += 1; //?
// 	a -= 1;
// 	return 0;
// }

//
//1234
//
//
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	//00000000000000000000000000000001
//	//
//	//a&1=1 0
//
//	return 0;
//}
//
//int  main()
//{
//	//int a = 3;
//	//int b = 5;
//	//011-b
//	//101-a
//	//110-
//	//a = a^b;//a=6 b=5
//	//b = a^b;//a=6 b=3
//	//a = a^b;//
//	//1 2 3 4 5 4 3 2 1
//	//1 5 1
//	//
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	int b = 3;
//	int c = a^b;
//	printf("%d\n", c);
//	//按二进制位与
//	//11111111111111111111111111111111
//	//00000000000000000000000000000011
//	//11111111111111111111111111111100
//	//11111111111111111111111111111011
//	//10000000000000000000000000000100
//	//
//	return 0;
//}

// 
// int main()
// {
// 	int a = 10;
// 	int b = a>>-3;
// 
// 	return 0;
// }

//
//int main()
//{
//	//int ret = 5%2;
//	//printf("%d\n", ret);
//	int a = -1;
//	//10000000000000000000000000000001-原码
//	//11111111111111111111111111111110-反码
//	//11111111111111111111111111111111-补码
//
//	//00000000000000000000000000001101
//	//
//	//a = a<<1;//二进制位
//	int b = a>>1;
//
//	//左移--左边丢弃, 右边补0
//
//	//右移
//	//算术右移
//	//右边丢弃,左边补原符号位
//
//	//逻辑右移
//	//右边丢弃,左边补0
//
//	printf("b = %d\n", b);
//	printf("a = %d\n", a);
//
//	return 0;
//}
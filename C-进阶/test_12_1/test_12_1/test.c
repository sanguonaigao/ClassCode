#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//int a = 5/2.0;
//	float a = 5/2.0;
//	printf("a = %f\n", a);
//	return 0;
//}

//int main()
//{
//	5%2;
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//
//	//00000000000000000000000000001100-原码
//	//00000000000000000000000000001100-反码
//	//00000000000000000000000000001100-补码
//
//	//int b = a<<1;
//	int b = a>>1;
//	//右移
//	//算术右移
//	//右边丢弃，左边补原符号位
//	//逻辑右移
//	//右边丢弃，左边补0
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = -3;
//	int b = 5;
//
//	int c = a^b;
//
//	//10000000000000000000000000000011
//	//11111111111111111111111111111100
//	//11111111111111111111111111111101
//	//00000000000000000000000000000101
//	//11111111111111111111111111111000
//	//11111111111111111111111111110111
//	//10000000000000000000000000001000
//
//	//11111111111111111111111111111101
//	//11111111111111111111111111111100
//	//10000000000000000000000000000011
//	//
//	printf("c = %d\n", c);
//	//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//011-b
//	//101-a
//	//110
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	//int tmp = a;
//	//a = b;
//	//b = tmp;
//	/*a = a+b;
//	b = a-b;
//	a = a-b;*/
//
//
//
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//
//1 2 3 4 5 1 2 3 4
//
//1 2 3 4 8 1 2 3 4 6
//
//
//int main()
//{
//	int a = -1;
//	int count = 0;
//	while(a)
//	{
//		count++;
//		a = a&(a-1);
//	}
//
//	//a = a&(a-1);
//	//1101-a
//	//1100
//	//1100-a
//	//1011
//
//
//	//000000000000000000000000000001111
//	//000000000000000000000000000000001
//	//
//	//while(a)
//	//{
//	//	if(a%2==1)
//	//		count++;
//	//	a/=2;
//	//}
//	//
//	//a&1
//	/*int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(1 == ((a>>i)&1))
//			count++;
//	}*/
//	printf("%d\n", count);
//	return 0;
//}

#include <limits.h>

//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	//int c = (a+b)/2;
//	//int c = a+(b-a)/2;
//	int c = (a&b)+((a^b)>>1);
//
//	printf("c = %d\n", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//指针变量
//	*p = 20;
//	printf("a = %d\n", a);
//	return 0;
//}
//
//
//
//int main()
//{
//	short s = 0;
//	int a = 3;
//	printf("%d\n", sizeof(s=a+10));//2
//	printf("%d\n", s);//0
//
//	//int a = 10;
//	//int arr[10] = {0};
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//printf("%d\n", sizeof(arr));//4 40
//// 	printf("%d\n", sizeof(a));
//// 	printf("%d\n", sizeof a);
//// 	printf("%d\n", sizeof(int));
//
//	return 0;
//}

//EOF
//int main()
//{
//	//int a = 0;
//	//printf("%d\n", ~a);//
//	while(scanf())
//	{
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	//00000000000000000000000000010000
//	//1<<4;
//	//00000000000000000000000000011101
//	//11111111111111111111111111101111
//	//00000000000000000000000000010000
//	//~(1<<4)
//	//00000000000000000000000000001101
//
//	return 0;
//}
//

//int main()
//{
//	//int a = 10;
//	//int b = a--;
//	//printf("a = %d b = %d", a, b);
//	int a = (int)3.14;
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", 0||0);
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 0,a=1,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
////
//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//a>5?b=3:b=-3;
//	//b = (a>5 ? 3:-3);//2
//	//int max = (a>b ? a:b);
//	//int arr[10] = {0};
//	//arr[4] = 10;//下标引用操作符
//	int ret = Add(3, 4);
//
//	return 0;
//}

//char 
//short int long
//内置类型
//自定义类型（构造类型）
//struct  enum  union  数组
//
//struct-结构
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20};
//	struct Stu* ps = &s;
//	printf("%s\n", s.name);
//	printf("%d\n", s.age);
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a+b+10;
//
//	return 0;
//}
//
//int main()
//{
//	char a = 3;
//	char b = 127;
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010-c
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	char c = a+b;
//	//
//	printf("c = %d\n", c);//
//	//-126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if(a==0xb6)
//		printf("a\n");
//	if(b==0xb600)
//		printf("b\n");
//	if(c==0xb6000000)
//		printf("c\n");
//	return 0;
//}
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//4
//	return 0;
//}
//
//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf( "%d\n", answer);//输出多少？
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}









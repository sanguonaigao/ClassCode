#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int a = 10;
//	//00000000000000000000000000001010
//	//11111111111111111111111111110101-补码
//	//11111111111111111111111111110100
//	//10000000000000000000000000001011
//	//
//	//
//	//
//	//00000000000000000000000000000000-
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//-1
//	printf("%d\n", ~a);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = a|(1<<2);
//	printf("%d\n", a);//14
//
//	a = a&(~(1<<2));
//	printf("%d\n", a);//10
//
//	system("pause");
//	//00000000000000000000000000001110
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	//1<<2;
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	////int b = a++;//后置++，先使用，后++
//	////int b = ++a;  //前置++，先++，后使用
//	//int b = --a;
//	//printf("a = %d\n", a);//9
//	//printf("b = %d\n", b);//9
//
//	//int a = (int)3.14;
//	//a = int(3.14);//err
//
//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a&&b;
//	//int c = a||b;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0,a=1,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//1 3 3 5-7
//	//1 2 3 4-3
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	/*int a  = 0;
//	if(a>5)
//	b = 3;
//	else
//	b = -3;
//
//	a>5 ? b=3 : b=-3;
//	b = a>5 ? 3:-3;
//	*/
//
//	int a = 10;
//	int b = 20;
//	int max = a>b?a:b;
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a[10] = {0};
//	a[4] = 5;//下标引用操作符
//	
//	return 0;
//}
//
//void test()
//{
//	printf("bit\n");
//}
//
//int main()
//{
//	printf("hehe");
//	test();//函数调用操作符
//	return 0;
//}

//
//struct Book
//{
//	char name[20];
//	double price;
//	char id[20];
//};
//
//
//int main()
//{
//	struct Book b = {"数据结构", 25.5, "SJJG001"};
//	//printf("%s %lf %s\n", b.name, b.price, b.id);
//	struct Book* pb = &b;
//	//printf("%s %lf %s\n", (*pb).name, (*pb).price, (*pb).id);
//	printf("%s %lf %s\n", pb->name, pb->price, pb->id);
//	//. 结构体变量.成员
//	//->  结构体指针->成员
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a = 127;
//	char b = 3;
//	char c = a+b;
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111-a
//	//00000000000000000000000000000011-b
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110- -126
//	//
//	printf("%d\n", c);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	//11111111111111111111111110110110
//	//00000000000000000000000010110110
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

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//
//	printf("%u\n", sizeof(!c));//
//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = (a+b)*10;
//	int c = a+b+10;
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//4
//	int* pa = &a;//指针变量
//	*pa = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	int a = 10;
//	int* pa = &a;
//
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pa));//4
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//	//1. 指针类型决定了通过指针访问内存的权限
//	//int* 的指针，解引用访问4个字节
//	//char* 的指针，解引用访问1个字节
//	//double*
//	//2. 指针的类型决定了指针向后/前走一步，走多大距离
//	//
//	int a = 10;
//	int*pa = &a;
//	char *pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	char* p = arr;
//
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i+1;
//	}
//	
//// 	*(p+0)
//// 	*(p+1)
//// 	*(p+i)
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}

#include <string.h>

int my_strlen(char *str)
{
	char* eos = str;
	while(*eos != '\0')
	{
		eos++;
	}
	return eos-str;
}
int main()
{
	//int arr[10] = {0};
	//char arr2[10] = {0};
	//printf("%d\n", &arr[9] - &arr2[0]);
	//printf("%d\n", &arr[0]- &arr[9]);//-9
	//printf("%d\n", &arr[9]- &arr[0]);//9
	//a b c \0
	int len  = my_strlen("abc");
	printf("len = %d\n", len);
	system("pause");
	return 0;
}
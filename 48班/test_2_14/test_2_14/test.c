#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct S
{
	char arr[1000];
	int num;
};

void print1(struct S tmp)
{
	printf("%s -- %d\n", tmp.arr, tmp.num);
}

void print2(struct S* ps)
{
	printf("%s -- %d\n", ps->arr, ps->num);
}

int main()
{
	struct S s = {"zhangsan", 100};
	print1(s);
	print2(&s);
	system("pause");
	return 0;
}
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
//	float f;
//	char arr[20];
//};
//
//int main()
//{
//	struct Point p = {2, 3};
//	struct Node n = {20, {1,3}, 3.14f, "hehe"};
//	//printf("%d %d\n", p.x, p.y);
//	printf("data:%d\n", n.data);
//	printf("x:%d\n", n.p.x);
//	printf("y:%d\n", n.p.y);
//	printf("f:%f\n", n.f);
//	printf("arr:%s\n", n.arr);
//	system("pause");
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}s1, s2, s3;

//struct Stu s1,s2,s3;
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s;
//	return 0;
//}
//
//int main()
//{
//	char* arr1[5] = {0};
//	int* arr2[5] = {0};
//	printf("%d\n", sizeof(arr1));//20 
//	printf("%d\n", sizeof(arr2));//20
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr1[10] = {0,1,2,3,4};//整型数组
//	char arr2[5] = {0};//字符数组
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int* parr[4] = {&a, &b};
//	*(parr[0]) = 100;
//	printf("%d\n", a);//100
//	//&a;//int*
//	//&b;//int*
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int * pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	**ppa = 20;
//	printf("%d\n", a);
//	system("pause");
//	//int*** pppa = &ppa;
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	char* start = str;
//	while(*str != '\0')
//	{
//		str++;
//	}
//	return str-start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));//6
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {0};
//	char ch[5] = {0};
//	printf("%d\n", &ch[4]-&arr[4]);//err
//
//	printf("%p\n", &arr[9]);
//	printf("%p\n", &arr[0]);
//
//	printf("%d\n", &arr[0]-&arr[9]);
//	//9
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	//printf("%p\n", arr);//数组名表示数组首元素的地址
//	//arr arr[0]-->int int*
//	//printf("%p\n", &arr[0]);
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//int arr[10] = {0};//40
//	//int* p = arr;
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	*(p+i) = 0x02020202;
//	//}
//
//	int arr[10] = {0};//40
//	char* p = arr;
//	int i = 0;
//	for(i=0; i<40; i++)
//	{
//		*(p+i) = 2;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 0x11223344;
//	int* p = &a;
//	*p = 0;*/
//	/*int a = 0x11223344;
//	char* p = &a;
//	*p = 0;*/
//	//1. 决定了指针的访问权限
//	//整型指针解引用，访问4个字节
//	//字符指针解引用，访问1个字节
//	//char* pc = &a;
//	int a = 10;
//	int* pa = &a;
//	char *p = &a;
//	printf("&a = %p\n", &a);
//	printf("pa = %p\n", pa);
//	printf("pa+1 = %p\n", pa+1);
//	printf("p =  %p\n", p);
//	printf("p+1 =  %p\n", p+1);
//	//2. 决定了指针的步长（走一步走几个字节）
//	//int* + 1 --> 向后走4个字节
//	//char* + 1 --> 向后走1个字节
//
//	system("pause");
//	//ptr_t pp;
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int * p = &a;
//	return 0;
//}
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
//	system("pause");
//	return 0;
//} 
//
//int main()
//{
//	int a = 1;
//	int b = (++a)+(++a)+(++a);
//	printf("%d\n", b);//12
//
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//4
//	system("pause");
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
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	char a = 2;
//	char b = 127;
//	char c = a+b;
//	//00000000000000000000000000000010
//	//00000000000000000000000001111111
//	//00000000000000000000000010000001
//	//10000001
//	//11111111111111111111111110000001
//	//11111111111111111111111110000000
//	//10000000000000000000000001111111
//	//-127
//	//
//	printf("%d\n", c);//
//	//-127-2
//	//-129
//	//129
//	//
//
//	system("pause");
//	//(5+10)*20;
//	//5+6+7;
//	//char a = 2;
//	//char b = 127;
//	//char c = a+b;
//	//unsigned char
//	//char a = -1;
//	//11111111111111111111111111111111
//	//11111111 -a
//	//11111111111111111111111111111111
//
//
//	return 0;
//}
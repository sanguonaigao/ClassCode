#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


int main()
{
// 	int a = 10;
// 	char c = 'w';
// 	int* pi = &a;
// 	char* pc = &c;
	int a = 0x11223344;
	int* pa = &a;
	char* pc = (char *)&a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);//

	printf("%p\n", pc);
	printf("%p\n", pc+1);//

	//char *pc = (char*)&a; //int*
	//*pc = 0;

	//int *pa = &a;
	//*pa = 0;
	system("pause");
	return 0;
}


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

//int main()
//{
//	int a = 1;
//	int b = 0;
//	b = (++a)+(++a)+(++a);
//
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	//unsigned int b = 20;
//	//a+b;
//	int a = 10;
//	int b = 20;
//	int c = (a+b)*10;
//	c = a+b+10;
//	return 0;
//}

// int main()
// {
// 	char c = 10;
// 	printf("%u\n", sizeof(c));//1
// 	printf("%u\n", sizeof(+c));//
// 	printf("%u\n", sizeof(!c));//
// 
// 	system("pause");
// 	return 0;
// }

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	//int num = 1234;
//	//000000000000000000000100 11010010
//	//d2
//	//char a = num;
//	char a = 3;
//	char b = 127;
//	//00000000000000000000000000000011
//	//00000011
//	//00000000000000000000000001111111
//	//01111111
//	//00000000000000000000000000000011-a
//	//00000000000000000000000001111111-b
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//-126
//	char c = a+b;
//	printf("%d\n", c);//-126
//
//	//
//	//3
//	//-126
//	//
//	system("pause");
//	return 0;
//}
//结构体

//struct Stu
//{
//	char name[20];
//	short int age;
//	char sex[10];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//}
//
//int main()
//{
//	struct Stu s = {"张三", 20, "男"};
//	//printf("%s %d %s\n", s.name, s.age, s.sex);
//	print(&s);
//	system("pause");
//	return 0;
//}


//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int arr[10] = {0};
//	//0-9
//	//arr[i]
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = i;
//	}
//	test();//()函数调用操作符
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	//1
//	if(a>b)
//		max = a;
//	else
//		max = b;
//	//2
//	max = (a>b)?(a):(b);
//
//	return 0;
//}

//int main()
//{
//	int i = 0,a=0,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//
//	system("pause");
//	return 0;
//}



// 
// int main()
// {
// 	int a = 0;
// 	int b = 0;
// 	//printf("%d\n", a&&b);
// 	//printf("%d\n", a||b);
// 
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	float f = 3.14f;
//	int* pf = &f;//float*
//	//float a = 3.14f;
//	//int b = (int)a;
//
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;//解引用，间接访问操作符
//	//int a = 10;
//	//int b = ++a;//前置++， 先++，后使用
//	//int b = a++;//后置++， 先使用，后++
//	//printf("a = %d b = %d\n", a, b);
//	//int a = 15;
//	//00000000000000000000000000001111
//	//00000000000000000000000000010000
//	//00000000000000000000000000011111
//	//11111111111111111111111111101111
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
//
//	printf("%d\n", ~a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//// 	printf("%d\n", sizeof(int));
//// 	printf("%d\n", sizeof(a));
//// 	printf("%d\n", sizeof a);
//	int arr[10] = {0};
//	//数组名
//	//1. 数组名可以表示整个数组
//	// a>    sizeof(数组名)
//	// b>    &数组名
//	//2. 数组名可以表示首元素的地址
//	//   除此(a, b)之外你遇到的所有的数组名都是首元素的地址
//	//
//
//	//printf("%d\n", sizeof(arr));//40
//	//printf("%d\n", sizeof(arr+0));//4
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p1 = arr;
//	int* p2 = &arr[0];
//	int (*p3)[10] = &arr;
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%d\n", !5);
//	system("pause");
//	return 0;
//}
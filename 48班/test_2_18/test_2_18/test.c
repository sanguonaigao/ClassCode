#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

// int main()
// {
// 	const char *str = "abcdef";
// 	*str = 'e';
// 	return 0;
// }
//int main()
//{
//	//int arr1[10];
//	//char arr2[5];
//	////指针数组
//	//char* arr3[5];
//	//double* arr4[6];
//	//int a = 10;
//	//int* p1 = &a;//整型指针-指向整型的指针
//	//char* p2;//字符指针-指向字符的指针
//	////数组指针-指向数组的指针
//	//int arr[10];
//	//&arr;
//	int arr[10] = {0};
//	int (*p)[10]  = &arr;//数组指针
//
//	//char* ch[5];
//	//char* (*pc)[5] = &ch;//数组的地址->数组指针
//
//	//int arr[10] = {0};
//	//printf("%p\n", arr);//数组首元素的地址
//	//printf("%p\n", arr+1);
//
//	////printf("%p\n", &arr[0]);
//	//printf("%p\n", &arr);//数组的地址
//	//printf("%p\n", &arr+1);
//
//	//&arr//数组的地址
//	//arr//数组首元素的地址
//
//	//sizeof(数组名)-数组名表示的整个数组
//	//&数组名-数组名表示整个数组，所以取出的是数组的地址
//	//除此之外，遇到的所有的数组名表示数组首元素的地址
//
//	system("pause");
//	return 0;
//}


//void print(int *p, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}
//void print(int(*p)[10], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(*p+i));
//	}
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//&arr;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(&arr, sz);
//	system("pause");
//	return 0;
//}
//
//void print(int arr[3][4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print(int (*p)[4], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			//printf("%d ", *(*(p+i)+j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[5];
//	int *p = a;
//	*(p+2)  ==  p[2]
//
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	print(arr, 3, 4);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int arr[5];
//	int (* parr3[10])[5];
//	//parr3是一个数组，数组有10个元素，每个元素是一个数组指针
//	//该数组指针指向的数组有5个元素，每个元素是int
//	//parr3是一个存放数组指针的数组
//
//	return 0;
//}
//
//void test(int **p)
//{
//
//}
//int  main()
//{
//	int* arr[5];//int* 
//	test(arr);
//	return 0;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int (*p)(int, int) = Add;
//	//printf("%d\n", *p(2,3));//err
//	printf("%d\n", (*p)(2,3));
//	printf("%d\n", Add(2,3));
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//(*(void(*)())0)();
//	//把0强制类型转换为一个函数指针，调用0作为函数的地址的那个函数
//	//调用0地址处那个无参无法回值的函数。
//
//	//int (*p)(int, int) = Add;//函数指针
//	//int (*)(int, int);//函数指针类型
//	//int (*)[5];
//	//printf("%d\n", (*p)(2, 3));
//
//	void (* signal(int, void(*)(int)) )(int);
//	//signal是一个函数声明
//	//signal函数的第一个参数是int，第二个参数是函数指针
//	//signal函数的返回类型是一个函数指针
//	//
//	//signal函数的第二个参数的类型和返回类型相同，都是函数指针
//	//该函数指针指向的函数，参数是int，返回类型是void
//	//
//	typedef void(* ptr)(int);
//	ptr signal(int, ptr);
//
//	//
//	//广联达 - 建筑领域的
//	//
//	//typedef unsigned int uint;
//
//
//	//int arr[10];
//	//&arr;
//	//printf("%p\n", &test);
//	//printf("%p\n", test);
//	//(*&test)();
//	//(*test)();
//
//	system("pause");
//	return 0;
//}

//
//函数指针
//函数指针数组
//
//整型指针
//整型指针数组
//
int Add(int x, int y)
{
	return x+y;
}
int Sub(int x, int y)
{
	return x-y;
}
int Mul(int x, int y)
{
	return x*y;
}
int Div(int x, int y)
{
	return x/y;
}


void menu()
{
	printf("*************************************\n");
	printf("****    1. add     2. sub         ***\n");
	printf("****    3. mul     4. div         ***\n");
	printf("****    0.exit                    ***\n");
	printf("*************************************\n");
}
void Calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	int ret = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	ret = pf(x, y);
	printf("ret = %d\n", ret);
}
int main()
{
	int input = 0;
	//函数指针数组的使用
	//转移表
	int (*pfun[5])(int, int) = {0, Add, Sub, Mul, Div};
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		Calc(pfun[input]);
		/*switch(input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}*/
	} while (input);
	return 0;
}


//int main()
//{
//	//int* arr[4];
//	int(*parr[4])(int, int)  = {Add, Sub, Mul, Div};//int(*)(int, int);
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", parr[i](4, 2));//6 2 8 2
//	}
//	system("pause");
//	return 0;
//}
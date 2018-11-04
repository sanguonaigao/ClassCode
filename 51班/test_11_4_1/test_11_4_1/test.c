#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


enum Option
{
	EXIT,//0
	ADD,//1
	SUB,//2
	MUL,//3
	DIV//4
};

void menu()
{
	printf("*************************\n");
	printf("*** 1. add     2. sub ***\n");
	printf("*** 3. mul     4. div ***\n");
	printf("***     0. exit       ***\n");
	printf("*************************\n");
}

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


void Calc(int(*pfun)(int, int))
{
	int x = 0, y = 0;
	int ret = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	ret = pfun(x, y);
	printf("ret = %d\n", ret);
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);

		switch(input)
		{
		case ADD:
			Calc(Add);
			break;
		case SUB:
			Calc(Sub);
			break;
		case MUL:
			Calc(Mul);
			break;
		case DIV:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	}while(input);
	return 0;
}

//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	//转移表
//	int (*pfun[5])(int , int) = {0, Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if(input>=1 && input<=4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfun[input](x ,y);
//			printf("ret = %d\n", ret);
//		}
//	}while(input);
//	return 0;
//}
//

//int(*arr3[10])();

//typedef int* pint;
//void (* p)(int);

//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//
//void (*signal(int , void(*)(int)))(int);

//
//signal是一个函数声明
//函数的参数有2个,第一个是int
//第二个函数指针,该指针指向的函数有一个参数,类型为int,函数的返回类型为void
//signal函数的返回类型为函数指针
//该指针指向的函数有一个参数,类型为int,函数的返回类型为void
//
//海能达
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int  main()
//{	
//	int arr[10];
//	int (*p)(int , int) = Add;
//	printf("%d\n", p(1,2));
//	//int (*p2)[10] = &arr;
//	return 0;
//}

// void test()
// {
// 	printf("hehe\n");
// }
// 
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int main()
// {
// 	//printf("%p\n", &test);
// 	//printf("%p\n", test);
// 
// 	//test();
// 	printf("%d\n", (*Add)(2,3));
// 	return 0;
// }

//
//void test(int *p)
//{
//
//}
//int main()
//{
//	int num;
//	int *p2 = &num;
//	int arr[10];
//	test(arr);
//	
//	return 0;
//}

// void test(int *arr)//ok？
// {}
// void test(int* arr[5])//ok？
// {}
// void test(int (*arr)[5])//ok？
// {}
// void test(int **arr)//ok？
// {}

// int main()
// {
// 	int arr[3][5] = {0};
// 	test(arr);
// }


//
//#include <stdio.h>
//void test(int arr[])//ok?
//{}
//void test(int arr[10])//ok?
//{}
//void test(int *arr)//ok?
//{}
//void test2(int *arr[20])//ok?
//{}
//void test2(int **arr)//ok?
//{}
//int main()
//{
//	int arr[10] = {0};
//	int *arr2[20] = {0};
//	test(arr);
//	test2(arr2);
//}



// int  main()
// {
// 	int* arr[4];
// 	int (*parr3[10])[5];
// 	return 0;
// }
//
//void print(int arr[3][5], int x, int y)
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
////数组指针
//void print(int (*arr)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<x; i++)
//	{
//		for(j=0; j<y; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//// 	//int*p = arr;
//// 	int (*p)[10] = &arr;
//// 	int i = 0;
//// 	for(i=0; i<10; i++)
//// 	{
//// 		printf("%d ", *((*p)+i));
//// 	}
//
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	//int* arr[5];
//
//	//数组指针  指向数组的指针
//	//整型指针 int *p;
//	//字符指针 char*
//	int arr[10];
//	*arr;//4  arr-int*
//	*&arr;//40 &arr-      int(*)[10]
//
//	int* arr2[10];
//
//	int (*p)[10] = &arr;
//	int* (*p2)[10] = &arr2;
//
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//	char *p1 = "abcdef";
//	char *p2 = "abcdef";
//
//	if(arr1 == arr2)
//	{
//		printf("arr1  == arr2\n");//no
//	}
//	if(p1 == p2)
//	{
//		printf("p1 == p2\n");//ok
//	}
//	return 0;
//}
//
//int main()
//{
//// 	char ch = 'w';
//// 	char* pc = &ch;
//// 	*pc = 'e';
//	const char *p = "abcdef";
//	*p = 'q';
//	printf("%s\n", p);
//	return 0;
//}
//



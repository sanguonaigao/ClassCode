#define _CRT_SECURE_NO_WARNINGS 1

//
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int(*p)[5])
//{}
//int main()
//{
//	int arr3[3][4][5];
//
//	//数组指针
//	//指针-指向了一个数组
//	char arr2[5];
//	char(*pa)[5] = &arr2;
//	int arr[3][5] = {0};
//	test(arr);
//	//指针数组
//	//数组-存放到是指针
//	int* arr[10];
//	return 0;
//}

//数组指针
//函数指针

#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//int arr[10] = {0};
//	//&arr;
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int(*pf)(int, int) = Add;
//	int ret = pf(3, 5);
//
//	printf("%d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	
//	//( *( void (*)() )0 )();
//	//
//	//调用0地址处的函数
//	//被调用的函数，是无参， 返回类型是void
//	//
//	//海能达
//	//
//	//typedef unsigned int uint;
//	/*typedef void(*pf_t)(int);
//	pf_t signal(int, pf_t);
//
//	void (* signal( int , void(*)(int) ))(int) ;*/
//	//
//	//signal是一个函数声明
//	//signal函数的第一个参数是int
//	//第二个参数是一个函数指针，
//	//该指针指向的函数参数是int，返回类型是void
//	//signal函数的返回类型是一个函数指针
//	//该指针指向的函数参数是int，返回类型是void
//	//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//int Mul(int x, int y)
//{
//	return x*y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("******    1. add    2. sub  *****\n");
//	printf("******    3. mul    4. div  *****\n");
//	printf("******    0. exit           *****\n");
//	printf("*********************************\n");
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//
//int main()
//{
//	int input = 0;
//	do 
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		//
//		int(*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if(input>=1 && input<=4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(0 == input)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//		/*switch(input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}

//
//int main()
//{
//	int (*pA)(int, int) = Add;
//	int (*pS)(int, int) = Sub;
//	//函数指针的数组
//	int (*pfArr[4])(int, int)  = {Add, Sub};
//	int i = 0;
//	for(i=0; i<2; i++)
//	{
//		int ret = pfArr[i](2, 3);
//		printf("%d\n", ret);
//	}
//	//int* arr[10];
//	return 0;
//}
//
//int main()
//{
//	int (*p)(int, int);//函数指针
//	int (*pArr[4])(int, int);//函数指针数组
//	int (*(*pfArr)[4])(int, int) = &pArr;//pfArr指向函数指针数组的指针
//
//	//int (*(*pfArr)[4])(int, int) = &pArr;
//	return 0;
//}

//void qsort( 
//	void *base, 
//	size_t num, 
//	size_t width, 
//	int (*cmp)(const void *e1, const void *e2 ) );

//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
#include <stdlib.h>
#include <string.h>

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for(i=0; i<width; i++)
	{
		char tmp = *(buf1+i);
		*(buf1+i) = *(buf2+i);
		*(buf2+i) = tmp;
	}
}

void bubble_sort(void*base, int sz, int width, 
	int(*cmp)(const void*e1, const void*e2))
{
	int i = 0;
	for(i=0; i<sz-1; i++)
	{
		int j = 0;
		for(j=0; j<sz-1-i; j++)
		{
			if(cmp((char*)base+width*j, (char*)base+(j+1)*width)>0)
			{
				Swap((char*)base+width*j, (char*)base+(j+1)*width, width);
			}
		}
	}
}

void print_arr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Test1()
{
	int arr[] = {3,1,5,2,4,7,9,6,8,0};
	int sz = sizeof(arr)/sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//bubble_sort(arr, sz);
	print_arr(arr, sz);
}

struct Stu 
{
	char name[20];
	short age;
};

int cmp_stu_by_name(const void*e1, const void*e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
int cmp_stu_by_age(const void*e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

void Test2()
{
	struct Stu arr[] = {{"zhangsan", 20}, {"lisi", 50}, {"wangwu", 15}};
	int sz = sizeof(arr)/sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}




//abcdef
//abccccccc
void Test3()
{
	int arr[] = {3,1,5,2,4,7,9,6,8,0};
	int sz = sizeof(arr)/sizeof(arr[0]);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	//bubble_sort(arr, sz);
	print_arr(arr, sz);
}
int main()
{
	//Test1();
	Test2();
	//Test3();
	/*int a = 10;
	float f = 3.14f;
	void* pa = &a;
	pa = &f;
	*pa;
	pa++;
*/
	return 0;
}
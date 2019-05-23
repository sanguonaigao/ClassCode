#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char ch = 'a';
//	char *p = &ch;
//
//	char *p2 = "abcdef";
//	char arr[] = "abcdef";
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = {0};
//	int(*p)[5] = &arr;//数组指针
//	int *p2[5];//指针数组
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
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int arr[10] = {0};
//	int (*parr)[10] = &arr;//int (*)[10]
//	int (*pf)(int, int) = Add;//函数指针
//	//int (*)(int, int)
//	int ret = (*pf)(3, 7);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}


//
//(* (void(*)()) 0)();
//
////函数的声明
//void (*signal(int, void(*)(int)))(int);
//
//typedef void(*pf_t)(int);
////pf_t-函数指针类型
//pf_t signal(int, pf_t);
//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int main()
//{
//	int* arr[10];
//	char* arr2[5];
//	//函数指针
//	int (*p1)(int, int) = &Add;
//	int (*p2)(int, int) = &Sub;
//	//函数指针数组
//	int (*parr[4])(int, int) = {Add, Sub};
//	int ret = (*parr[1])(3, 5);
//
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. add    2. sub    ****\n");
//	printf("***** 3. mul    4. div    ****\n");
//	printf("*****      0.exit         ****\n");
//	printf("******************************\n");
//}
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("结束\n");
//			break;
//		default:
//			printf("请重新输入!\n");
//			break;
//		}
//	} while (input);
//
//	system("pause");
//	return 0;
//}


//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("***** 1. add    2. sub    ****\n");
//	printf("***** 3. mul    4. div    ****\n");
//	printf("*****      0.exit         ****\n");
//	printf("******************************\n");
//}
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x-y;
//}
//
//int Mul(int x, int y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//
////void calc(int (*pf)(int, int))
////{
////	int x = 0;
////	int y = 0;
////	int ret = 0;
////
////	printf("请输入两个操作数:>");
////	scanf("%d%d", &x, &y);
////	ret = pf(x, y);
////	printf("ret = %d\n", ret);
////}
//int main()
//{
//	int input = 0;
//	int (*pfarr[5])(int, int) = {0, Add, Sub, Mul, Div};
//	do 
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if(input>=1 && input<=4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//	} while (input);
//
//	system("pause");
//	return 0;
//}


//指向函数指针数组的指针
//int (*pf)(int, int);//函数指针
//int (*pfarr[5])(int, int);//函数指针数组
////指向函数指针数组的指针
//int(* (*ppfarr)[5] )(int, int) = &pfarr;
//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
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
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = {2,1,4,8,6,0,3,7,5,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	system("pause");
//	return 0;
//}
//qsort();//快速排序
//

//void qsort( void *base, 
//	size_t num, 
//	size_t width, 
//	int (*cmp)(const void *elem1, const void *elem2 ) );
//
//
//比较两个整数的方法
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//void _Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for(i=0; i<width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 =tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////泛型编程
////9 8 7 6 5 4 3 2 1 0
////8 9 7 6 5 4 3 2 1 0
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	//趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			//比较
//			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
//			{
//				//交换
//				_Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
//			}
//		}
//	}
//}
//
//void test1()
//{
//	int arr[] = {2,1,4,8,6,0,3,7,5,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);
//}
//
//int cmp_stu_by_age(const void* e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void test2()
//{
//	int i = 0;
//	struct Stu arr[3] = {{"zhangsan", 10}, {"lisi", 50}, {"wangwu", 15}};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", arr[i].name);
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	void* pf = &a;//int*
//	*pf;
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	
}

int main()
{
	//函数指针
	char* (*pf)(char*, const char*) = my_strcpy;
	//函数指针数组
	char* (*pfarr[5])(char*, const char*) = {my_strcpy};
	//指向函数指针数组的指针
	char* (*(*ppfarr)[5])(char*, const char*) = &pfarr;

	return 0;
}
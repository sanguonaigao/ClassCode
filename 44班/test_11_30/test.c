#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	//int a = 10;
//	//int* p = &a;
//	//数组指针
//	//int* arr[10] = {0};
//	//int* (*p)[10]  = &arr;
//
//	//函数指针
//	//int (*pfun)(int, int) = Add;
//
//	return 0;
//}

//typedef unsigned int u_int;


// 
// typedef void(*pfun_t)(int);
// 
// //void(*pf)(int);
// 
// void (*signal(int, void(*)(int)))(int);
// //signal是一个函数的声明
// //signal函数的第一个参数是int，第二个参数是函数指针
// //signal函数的返回类型为一个函数指针
// //signal函数的第二个参数（函数指针）可以指向一个函数
// //指向的函数的参数是int，返回类型为void
// //...
// 
// pfun_t signal(int, pfun_t);
// 
// 
// int main()
// {
// 
// 	return 0;
// }
// 
// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int Sub(int x, int y)
// {
// 	return x-y;
// }
// int Mul(int x, int y)
// {
// 	return x*y;
// }
// int Div(int x, int y)
// {
// 	return x/y;
// }
// 
// void menu()
// {
// 	printf("************************************\n");
// 	printf("*****   1. add     2. sub       ****\n");
// 	printf("*****   3. mul     4. div       ****\n");
// 	printf("*****        0. exit            ****\n");
// 	printf("************************************\n");
// }
// 
// 
// void calc(int (*p)(int, int))
// {
// 	int x = 0;
// 	int y = 0;
// 	int ret = 0;
// 	printf("请输入两个操作数:>");
// 	scanf("%d%d", &x, &y);
// 	ret = p(x, y);
// 	printf("%d\n", ret);
// }
// 
// int main()
// {
// 	int input = 0;
// 	
// 	//函数指针的数组
// 	//转移表--<C和指针>
// 	//int (*p1)(int, int);//函数指针
// 	//int (*p2[4])(int, int);//函数指针数组
// 	//int (*(*p3)[4])(int, int);//指向函数指针数组的指针
// 
// 	//函数指针数组
// 	int (*pfun[5])(int, int) = {NULL, Add, Sub, Mul, Div};
// 	//int (*(*p)[5])(int, int) = &pfun;//指向函数指针数组的指针
// 	do 
// 	{
// 		menu();
// 		printf("请选择:>");
// 		scanf("%d", &input);
// 		/*if(input>=1 && input<=4)
// 		{
// 			printf("请输入两个操作数:>");
// 			scanf("%d%d", &x, &y);
// 			ret = pfun[input](x, y);
// 			printf("%d\n", ret);
// 		}
// 		else if(input == 0)
// 			break;
// 		else
// 		{
// 			printf("选择错误\n");
// 		}*/
// 		switch(input)
// 		{
// 		case 1:
// 			calc(Add);
// 			break;
// 		case 2:
// 			calc(Sub);
// 			break;
// 		case 3:
// 			calc(Mul);
// 			break;
// 		case 4:
// 			calc(Div);
// 			break;
// 		case 0:
// 			printf("退出\n");
// 			break;
// 		default:
// 			printf("选择错误\n");
// 			break;
// 		}
// 	} while (input);
// 	return 0;
// }

//
//int main()
//{
//	//int (*p)(int, int);//函数指针
//	int (*pfun[4])(int, int) = {Add, Sub, Mul, Div};//函数指针的数组
//	int i = 0;
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", pfun[i](9, 3));//12 6 27 3
//	}
//	return 0;
//}
//
//#include <stdlib.h>
//#include <string.h>
////
////void bubble_sort(int arr[], int sz)
////{
////	//趟数
////	int i = 0;
////	for(i=0; i<sz-1; i++)
////	{
////		int j = 0;
////		for(j=0; j<sz-1-i; j++)
////		{
////			if(arr[j] > arr[j+1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j+1];
////				arr[j+1] = tmp;
////			}
////		}
////	}
////}
////
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////void qsort( void *base, size_t num, size_t width,
////		   int (*cmp )(const void *e1, const void *e2 ) );
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int *)e1 - *(int *)e2;
//}
//
//void test1()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	//bubble_sort(arr, sz);//冒泡排序
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int cmp_s_by_name(const void*e1, const void* e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//}
//
//int cmp_s_by_age(const void*e1, const void* e2)
//{
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//}
//void test2()
//{
//	struct S s[3] = {{"zhangsan", 20}, {"lisi", 5}, {"wangwu", 30}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_s_by_age);
//}
//
//void Swap(char *buf1, char* buf2, int width)
//{
//	int i = 0;
//	for(i=0; i<width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void*base, int num, int width, 
//			int(*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	//趟数
//	for(i=0; i<num-1; i++)
//	{
//		//相邻元素的比较
//		for(j=0; j<num-1-i; j++)
//		{
//			//比较-函数指针
//			if(cmp((char*)base+width*j, (char*)base+width*(j+1))>0)
//			{
//				//交换
//				Swap((char*)base+width*j, (char*)base+width*(j+1), width);
//			}
//			
//		}
//	}
//}
//void test3()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);//冒泡排序
//	print_arr(arr, sz);
//}
//
//void test4()
//{
//	struct S s[3] = {{"zhangsan", 20}, {"lisi", 5}, {"wangwu", 30}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_s_by_name);
//}
//
////函数调用约定
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}
//

int main()
{
	//一维数组

// 	int a[] = {1,2,3,4};
// 	//int sz = sizeof(a)/sizeof(*a);
// 
// 	printf("%d\n",sizeof(a));//16
// 	printf("%d\n",sizeof(a+0));//4
// 	printf("%d\n",sizeof(*a)); //4  *a == a[0]
// 	printf("%d\n",sizeof(a+1));//4
// 	printf("%d\n",sizeof(a[1]));//4
// 	printf("%d\n",sizeof(&a));//4  
// 	printf("%d\n",sizeof(*&a));//16
// 	printf("%d\n",sizeof(&a+1));//4
// 	printf("%d\n",sizeof(&a[0]));//4
// 	printf("%d\n",sizeof(&a[0]+1));//4

	//字符数组
	//char arr[] = {'a','b','c','d','e','f'};
	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4

	//printf("%d\n", strlen(arr));//x
	//printf("%d\n", strlen(arr+0));//x
	////printf("%d\n", strlen(*arr));//'a'-97//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//x
	//printf("%d\n", strlen(&arr+1));//y
	//printf("%d\n", strlen(&arr[0]+1));//z

// 	char arr[] = "abcdef";
// 	printf("%d\n", sizeof(arr));//7
// 	printf("%d\n", sizeof(arr+0));//4
// 	printf("%d\n", sizeof(*arr));//1
// 	printf("%d\n", sizeof(arr[1]));//1
// 	printf("%d\n", sizeof(&arr));//4
// 	printf("%d\n", sizeof(&arr+1));//4
// 	printf("%d\n", sizeof(&arr[0]+1));//4
// 
// 	printf("%d\n", strlen(arr));//6
// 	printf("%d\n", strlen(arr+0));//6
// 	//printf("%d\n", strlen(*arr));//err
// 	//printf("%d\n", strlen(arr[1]));//err
// 	printf("%d\n", strlen(&arr));//6
// 	printf("%d\n", strlen(&arr+1));//x
// 	printf("%d\n", strlen(&arr[0]+1));//5


	//char *p = "abcdef";

	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p+1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p+1));//4
	//printf("%d\n", sizeof(&p[0]+1));//4

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p+1));//5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//x
	//printf("%d\n", strlen(&p+1));//y
	//printf("%d\n", strlen(&p[0]+1));//5


	//二维数组
	int a[3][4] = {0};
	//int (*p)[4] = a+1;

	printf("%p\n", &a[0][0]);
	printf("%p\n", &a[0]+1);

	printf("%d\n",sizeof(a));//48 
	printf("%d\n",sizeof(a[0][0]));//4
	printf("%d\n",sizeof(a[0]));//16 
	printf("%d\n",sizeof(a[0]+1));//4-第一行第二个元素的地址
	printf("%d\n",sizeof(*(a[0]+1)));//4-第一行第二个元素的大小
	printf("%d\n",sizeof(a+1));//4
	printf("%d\n",sizeof(*(a+1)));//16
	printf("%d\n",sizeof(&a[0]+1));//4
	printf("%d\n",sizeof(*(&a[0]+1)));//16
	printf("%d\n",sizeof(*a));//16
	printf("%d\n",sizeof(a[3]));//16

	return 0;
}


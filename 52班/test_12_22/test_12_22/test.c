#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	//一维数组
	//sizeof(数组名)--数组名表示整个数组，求的整个数组的大小
	//&数组名--数组名表示整个数组，求的是整个数组的地址
	//除此之外，所有的遇到的数组名都是首元素的地址
	//
	//int a[] = {1,2,3,4};
	//printf("%d\n",sizeof(a));//16-sizeof(数组名)-数组总大小
	//printf("%d\n",sizeof(a+0));//4-首元素的地址
	//printf("%d\n",sizeof(*a)); //4-首元素
	//printf("%d\n",sizeof(a+1));//4-第二个元素的地址
	//printf("%d\n",sizeof(a[1]));//4-第二个元素
	//printf("%d\n",sizeof(&a)); //4-数组的地址
	//printf("%d\n",sizeof(*&a));//16-整个数组
	//printf("%d\n",sizeof(&a+1));//4-跳过一个数组指向了4的后面
	//printf("%d\n",sizeof(&a[0]));//4-首元素的地址
	//printf("%d\n",sizeof(&a[0]+1));//4-第二个元素的地址
	//字符数组
	//char arr[] = {'a','b','c','d','e','f'};
	//printf("%d\n", strlen(arr));//x-随机值
	//printf("%d\n", strlen(arr+0));//x随机值
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//x
	//printf("%d\n", strlen(&arr+1));//x-6
	//printf("%d\n", strlen(&arr[0]+1));//x-1

	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4

	

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr+0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr+1));
	//printf("%d\n", sizeof(&arr[0]+1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr+0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	//printf("%d\n", strlen(&arr+1));
	//printf("%d\n", strlen(&arr[0]+1));

	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p+1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p+1));
	//printf("%d\n", sizeof(&p[0]+1));

	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p+1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p+1));
	//printf("%d\n", strlen(&p[0]+1));

	////二维数组
	//int a[3][4] = {0};
	//printf("%d\n",sizeof(a));
	//printf("%d\n",sizeof(a[0][0]));
	//printf("%d\n",sizeof(a[0]));
	//printf("%d\n",sizeof(a[0]+1));
	//printf("%d\n",sizeof(*(a[0]+1)));
	//printf("%d\n",sizeof(a+1));
	//printf("%d\n",sizeof(*(a+1)));
	//printf("%d\n",sizeof(&a[0]+1));
	//printf("%d\n",sizeof(*(&a[0]+1)));
	//printf("%d\n",sizeof(*a));
	//printf("%d\n",sizeof(a[3]));
	system("pause");

	return 0;
}

//int main()
//{
//	int arr[10];
//	int (*p)[10] = &arr;
//	//p+1;//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	void* pf = &a;
//	*pf;
//	pf++;
//	return 0;
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i= 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////
//int cmp_int(const void *e1, const void *e2 ) 
//{
//	return *(int*)e1  - *(int*)e2;
//}

//void _Swap(char* buf1, char* buf2, size_t width)
//{
//	size_t i = 0;
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
////泛型编程
////C++-- 模板编程
//
//void bubble_sort(void*base, size_t sz, size_t width, 
//				int (*cmp)(const void* e1, const void*e2))
//{
//		size_t i = 0;
//		//趟数
//		for(i=0; i<sz-1; i++)
//		{
//			//相邻两个元素的比较
//			size_t j = 0;
//			for(j=0; j<sz-1-i; j++)
//			{
//				//比较
//				//传给cmp函数的要比较的两个元素的地址
//				if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//				{
//					//交换
//					_Swap((char*)base+j*width,(char*)base+(j+1)*width, width);
//				}
//			}
//		}
//}
//
//void test1()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//qsort(arr, sz, 4, cmp_int);
//	print_arr(arr, sz);
//}
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int cmp_s_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//}
//
//int cmp_s_by_age(const void*e1, const void*e2)
//{
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//}
//
//void test2()
//{
//	struct S arr[3] = {{"zhangsan", 20}, {"lisi", 30}, {"wangwu", 5}};
//	//qsort(arr, 3, sizeof(struct S), cmp_s_by_age);
//	bubble_sort(arr, 3, sizeof(struct S), cmp_s_by_name);
//}
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}

//void qsort( void *base, 
//	size_t num, 
//	size_t width, 
//	int (*cmp)(const void *e1, const void *e2 ) 
//	);
//


//
//int main()
//{
//	int arr[5];
//	int (*parr[4])(int, int);
//	//&arr;
//	//指向函数指针数组的指针
//	int (* (*p)[4])(int, int) = &parr;
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
//
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("***   1. add      2. sub    ***\n");
//	printf("***   3. mul      4. div    ***\n");
//	printf("***   0. exit               ***\n");
//	printf("*******************************\n");
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	//
//	//函数指针数组
//	//转移表-《C和指针》
//	//
//	int (*p[5])(int, int) = {NULL, Add, Sub, Mul, Div};
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if(input>=1 && input<=4)
//			calc(p[input]);
//		/*switch(input)
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}*/
//	} while (input);
//
//	system("pause");
//	return 0;
//}

//char* my_strcpy(char* dest, const char*src)
//{
//	return NULL;
//}
//int main()
//{
//	//int* arr[5];//整型指针的数组
//	//char* arr2[4];//字符指针的数组
//	//函数指针的数组
//	int i = 0;
//	int (*p[4])(int, int) = {Add, Sub, Mul, Div};
//
//	for(i=0; i<4; i++)
//	{
//		printf("%d\n", p[i](6, 3));//9 3 18 2
//	}
//	system("pause");
//	return 0;
//}

//int get_max(int, int);

//不建议这样去写
//void ( *signal(int , void(*)(int)) )(int);
//
////typedef unsigned int uint;
////简化的版本
//typedef void(*pf_t)(int);
//pf_t signal(int a, pf_t p);

//void(*pf)(int);


//注释:
//signal 是一个函数声明
//signal函数的第一个参数是int，第二个参数是函数指针
//signal函数的返回类型为函数指针
//signal函数的第二个参数是函数指针，该指针指向的函数
//参数是int，放回类型为void
//signal函数的返回类型也是一个函数指针，该函指针指向的函数
//参数是int，放回类型为void
//C++ - STL-源码

//
//int get_max(int x, int y)
//{
//	return (x>y?x:y);
//}
//
//int main()
//{
//	//get_max;
//	//printf("%p\n", get_max);
//	int (*pf)(int, int) = get_max;
//	int max = pf(2, 5);
//	//int max = get_max(2, 5);
//
//	printf("max = %d\n", max);
//	system("pause");
//	//char ch = 'w';
//	//char* pc = &ch;
//	//char *p1 = "abcdef";
//	//char arr[20] = "hello";
//	//char *p2 = arr;
//
//	//int arr[10] = {0};
//	//int*p = arr;//int*
//	//char ch = 'w';
//	//char* pc = &ch;
//	//int (*pa)[10] = &arr;//数组指针
//
//	return 0;
//}
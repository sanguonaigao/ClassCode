#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while(*str)
	{
		str++;
		count++;
	}
	return count;
}

int Add(int x, int y)
{
	return x+y;
}

int Sub(int x, int y)
{
	return x-y;
}

//
//int main()
//{
//	//指针数组
//	char* arr[10];
//	//数组指针
//	int arr2[8] = {0};
//	int (*p)[8] = &arr2;
//	//函数指针
//	int (*pf)(const char*) = my_strlen;//&my_strlen
//	//数指针数组
//	int(*arr3[2])(int, int)  = {Add, Sub};
//	int (*(*p3)[2])(int, int) = &arr3;
//
//	int (*pf)(int, int);
//	int (*pfarr[4])(int, int);
//	int (*(*pfarr)[4])(int, int);
//
//	return 0;
//}
//
//void Swap(char* buf1, char* buf2, size_t width)
//{
//	size_t i = 0;
//	assert(buf1 != NULL);
//	assert(buf2 != NULL);
//
//	for(i=0; i<width; i++)
//	{
//		char tmp = *(buf1+i);
//		*(buf1+i) = *(buf2+i);
//		*(buf2+i) = tmp;
//	}
//}
//void bubble_sort(void*base, size_t sz, size_t width, 
//						int(*cmp)(const void*e1, const void*e2))
//{
//	size_t i = 0;
//	assert(base != NULL);
//	assert(cmp != NULL);
//
//	for(i=0; i<sz-1; i++)
//	{
//		//一趟排序
//		size_t j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			//1. 比较
//			if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//2. 交换
//				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
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
////
////qsort()
////函数的调用约定-__cdecl
////
////void qsort( void* base, 
////		    size_t num, 
////			size_t width, 
////			int (*cmp)(const void *elem1, const void *elem2 ) );
////
//
//int cmp_int(const void*e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int cmp_s_by_name(const void* e1, const void*e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//}
//
//int cmp_s_by_age(const void* e1, const void* e2)
//{
//	return ((struct S*)e1)->age - ((struct S*)e2)->age;
//}
//
//void test2()
//{
//	struct S s[] = {{"zhangsan", 30}, {"lisi", 40}, {"wangwu", 10}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_s_by_age);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_s_by_name);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_s_by_age);
//}
//
//void test1()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int main()
//{
//	test2();
//	system("pause");
//	return 0;
//}
////
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	float* pf = &a;
//	void* pv = &a;
//	*pv = 20;
//	pv+1;
//
//	return 0;
//}


int main()
{
	//一维数组
	//int a[] = {1,2,3,4};
	//printf("%d\n",sizeof(a));  //16
	//printf("%d\n",sizeof(a+0));//4
	//printf("%d\n",sizeof(*a)); //4
	//printf("%d\n",sizeof(a+1));//4
	//printf("%d\n",sizeof(a[1]));//4
	//printf("%d\n",sizeof(&a)); //4
	//printf("%d\n",sizeof(*&a));//16
	//printf("%d\n",sizeof(&a+1));//4
	//printf("%d\n",sizeof(&a[0]));//4
	//printf("%d\n",sizeof(&a[0]+1));//4

	//字符数组
	//char arr[] = {'a','b','c','d','e','f'};
	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr+0));//随机值
	////printf("%d\n", strlen(*arr));//err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//随机值

	//printf("%d\n", sizeof(arr));//6
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4


	//char arr[] = "abcdef";

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	////printf("%d\n", strlen(*arr)); //err
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6 
	//printf("%d\n", strlen(&arr+1));//x
	//printf("%d\n", strlen(&arr[0]+1));//5


// 	printf("%d\n", sizeof(arr));//7
// 	printf("%d\n", sizeof(arr+0));//4
// 	printf("%d\n", sizeof(*arr));//1
// 	printf("%d\n", sizeof(arr[1]));//1
// 	printf("%d\n", sizeof(&arr));//4
// 	printf("%d\n", sizeof(&arr+1));//4
// 	printf("%d\n", sizeof(&arr[0]+1));//4


	//char *p = "abcdef";

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p+1));//5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//x
	//printf("%d\n", strlen(&p+1));//y
	//printf("%d\n", strlen(&p[0]+1));//5

	//printf("%d\n", sizeof(p));//4
	//printf("%d\n", sizeof(p+1));//4
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	////p[0] -> *(p+0)
	//printf("%d\n", sizeof(&p));//4
	//printf("%d\n", sizeof(&p+1));//4
	//printf("%d\n", sizeof(&p[0]+1));//4

	

	//二维数组
	int a[3][4] = {0};
	//int*p = a+1;
	printf("%p\n", &a[0][0]);
	printf("%p\n", a+1);


	printf("%d\n",sizeof(a));//48
	printf("%d\n",sizeof(a[0][0]));//4
	printf("%d\n",sizeof(a[0]));//16
	printf("%d\n",sizeof(a[0]+1));//4
	printf("%d\n",sizeof(*(a[0]+1)));//4
	printf("%d\n",sizeof(a+1));//4-第二行的地址
	printf("%d\n",sizeof(*(a+1)));//16
	printf("%d\n",sizeof(&a[0]+1));//4-第二行的地址
	printf("%d\n",sizeof(*(&a[0]+1)));//16
	printf("%d\n",sizeof(*a));//16//*a = *(a+0) = a[0]
	//printf("%d\n",sizeof(a[0]));//16
	printf("%d\n",sizeof(a[3]));//16 

	printf("%d\n", sizeof(int));//4

	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


// char* my_strcpy(char *dest, const char*src)
//{
//	//..
//}
//
//int main()
//{
//	int arr[6] = {0};
//	int (*parr)[6] = &arr;//parr数组指针
//	char* (*pfun)(char*, const char*) = my_strcpy;
//	
//	return 0;
//}
//#include <stdio.h>
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
//char* test1(int a, int* b)
//{
//	return NULL;
//}
//char* test2(int a, int* b)
//{
//	return NULL;
//}
//
//int main()
//{
//	//函数指针
//	char* (*p1)(int, int*) = test1;
//	//函数指针数组
//	char* (*p2[2])(int, int*) = {test1, test2};
//	//指向函数指针数组的指针
//	char* (*(*p3)[2])(int, int*) = &p2;
//
//	//int (*pfun[2])(int, int) = {Add, Sub};
//	//int (*(*p)[2])(int, int) = &pfun;
//	
//	return 0;
//}

 //void qsort( void *base, size_t num, size_t width, 
 //		   int (*cmp)(const void *e1, const void *e2 ) );


//__cdecl---函数的[调用约定]
//
//<Unix环境高级编程>
//
//
//#include <bit.h>
//
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	//趟数
//	for(i=0; i<sz-1; i++)
//	{
//		//每一趟的处理
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
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}
#include <bit.h>
#include <stdlib.h>
#include <string.h>

//
//void Swap(char*buf1, char*buf2, int width)
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
//void bubble_sort(void*base, int sz, int width, 
//				 int (*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
//			{
//				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void* e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test1()
//{
//	struct Stu s[3] = {{"zhangsan", 20},{"lisi", 30},{"wangwu", 15}};
//	int sz = sizeof(s)/sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//void test2()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//int main()
//{
//	test2();
//	return 0;
//}



//int main()
//{
//// 	int a[] = {1,2,3,4};
//// 	//sizeof(数组名)
//// 	//&数组名
//// 
//// 	printf("%d\n",sizeof(a));//16
//// 	printf("%d\n",sizeof(a+0));//4
//// 	printf("%d\n",sizeof(*a));//4
//// 	printf("%d\n",sizeof(a+1));//4
//// 	printf("%d\n",sizeof(a[1]));//4
//// 	printf("%d\n",sizeof(&a));//4
//// 	printf("%d\n",sizeof(*&a));//16
//// 	printf("%d\n",sizeof(&a+1));//4
//// 	printf("%d\n",sizeof(&a[0]));//4
//// 	printf("%d\n",sizeof(&a[0]+1));//4
//
//	//char arr[] = {'a','b','c','d','e','f'};
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr+0));//4
//	//printf("%d\n", sizeof(*arr));//1
//	//printf("%d\n", sizeof(arr[1]));//1
//	//printf("%d\n", sizeof(&arr));//4
//	//printf("%d\n", sizeof(&arr+1));//4
//	//printf("%d\n", sizeof(&arr[0]+1));//4
//
//	//printf("%d\n", strlen(arr));//x
//	//printf("%d\n", strlen(arr+0));//x
//	////printf("%d\n", strlen(*arr));//97//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//x
//	//printf("%d\n", strlen(&arr+1));//x-6
//	//printf("%d\n", strlen(&arr[0]+1));//x-1
//
//// 	char arr[] = "abcdef";//7
//// 	printf("%d\n", sizeof(arr));//7
//// 	printf("%d\n", sizeof(arr+0));//4
//// 	printf("%d\n", sizeof(*arr));//1//sizeof(arr[0]);
//// 	printf("%d\n", sizeof(arr[1]));//1
//// 	printf("%d\n", sizeof(&arr));//4
//// 	printf("%d\n", sizeof(&arr+1));//4
//// 	printf("%d\n", sizeof(&arr[0]+1));//4
//// 
//// 	printf("%d\n", strlen(arr));//6
//// 	printf("%d\n", strlen(arr+0));//6
//// 	//printf("%d\n", strlen(*arr));//err
//// 	//printf("%d\n", strlen(arr[1]));//err
//// 	printf("%d\n", strlen(&arr));//6
//// 	printf("%d\n", strlen(&arr+1));//x
//// 	printf("%d\n", strlen(&arr[0]+1));//5
//
//	//char *p = "abcdef";
//	//printf("%d\n", sizeof(p));//4
//	//printf("%d\n", sizeof(p+1));//4
//	//printf("%d\n", sizeof(*p));//1
//	//printf("%d\n", sizeof(p[0]));//1
//	//printf("%d\n", sizeof(&p));//4
//	//printf("%d\n", sizeof(&p+1));//4
//	//printf("%d\n", sizeof(&p[0]+1));//4
//
//	//printf("%d\n", strlen(p));//6
//	//printf("%d\n", strlen(p+1));//5
//	////printf("%d\n", strlen(*p));//err
//	////printf("%d\n", strlen(p[0]));//err
//	//printf("%d\n", strlen(&p));//x
//	//printf("%d\n", strlen(&p+1));//y
//	//printf("%d\n", strlen(&p[0]+1));//5
//
//	int a[3][4] = {0};
//	int*p = NULL;
//	printf("%d\n",sizeof(a));//48
//	printf("%d\n",sizeof(a[0][0]));//4
//	printf("%d\n",sizeof(a[0]));//16
//	printf("%d\n",sizeof(a[0]+1));//4
//	//printf("%p\n", &a[0][0]);
//	//printf("%p\n", a+1);
//
//	printf("%d\n",sizeof(*(a[0]+1)));//4
//	printf("%d\n",sizeof(a+1));//4
//	//p = a+1;
//	printf("%d\n",sizeof(*(a+1)));//16
//	printf("%d\n",sizeof(&a[0]+1));//4
//	printf("%d\n",sizeof(*(&a[0]+1)));//16
//	printf("%d\n",sizeof(*a));//16
//	printf("%d\n",sizeof(a[3]));//16
//
//	return 0;
//}
//

//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf( "%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//

// 
// struct Test
// {
// 	int Num;
// 	char *pcName;
// 	short sDate;
// 	char cha[2];
// 	short sBa[4];
// }*p = (struct Test*)0x100000;
// 
// int main()
// {
// 	printf("%p\n", p+0x1);
// 	printf("%p\n", (unsigned long)p + 0x1);
// 	printf("%p\n", (unsigned int*)p + 0x1);
// 	printf("%p\n", (unsigned char*)p + 0x1);
// 	printf("%p\n", (unsigned char* *)p + 0x1);
// 
// 	//0x100001 x 0x100004
// 	//0x100001 0x100014 x
// 	//0x100010 x x
// 	//0x100014 0x100001 x
// 	//0x100014 0x100008 0x100004
// 	//
// 	return 0;	
// }
// 


int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}






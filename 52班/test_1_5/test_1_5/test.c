#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//
//int main()
//{
//	char* arr2[5];//字符指针数组
//	int* p1;//整型指针
//	int a = 10;
//	int arr[10] = {0};
//	int* p2 = arr;//int
//	int (*p3)[10] = &arr;//数组指针
//	//
//	//arr &arr
//	//
//
//	p1 = &a;
//	system("pause");
//	return 0;
//}

//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int sum = 0;
//	//printf("%p\n", &Add);	
//	//printf("%p\n", Add);
//	int(*p)(int, int) = Add;//函数指针
//	int(*parr[4])(int, int);  //函数指针数组
//	int(* (*p3)[4])(int, int) = &parr;//指向函数指针数组的指针
//
//	sum = p(3, 4);
//	//sum = Add(2, 4);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//void qsort( void *base, 
//	size_t num, 
//	size_t width, 
//	int (*cmp)(const void *e1, const void *e2 ) 
//	);


#include <string.h>
//
//void bubbble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for(i=0; i<sz-1; i++)
//	{
//		//一趟的处理
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
////
////泛型编程
////C++ 模板
////
////数据结构
////STL
////
//
//
//
//void bubble_sort(void*base, int sz, int width, 
//				int (*cmp)(const void*e1, const void*e2))
//{
//	int i = 0;
//	//趟数
//	for(i=0; i<sz-1; i++)
//	{
//		//一趟的处理
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
//			{
//				//交换
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
//	printf("\n");
//}
//
//int cmp_int(const void*e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	print_arr(arr, 10);
//	//qsort(arr, 10, sizeof(arr[0]), cmp_int);
//	bubble_sort(arr, 10, sizeof(arr[0]), cmp_int);
//	print_arr(arr, 10);
//}
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
//	struct S arr[] = {{"zhangsan", 20},{"lisi", 35},{"wangwu", 15}};
//	//qsort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), cmp_s_by_age);
//	bubble_sort(arr, sizeof(arr)/sizeof(arr[0]), sizeof(arr[0]), cmp_s_by_name);
//}
//int main()
//{
//	//test1();
//	test2();
//	system("pause");
//	//qsort();
//	return 0;
//}
#include <string.h>

//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abc";
//	if((int)strlen(p2)-(int)strlen(p1) > 0)
//	{
//		printf("p2>p1\n");
//	}
//	else
//	{
//		printf("p2<=p1\n");
//	}
//	system("pause");
//	return 0;
//}

#include <string.h>
#include <assert.h>

//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);//断言
//	while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//size_t my_strlen(const char* str)
//{
//	const char* start = str;
//	assert(str != NULL);
//	while(*str)
//	{
//		str++;
//	}
//	return str-start;
//}

//
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
////my_strlen("abc");
////1+my_strlen("bc");
////1+1+my_strlen("c");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//
//int main()
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("len = %d\n", len);
//	system("pause");
//	return 0;
//}
//
//char* my_strcpy(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = {0};
//	char arr2[] = {'b', 'i', 't', '\0'};
//	//char *p = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
//	printf("%s\n", my_strcpy(arr, arr2));
//	//链式访问
//	system("pause");
//	return 0;
//}
//
//char* my_strcat(char* dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1. 找目标空间中的'\0'
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 追加内容
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = "hello ";
//	my_strcat(arr, "bit");//hello bit
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


int main()
{
	char arr[20] = "hello";
	strcat(arr, arr);//hello bit
	printf("%s\n", arr);
	system("pause");
	return 0;
}
//strncat
//strncpy
//strncmp

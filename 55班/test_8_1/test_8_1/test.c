#define _CRT_SECURE_NO_WARNINGS 1


//
//strstr
//
//KMP-研究
//
#include <string.h>
#include <stddef.h>


//int main()
//{
//	//strcpy/strncpy
//	//memcpy
//	int arr1[10] = {0};
//	int arr2[] = {1,2,3};
//	strcpy(arr1, arr2);
//	//01 00 00 00 02 00 00 00 03 00 00 00
//	return 0;
//}
//
#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(count--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)src)++;
//		((char*)dest)++;
//	}
//	
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if(dest<src)
//	{
//		//前->后
//		while(count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)src)++;
//			((char*)dest)++;
//		}
//	}
//	else
//	{
//		//后->前
//		while(count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	//int arr1[10] = {0};
//	//int arr2[] = {1,2,3};
//	//my_memcpy(arr1, arr2, 12);
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	//dest-src > count
//				//1,2,1,2,3,4,7,8,9,10
//	//my_memcpy(arr1+2, arr1, 16);
//	my_memmove(arr1, arr1+2, 16);
//	return 0;
//}


//memcmp
#include <stdio.h>
//
//int main()
//{
//	int arr1[] = {1,2,3,4};
//	int arr2[] = {1,2,4,3};
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 9);
//	printf("%s\n", arr);
//	int arr[] = {1,2,3,4,5};
//
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct Stu s;
//	return 0;
//}
//
//struct
//{
//	char name[20];
//	int age;
//	float score;
//}s;
//
//struct
//{
//	char name[20];
//	int age;
//	float score;
//}* ps;
//
//int main()
//{
//	ps = &s;
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//



//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;

//
//struct Point
//{
//	int x;
//	int y;
//}p1 = {1,2};
//
//struct Point p2 = {2,3};
//
//int main()
//{
//	struct Point p = {3,4};
//
//	return 0;
//}

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	int a;
//	char c1;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//12
//	printf("%d\n", sizeof(struct S2));//8
//
//	return 0;
//}

#include <stddef.h>
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	struct S s = {0};
//
//	printf("%d\n", offsetof(struct S, c1));//宏
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//
//	//offsetof
//	//printf("%p\n", &s);
//	//printf("%p\n", &(s.c1));
//	//printf("%p\n", &(s.a));
//	//printf("%p\n", &(s.c2));
//	return 0;
//}


//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
// struct S
// {
// 	int a;
// 	char c1;
// 	char c2;
// };
// 
// int main()
// {
// 	struct S s;
// 	return 0;
// }
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
//
//#pragma pack(1)
//
//struct S
//{
//	char c1;//0
//	//1
//	int a;//2-5
//	char c2;//6
//	//7
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}
//
//#pragma pack()
//
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
////#define OffSetOf(s_type, mem) (int)&(((struct S*)0)->c1)
//
//
//int main()
//{
//	printf("%d\n", OffSetOf(struct S, c1));
//	//printf("%d\n",(int)&(((struct S*)0)->c1));
//
//	printf("%d\n", OffSetOf(struct S, a));
//	printf("%d\n", OffSetOf(struct S, c2));
//
//	return 0;
//}

//4-32
//2
//5
//10
//15-langfai
//4-32
//30
//2
//
//struct A 
//{
//	int _a: 2;
//	int _b: 5;
//	int _c: 10;
//	int _d: 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a:3;
	char b:4;
	char c:5;
	char d:4;
};
int main()
{
	struct S s = {0};
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}

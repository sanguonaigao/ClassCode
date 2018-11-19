#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
////	int a = 20;
//// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//// 	int* p = arr;//数组名是数组首元素的地址
//// 	int* q = &arr;//&数组名，取出的数组的地址
//// 
//// // 	int a = 10;
//// // 	&a;
//// 
//// 	printf("&arr = %p\n", &arr);
//// 	printf("p = %p\n", p);
//// 
//// 	printf("%d\n", *p);//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}
// 
// int main()
// {
// 	int arr[10] = {0};
// 	char arr2[10] = {0};
// 	//printf("%d\n", &arr2[0]-&arr[9]);//err
// 	return 0;
// }
//
#include <stdio.h>
#include <string.h>

//strlen
//strcpy
//strcmp
//strcat
//strstr
//memcpy
//memmove

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	char *start = str;
//	//assert()//?
//	while(*str != '\0')
//		str++;
//
//	return str-start;
//}
//
//
//
//int main()
//{
//	char*p = "abcdef";
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//
//	printf("%d\n", len);
//	return 0;
//}
// 
// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	int* *pp = &p;
// 	int*** ppp = &pp;
// 	printf("%d\n", ***ppp);
// 	return 0;
// }

//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int *arr[5] = {&a, &b, &c};
//	//int arr[10];//整型数组
//	//[int][int][int][][][][][][][]
//	//int* arr2[5];//整型指针数组
//	//[int*][int*][int*][int*][int*]
//
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//
//	int*arr[3] = {arr1, arr2, arr3};
//	
//	//int(*arr2)[3];
//
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//
//typedef struct Stu
//{
//	char name[20];
//	short int age;
//	char id[13];
//}Stu;
//
//int main()
//{
//	struct Stu s2 = {"zhangsan", 20, "20180801"};
//
//	return 0;
//}
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Node
//{
//	int data;
//	struct Point p;//
//	char c;
//	struct Node* pn;
//};
//
//int main()
//{
//	int a = 10;
//	//int* p = &a;
//	//int *p = NULL;
//	struct Node n = {20, {2, 3}, 'w', NULL};
//	printf("data = %d x = %d y = %d %c", n.data, n.p.x, n.p.y, n.c);
//
//	return 0;
//}
//
//struct B
//{
//	int x;
//	char arr[10];
//};
//
//void Print1(struct B b)
//{
//	printf("%d %s\n", b.x, b.arr);
//}
//
//void Print2(struct B* pb)
//{
//	//printf("%d %s\n", (*pb).x, (*pb).arr);
//	printf("%d %s\n", pb->x, pb->arr);
//}
//
//int main()
//{
//	struct B b = {10, "abcdef"};
//	Print2(&b);
//
//	return 0;
//}
//



void test()
{
	printf("test\n");
}

int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

// 	printf("%p\n", &i);//
// 	printf("%p\n", &arr[9]);//
	test();

	for(i=0; i<10; i++)
	{
		arr[i] = 0;
	}
	//断点
	for(i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}




























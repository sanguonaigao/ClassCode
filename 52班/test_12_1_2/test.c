#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//
//	int*p = arr;//int*
//	int i = 0;
//	int sz  = sizeof(arr)/sizeof(arr[0]);
//
//	for(i=0; i<sz; i++)
//	{
//		*(p+i) = i;//0-9
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//
//	return 0;
//}


// int main()
// {
// 	//int arr[10] = {0};
// 	//printf("%d\n", &arr[0]-&arr[9]);
// 	//32 10 36 0 
// 	int arr1[10] = {0};
// 	char arr2[5] = {0};
// 
// 	printf("%d\n", &arr2[4]-&arr1[0]);
// 
// 	return 0;
// }


#include <stdio.h>
#include <string.h>

//
//库函数的模拟实现
//strlen
//strcmp
//strcpy
//strcat
//strstr
//memcpy
//memmove
//

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

//3
// int my_strlen(char* str)
// {
// 	char* start = str;
// 	while(*str != '\0')
// 	{
// 		str++;
// 	}
// 	return str-start;
// }
// 
// int main()
// {
// 	printf("%d\n", my_strlen("abcdef"));
// 	return 0;
// }
//
//int main()
//{
//	int a = 10;
//	int * p = &a;
//	//p+1;//4
//	int* * pp = &p;
//	printf("%d\n", **pp);
//	//pp+1;//
//	//int** * ppp = &pp;
//	//pp是一个二级指针
//
//	return 0;
//}

//
//int main()
//{
//	//int arr[] = {1,2,3,4,5};
//	//int a = 1;
//	//int b = 2;
//	//int c = 3;
//	//int d = 4;
//	//int* arr[4] = {&a,&b,&c,&d};
//// 	int i = 0;
//// 	for(i=0; i<4; i++)
//// 	{
//// 		printf("%d ", *arr[i]);
//// 	}
//
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* arr[] = {arr1, arr2, arr3};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", *(arr[i]+j));
//			//printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//

//struct Stu
//{
//	char name[20];
//	int age;
//	char addr[30];
//}s1, s2;//全局变量

//int main()
//{
//	struct Stu s;//局部变量
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
//
//struct Stu
//{
//	char name[20];
//	int age;
//	char addr[30];
//};
//
//struct S
//{
//	double d;
//	struct Point pt;
//	char arr[10];
//};
//
//int main()
//{
//	struct S ss = {3.14, {4, 5}, "lisi"};
//
//	struct Point p = {3, 4};
//	struct Stu s = {"zhangsan", 20, "北京"};
//	printf("%d %d\n", p.x, p.y);
//	printf("%s %d %s\n", s.name, s.age, s.addr);
//	printf("%lf %d %d %s\n", ss.d, ss.pt.x, ss.pt.y, ss.arr);
//
//
//	return 0;
//}


struct S
{
	char arr[1000];
	int age;
};

//1
void print1(struct S tmp)
{
	printf("%s %d\n", tmp.arr, tmp.age);
}

//2
void print2(const struct S* ps)
{
	printf("%s %d\n", ps->arr, ps->age);
}

int main()
{
	struct S ss = {"bit", 100};
	print1(ss);
	print2(&ss);
	return 0;
}


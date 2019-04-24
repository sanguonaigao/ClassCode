#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	int b = a+5+4;
//
//	//int b = (a+5)*4;
//
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
// 
// int fun()
// {
// 	static int count = 1;
// 	return ++count;
// }
// int main()
// {
// 	int answer;
// 	answer = fun() - fun() * fun();
// 	printf( "%d\n", answer);//输出多少？
// 	system("pause");
// 	return 0;
// }
//
//
//int main()
//{
//	int a = 1;
//	int ret = (++a)+(++a)+(++a);
//	printf("%d\n", ret);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//4
//	int a = 1;
//	int* p = &a;//指针变量
//	printf("%d\n", *p);
//	system("pause");
//	//*p = 20;
//	return 0;
//}
//
//
//int main()
//{
//	/*int a = 10;
//	int * pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);*/
//
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = 0;
//	}
//
//	/*int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//	*(p+i) = 0;
//	}*/
//
//	//int a = 0x11223344;
//	//int *pa = &a;
//	//*pa = 0;
//	//char *pc = &a;
//	//*pc = 0;
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	double d[10] = {0};
//	double *pd = d;
//	printf("%p\n", pd);
//	printf("%p\n", pd+4);
//	//
//	//4*sizeof(double)
//	//int *p;p+5
//	//5*sizeof(int)
//	//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	//printf("%d\n", &arr[0]-&arr[9]);
//	printf("%d\n", &arr[8]-&ch[0]);
//	//
//	system("pause");
//	return 0;
//}
#include <string.h>
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

//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0
//
//
//int my_strlen(char *str)
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//a b c \0
// int my_strlen(char* str)
// {
// 	char *start = str;
// 
// 	while(*str != '\0')
// 	{
// 		str++;
// 	}
// 	return str-start;
// }
// 
// int main()
// {
// 	int len = my_strlen("abc");
// 	printf("%d\n", len);
// 	system("pause");
// 	return 0;
// }
//
//
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//printf("%p\n", arr);//数组首元素的地址
//	//printf("%p\n", &arr[0]);//数组首元素的地址
//	//printf("%p\n", &arr);//数组的地址
//
//	//&arr;//数组名是表示整个数组的，取出的是数组的地址
//	//sizeof(arr);//数组名是表示整个数组的，计算的是整个数组的大小
//	//除此之外，所有的数组名都是首元素的地址
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	int** * ppp = &pp;
//	
//	return 0;
//}

//
//指针数组
//
//
//int main()
//{
//	int arr[10];//整型数组
//	char ch[5];//字符数组
//	int* arr2[6];
//	char* arr3[5];
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int e = 5;
//
//	int* arr[5] = {&a, &b, &c, &d, &e};
//	printf("%d\n", *arr[4]);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = {2,3,4,5,6};
//	int arr3[5] = {3,4,5,6,7};
//
//	int* arr[3] = {arr1, arr2, arr3};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = {2,3,4,5,6};
//	int arr3[5] = {3,4,5,6,7};
//
//	int* arr[3] = {arr1, arr2, arr3};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", *(arr[i]+j));//arr[j] = *(arr+j)
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char* arr1[5];//sizeof(arr1)-20 
//	int * arr2[5];//sizeof(arr2)-20
//	return 0;
//}

//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char sex[5];
//	float score;
//}s1, s2, s3;
// 
// typedef struct Stu
// {
// 	//成员变量
// 	char name[20];
// 	short age;
// 	char sex[5];
// 	float score;
// } Stu;
// 
// int main()
// {
// 	//Stu == struct Stu
// 	struct Stu s;
// 	Stu ss;
// 
// 	return 0;
// }
//
//struct Point
//{
//	int x;
//	int y;
//};

//
//struct Test
//{
//	int a;
//	char arr[10];
//	int *p;
//	struct Point p;
//};


struct Point
{
	int x;
	int y;
};

struct T
{
	char arr[10];
	int age;
	struct Point p;
	int arr2[5];
};

int main()
{
	struct Point p = {1, 2};
	struct T t = {"hehe", 20, {2, 4}, {1,2,3,4}};

	printf("%s %d %d %d %d %d\n", t.arr, t.age, t.p.x, t.p.y, t.arr2[0], t.arr2[1]);
	system("pause");
	return 0;
}
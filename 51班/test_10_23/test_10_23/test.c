#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>


//
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//
int main()
{
	int i = 0;
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//printf("%p\n", &i);
	//printf("%p\n", arr);

	for(i=0; i<10; i++)
	{
		printf("hehe\n");
	}

	for(i=0; i<1000; i++)
	{
		printf("hehe\n");
	}

	return 0;
}


//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//struct S
//{
//	char data[1000];
//	int n;
//};
////
////单元测试
////
//void Print1(struct S ss)
//{
//	printf("%s %d\n", ss.data, ss.n);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%s %d\n", ps->data, ps->n);
//}
//
//int main()
//{
//	struct S s = {"zhangsan", 100};
//	int time1 = 0;
//	int time2 = 0;
//	int start = 0;
//	int end = 0;
//	int i = 0;
//	start = GetTickCount();
//	for(i=0; i<10000; i++)
//		Print1(s);
//	end = GetTickCount();
//	time1 = end-start;
//
//	start = GetTickCount();
//	for(i=0; i<10000; i++)
//		Print2(&s);
//	end = GetTickCount();
//	time2 = end-start;
//
//	printf("time1 = %d time2 = %d\n", time1, time2);
//
//	return 0;
//}
//






//
//struct Point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Node n = {20, {5, 6}, NULL};
//	printf("%d %d\n", n.p.x, n.p.y);
//	return 0;
//}

//
//typedef struct Student
//{
//	char name[20];
//	int age;
//	char sex[5];
//}Student;
//
//int main()
//{
//	//<C专家编程>
//	Student s = {"张三", 20, "男"};
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//
//	return 0;
//}

// 
// typedef struct Node
// {
// 		//..
// }Node;
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {0,1,2,3,4};
//	int arr4[] = {1,1,1,1,1};
//
//	int* arr[4] = {arr1, arr2, arr3, arr4};
//
//	int i = 0;
//	int j = 0;
//	for(i=0; i<4; i++)
//	{
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//// 	arr[0] = arr1;
//// 	arr[1] = arr2;
//// 	arr[2] = arr3;
//// 	arr[3] = arr4;
//
//	return 0;
//}


//void print(char* arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//}

//
//void print(char**arr, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		//printf("%s\n", *(arr+1));
//		printf("%s\n", arr[i]);
//	}
//}
//
//int main()
//{
//
//	char* arr2[3] = {"zhangsan", "lisi", "wangwu"};
//	//
//	int i = 0;
//	int sz = sizeof(arr2)/sizeof(arr2[0]);
//	print(arr2, sz);
//
//	//int a[10];
//	//[int][int][int][int][][][][][][]...
//	//char c[4];
//	//[char][char][char][char]
//
//	//int* arr[5];
//	//
//	//[int*][int*][int*][int*][int*]
//	//
//	//char *p = "abcdef";
//
//
//// 	for(i=0; i<sz; i++)
//// 	{
//// 		printf("%s\n", arr2[i]);
//// 	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	int *** ppp = &pp;
//
//	return 0;
//}
// 
// void print(int *p, int sz)
// {
// 	int i = 0;
// 	for(i=0; i<sz; i++)
// 	{
// 		//printf("%d ", *(p+i));
// 		printf("%d ", *p++);
// 	}
// 	printf("\n");
// }
// 
// int main()
// {
// 	int arr[10] = {0};
// 	int* p = arr;
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	int i = 0;
// 	for(i=0; i<sz; i++)
// 	{
// 		*(p+i) = 5;
// 	}
// 
// 	print(arr, sz);
// 
// 	return 0;
// }
//int main()
//{
//	int arr[10];
//	//arr;//
//	//&arr[0];//
//	//&arr;//
//	//数组名
//	//
//	//sizeof(arr)-
//	//&arr       -
//	//
//	
//
//	printf("%d\n", sizeof(arr));//40
//
//	return 0;
//}
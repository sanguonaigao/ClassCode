#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//数组首元素地址
//	printf("%p\n", arr+1);//数组首元素地址
//	//printf("%p\n", &arr[0]);//数组首元素地址
//
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", &arr+1);//数组的地址
//	//&arr-arr表示整个数组
//	//sizeof(arr)-arr表示整个数组
//
//	printf("%d\n", sizeof(arr));//数组名表示整个数组
//	system("pause");
//	return 0;
//}
//
//int  main()
//{
//	int arr[10] ={1,2,3,4,5};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	int*** pppa = &ppa;
//	**ppa  =20;
//	printf("%d\n", a);
//	***pppa = 30;
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//int arr[10];
//	//char arr2[5];
//	//指针数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[5] = {&a, &b, &c};
//	printf("%d\n", *(arr[1]));
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//
//	int arr[10] = {0};
//	int* p = arr;
//	*(p+i) == *(arr+i) == arr[i]
//
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* arr4[] = {arr1, arr2, arr3};
//	int i = 0;
//
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<5; j++)
//		{
//			//printf("%d ", *(arr4[i]+j));
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
//
////结构体类型
//struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	float score;
//}s1, s2, s3;
//
//int main()
//{
//	//使用结构体类型创建一个变量
//	struct Stu s;
//	return 0;
//}


//结构体类型
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char sex[5];
//	float score;
//}Stu;
//
//int main()
//{
//	//使用结构体类型创建一个变量
//	struct Stu s;
//	Stu ss;
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
//	struct Point p;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Point p = {2, 3};
//	struct Node tmp = {1, {2, 8}, NULL};
//	struct Node n = {100, {3, 5}, &tmp};
//
//	//printf("%d %d\n", p.x, p.y);
//	//printf("data = %d x=%d y=%d\n", n.data, n.p.x, n.p.y);
//	printf("data=%d x=%d y=%d\n", n.next->data, n.next->p.x, n.next->p.y);
//	system("pause");
//	return 0;
//}
//
//struct S
//{
//	char data[1000];
//	int n;
//};
//void Print1(struct S tmp)
//{
//	printf("%s %d\n", tmp.data, tmp.n);
//}
//void Print2(struct S* ps)
//{
//	printf("%s %d\n", ps->data, ps->n);
//}
//
//
//
//int main()
//{
//	struct S s = {"hello bit", 100};
//	Print1(s);
//	Print2(&s);
//	system("pause");
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//
//	return 0;
//}
//
//int  main()
//{
//	int i = 0;
//	int arr[10] ={0};
//
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 10-i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);//设置断点
//	}
//	return 0;
//}

//
//void test()
//{
//	printf("test\n");
//}
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//	}
//	test();
//	printf("hehe\n");
//
//	return 0;
//}

//
//简约云风
//

int main()
{
	int arr[10] = {0};
	//
	int i = 0;
	for(i=0; i<10; i++)
	{
		arr[i] = i;
	}

	return 0;
}

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
//	//深信服
//	test();
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int *p = (int*)&num;
//	printf("%d\n", num);
//	*p = 20;
//	printf("%d\n", num);	
//	system("pause");
//	return 0;
//}



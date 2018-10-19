#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);//第一个元素的地址
//	printf("%p\n", arr+1);//第一个元素的地址
//	printf("%d\n", sizeof(*arr));//4
//	printf("--------------\n");
//	printf("%p\n", &arr[0]);//第一个元素的地址
//	printf("%p\n", &arr[0]+1);//第一个元素的地址
//	printf("%d\n", sizeof(*&arr[0]));//4
//	printf("--------------\n");
//	printf("%p\n", &arr);   //数组的地址
//	printf("%p\n", &arr+1);   //数组的地址
//	printf("%d\n", sizeof(*&arr));//40
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int *p = arr;
//	for(i=0; i<10; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);//*(arr+i)
//		//printf("%d ", *(p+i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	int* *pp = &p;
// 
// 	//int * * * ppp = &pp;
// 	return 0;
// }
//
//void print_arr(char** arr, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//}
//
//int main()
//{
//	char* arr[] = {"zhangsan", "lisi", "wangwu"};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	print_arr(arr, sz);
//
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("%s\n", arr[i]);
//	//}
//	//printf("%c\n", *arr[0]);//z
//	//printf("%c\n", *arr[1]);//l
//	//printf("%c\n", *arr[2]);//w
//
//	//int arr[10];//
//	//char arr2[4];
//	//int* arr3[5];
//	//float* arr4[6];
//
//	return 0;
//}

//int main()
//{
//	int* arr[10] = {0};
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = {6,7,8,9,0};
//
//	arr[0] = arr1;
//	arr[1] = arr2;
//	printf("%d\n", arr[1][3]);
//	return 0;
//}

//名字
//年龄
//性别
//学号

//结构体
//struct
//
//typedef struct Student
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[13];
//}Student;
//
////
////<C专家编程>
////
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
//	struct Point pt;
//	struct Node* next;
//};
//
//int main()
//{
//	struct Node n = {1, {3 ,4}, NULL};
//	printf("data: %d\n", n.data);
//	printf("x: %d\n", n.pt.x);
//	printf("y: %d\n", n.pt.y);
//	
//	return 0;
//}

//
//int main()
//{
//	Student s2 = {"zhangsan", 20, "nan", "20180808"};
//	printf("%s %d %s %s\n", s2.name, s2.age, s2.sex, s2.id);
//	
//	return 0;
//}

struct A
{
	char arr[1000];
	int n;
};

//void print(struct A sa)
//{
//	printf("%s %d\n", sa.arr, sa.n);
//}

//void print(struct A* psa)
//{
//	printf("%s %d\n", psa->arr, psa->n);
//}
//
//int main()
//{
//	struct A sa = {"bit", 100};
//	print(&sa);
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;//
//	int arr[10] = {0};
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//
//// 	for(i=0; i<=12; i++)
//// 	{
//// 		arr[i] = 0;
//// 		printf("呵呵\n");
//// 	}
//
//	return 0;
//}

int main()
{
	int i = 0;
	for(i=0; i<10; i++)
	{
		printf("hehe\n");
	}
	//
	for(i=0; i<10000; i++)
	{
		printf("haha\n");//断点
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*for(i=0; i<10; i++)
//	{
//	printf("%p ==> %p\n", &arr[i], p+i);
//	}
//	*/
//	//printf("%p\n", arr);//首元素的地址
//	//printf("%p\n", &arr[0]);//首元素的地址
//
//	//printf("%p\n", &arr);//数组的地址
//
//
//	return 0;
//}
//
//int main()
//{
//	//int** p;
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	**ppa = 20;
//	printf("%d\n", a);
//	//int*** pppa = &ppa;
//
//	return 0;
//}
//
//int main()
//{
//	//int arr[10] = {0};
//	/*int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr2[5] = {&a, &b, &c};
//	printf("%d\n", *(arr2[1]));*/
//
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = {2,3,4,5,6};
//	int arr3[5] = {3,4,5,6,7};
//	
//	int* arr4[] = {arr1, arr2, arr3};
//	int i = 0;
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
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int* arr4[] = {&arr[0], &arr[3], &arr[6]};
//	int i = 0;
//	for(i=0; i<3; i++)
//	{
//		int j = 0;
//		for(j=0; j<3; j++)
//		{
//			printf("%d ", *(arr4[i]+j));
//			//printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//struct A
//{
//	int a;
//	char c;
//};
//
//struct Stu
//{
//	//成员列表
//	char name[20];
//	int age;
//	struct A sa;//
//};
//
//
//int main()
//{
//	
//	//int a,b,c;
//	struct Stu s = {"zhangsan", 20, {100, 'A'}};//
//
//	return 0;
//}

#include <string.h>
//
//struct Stu
//{
//	//成员列表
//	char name[20];
//	int age;
//};
//
//void SetName(struct Stu* ps)
//{
//	strcpy(ps->name, "张三");
//}
//int main()
//{
//	struct Stu s = {"zhangsan", 20};
//	SetName(&s);
//	printf("%s %d\n", s.name, s.age);
//	return 0;
//}
//
//void Print2(struct Stu* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//
//void Print1(struct Stu s)
//{
//	printf("%s %d\n", s.name, s.age);
//}
//
//int main()
//{
//	struct Stu s = {"zhangsan", 20};
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	/*for(i=0; i<10; i++)
//	{
//		printf("%d\n", i);
//	}
//    */
//	system("pause");
//	return 0;
//}

//断点
//
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		a[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//void Test()
//{
//	printf("Test\n");
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
// 
// int main()
// {
// 	printf("hello world\n");
// 
// 	return 0;
// }
// 
//
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		a[i] = i;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//深信服
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
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	//1 2 6 = 9
//	scanf("%d", &n);//3
//
//	for(j=1; j<=n; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}

//
//int main()
//{
//	//
//	int i = 0;	
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}


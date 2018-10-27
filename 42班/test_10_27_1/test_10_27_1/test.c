#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
// 
// int main()
// {
// 	int arr[10] = {0};
// 	arr;//数组首元素的地址
// 
// 	printf("%d\n", sizeof(arr));//1,sizeof(数组名),数组名表示整个数组
// 	sizeof(&arr);//2, 数组名是整个数组
// 
// 	//&arr[0];
// 	//&arr;
// 	return 0;
// }
//


//int main()
//{
//	int arr[10] = {0};
//	//arr[i]
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<sz; i++)
//	{
//		//printf("%d ", *(p+i));
//		printf("%d ", p[i]);
//
//	}
//	return 0;
//}
//

// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	int** pp = &p;
// 	int*** ppp = &pp;
// 	
// 	return 0;
// }

//void print(char *ch[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", ch[i]);
//	}
//}
//void print(char **ch, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", *(ch+i));
//	}
//}
//int main()
//{
//	//int arr[10];
//	//char ch[5];
//	//指针数组
//	//int* arr[5];
//	char* ch[3] = {"abcdef", "zhangsan", "lisi"};
//	int i = 0;
//	int sz = sizeof(ch)/sizeof(ch[0]);
//	print(ch, sz);
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("%s\n", ch[i]);
//	//}
//	return 0;
//}

//
//int main()
//{
//	int arr1[] = {1,2,3,4};
//	int arr2[] = {2,3,4,5};
//	int arr3[] = {3,4,5,6};
//	//指针数组
//	int* arr[3] = {arr1, arr2, arr3};
//	
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//			//*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}

//结构体

//typedef struct Stu
//{
//	char name[20];
//	short int age;
//	char sex[5];
//}Stu;
//
//int main()
//{
//	Stu s = {"zhangsan", 20, "男"};
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	strcpy(s.name, "lisi");
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}
//
//struct S
//{
//	char arr[1000];
//	int num;
//};
//
//void print1(struct S ss)
//{
//	printf("%s %d\n", ss.arr, ss.num);
//}
//
//void print2(struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->num);
//}
//
//int main()
//{
//	struct S s = {"bit", 100};
//	
//	print1(s);
//	print2(&s);//
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//
//	//for(i=0; i<=12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//断点
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", i);
//	}
//	for(i=0; i<100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

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
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	//1 2 6 24 == 33
//
//	for(j=1; j<=n; j++)
//	{
//		//
//		//for(i=1; i<=j; i++)
//		//{
//			ret *= j;
//		//}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}



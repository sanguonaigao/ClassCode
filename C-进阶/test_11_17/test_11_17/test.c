#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//
//void Print(unsigned int n)
//{
//	if(n>9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//
//int main()
//{
//	unsigned int num = 123;
//	Print(num);
//	//Print(1234);
//	//Print(123) 4;
//	//Print(12) 3 4;
//	//Print(1) 2 3 4;
//	//
//	return 0;
//}
//
//void test(int n)
//{
//	if(n<=10000)
//	{
//		test(n+1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

#include <string.h>

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
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	//my_strlen("bit")
//	//1 + my_strlen("it");
//	//1 + 1 + my_strlen("t");
//	//1 + 1 + 1 + my_strlen("");
//	//1 + 1 + 1 + 0
//	//3
//	printf("%d\n", len);
//
//	return 0;
//}
//
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//
//int Fac(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac(n-1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//1 1 2 3 5 8 13 21 34 55 ...
//
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//...
//
//int count = 0;
//
//int Fib(int n)
//{
//	if(n==3)
//		count++;
//
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
////
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>=3)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//
//int main()
//{
//	/*char ch1[10] = {'b', 'i', 't'};
//	char ch2[10] = "bit";
//	printf("%d\n", sizeof(ch1));
//	printf("%d\n", sizeof(ch2));
//*/
//	//int arr1[] = {1,2,3};
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//x
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//0-9
//	//printf("%d\n", arr[5]);
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int*p = arr;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*for(i=0; i<sz; i++)
//	{
//	printf("%d ", *p);
//	p++;
//	}*/
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	//}
//
//// 	for(i=0; i<sz; i++)
//// 	{
//// 		printf("%d ", arr[i]);
//// 	}
//	return 0;
//}
//

//
//int main()
//{
//	int arr[3][4] = {{1,2},{3,4},{5,6}};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = {{1,2},{3,4},{5,6}};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<4; i++)
//	{
//		for(j=0; j<3; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][4] = {{1,2},{3,4},{5,6}};
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*for(i=0; i<3; i++)
//	{
//	for(j=0; j<4; j++)
//	{
//	printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	}
//	}*/
//	return 0;
//}

//
//int main()
//{
//	char* p = "abcdef";
//	printf("%c\n", *(p+3));
//	printf("%c\n", p[3]);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	printf("%d\n", arr[3]);
//	printf("%d\n", 3[arr]);
//	//printf("%d\n", *(arr+3));
//	//*(3+arr) == *(arr+3) == arr[3] == 3[arr]
//
//	return 0;
//}
//
//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		int flag = 1;//默认是有序的
//		//一趟的冒泡排序
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;
//			}
//		}
//		if(flag == 1)
//			break;
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
//}
//
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6};
//	//数组名表示整个数组
//	//1. sizeof(数组名)
//	//2. &数组名
//
//	//除此之外，遇到的所有数组名都是首元素的地址
//	//
//
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	//test(arr);//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
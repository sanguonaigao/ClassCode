#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//void print(size_t n)
//{
//	if(n>9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	size_t num = 0;
//	scanf("%d", &num);//123
//	print(num);
//	//print(123)
//	//print(12) + printf(3)
//	//print(1) printf(2) printf(3)
//	//
//	system("pause");
//	return 0;
//}

#include <string.h>

//非递归写法
//int my_strlen(char* str)
//{
//	int count = 0;//计数器
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
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	//my_strlen("abc")
//	//1+my_strlen("bc")
//	//1+1+my_strlen("c")
//	//1+1+1+my_strlen("")
//	//1+1+1+0
//	printf("%d\n", len);
//
//	system("pause");
//	return 0;
//}
//
//int fac(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*fac(n-1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fac(n));
//
//	system("pause");
//	return 0;
//}


//1 1 2 3 5 8 13 21 34 55 ...
//50
//48 49
//46 47 47 48
//44 45 45 46 45 46 46 47
//
//
//int count = 0;
//
//int fib(int n)
//{
//	if(n == 3)
//		count++;
//
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	if(n<=2)
//		return 1;
//	else
//	{
//		while(n>2)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}

//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	system("pause");
//	return 0;
//}


//
//int  main()
//{
//	//int n = 10;
//	//int arr[n];//err
//	//float arr2[5];
//	//int arr[5] = {1,2,3,4,5};
//	//int arr2[5] = {1,2};
//	//int arr3[] = {1,2};
//
//	char arr4[] = "abc";
//	char arr5[] = {'a', 'b', 'c'};
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	for(i=0; i<sz; i++)
//	{
//		arr[i] += 1;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//


//int main()
//{
//	int arr[5] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("%p  ----->  %p\n", &arr[i], arr+i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[5] = {0};
//	int i = 0;
//	int *p = arr;//int*
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		//arr[i] = i;
//		//*(arr+i) = i;  //*(arr+i) == arr[i] == *(i+arr) == i[arr]
//		*(p+i) = i;
//	}
//	for(i=0; i<sz; i++)
//	{
//		//printf("%d ", *(p+i));
//		printf("%d ", i[arr]);//
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[][4] = {{1,2},{3,4}};
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			arr[i][j] = i*5+j+1;
//		}
//	}
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//1. sizeof(数组名)，数组名表示整个数组，所以sizeof(数组名)计算的是整个数组的大小
//2. &数组名，数组名表示整个数组，所以&数组名，取出的是数组的地址
//除此之外所有的数组名都表示数组首元素的地址

//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("%p\n", &arr[i][j]);
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int *p = &arr[0][0];
//	int i = 0;
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	system("pause");
//	return 0;
//}
//
//bubble_sort(int arr[], int sz)
//李笑来-
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int flag = 1;//有序
//		//每一趟的比较
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
//		{
//			break;
//		}
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
//
//	//冒泡排序
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	system("pause");
//	return 0;
//}


int main()
{
	int arr[10] = {0};
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);


	system("pause");
	return 0;
}
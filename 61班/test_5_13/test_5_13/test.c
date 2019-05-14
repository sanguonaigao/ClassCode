#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//void Print(unsigned int n)
//{
//	if(n>9)
//	{
//			Print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//
//	Print(num);//1234
//	//Print(1234)
//	//Print(123) 4
//	//Print(12) 3 4
//	//Print(1) 2 3 4
//	//
//
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
////}
//
//int my_strlen(char *str)
//{
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}
//
//int main()
//{
//	//char arr[] = "abcdef";
//	int len = my_strlen("abcdef");
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
//int fac(int n)
//{
//	int ret = 1;
//	int i = 0;
//	for(i=1; i<=n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//1 1 2 3 5 8 13 21 34 55 ...
//
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//

int count = 0;
//
//int fib(int n)
//{
//	if(n==3)
//		count++;
//
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n>2)
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
//	ret = fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
// 	int a = 0;
//// 	printf("%d\n", sizeof(a));
//// 	printf("%d\n", sizeof(int));
//
//	int arr1[10];
//	printf("%d\n", sizeof(arr1));//40
//	printf("%d\n", sizeof(int [5]));//40
//	system("pause");
//	//int arr2[4+6];
//	//char arr3[7];
//
//	return 0;
//}
//
//int main()
//{
//	//int arr[] = {1,2,3,4};
//	//int arr2[10] = {1,2,3};
//	//char arr3[] = "abcdef";
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c', '0'};
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//
//
//	system("pause");
//	return 0;
//}

//0
//'\0'--字符---0
//'0'-48

//
//int main()
//{
//	int arr[15] = {0};
//	//arr[i];
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = i;
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//
//
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", p[i]);//p[i]== *(p+i) == *(arr+i) == arr[i] == *(i+arr)==i[arr]
//		//printf("%d ", arr[i]);
//
//	}
//	/*for(i=0; i<10; i++)
//	{
//	printf("&arr[%d] = %p  <====> %p\n", i, &arr[i], p+i);
//	}*/
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[][4] = {{1,2},{3},{4,5}};
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
//	system("pause");
//	//char arr2[2][6];
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {0};
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//
//	for(i=0; i<12; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	system("pause");
//	return 0;
//}

// int main()
//{
//	int arr[3][4] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		int flag = 1;//有序
//
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//		if(flag == 1)
//			bre
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
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = {9,0,1,2,3,4,5,6,7,8};
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
	int a[100][8] = { 0 };
	int i = 0;
	int j = 0;
	int n = 0;
	int w = 0;
	int s = 0;
	int max = 0;
	int maxx = 0;
	srand((unsigned int)time(NULL));
	for (j = 0; j < 100; j++)
	{
		n = rand() % 7 + 1;
		a[j][7] = n;
		for (i = 0; i < n; i++)
		{
			a[j][i] = rand() % (59) + 91;
			printf("a[%d][%d]=%d ", j, i, a[j][i]);
			s = s + a[j][i];
		}
		printf("n=%d ", a[j][7]);
		printf("\n");
		w = 25 * (s)-200 * n;
		s = 0;

		if (w>max)
		{
			max = w;
			maxx = j;
		}

	}
	printf("最大值是%d ", max);
	printf("此时n=%d ", a[maxx][7]);
	for (i = 0; i < a[maxx][7]; i++)
	{
		printf("a[%d][%d]=%d ", maxx, i, a[maxx][i]);
	}
	system("pause");
	return 0;
}

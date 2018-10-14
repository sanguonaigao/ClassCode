#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//void print(int n)
//{
//	if(n>9)
//		print(n/10);
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	//n=1234
//	//1 2 3 4
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	//
//	//print(1234)
//	//print(123) printf(4)
//	//print(12) printf(3) printf(4)
//	//print(1) printf(2) printf(3) printf(4)
//	//
//	return 0;
//}
// 
// void test(int n)
// {
// 	if(n<=10000)
// 		test(n+1);
// }
// 
// int main()
// {
// 	test(1);
// 	return 0;
// }
// 
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
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
//	else
//		return 0;
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	//my_strlen("abcdef");
//	//1+my_strlen("bcdef");
//	//1+1+my_strlen("cdef");
//	//...
//	//1+1+1+1+1+1+my_strlen("");
//	//1+1+1+1+1+1+0
//
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
// 
// int fac(int n)
// {
// 	if(n<=1)
// 		return 1;
// 	else
// 		return n*fac(n-1);
// }
// 
// int main()
// {
// 	int n = 0;
// 	int ret = 0;
// 	scanf("%d", &n);
// 	ret = fac(n);
// 	printf("ret = %d\n", ret);
// 	return 0;
// }
//
//int count = 0;
////fib(50)
////49 48 
////48 47 47 46 
////47 46 46 45 46 45 45 44
////
//int fib(int n)
//{
//	if(n==3)
//		count++;
//	if(n<=2)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}


//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if(n<=2)
//		return 1;
//	else
//	{
//		int i = 0;
//		for(i=0; i<n-2; i++)
//		{
//			c = a+b;
//			a = b;
//			b = c;
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
 //	int i = 0;
 //	for(i=0; i<n-2; i++)
 //	{
 //		c = a+b;
 //		a = b;
 //		b = c;
 //	}
 //	return c;
 //}
 //int main()
 //{
 //	//1 1 2 3 5 8 13 21 34 55 ...
 //	int n = 0;
 //	int ret = 0;
 //	scanf("%d", &n);
 //	ret = fib(n);
 //	printf("%d\n", ret);
 //	return 0;
 //}

// 
// int main()
// {
// 	//int n = 5;
// 	//int arr[0];
// 	//int arr[] = {0,1,2,3,4};
// 	char arr1[3] = {'b', 'i', 't'};
// 	char arr2[] = "bit";
// 	//printf("%s\n", arr1);//
// 	//printf("%s\n", arr2);//
// 	printf("%d\n", strlen(arr1));//x
// 	printf("%d\n", strlen(arr2));//3
// 
// 	return 0;
// }
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//a+b;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
// 
// int main()
// {
// 	int i = 0;
// 	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
// 	int sz = sizeof(arr)/sizeof(arr[0]);
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%d ", i[arr]);
// 		//printf("%d ", *(arr+i));
// 		//printf("%d ", arr[i]);
// 		//arr[i] <==> *(arr+i) <==> *(i+arr) <==> i[arr]
// 	}
// 	/*for(i=0; i<sz; i++)
// 	{
// 		printf("&arr[%d] = %p  <===> arr+%d = %p\n", i, &arr[i], i, arr+i);
// 	}*/
// 	return 0;
// }
// 
//
//int main()
//{
//	int arr1[3][5] = {{1},{2},{3}};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<sizeof(arr1)/sizeof(arr1[0]); i++)
//	{
//		for(j=0; j<sizeof(arr1[0])/sizeof(arr1[0][0]); j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	//char arr2[2][10];
//
//	return 0;
//}


//
//int main()
//{
//	int arr1[3][5] = {{1},{2},{3}};
//	int *p = &arr1[0][0];
//	int i = 0;
//	int j = 0;
//	//for(i=0; i<3; i++)
//	//{
//	//	for(j=0; j<5; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr1[i][j]);
//	//	}
//	//}
//	for(i=0; i<15; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}
//

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//趟数
	for(i=0; i<sz-1; i++)
	{
		int j = 0;
		int flag = 0;
		//比较对数
		for(j=0; j<sz-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				flag = 1;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);

	bubble_sort(arr, sz);
	print_arr(arr, sz);
	return 0;
}

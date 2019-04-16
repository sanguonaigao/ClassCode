#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

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
//
//50
//48 49
//46 47 47 48
//45 44 46 45 46 45 47 46
//
//
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while(n>=3)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//
//	return c;
//}
//int main()
//{
//	//1 1 2 3 5 8 13 21 34 55
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//10
//	ret = fib(n);
//	printf("%d\n", ret);
//	//printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//int a;
//
//int main()
//{
//	//int n = 5;
//	//char arr2[n];//err
//
//	//int arr[10] = {1, 2, 3};
//	//int arr2[] = {1, 2, 3};
//	//char arr3[] = {'a', 98, 'c'};
//	//char arr4[] = {'a', 'b', 'c', '\0'};
//	//char arr5[] = "abc";
//
//	//printf("%d\n", strlen(arr4));//?
//	//printf("%d\n", strlen(arr5));//?
//
//	//printf("%s\n", arr4);
//	//printf("%s\n", arr5);
//
//	//int n = 0;
//	//printf("%d\n", n);
//	//printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int i = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//printf("%d\n", arr[5]);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	system("pause");
//	return 0;
//}

// 
// int main()
// {
// 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
// 	int* p = arr;//&arr[0]
// 	int i = 0;
// 	for(i=0; i<10; i++)
// 	{
// 		//printf("%p   =====     %p\n", &arr[i], p+i);
// 		printf("%d ", *(p+i));
// 		//printf("%d ", i[arr]);
// 		//*(p+i)  ==  *(i+p) === arr[i]   == i[arr]
// 	}
// 	system("pause");
// 	return 0;
// }

//
//int main()
//{
//	int arr[3][4] = {{1,2},{3,4},{5,6}};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		for(j=0; j<sizeof(arr[0])/sizeof(arr[0][0]); j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	//int arr2[][3] = {1,2,3,4,5,6};
//	//char arr2[3][5];
//	//double arr3[6][5];
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//	int i = 0;
//	int j = 0;
//	int *p = &arr[0][0];
//	for(i=0; i<12; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	/*for(i=0; i<3; i++)
//	{
//	for(j= 0; j<4; j++)
//	{
//	printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	}
//	}*/
//	system("pause");
//	return 0;
//}

//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		//一趟冒泡排序
//		int flag = 1;//已经有序
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				//交换
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
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	
//	//
//	//9 8 7 6 5 4 3 2 1 0
//	//8 9 7 6 5 4 3 2 1 0
//	//8 7 9 6 5 4 3 2 1 0
//	//...
//	//8 7 6 5 4 3 2 1 0 9
//	//
//	//7 6 5 4 3 2 1 0 8 9
//	//
//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	printf("----\n");
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	//
//	//sizeof(数组名)--数组名表示整个数组
//	//&数组名-----数组名表示整个数组
//	//
//	//除此之外，遇到的所有的数组名都是数组首元素的地址
//	//
//
//	printf("%d\n", sizeof(arr));//4 40
//	system("pause");
//	return 0;
//}
//







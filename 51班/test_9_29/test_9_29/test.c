#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//1. 打印空格
//		int j = 0;
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//2. 打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印一行
//		//1. 空格
//		int j = 0;
//		for(j=0; j<=i; j++)
//		{
//			printf(" ");
//		}
//		//2. *
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<=999999; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 求位数
//		//123
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//
//		while(tmp/10)
//		{
//			count++;
//			tmp = tmp/10;
//		}
//		//2. 计算次方和
//		tmp = i;
//		
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp = tmp/10;
//		}
//		//3. 判断
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		//产生1项
//		tmp = tmp*10+a;
//		//相加
//		sum += tmp;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//

#include <string.h>
// 
// int main()
// {
// 	//int*p = NULL;
// 	//Null--NUL--'\0'
// 	char arr1[20] = {0};
// 	//char arr2[] = "hello bit";
// 	char arr2[] = {'b', 'i', 't', '\0'};
// 
// 	strcpy(arr1, arr2);
// 	printf("%s\n", arr1);
// 
// 	return 0;
// }
// 
//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


int get_max(int x, int y)
{
	return x>y?x:y;
}

//编译型错误
//链接型错误
//运行时错误

//形参
//当实参传给形参的时候,形参是实参的一份临时拷贝
//对形参的修改不会改变实参
//
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//#include <math.h>
//
//int is_prime(int n)
//{
//	int j = 0;
//	for(j=2; j<=sqrt(n); j++)	
//	{
//		if(n%j == 0)
//			return 0;
//	}
//	return 1;
//}

//int is_leap_year(int year)
//{
//	if((0==year%4) && (0!=year%100))
//		return 1;
//	if(0 == year%400)
//		return 1;
//
//	return 0;
//}
//
//int is_leap_year(int year)
//{
//	if(((0==year%4)&&(0!=year%100))||(0==year%400))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int year)
//{
//	return ((0==year%4)&&(0!=year%100))||(0==year%400);
//}
//
//int  main()
//{
//	int year = 0;
//	int count = 0;
//
//	for(year=1000; year<=2000; year++)
//	{
//		if(1 == is_leap_year(year))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
////
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		if(1 == is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d ", count);
//
//	return 0;
//}

//
//int main()
//{
//// 	int num = 10;
//// 	int* p = &num;
//// 	*p = 20;
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap2(&a, &b);//实参
//	Swap1(a, b);//实参
//
//	printf("a = %d b = %d\n", a, b);
//
//	//int max = get_max(a, b);
//	//int max = get_max(get_max(1,2), get_max(-1, 3));
//
//	//printf("max = %d\n", max);
//	return 0;
//}
//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, 0, sz-1);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n", ret);
//	}
//	return 0;
//}

//1 1 2 3 5 8 13 21 34 55 ...
//

// 
// void Inc(int *p)
// {
// 	(*p)++;
// }
// int main()
// {
// 	int num = 0;
// 	Inc(&num);
// 	printf("%d\n", num);
// 	return 0;
// }



// int main()
// {
// 	//int len = strlen("abc");//3
// 	//printf("%d\n", strlen("abc"));//3
// 	//char arr1[] = "hello";
// 	//char arr2[20] = {0};
// 	//strcpy(arr2, arr1);
// 	//printf("%s\n", strcpy(arr2, arr1));
// 	//printf("%d\n", strlen(strcpy(arr2, arr1)));
// 	//printf("%d", printf("%d", printf("%d", 43)));
// 	//43
// 
// 	return 0;
// }



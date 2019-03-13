#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>





int BinarySearch(int arr[], int k, int left, int right)
{
	while(left<=right)
	{
		int mid = left + (right-left)/2;
		if(arr[mid] > k)
		{
			right = mid-1;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 17;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1;
	int ret = BinarySearch(arr, k, left, right);
	if(ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了:%d\n", ret);
	}
	system("pause");
	return 0;
}



//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	while(left<=right)
//	{
//		int mid = left + (right-left)/2;
//		if(arr[mid] > k)
//		{
//			right = mid-1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//}

//测试
//
//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	for(j=1; j<=3; j++)
//	{
//		ret = ret*j;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	//1 + 2 + 6 = 9
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 0;
//
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10==9)
//			count++;
//		if(i/10==9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%2==1)
//			sum = sum + 1.0/i;
//		else
//			sum = sum - 1.0/i;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = {1,3,5,7,9};
//	int arr2[] = {2,4,6,8,0};
//	int tmp = 0;
//
//	int i = 0;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	for(i=0; i<sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int m = 18;
//	int n = 24;
//	int tmp = 0;
//
//	while(tmp=m%n)
//	{
//		m = n;
//		n = tmp;
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}



//当实参传给形参的时候
//形参是实参的一份临时拷贝

//形参
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if(a<b)
//	{
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);//断点
//		//a,c是实参
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);		
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	*p = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int i = 0;
//	for(i=1; i<10; i++)
//	{
//		if(arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
////
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//01010-b
//	//10100-a
//	//11110
//	printf("a = %d b = %d\n", a, b);
//	/*a = a+b;
//	b = a-b;
//	a = a-b;*/
//	//按位异或
//	a = a^b;
//	b = a^b;
//	a = a^b;
//
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}



//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}


//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(year%4==0)
//		{
//			if(year%100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if(year%400==0)
//		{
//			printf("%d ", year);
//		}
//	}
//	system("pause");
//	return 0;
//}


//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//9*9
//
//int main()
//{
//	int i = 0; 
//	for(i=1; i<=9; i++)
//	{
//		//控制打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//力扣 -- leetcode
//牛客网 -- 
//每日一题

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=101; i<=200; i+=2)
//	{
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		int j = 0;
//		for(j=2; j<=i/2; j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		if(j>(i/2))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		//printf("%d ", i);
//		//判断i是否为素数
//		//2- i-1
//		int j = 0;
//		for(j=2; j<=i-1; j++)
//		{
//			if(i%j == 0)
//				break;
//		}
//		//2
//		if(i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

//
//1 1 2 3 5 8 13 21 34 55 ...
//

//int count = 0;
//int Fib(int n)
//{
//	if(n == 3)
//	{
//		count++;
//	}
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}

//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//..

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while(n>2)
	{
		c = a+b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}




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
//}

//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3

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
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//
//print(1234)
//print(123) 4
//print(12) 3 4
//print(1) 2 3 4
//1 2 3 4
//
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
//	test(0);
//	return 0;
//}
//
//void print(int n)
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
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	//printf("%d\n", strlen("abc"));
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}



//
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	return 0;
//}
//
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
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
//	//TDD-测试驱动开发
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	return 0;
//}
//
//int is_leap_year(int y)
//{
//	return ((y%4==0)&&(y%100!=0))||(y%400==0);
//
//	//if(((y%4==0)&&(y%100!=0))||(y%400==0))
//	//	return 1;
//	//else
//	//	return 0;
//	/*if(y%4==0)
//	{
//	if(y%100!=0)
//	{
//	return 1;
//	}
//	}
//	if(y%400==0)
//	{
//	return 1;
//	}
//	return 0;*/
//}
//
//int main()
//{
//	int year = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//
//int is_prime(int i)
//{
//	int j = 0;
//	for(j=2; j<=sqrt(i); j++)//2->i-1
//	{
//		if(i%j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i+=2)
//	{
//		//判断i是否为素数
//		if(is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//形参
//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* p1, int*p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	//int tmp = 0;
//	printf("num1 = %d num2 = %d\n", num1, num2);
//// 	tmp = num1;
//// 	num1 = num2;
//// 	num2 = tmp;
//	//实参
//	//当实参传给形参的时候
//	//形参是实参的一份临时拷贝
//	//对形参的修改不会影响实参
//	Swap1(num1, num2);//不行
//	Swap2(&num1, &num2);
//
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	return (x>y)?(x):(y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	max = get_max(2, 3);
//	max = get_max(2, b);
//	max = get_max(2+3, b);
//	max = get_max(get_max(3, 5), b);
//	printf("max = %d\n", max);
//	return 0;
//}


//int main()
//{
//	int num = 10;
//	//num = 20;
//	int* p = &num;
//	*p = 30;
//
//	printf("num = %d\n", num);
//	return 0;
//}
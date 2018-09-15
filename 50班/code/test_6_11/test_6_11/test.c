#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int Add(int , int);
//函数声明:告诉你有一个函数叫Add,函数的参数是int, int
//返回类型为int


int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("c = %d\n", c);
	return 0;
}

//函数的定义
int Add(int x, int y)
{
	return x+y;
}


//int main()
//{
//	char arr[10] = {0};
//	//链式访问
//	printf("%d\n", strlen(strcpy(arr, "hello bit")));
//	return 0;
//}
//
//// int Add(int x, int y)
// {
// 	return x+y;
// }
// 
// int  main()
// {
// 	int a = 10;
// 	int b = 20;
// 	//int c = Add(a, b);
// 	//printf("%d\n", c);
// 	printf("%d\n", Add(a ,b));
// 
// 	return 0;
// }

// 
// int Add(int n)
// {
// 	return ++n;
// }
// int main()
// {
// 	int num = 0;
// 	num = Add(num);
// 	printf("%d\n", num);
// 	num = Add(num);
// 	printf("%d\n", num);
// 	return 0;
// }
//
//void Add(int* p)
//{
//	*p = *p + 1;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
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
//		int mid = left+(right-left)/2;
//		if(arr[mid]>k)
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
//int main()
//{
//	int arr[] = {1,2,3,4,6,7,8,9,10};
//	int k = -1;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//	return 0;
//}
// 
// int is_leap_year(int year)
// {
// 	return ((year%4==0)&&(year%100!=0))||(year%400==0);
// // 	if(((year%4==0)&&(year%100!=0))||(year%400==0))
// // 	{
// // 		return 1;
// // 	}
// // 	else
// // 	{
// // 		return 0;
// // 	}
// }
// int main()
// {
// 	int year=0;
// 	int count = 0;
// 	for(year=1000; year<=2000; year++)
// 	{
// 		//year的闰年判断
// 		if(is_leap_year(year))//is_runnian()
// 		{
// 			printf("%d ", year);
// 			count++;
// 		}
// 	}
// 	printf("\ncount = %d\n", count);
// 	return 0;
// }
//n = a*b
//
// int is_prime(int n)//9
// {
// 	int i = 0;
// 	for(i=2; i<=sqrt(n); i++)
// 	{
// 		if(n%i == 0)
// 		{
// 			return 0;
// 		}
// 	}
// 	return 1;
// }
// int main()
// {
// 	int i = 0;
// 	int count = 0;
// 	for(i=100; i<=200; i++)
// 	{
// 		//判断素数
// 		if(is_prime(i))
// 		{
// 			count++;
// 			printf("%d ", i);
// 		}
// 	}
// 	printf("\ncount= %d\n", count);
// 	return 0;
// }

//
//函数传参
//当实参传递给形参的时候
//形参是实参的一份临时拷贝
//对形参的修改不会影响实参
//值传递---传值调用
//void Swap(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//址传递---传址调用
//
//void Swap(int*pa, int*pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	return x>y?x:y;
//	//int max = x>y?x:y;
//	//return max;
//}
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//
//	//int max = a>b?a:b;
//	int max = Max(a, b);
//	max = Max(Max(1, 2), 3+5);
//	max = Max(20, 30);
//
//	printf("%d\n", max);
//	//char arr[10] = "abcdefghi";
//	//strcpy(arr, "hello bit");
//	//printf("%s\n", arr);
//	//memset(arr, 0, 10);
//	//printf("%c\n", tolower('A'));
//	//printf("%c\n", toupper('A'));
//
//	//toupper();
//
//	return 0;
//}

//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		count++;
//		n = n&(n-1);
//	}
//	return count;
//}
//int main()
//{
//	int m = 1999; 
//	int n = 2299;
//
//	int tmp = m^n;
//	int ret = count_one_bit(tmp);
//	printf("%d\n", ret);
//	return 0;
//}
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
//	int num = 1234;
//	print(num);
//	return 0;
//}


//int main()
//{
//	int num = 2863311530;
//	//00000000000000000000000000001010
//	//0000000000000000--奇数位
//	//0000000000000011--偶数位
//	int i = 0;
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (num>>i)&1);
//	}
//	printf("\n");
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (num>>i)&1);
//	}
//	printf("\n");
//	return 0;
//}

//
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2 == 1)
//			count++;
//		n = n/2;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = -1;
//	int ret = count_one_bit(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}



//
//int main()
//{
//	int num = -1;
//	int ret = count_one_bit(num);
//	printf("%d\n", ret);
//	//1011---num
//	//1010---num-1
//	//1010---num
//	//1001---num-1
//	//1000---num
//	//0111---num-1
//	//0000---num
//	/*int count = 0;
//	while(num)
//	{
//		num = num&(num-1);
//		count++;
//	}*/
//	//while(num)
//	//{
//	//	if(num%2==1)
//	//	{
//	//		count++;
//	//	}
//	//	num = num/2;
//	//}
//	//int i = 0;
//	//for(i=0; i<32; i++)
//	//{
//	//	if(((num>>i)&1)==1)
//	//	{
//	//		count++;
//	//	}
//	//}
//	
//	//00000000000000000000000000000101
//	//00000000000000000000000000001011--补码
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//// 	int arr1[] = {1,2,3,4,5};
//// 	int arr2[] = {6,7,8,9,0};
//// 	int i = 0;
//// 	int sz = sizeof(arr1)/sizeof(arr1[0]);
//// 	for(i=0; i<sz; i++)
//// 	{
//// 		int tmp = arr1[i];
//// 		arr1[i] = arr2[i];
//// 		arr2[i] = tmp;
//// 	}
//// 	for(i=0; i<sz; i++)
//// 	{
//// 		printf("%d ", arr1[i]);
//// 	}
//// 	printf("\n");
//// 	for(i=0; i<sz; i++)
//// 	{
//// 		printf("%d ", arr2[i]);
//// 	}
//// 	printf("\n");
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
//		sum += (1.0/i)*flag;
//		flag = -flag;
//		//sum += 1.0/i;
//		/*if(i%2==1)
//		{
//		sum += 1.0/i;
//		}
//		else
//		{
//		sum -= 1.0/i;
//		}*/
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=1; i<=100; i++)
//	{
//		if(i%10 == 9)
//		{
//			count++;
//		}
//		if(i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//上部分
//	for(i=0; i<line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0; 
//		for(j=0; j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下部分
//	for(i=0; i<line-1; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for(j=0; j<i+1; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for(j=0; j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//123
//
#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=1000000; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 算i的位数-n
//		int sum = 0;
//		int n = 0;
//		int tmp = i;
//		while(tmp)
//		{
//			n++;
//			tmp/=10;
//		}
//		//2. 计算i的每一位的n次方之和
//		tmp = i;
//		while(tmp)
//		{
//			sum += (int)pow(tmp%10, n);
//			tmp/=10;
//		}
//		//3. 比较
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//
//	scanf("%d%d", &a, &n);//2 2
//	for(i=0; i<n; i++)
//	{
//		k = k*10+a;
//		sum += k;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//

//
//int main()
//{
//	int ch = 0;
//	while((ch=getchar()) != EOF)
//	{
//		if(ch>='a' && ch<='z')
//		{
//			putchar(ch-32);
//		}
//		else if(ch>='A' && ch<='Z')
//		{
//			putchar(ch+32);
//		}
//		else if(ch>='0' && ch<='9')
//		{
//			continue;
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//
//
//int get_max(int x, int y)
//{
//	return (x>y?x:y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int max = get_max(a, b);
//	max = get_max(2, 3);
//	max = get_max(a, 3);
//	max = get_max(a, 2+4);
//	max = get_max(a, get_max(2, 5));
//
//	printf("%d\n", max);
//	return 0;
//}
//
//void Swap1(int x, int y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
////当实参传给形参的时候
////形参是实参的一份儿临时拷贝
////对形参的修改不会影响实参
//
void Swap2(int* pa, int* pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap2(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//
//	if(a<b)
//	{
//		Swap2(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap2(&a, &c);
//
//	}
//	if(b<c)
//	{
//		Swap2(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//
//#include <math.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//	for(i=2; i<=sqrt(n); i++)
//	{
//		if(n%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//判断i是否为素数
//		if(is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if(y%4==0)	
//	{
//		if(y%100!=0)
//		{
//			return 1;
//		}
//	}
//	if(y%400==0)
//	{
//		return 1;
//	}
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if(((y%4==0)&&(y%100!=0))||(y%400==0))
//		return 1;
//	else
//		return 0;
//}
//
//int is_leap_year(int y)
//{
//	return ((y%4==0)&&(y%100!=0))||(y%400==0);
//}
//
//
//int main()
//{
//	int year=0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		if(is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//int* arr
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
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
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, 7, sz);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//
//
//int binary_search(int arr[], int k, int left, int right)
//{
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid-1;
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
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, 1, 3, 7);
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}

//void Add(int *p)
//{
//	(*p)++;
//}

// void Add(int *p)
// {
// 	(*p)++;
// }
// int Add(int n)
// {
// 	return n+1;
// }
// int main()
// {
// 	int num = 0;
// 	num = Add(num);
// 	printf("num = %d\n", num);
// 	num = Add(num);
// 	printf("num = %d\n", num);
// 	/*Add(&num);
// 	printf("%d\n", num);
// 	Add(&num);
// 	printf("%d\n", num);*/
// 	return 0;
// }
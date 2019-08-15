#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//1234
//1 2 3 4
//
//void Print(unsigned int n)//1234
//{
//	if(n>9)
//	{
//		Print(n/10);//123
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	Print(num);
//	return 0;
//}
//
//Print(1234);
//Print(123) 4;
//Print(12) 3 4;
//Print(1) 2 3 4;
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

//my_strlen("abc")
//1+my_strlen("bc")
//1+1+my_strlen("c")
//1+1+1+my_strlen("")
//1+1+1+0=3

//
//int my_strlen(char* str)//abc
//{
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}
//
//int main()
//{
//	char arr[]= "abc";//char*
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//
//void Test(int n)
//{
//	printf("hehe\n");
//	if(n<=10000)
//		Test(n+1);
//}
//
//int main()
//{
//	Test(1);
//	return 0;
//}
//
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


int count = 0;
//
//50
//49 48
//48 47 47 46
//47 46 46 45 46 45 45 44
//
//
//int Fib(int n)
//{
//	if(n == 3)
//		count++;
//
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}
//
//
//1 1 2 3 5 8 13 21 34 55 ...
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	if(n<=2)
//	{
//		return 1;
//	}
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
////}
//
//int Fib(int n)
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
//	ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}
//
//int main()
//{
//	//int n = 7;
//	//int arr1[7] = {1,2,3,4,5};//不完全初始化
//
//	//char arr2[8] = {'a', 'b', 'c'};
//	//char arr3[8] = "abc";
//
//	/*int arr4[] = {1,2,3};
//	char arr5[] = "abc";
//	char arr6[] = {'a', 'b', 'c'};
//*/
//
//	char arr1[] = "abc";
//	char arr2[] = {'a', 'b', 'c'};
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//x
//
//	//printf("%s\n", arr1);//abc
//	//printf("%s\n", arr2);//abcxxx
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10] = {0};
//	//arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = i;
//	}
//
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {0};
//	//arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;//首元素的地址
//	//p+i ==> arr+i
//	//*(p+i) == > *(arr+i) ==> arr[i]
//	 //           *(i+arr) ==> i[arr]
//
//	/*for(i=0; i<sz; i++)
//	{
//	printf("&arr[%d] = %p    <====>   p+%d = %p\n", i, &arr[i], i, p+i);
//	}*/
//
//	for(i=0; i<sz; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<sz; i++)
//	{
//		//printf("%d ", *(p+i));
//		//printf("%d ", arr[i]);//arr[i] == *(arr+i)   i[arr] == *(i+arr)
//		printf("%d ", i[arr]);//a+b;  b+a;
//
//	}
//	return 0;
//}
//


int main()
{
// 	int arr[5];
// 	int arr1[3][4];
// 	printf("%d\n", sizeof(arr));//20
// 	printf("%d\n", sizeof(int [5]));//

	//int arr[3][4] = {{1,2,3},{4,5}};
	int arr[3][4] = {{1,2,3}, {2,3,4,5}};
	int*p = &arr[0][0];
	int i = 0;

	for(i=0; i<12; i++)
	{
		printf("%d ", *(p+i));
	}

	/*int i = 0;
	int j = 0;

	for(i=0; i<3; i++)
	{
	for(j=0; j<4; j++)
	{
	printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);		
	}
	}*/

	/*for(i=0; i<2; i++)
	{
	for(j=0; j<4; j++)
	{
	printf("%d ", arr[i][j]);
	}
	printf("\n");
	}*/

	return 0;
}

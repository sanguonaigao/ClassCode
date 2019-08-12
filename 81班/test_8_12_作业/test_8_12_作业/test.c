#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int tmp = 0;//空瓶
//	
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	
//	return 0;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//
//	printf("num1=%d num2=%d\n", num1, num2);
//	num1 = num1+num2;
//	num2 = num1-num2;
//	num1 = num1-num2;
//	printf("num1=%d num2=%d\n", num1, num2);
//
//	return 0;
//}
//
//int main()
//{
//	//异或
//	int num1 = 3;
//	int num2 = 5;
//	//00000000000000000000000000000011-num2
//	//00000000000000000000000000000101-num1
//	//00000000000000000000000000000110-
//	printf("num1=%d num2=%d\n", num1, num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1=%d num2=%d\n", num1, num2);
//	return 0;
//}

//int main()
//{
//	//在线笔试-OJ-
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int i = 0;
//	for(i=1; i<10; i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//
//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = 1;
//	//处理
//	if(a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

int main()
{
	int a = 18;
	int b = 24;
	int c = 0;

	while(c=a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
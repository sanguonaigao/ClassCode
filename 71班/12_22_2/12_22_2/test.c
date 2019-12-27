#define _CRT_SECURE_NO_WARNINGS 1

#include <71.h>
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++， 先++，后使用
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//int main()
//{
//// 	int a = 10;
//// 	int * p = &a;
//// 	*p = 20;//解引用操作
////  printf("a = %d\n", a);
//	int arr[10] = {1,2,3,4,5};
//	printf("%d\n", *arr);
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//int c = a & b;
//	//int c = a&&b;
//	int c = a || b;
//	printf("%d\n", c);
//	//011
//	//101
//	//001
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int i = 0,a=0,b=2,c =3,d=4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//2 2 3 4
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 10;
//	int b = 0;
//	if(a>5)
//	b = 3;
//	else
//	b = -3;
//
//	b = (a>5 ? 3:-3);*/
//	/*int a = 10;
//	int b = 20;
//	int max = (a>b ? a : b);*/
//	
//	return 0;
//}


//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7};
//
//	//arr[4] = 6;
//	//printf("%d\n", arr[4]);
//	//4[arr] == *(4+arr)==*(arr+4) == arr[4]
//	//printf("%d\n", *(arr+4));
//	//printf("%d\n", *(4+arr));
//	//printf("%d\n", 4[arr]);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);//函数调用操作符
//	return 0;
//}
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	//学生
//	//创造-自定义类型
//	//结构体
//	struct Stu s = {"张三", 20};
//	struct Stu* ps = &s;
//	printf("%s %d\n", s.name, s.age);
//	printf("%s %d\n", (*ps).name, (*ps).age);
//	printf("%s %d\n", ps->name, ps->age);
//	return 0;
//}
//
//int main()
//{
//	char a = 127;
//	//00000000000000000000000001111111
//	//00000000000000000000000001111111-a
//	char b = 3;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000011-b
//	char c = a+b;
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if(a==0xb6)
//		printf("a");
//	if(b==0xb600)
//		printf("b");
//	if(c==0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a+b+10;
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//	int a = (++i)+(++i)+(++i);
//	printf("a = %d\n", a);
//	return 0;
//}
//
//
//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++) 
//	{ 
//		printf("%d, ", sum(a)); 
//	} 
//} 
//

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i=0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
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
//	int b = 3;
//	int c = 1;
//
//	if(a<b)
//	{
//		Swap(&a, &b);
//	}
//	if(a<c)
//	{
//		Swap(&a, &c);
//	}
//	if(b<c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	//printf("%d %d %d\n", b, a, c);
//
//	return 0;
//}
//




//
//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first ");
//		case 1:
//			printf("second ");
//			break;
//		default: printf("hello ");
//		}
//		
//	case 2:
//		printf(" third");
//	}
//	return 0;
//}

//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//则func(1)
//
//
//
//int main()
//{
//	//24 18
//	int a = 18;
//	int b = 24;
//	int c = 0;
//	while(c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b-5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
// 
// int main()
// {
// 	int i = 1;
// 	for(i=1; i<=9; i++)
// 	{
// 		int j = 0;
// 		for(j=1; j<=i; j++)
// 		{
// 			printf("%d*%d=%-2d ", i, j, i*j);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

//求10 个整数中最大值
//
//int main()
//{
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
//	int max = arr[0];
//	int i = 0;
//	for(i=1; i<10; i++)
//	{
//		if(arr[i]>max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}
//算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for(i=1; i<=100; i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
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
//			count++;
//		if(i/10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。
//要求：k可以正数或负数

//double Power(int n, int k)
//{
//	if(k>0)
//		return n*Power(n, k-1);
//	else if(k == 0)
//		return 1;
//	else
//		return 1.0/Power(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	double ret = 0.0;
//	scanf("%d%d", &n, &k);
//	ret = Power(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如：调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19
//
//int DigitSum(unsigned int num)
//{
//	if(num<10)
//		return num;
//	else
//		return DigitSum(num/10)+num%10;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	int sum = 0;
//	scanf("%d", &num);//172 9
//	sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}
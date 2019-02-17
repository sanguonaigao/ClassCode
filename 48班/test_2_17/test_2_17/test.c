#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	char c = 0;
//
//	return 0;
//}
//
//int main()
//{
//	int n = 9;//4
//	//0 00000000 00000000000000000001001
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n",n);//9
//	//(-1)^0 * 0.00000000000000000001001*2^-126
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//	*pFloat = 9.0;
//	//9.0
//	//1001.0
//	//1.001*2^3
//	//(-1)^0 * 1.001 * 2^3
//	//01000001000100000000000000000000
//	//
//	printf("num的值为：%d\n",n);//9
//	printf("*pFloat的值为：%f\n",*pFloat);//9.000000
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	float f = 5.5;
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//
//	//S=0
//	//M=1.011
//	//E=2
//	//40b00000
//	//0 10000001 01100000000000000000000
//	//
//	//(-1)^s*M*2^-126
//	//
//	//
//	//(-1)^S * M * 2^E
//	//0.5
//	//0.1
//	//1.0*2^-1
//	//(-1)^0*1.0*2^-1
//	//
//
//	return 0;
//}
//
#include <stdlib.h>

//
//int Pow(int n, int k)
//{
//	if(k<1)
//		return 1;
//	else
//		return n*Pow(n, k-1);
//}
//int main()
//{
//	int ret = Pow(2, 0);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//
//int DigitSum(int n)
//{
//	if(n<10)
//		return n;
//	else
//		return DigitSum(n/10)+n%10;
//}
//
//int main()
//{
//	int ret = DigitSum(1729);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char * str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str+len-1);
//	*(str+len-1) = '\0';
//	if(my_strlen(str+1)>1)
//		reverse_string(str+1);
//	*(str+len-1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//1234
//
//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if(n%2==1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		if(1 == ((n>>i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	return count;
//	//n = n&(n-1);
//	//1111-n
//	//1110-n-1
//	//1110-n
//	//1101-n-1
//	//1100-n
//	//1011-n-1
//	//1000-n
//}
//
//
//int main()
//{
//	int n = 10;
//	int ret = count_one_bit(n);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//

//
//void print_bit(int n)
//{
//	int i = 0;
//	//打印偶数位
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//	printf("\n");
//
//	//打印奇数位
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (n>>i)&1);
//	}
//}
//int main()
//{
//	int num = 10;
//	//00000000000000000000000000001010
//	print_bit(num);
//	system("pause");
//	return 0;
//}
//
//int count_one_bit(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		n = n&(n-1);
//		count++;
//	}
//	return count;
//}
//
//int count_diff_bit(int m,int n)
//{
//	int tmp = m^n;
//	return count_one_bit(tmp);
//}
//
//int main()
//{
//	printf("%d\n", count_diff_bit(1999, 2299));
//	system("pause");
//	return 0;
//}
//
//July
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for(a=1; a<=5; a++)
//	{
//		for(b=1; b<=5; b++)
//		{
//			for(c=1; c<=5; c++)
//			{
//				for(d=1; d<=5; d++)
//				{
//					for(e=1; e<=5; e++)
//					{
//						if((b==2)+(a==3)==1 &&
//						   (b==2)+(e==4)==1 &&
//						   (c==1)+(d==2)==1 && 
//						   (c==5)+(d==3)==1 &&
//						   (e==4)+(a==1)==1)
//						{
//							if(a*b*c*d*e==120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int killer = 0;
//	for(killer='a'; killer<='d'; killer++)
//	{
//		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
////1
////1 1
////1 2 1
////1 3 3 1
////1 4 6 4 1
////
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<10; j++)
//		{
//			if(j==0)
//				arr[i][j] = 1;
//			if(i==j)
//				arr[i][j] = 1;
//			if(i>=2 && j>=1)
//			{
//				arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
//			}
//		}
//	}
//
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//
//	return 0;
//}
//
//《剑指offer》
// leetcode
// 
//
//int main()
//{
//	int *p = NULL;
//	printf("%d\n", sizeof(p));
//	system("pause");
//	return 0;
//}

// int my_strlen(const char* str)
// {
// 
// }
//int main()
//{
//	char a = 'w';
//	char *p = &a;
//	char *str = "abcdef";
//	//strlen("abcdef");
//	printf("%c\n", *str);
//	system("pause");
//
//	return 0;
//}


int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcdef";

	if(str1 == str2)
	{
		printf("str1 == str2\n");
	}
	else
	{
		printf("str1 != str2\n");
	}
	//char *str1 = "abcdef";
	//char *str2 = "abcdef";

	//if(str1 == str2)
	//{
	//	printf("str1 == str2\n");
	//}
	//else
	//{
	//	printf("str1 != str2\n");
	//}
	system("pause");
	return 0;
}
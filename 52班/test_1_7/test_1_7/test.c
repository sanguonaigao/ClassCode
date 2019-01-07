#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while(count)
//	{
//		//拷贝一个字符
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;
//		src = (char*)src+1;
//		count--;
//	}
//	return ret;
//}
//
//void* my_memmove(void*dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	if(dest<src)
//	{
//		//前->后
//		while(count--)
//		{
//			//拷贝一个字符
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest+1;
//			src = (char*)src+1;
//		}
//	}
//	else
//	{
//		//后->前
//		while(count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	//int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	//int arr2[10] = {0};
//	//my_memcpy(arr2, arr1, 20);
//
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	//			  1,2,1,2,3,4,7,8,9,10
//	my_memmove(arr1, arr1+2, 16);
//	//memcpy(arr1+2, arr1, 16);
//	//my_memcpy(arr1+2, arr1, 16);
//	//周立功
//	return 0;
//}

#include <stdlib.h>
//
//int main()
//{//04 00 00 00  03 00 00 00
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {1,2,3,3,3,3};
//	int ret = memcmp(arr1, arr2, 13);
//	printf("ret = %d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	memset(arr, 'a', 40);
//
//	return 0;
//}
//
//int count_one_bit(int n)
//{
//	int i = 0;
//	int count = 0;
//	for(i=0; i<32; i++)
//	{
//		if((n&1)==1)
//		{
//			count++;
//		}
//		n>>=1;
//	}
//	return count;
//}

//
//int count_one_bit(int n)
//{
//	int i = 0;
//	int count = 0;
//	while(n)
//	{
//		count++;
//		n = n&(n-1);
//	}
//	return count;
//}
//
//int main()
//{
//	int num = -1;
//	int ret = count_one_bit(num);
//	printf("%d\n", ret);
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	
//	//-1%2=
//	//-1/2;
//	//111
//	//7%2=1
//	//7/2=3
//	//3%2=1
//	//3/2=1
//	//1%2=1
//	//1/2=0
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//00000000000000000000000000001010
//	int num = 10;
//	int i = 0;
//	//奇数位
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (num>>i)&1);
//	}
//	printf("\n");
//
//	//偶数位
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (num>>i)&1);
//	}
//	system("pause");
//	return 0;
//}
//
//int count_one_bit(int n)
//{
//	int i = 0;
//	int count = 0;
//	while(n)
//	{
//		count++;
//		n = n&(n-1);
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int k = m^n;
//	int ret = count_one_bit(k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
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
//						if((1==(b==2)+(a==3))
//							&&(1==(b==2)+(e==4))
//							&&(1==(c==1)+(d==2))
//							&&(1==(c==5)+(d==3))
//							&&(1==(e==4)+(a==1)))
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

//杨辉三角

 //   1
	//1 1
	//1 2 1
	//1 3 3 1
	//1 4 6 4 1

//
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<10; j++)
//		{
//			if(j==0)
//				arr[i][j] = 1;
//			if(i == j)
//				arr[i][j] = 1;
//			if(i>=2 && j>=1)
//				arr[i][j] = arr[i-1][j]+arr[i-1][j-1];
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
//	return 0;
//}


#include <math.h>

//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum <<= 1;
//		sum |= ((value>>i)&1);
//	}
//	return sum;
//}
//
//int main()
//{
//	int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum += ((value>>i)&1)*pow(2, 31-i);
//	}
//	return sum;
//}
//int main()
//{
//	int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a+b;
//	c = Add(a, b);
//	return 0;
//}

// 
// int main()
// {
// 	int a = 10;
// 	int b = 20;
// 	//1010-10
// 	//1110-14
// 	//0100
// 	//12
// 
// 	//int ret = (a+b)/2;
// 	//int ret = a+((b-a)>>1);
// 	int ret = (a&b)+ ((a^b)>>1);
// 
// 	printf("ret = %d\n", ret);
// 	system("pause");
// 	return 0;
// }

//1 2 3 4 5 1 2 3 4
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int num = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		num ^= arr[i];
//	}
//	printf("num = %d\n", num);
//	system("pause");
//	return 0;
//}

int Strlen(const char* str)
{
	int count = 0;
	assert(str);
	while(*str)
	{
		count++;
		str++;
	}
	return count;
}

void reverse_str(char *left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);

	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void reverse(char *str, int len)
{
	assert(str != NULL);
	//1. 逆序整个字符串
	reverse_str(str, str+len-1);
	//2. 逆序单词
	while(*str)
	{
		char *start = str;
		while((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		//逆序单词
		reverse_str(start, str-1);
		if(*str != '\0')
			str++;
	}
}

int main()
{
	char arr[] = "student a am i";
	//int len = sizeof(arr)/sizeof(arr[0])-1;
	int len = Strlen(arr);
	reverse(arr, len);
	printf("%s\n", arr);
	system("pause");
	//i ma a tneduts
	//i ma a student

	return 0;
}
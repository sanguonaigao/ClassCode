#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
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
//						if(((b==2)+(a==3)==1)&&
//						   ((b==2)+(e==4)==1)&&
//						   ((c==1)+(d==2)==1)&&
//						   ((c==5)+(d==3)==1)&&
//						   ((e==4)+(a==1)==1))
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
//	int killer=0;
//	for(killer='a'; killer<='d'; killer++)
//	{
//		if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}

//1
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
//			if(i==j)
//				arr[i][j] = 1;
//			if(i>=2 && j>=1)
//			{
//				arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
//			}
//		}
//	}
//	for(i=0; i<10; i++)
//	{
//		for(j=0; j<=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}
#include <math.h>

//unsigned int reverse_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum += ((n>>i)&1)*pow(2, 31-i);
//	}
//	return sum;
//}


//unsigned int reverse_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum += ((n>>i)&1)*(1<<(31-i));
//	}
//	return sum;
//}
//
//unsigned int reverse_bit(unsigned int n)
//{
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		sum <<= 1;//sum = sum<<1;
//		sum |= ((n>>i)&1);
//	}
//
//	return sum;
//}
//
//int main()
//{
//	int num = 0;
//	unsigned int ret = 0;
//	scanf("%d", &num);//25
//	ret = reverse_bit(num);
//	printf("%u\n", ret);//%d---有符号的整数 %u----无符号的整数
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int avg = a+(b-a)/2;
//	int avg = (a&b)+(a^b)/2;
//	printf("%d\n", avg);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	//int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = 0;
//	for(i=0; i<sz; i++)
//	{
//		ret ^= arr[i];
//	}  
//	printf("ret = %d\n", ret);
//
//	//for(i=0; i<sz; i++)
//	//{
//	//	//arr[i]
//	//	int j = 0;
//	//	int count = 0;
//	//	for(j=0; j<sz; j++)
//	//	{
//	//		if(arr[i] == arr[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//	if(count == 1)
//	//		break;
//	//}
//	//printf("%d\n", arr[i]);
//	system("pause");
//	return 0;
//}
//
//


//有一个字符数组的内容为:"student a am i",
//				请你将数组的内容改为"i am a student".
//				要求：
//				不能使用库函数。
//				只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//				student a am i
//				i ma a tneduts
//				i am a student

#include <assert.h>

void reverse_str(char* left, char *right)
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

int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse(char* str)
{
	//1. 逆序整个字符串
	int len = my_strlen(str);
	assert(str != NULL);
	reverse_str(str, str+len-1);
	//2. 逆序每个单词
	
	//逆序一个单词
	while(*str != '\0')
	{
		char* start = str;
		while(*str != ' ' && *str != '\0')
		{
			str++;
		}
		reverse_str(start, str-1);
		if(*str  == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char arr[] = "student a am i";//"i am a student"
	reverse(arr);//处理字符串
	//abc ma a tneduts
	//i am a student
	printf("%s\n", arr);
	
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdarg.h>
#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <string.h>

void MoveNum(int arr[], int sz)
{
	int *left = arr;
	int *right = arr+sz-1;

	while(left<right)
	{
		while((left<right) && (*left)%2!=0)
		{
			left++;
		}
		while((left<right)&&(*right)%2 == 0)
		{
			right--;
		}
		if(left<right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}
int main()
{
	int arr[] = {2,4,6,8,0,1,3,5,7,9};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	MoveNum(arr, sz);
	for(i=0; i<sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
//
//void reverse_str(char *left, char*right)
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse(char* str)
//{
//	//1.整体逆置
//	int len = strlen(str);
//	reverse_str(str, str+len-1);
//	//printf("%s\n", str);
//	//2.每个单词逆置
//	while(*str != '\0')
//	{
//		char *start = str;
//		char *end = start;
//		while((*end != ' ') && (*end != '\0'))
//		{
//			end++;
//		}
//		reverse_str(start, end-1);
//		if(*end != '\0')
//			str = end+1;
//		else
//			str = end;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	reverse(arr);
//	printf("%s\n" , arr);
//	return 0;
//}
//abcdef
//
//int main()
//{
//	int arr[] = {1,2,3,4,1,2,3,5};//
//	//100
//	//101
//	//001
//	//1
//	//
//	//
//	int i =0;
//	int ret = 0;
//	for(i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int average = a+((b-a)>>1);
//	printf("%d\n", average);
//
//	average = (a&b)+((a^b)>>1);
//	printf("%d\n", average);
//
//	return 0;
//}
//
//


//1010
//1111
//0101
//
//
//


//unsigned int reverse_bit(unsigned int val)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for(i=0; i<32; i++)
//	{
//		//ret += ((val>>i)&1) * pow(2, 31-i);
//		ret += ((val>>i)&1)<<(31-i);
//	}
//	return ret;
//}
//
//unsigned int reverse_bit(unsigned int val)
//{
//	//25
//	int i = 0;
//	unsigned int ret = 0;
//	for(i=0; i<32; i++)
//	{
//		ret<<=1;
//		ret |= ((val>>i)&1);
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int ret = 0;
//	int num = 25;
//	ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
// 
// #define SWAP(X) ((((X)&0x55555555)<<1) + (((X)&0xaaaaaaaa)>>1))
// 
// int main()
// {
// 	int num = -1;
// 	int ret = SWAP(num);
// 	printf("ret = %d\n", ret);
// 	//1011
// 	//1010
// 	//0101
// 
// 	//1010>>1
// 	//0101
// 	//0010
// 	//0111--7
// 	//
// 	//0001<<1
// 	return 0;
// }


//可变参数
//int average(int n, ...)
//{
//	va_list arg;
//	int sum = 0;
//	int i = 0;
//	va_start(arg, n);
//	for(i=0; i<n; i++)
//	{
//		sum += va_arg(arg, int);
//	}
//	va_end(arg);
//	return sum/n;
//}
//
//int main()
//{
//	int ret = average(3, 3, 4, 5);
//	printf("%d\n", ret);//4
//	ret = average(4, 3, 4, 5, 8);
//	printf("%d\n", ret);//5
//	return 0;
//}


//int main(int argc, char *argv[], char*envp[])
//{
//	int i = 0;
//	while(envp[i])
//	{
//		printf("%s\n", envp[i]);
//		i++;
//	}
//	return 0;
//}

//int main(int argc, char*argv[], char*envp[])
//{
//	int i = 0;
//	for(i=0; i<argc; i++)
//	{
//		printf("%s\n", argv[i]);
//	}
//	return 0;
//}
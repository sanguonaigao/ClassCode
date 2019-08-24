#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <stdio.h>
//
//unsigned int reverse_bit(unsigned int num)
//{
//	//00000000000000000000000000011001
//	int i = 0;
//	unsigned int sum = 0;
//	for(i=0; i<32; i++)
//	{
//		//sum += ((num>>i)&1)*pow(2, 31-i);
//		sum += ((num>>i)&1)*(1<<(31-i));
//	}
//	return sum;
//}

//
//unsigned int reverse_bit(unsigned int num)
//{
//	//00000000000000000000000000011001
//	int i = 0;
//	unsigned int ret = 0;
//	for(i=0; i<32; i++)
//	{
//		ret <<= 1;
//		ret |= ((num>>i)&1);
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int avgerage = a+(b-a)/2;
//	//int avgerage = a+((b-a)>>1);
//	int average = (a&b)+((a^b)>>1);
//	printf("average = %d\n", average);
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = 0;
//	for(i=0; i<sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//
#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//void reverse_string(char* left, char*right)
//{
//	assert(left && right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse(char arr[])
//{
//	//1. 逆序整个字符串
//	int len = my_strlen(arr);
//	char *start = NULL;
//	char* end = arr;
//	reverse_string(arr, arr+len-1);
//	//2. 逆序每个单词
//	//"hehe haha"
//	while(*end)
//	{
//		start = end;
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse_string(start, end-1);
//		if(*end != '\0')
//			end++;
//	}
//
//}
//int main()
//{
//	char arr[] = "student a am i";
//	//char *arr = "student a am i";
//
//	reverse(arr);
//	printf("%s\n", arr);
//	//i ma a tneduts
//	//i am a student
//	//
//	return 0;
//}
//
//void Move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while(left<right)
//	{
//		int tmp = 0;
//		while((left<right)&&(arr[left]%2==1))
//		{
//			left++;
//		}
//		while((left<right) && (arr[right]%2==0))
//		{
//			right--;
//		}
//		if(left<right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Move(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//
//1 2 3
//4 5 6
//7 8 9
//
//
//void Find(int arr[3][3], int* prow, int* pcol, int k)
//{
//	int x = 0;
//	int y = *pcol-1;
//
//	while(y>=0 && x<=*prow-1)
//	{
//		if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*prow = x;
//			*pcol = y;
//			return;
//		}
//	}
//	*prow = -1;
//	*pcol = -1;
//}
//
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int row = 3;
//	int col = 3;
//	Find(arr, &row, &col, 7);
//	if(row == -1 && col==-1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d %d\n" ,row, col);
//	}
//	return 0;
//}
//

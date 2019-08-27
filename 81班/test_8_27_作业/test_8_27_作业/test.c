#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	int j = 0;
//	for(j=0; j<k; j++)
//	{
//		char ch = arr[0];
//		int i = 0;
//		for(i=0; i<len-1; i++)
//		{
//			arr[i] = arr[i+1];
//		}
//		arr[len-1] = ch;
//	}	
//}
#include <assert.h>
//
//void reverse(char*left, char* right)
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
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	//assert(k<=len);
//
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr+len-1);
//	reverse(arr, arr+len-1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 10);
//	printf("%s\n", arr);
//
//	//abcdef
//	//bafedc
//	//cdefab
//
//	//cdefab
//
//	return 0;
//}
//
//
//int is_left_move(char*str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if(len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	if(strstr(str1, str2))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[20] = "AABCD";
//	int ret = is_left_move(arr, "BCDAA");
//	if(ret == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//
//void find_two_diff_num(int arr[], int sz, int* p1, int* p2)
//{
//	//1. 异或
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//
//	for(i=0; i<sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2. 计算异或的结果tmp中二进制位哪一位为1
//	for(i=0; i<32; i++)
//	{
//		if(((tmp>>i)&1)==1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3. 分组
//	for(i=0; i<sz; i++)
//	{
//		if(((arr[i]>>pos)&1) == 1)
//			*p1 ^= arr[i];
//	}
//	*p2 = tmp ^ *p1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	//1 3 5 1 3
//	//2 4 6 2 4
//
//	//2 3 6 2 3
//	//1 1 4 4 5
//	//
//	//101
//	//110
//	//011
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	find_two_diff_num(arr, sz, &num1, &num2);
//	printf("%d %d\n", num1, num2);
//
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int total = 0;
//	scanf("%d", &money);
//
//	total = money*2-1;
//
//	/*total += money;
//	empty = money;
//
//	while(empty>=2)
//	{
//	total += empty/2;
//	empty = empty/2 + empty%2;
//	}*/
//	printf("total = %d\n", total);
//	return 0;
//}

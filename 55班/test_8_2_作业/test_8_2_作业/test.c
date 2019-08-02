#define _CRT_SECURE_NO_WARNINGS 1


//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include <stdio.h>
#include <string.h>
#include <assert.h>


//a b c d
//d b c a
//
//void left_move(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0; i<k; i++)
//	{
//		//左旋转1个字符
//		int j = 0;
//		//1. 保存第一个
//		char tmp = arr[0];
//		//2. 向前移动
//		for(j=0; j<len-1; j++)
//		{
//			arr[j] = arr[j+1];
//		}
//		//3. 把第一个放在最后的位置
//		arr[len-1] = tmp;
//	}
//}

//void reverse(char*left, char*right)
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
//void left_move(char arr[], int k)
//{
//	int len = strlen(arr);
//	reverse(arr, arr+k-1);
//	reverse(arr+k, arr+len-1);
//	reverse(arr, arr+len-1);
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	//cdefab
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//	例如：给定s1 =AABCD和s2 = BCDAA，返回1
//	给定s1=abcd和s2=ACBD，返回0.
//
//	AABCD左旋一个字符得到ABCDA
//	AABCD左旋两个字符得到BCDAA
//
//	AABCD右旋一个字符得到DAABC
//
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//
//	if(len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	if(strstr(str1, str2) == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	//abcdefabcdef
//	//cdefab
//	char arr1[20] = "abcdef";//abcdefabcdef
//	char arr2[] = "cdefgh";
//	if(is_left_move(arr1, arr2) == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}
//

//1.一个数组中只有两个数字是出现一次，
//	其他所有数字都出现了两次。
//	找出这两个只出现一次的数字，编程实现。
//
//void find_two_diff_num(int arr[], int sz, int*p1, int *p2)
//{
//	int ret = 0;
//	int pos = 0; int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//2. 找出异或结果中哪一位为1
//	for(i=0; i<32; i++)
//	{
//		if(((ret >> i)&1)==1)
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
//	*p2 = *p1^ret;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,1,2,3,4,5,6};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int num1 = 0;
//	int num2 = 0;
//	//返回型参数
//	find_two_diff_num(arr, sz, &num1, &num2);
//	printf("num1 = %d num2 = %d\n", num1, num2);
//
//	//1 1 2 2 3 3 4 4 5 6
//	//5^6
//	//101
//	//110
//	//
//	//1 1 4 4 5
//	//2 2 3 3 6
//	//011
//	
//	return 0;
//}

//
//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//	给20元，可以多少汽水。
//	编程实现。
//
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;
	scanf("%d", &money);

	if(money>0)
		total = money*2-1;
	else
		total = 0;

	/*total += money;
	empty = money;

	while(empty>=2)
	{
	total += empty/2;
	empty = empty/2 + empty%2;
	}*/

	printf("%d\n", total);
	return 0;
}
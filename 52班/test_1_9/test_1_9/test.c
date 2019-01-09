#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0;
//
//	while(left<right)
//	{
//		//左边找一个偶数
//		while((left<=right) && (arr[left]%2==1))
//		{
//			left++;
//		}
//		//右边找奇数
//		while((left<=right) && arr[right]%2==0)
//		{
//			right--;
//		}
//		//交换奇数和偶数
//		if(left<right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr, sz);
//	move(arr, sz);
//	print(arr, sz);
//	system("pause");
//	return 0;
//}

//1 2 3
//4 5 6
//7 8 9
//
#include <stdlib.h>
//
//int find_num(int arr[3][3], int key, int* px, int* py)
//{
//	int x = 0;
//	int y = *py-1;
//
//	while((x<*py) && (y>=0))
//	{
//		if(arr[x][y] < key)
//		{
//			x++;
//		}
//		else if(arr[x][y] > key)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//
//	*px = -1;
//	*py = -1;
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	int ret = find_num(arr, 7, &x, &y);
//	if(ret == 1)
//	{
//		printf("找到了:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到:%d %d\n", x, y);
//	}
//	system("pause");
//
//	return 0;
//}
#include <string.h>
//
//void left_move(char arr[], int steps)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for(i=0; i<steps; i++)
//	{
//		//旋转一个字符
//		char tmp = arr[0];
//		/*int j = 0;
//		for(j=0; j<len-1; j++)
//		{
//		arr[j] = arr[j+1];
//		}*/
//		memmove(arr, arr+1, len-1);
//		arr[len-1] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";//cdefab
//	left_move(arr, 8);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
#include <assert.h>

//
//void reverse(char *left, char*right)
//{
//	assert(left);
//	assert(right);
//	while(left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[], int steps)
//{
//	int len = strlen(arr);
//	steps %= len;
//	reverse(arr, arr+steps-1);
//	reverse(arr+steps, arr+len-1);
//	reverse(arr, arr+len-1);//逆序整个字符串
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//
//	//abcdef
//	//bafedc
//	//cdefab
//	//
//	left_move(arr, 8);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//
//int is_left_move(char arr1[], char*p)
//{
//	char *ret = NULL;
//	int len1 = strlen(arr1);
//	int len2 = strlen(p);
//	if(len1 != len2)
//		return 0;
//
//	strncat(arr1, arr1, len1);
//	ret = strstr(arr1, p);
//	if(ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int ret = 0;
//	char arr1[20] = "abcdef";
//	char* p = "cdef";
//	
//	ret = is_left_move(arr1, p);
//	if(ret == 1)
//	{
//		printf("ok\n");
//	}
//	else
//	{
//		printf("no ok\n");
//	}
//	system("pause");
//	//
//	//abcdefabcdef
//	//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	//找出5和6的区别位
//	int num1 = 0;
//	int num2 = 0;
//	int i = 0;
//	int tmp = 0;
//	int pos = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//tmp=5^6
//	//找出第i位为1
//	for(i=0; i<32; i++)
//	{
//		if(((tmp>>i)&1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//分组
//	for(i=0; i<sz; i++)
//	{
//		if(((arr[i]>>pos)&1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//	}
//	num2 = tmp^num1;
//	printf("num1 = %d num2 = %d\n", num1, num2);
//	system("pause");
//	return 0;
//}
//

//
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);//20
//
//	total = money*2-1;
//
//	/*total = money;
//	empty = money;
//	while(empty>=2)
//	{
//	total += empty/2;
//	empty = empty/2 + empty%2;
//	}*/
//	printf("%d\n", total);
//
//	system("pause");
//	return 0;
//}
//

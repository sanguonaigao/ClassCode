#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10 5
//	//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char* a[] = {"work","at","alibaba"};
//
//	char**pa = a;
//	pa++;
//
//	printf("%s\n", *pa);
//	//t
//	//at
//	//work
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *c[] = {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//
//	system("pause");
//	return 0;
//}

//1.调整数组使奇数全部都位于偶数前面。
//
//	题目：
//	输入一个整数数组，实现一个函数，
//	来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//	所有偶数位于数组的后半部分。
//
//

void PrintArr(int arr[], int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//OJ--online judge
//

//剑指offer
//
//void MoveOddEven(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int tmp = 0;
//	while(left<right)
//	{
//		//找偶数
//		while((left<right) && (arr[left]%2 != 0))
//		{
//			left++;
//		}
//		//找奇数
//		while((left<right) && (arr[right]%2 == 0))
//		{
//			right--;
//		}
//		//交换
//		if(left<right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	//int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int arr[] = {1,3,5,7,9};
//	int sz = sizeof(arr)/sizeof(*arr);
//	MoveOddEven(arr, sz);
//	PrintArr(arr, sz);
//	system("pause");
//	return 0;
//}



//杨氏矩阵
//有一个二维数组.
//	数组的每行从左到右是递增的，每列从上到下是递增的.
//	在这样的数组中查找一个数字是否存在。
//	时间复杂度小于O(N);
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Point FindNum(int arr[3][3], int k, int row, int col)
//{
//	struct Point ret = {-1, -1};
//	int x = 0;
//	int y = col-1;
//	while(x<row && y>=0)
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
//			ret.x = x;
//			ret.y = y;
//			return ret;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	//int arr[3][3] = {1,2,3,2,3,4,4,5,6};
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	struct Point ret = {0};
//	ret = FindNum(arr, 7, 3, 3);
//	if(ret.x == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%d %d\n", ret.x, ret.y);
//	}
//	system("pause");
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	return 0;
//}
//
//
//void FindNum(int arr[3][3], int k, int* prow, int* pcol)
//{
//	int x = 0;
//	int y = *pcol-1;
//	while(x<*prow && y>=0)
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
//	//int arr[3][3] = {1,2,3,2,3,4,4,5,6};
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	FindNum(arr, 7, &x, &y);
//	if(x == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%d %d\n", x, y);
//	}
//	system("pause");
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	return 0;
//}
#include <string.h>

////暴力求解
//void left_move(char* str, int k)
//{
//	int j = 0;
//	for(j=0; j<k; j++)
//	{
//		//旋转1个字符
//		char tmp = *str;
//		int len = strlen(str);
//		int i = 0;
//		for(i=0; i<len-1; i++)
//		{
//			*(str+i) = *(str+i+1);
//		}
//		*(str+len-1) = tmp;
//	}
//}
//abcdef
//bafedc
//cdefab
//

#include <assert.h>
//
void reverse_str(char *left, char *right)
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

void left_move(char* str, int k)
{
	int len = 0;
	assert(str != NULL);
	len = strlen(str);
	reverse_str(str, str+k-1);
	reverse_str(str+k, str+len-1);
	reverse_str(str, str+len-1);
}
//
//int main()
//{
//	char arr[] = "abcdef";//cdefab
//	left_move(arr, 8);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//《剑指offer》
//《C陷阱和缺陷》
//《高质量C/C++编程》
//《程序员编程艺术》
//《C语言深度剖析》
//《UNIX环境高级编程》
//
//int is_left_move(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int i = 0;
//	for(i=1; i<=len; i++)
//	{
//		left_move(str1, 1);
//		if(strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_left_move(arr1, arr2);
//	if(ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	system("pause");
//	return 0;
//}


int is_left_move(char* str1, char* str2)
{
	char* ret = NULL;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if(len1 != len2)
		return 0;
	//子串追加
	strncat(str1, str1, len1);
	//查找子字符串
	ret = strstr(str1, str2);
	if(ret == NULL)
		return 0;
	else
		return 1;
}

int main()
{
	char arr1[20] = "AABCD";
	char arr2[] = "CDAA";
	int ret = is_left_move(arr1, arr2);
	if(ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	system("pause");
	return 0;
}
//
//int main()
//{
//	char* ret = NULL;
//	char arr[20] = "abcdef";
//	//abcdefabcdef
//	//defabc
//	strncat(arr, arr, 6);
//	//"defabc"
//	ret = strstr(arr, "defabc");
//	if(ret == NULL)
//	{
//		printf("不是子串\n");
//	}
//	else
//	{
//		printf("是子串\n");
//		printf("%s\n", ret);
//	}
////	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}




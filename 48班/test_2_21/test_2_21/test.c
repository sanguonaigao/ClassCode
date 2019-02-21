#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void reverse(char *left, char* right)
//{
//	while(left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char arr2[] = "a";
//	int len = strlen(arr);
//	int len2 = strlen(arr2);
//	//测试用例
//	reverse(arr, arr+len-1);
//	printf("%s\n", arr);
//
//	reverse(arr2, arr2+len2-1);
//	printf("%s\n", arr2);
//
//	system("pause");
//	return 0;
//}

#include <stdlib.h>
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void move_num(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<right)
//	{
//		while((left<right) && (arr[left]%2==1))
//		{
//			left++;
//		}
//		while((left<right) && (arr[right]%2==0))
//		{
//			right--;
//		}
//		if(left<right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move_num(arr, sz);
//	print_arr(arr, sz);
//	system("pause");
//	return 0;
//}
//
//1 2 3
//4 5 6
//7 8 9
#include <stdio.h>

//
//void find_num(int arr[3][3], int k, int *px, int *py)
//{
//	int x = 0;
//	int y = *py-1;
//	while(x<*px && y>=0)
//	{
//		if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else if(arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int x = 3;
//	int y = 3;
//	find_num(arr, 7, &x, &y);
//	if(x==-1 && y==-1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d %d\n", x, y);
//	}
//	system("pause");
//	return 0;
//}


//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Point find_num(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col-1;
//	struct Point ret = {-1, -1};
//	while(x<row && y>=0)
//	{
//		if(arr[x][y] < k)
//		{
//			x++;
//		}
//		else if(arr[x][y] > k)
//		{
//			y--;
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
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	struct Point p = find_num(arr, 7, 3, 3);
//	if(p.x == -1 && p.y == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d %d\n", p.x, p.y);
//	}
//	system("pause");
//	return 0;
//}

#include <string.h>

//暴力求解
//void left_move(char*str, int k)
//{
//	int len = strlen(str);
//	int j = 0;
//	for(j=0; j<k; j++)
//	{
//		char tmp = *str;
//		int i = 0;
//		for(i=0; i<len-1; i++)
//		{
//			*(str+i) = *(str+i+1);
//		}
//		*(str+len-1) = tmp;
//	}
//}
#include <assert.h>

//三步翻转法
//void reverse(char *left, char *right)
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
//
//void left_move(char*str, int k)
//{
//	int len = strlen(str);
//	reverse(str, str+k-1);
//	reverse(str+k, str+len-1);
//	reverse(str, str+len-1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
 //
 //int is_left_move(char *str1, char* str2)
 //{
	//int len1 = strlen(str1);
	//int len2 = strlen(str2);
	//if(len1 != len2)
	//	return 0;
 //	strncat(str1, str1, len1);
	//return (strstr(str1, str2)!=NULL);
 //}
 //
 //int main()
 //{
 //	char arr1[20] = "abcdef";
 //	char arr2[] = "cdefab";
 //	//
 //	//abcdefabcdef
 //	//
 //	int ret = is_left_move(arr1, arr2);
 //	if(ret == 1)
 //	{
 //		printf("是\n");
 //	}
 //	else
 //	{
 //		printf("不是\n");
 //	}
	//system("pause");
 //	return 0;
 //}

//int main()
//{
//	char arr[20] = "hello";
//	strcat(arr, " world");
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//101
//110
//011
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4,6};
//	//1. 异或
//	int  i = 0;
//	int tmp = 0;
//	int pos = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0; i<sz; i++)
//	{
//		tmp ^= arr[i];
//	}
//	//2. 找出异或的结果(tmp)中二进制位为1的那一位
//	for(i=0; i<32; i++)
//	{
//		if(((tmp>>i)&1)==1)
//		{
//			pos = i;
//			break;
//		}
//	}
//	//3. 以二进制为1/0分组
//	for(i=0; i<sz; i++)
//	{
//		if(((arr[i]>>pos)&1) == 1)
//		{
//			num1 ^= arr[i];
//		}
//	}
//	num2 = tmp^num1;
//
//	printf("num1 = %d\n", num1);
//	printf("num2 = %d\n", num2);
//	system("pause");
//	//2 3 2 3 6
//	//1 1 4 4 5
//	//
//	//1 3 5 1 3
//	//2 4 6 2 4
//	//
//	//101
//	//110
//	//011
//
//	return 0;
//}
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);//20
//	/*total = money;
//	empty = money;
//	while(empty>1)
//	{
//	total += empty/2;
//	empty = empty/2+empty%2;
//	}*/
//
//	//total = money*2-1;
//
//	printf("total = %d\n", total);
//	system("pause");
//	return 0;
//}
//
//strcpy
//strcat

//
//char* my_strcpy(char* dest, const char *src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = {0};
//	char *p = "hello bit";
//	my_strcpy(arr, p);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}



//
//char* my_strcat(char* dest,const char*src)
//{
//	char *ret = dest;
//	assert(dest);
//	assert(src);
//	//1.找到dest中的'\0'
//	while(*dest)
//	{
//		dest++;
//	}
//	//2. 从src中拷贝数据到dest
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = "hello ";
//	char *p = "bit";
//	my_strcat(arr, p);//字符串追加函数
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}


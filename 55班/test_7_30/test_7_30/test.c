#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////20个字节
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	//0x100014 0x100001 0x100004
//	return 0;
//}
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf( "%x,%x", ptr1[-1], *ptr2);
//	//4 1
//	//2 1
//	//4 x
//	//4 2-2
//	//
//	return 0;
//}
//

//#include <stdio.h>
//
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//
//	int *p;
//	p = a[0];
//	
//	printf( "%d", p[0]);
//
//	return 0;
//}
//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	
//
//	//0 0
//	//x 20
//	//0x10 16
//	//x 8
//	//0x34 52
//	return 0;
//}
//

//
//<剑指offer>
//Leetcode-立扣
//ACM
//

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//10 1/5
//	return 0;
//}
#include <stdio.h>

//int main()
//{
//	char *a[] = {"work","at","alibaba"};
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
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
//	return 0;
//}
#include <math.h>

//unsigned int reverse_bit(unsigned int n)
//{
//	unsigned int tmp = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		tmp += ((n>>i)&1)*pow(2, 31-i);
//	}
//	return tmp;
//}
//00000000000000000000000000011001
//
//unsigned int reverse_bit(unsigned int n)
//{
//	unsigned int tmp = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		tmp += (((n>>i)&1)<<(31-i));
//	}
//	return tmp;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	unsigned int ret = 0;
//	scanf("%d", &num);
//	ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str++)
//	{
//		++count;
//	}
//	return count;
//}
//
//void reverse_str(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
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
//void reverse(char* arr, int len)
//{
//	char* end = arr;
//	//逆序整个串
//	reverse_str(arr, arr+len-1);
//	//逆序每个单词
//	while(*end != '\0')
//	{
//		char* start = end;
//		while(*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse_str(start, end-1);//单词
//		if(*end != '\0')
//			end++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int len = my_strlen(arr);
//	reverse(arr, len);
//	printf("%s\n", arr);
//}

//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int left = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz-1;
//
//	while(left<right)
//	{
//		int tmp = 0;
//		//左边找偶数
//		while((left<right)&&(arr[left]%2 == 1))
//		{
//			left++;
//		}
//		//右边找奇数
//		while((left<right)&&(arr[right]%2==0))
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
//		left++;
//		right--;
//	}
//	for(i=0;i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//1 2 3
//4 5 6
//7 8 9

int Find(int arr[3][3], int row, int col, int k)
{
	int x = 0;
	int y = 2;

	while(x<row && y>=0)
	{
		if(arr[x][y] < k)
		{
			x++;
		}
		else if(arr[x][y] > k)
		{
			y--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int ret = Find(arr, 3, 3, 17);
	if(ret == 1)
		printf("找到了\n");
	else
		printf("找不到\n");
	return 0;
}










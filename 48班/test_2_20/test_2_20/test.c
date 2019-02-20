#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf( "%d,%d", *(a + 1), *(ptr - 1));
//	//2 5
//	system("pause");
//	return 0;
//}
//20字节
// struct Test
// {
// 	int Num;
// 	char *pcName;
// 	short sDate;
// 	char cha[2];
// 	short sBa[4];
// }*p;
// //假设p 的值为0x100000。 如下表表达式的值分别为多少？
// int main()
// {
// 	p = (struct Test*)0x100000;
// 	printf("%x\n", p + 0x1);//0x100014
// 	printf("%x\n", (unsigned long)p + 0x1);//0x100001
// 	printf("%x\n", (unsigned int*)p + 0x1);//0x100004
// 	//0x100014 0x100001 0x100004
// 	system("pause");
// 	return 0;
// }
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf( "%x,%x", ptr1[-1], *ptr2);
//	//
//	//0x4 0x4
//	//0x4 0x100
//	//
//	system("pause");
//	return 0;
//}
//
//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//	int a[3][2] = { 1,3,5 };
//	int *p;
//	p = a[0];
//	printf( "%d", p[0]);
//	//0
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
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
//	//POINT ER ST EW-4
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char *a[] = {"work","at","alibaba"};
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//}

//at
//ork
//
#include <math.h>
//
//unsigned int reverse_bit(unsigned int n)
//{
//	unsigned int sum = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		sum += ((n>>i)&1)*pow(2, 31-i);
//	}
//	return sum;
//}

//
//unsigned int reverse_bit(unsigned int n)
//{
//	unsigned int ret = 0;
//	int i = 0;
//	for(i=0; i<32; i++)
//	{
//		ret <<= 1;
//		ret |= ((n>>i)&1);
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int avg = (a+b)/2;//1
//	//int avg = a + (b-a)/2;//2
//	//int avg = (a&b) + ((a^b)>>1);//3
//
//	printf("%d\n", avg);
//	system("pause");
//	return 0;
//}
//
//
//1 2 3 4 5 1 2 3 4
//
//1 2 1
//
//
//int find_num(int arr[], int sz)
//{
//	int ret = 0;
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int num = find_num(arr, sz);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//

//student a am i
//tneduts a ma i
//i am a student
//
//i ma a tneduts
//i am a student
#include <assert.h>

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

void reverse_str(char* left, char* right)
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

void reverse(char *str)
{
	//1. 逆序整个字符串
	int len = my_strlen(str);
	reverse_str(str, str+len-1);
	//2. 逆序每个单词
	//abc def
	while(*str)
	{
		char *start = str;
		while(*str != ' ' && *str != '\0')
		{
			str++;
		}
		reverse_str(start, str-1);
		if(*str == ' ')
			str++;
	}
}
int main()
{
	char arr[] = "student a am i";
	reverse(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}





























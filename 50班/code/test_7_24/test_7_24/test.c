#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>



//
//char* my_strstr(const char *str, const char*substr)
//{
//	const char *s1 = str;
//	const char *s2 =substr;
//	const char *cur = str;
//	
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = substr;
//		while(*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//			return (char*)cur;
//		if(*s1 == '\0')
//			return NULL;
//		cur++;
//	}
//	return NULL;
//}
////
////KMP---研究
////values
//int main()
//{
//	char *p = "abcdef";
//	char *q = "bbc";
//	char *ret = my_strstr(p, q);
//	if(ret != NULL)
//		printf("%s\n", ret);//bcdefabcdef
//	else
//		printf("找不到\n");
//	return 0;
//}
// 
// int my_strcmp(const char* str1,const char*str2)
// {
// 	assert(str1 && str2);
// 
// 	while(*str1 == *str2)
// 	{
// 		if(*str1 == '\0')
// 			return 0;
// 		str1++;
// 		str2++;
// 	}
// 	return *str1-*str2;
// }
// 
// int main()
// {
// 	char *p1 = "aqcdef";
// 	char *p2 = "azcdef";
// 	int ret = my_strcmp(p1, p2);
// 	printf("%d\n", ret);
// 	return 0;
// }
// 
// char* my_strcat(char *dest, const char*src)
// {
// 	char *ret = dest;
// 	assert(dest);
// 	assert(src);
// 	//1. 找目标空间的'\0'
// 	while(*dest)
// 	{
// 		dest++;
// 	}
// 	//2. 拷贝内容
// 	while(*dest++ = *src++)
// 	{
// 		;
// 	}
// 	return ret;
// }
// 
// int main()
// {
// 	char arr[20] = "hello ";
// 	my_strcat(arr, "world");
// 	printf("%s\n", arr);
// 	return 0;
// }
//
//char* my_strcpy(char*dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	char arr[20] = {0};
//	my_strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}

//
//void PrintArr(int* arr, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
///*void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}*/	
//
//void BubbleSort(int* arr, int sz)
//{
//	int *start = arr;
//	int *end = arr+sz-1;
//	//趟数
//	while(start<end)
//	{
//		//每一趟的细节
//		int *cur = start;
//		while(cur<end)
//		{
//			if(*cur > *(cur+1))
//			{
//				int tmp = *cur;
//				*cur = *(cur+1);
//				*(cur+1) = tmp;
//			}
//			cur++;
//		}
//		end--;
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//
//	BubbleSort(arr, sz);
//	PrintArr(arr, sz);
//	return 0;
//}
//
//void ReverseArr(int *left, int *right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	
//	while(left<right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void PrintArr(int* arr, int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	ReverseArr(arr, arr+sz-1);
//	PrintArr(arr, sz);
//	return 0;
//}
//
//int my_strlen(const char*str)
//{
//	const char* start = str;
//	assert(str != NULL);
//	while(*str++ != '\0')
//	{
//		;
//	}
//	return str-start-1;
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", my_strlen(p));
//	return 0;
//}
// 
// int main()
// {
// 	int arr[10] = {0};
// 	char arr2[4] = {0};
// 	printf("%d\n", &arr[0]-&arr2[3]);//
// 	//9
// 	return 0;
// }
// 
//
//int main()
//{
//// 	int a = 10;
//// 	int *pa = &a;
//// 	int **ppa = &pa;
//// 
//// 	*(*ppa) = 20;
//
//	//char ch = 'a';
//	//char *cp = &ch;
//	int a = 10;
//	//a++ = 3;//err
//	//(tmp=a,a=a+1,tmp) = 3;
//	//
//	//++a = 3;
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0x11223344;
//	char *pc = &a;
//	int *pi = &a;
//
//	printf("%p\n", pc);//1
//	printf("%p\n", pc+1);//3   1*sizeof(char)
//	//
//	printf("%p\n", pi);//2
//	printf("%p\n", pi+1);//4   1*sizeof(int)
//
//// 	int *p = &a;
//// 	*p = 0;
//	//char* p = &a;
//	//*p = 0;
//	//int a = 10;
//	//char *p = &a;
//	//int  *p = &a;
//
//	//指针类型的意义：
//	//1. 指针解引用操作的访问权限
//	//2. 指针加减整数的步长
//
//	return 0;
//}

// int main()
// {
// 	//指针
// 	//int* p;//
// 	//p;
// 	//0x0012ff44
// 	int a = 10;//4
// 	int *p = &a;
// 
// 	return 0;
// }

//
//int Find(int arr[3][3],int *px, int *py, int k)
//{
//	int x = 0;
//	int y = *py-1;
//
//	while(x<*px && y>=0)
//	{
//		if(arr[x][y]<k)
//			x++;
//		else if(arr[x][y] > k)
//			y--;
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = Find(arr, &x, &y, k);
//	if(ret == 1)
//		printf("找到了:%d %d\n", x, y);
//	else
//		printf("找不到\n");
//	return 0;
//}

//1 2 3
//4 5 6
//7 8 9

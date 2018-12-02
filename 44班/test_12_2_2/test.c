#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// int main()
// {
// 	int a[5] = { 1, 2, 3, 4, 5 };
// 	int *ptr = (int *)(&a + 1);
// 	printf( "%d,%d", *(a + 1), *(ptr - 1));
// 	return 0;
// }

//2 5
//

//20字节
// struct Test
// {
// 	int Num;
// 	char *pcName;
// 	short sDate;
// 	char cha[2];
// 	short sBa[4];
// }* p;
// 
// int  main()
// {
// 	p = (struct Test*) 0x100000;
// 	printf("%p\n", p+0x1);
// 	printf("%p\n", (unsigned long)p + 0x1);
// 	printf("%p\n", (unsigned int*)p + 0x1);
// 	//0x100014  0x100001 0x100004
// 	return 0;
// }
//
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//
// 
// #include <stdio.h>
// int main(int argc, char * argv[])
// {
// 	int a[3][2] = { 1, 3, 5 };
// 	//1 3
// 	//5 0
// 	//0 0
// 	int *p;
// 	p = a[0];
// 	printf( "%d", p[0]);//p[0] --> *(p+0) *p
// }

//0 0 0 1 0
//
//《C语言深度解剖》
//

// int main()
// {
// 	int a[5][5];
// 	int(*p)[4];
// 	p = a;
// 	printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
// 	return 0;
// }


// int main()
// {
// 	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
// 	int *ptr1 = (int *)(&aa + 1);
// 	int *ptr2 = (int *)(*(aa + 1));
// 	printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
// 	//10 5
// 	return 0;
// }


// #include <stdio.h>
// 
// int main()
// {
// 	char *a[] = {"work","at","alibaba"};
// 	char**pa = a;
// 	pa++;
// 	printf("%s\n", *pa);
// 	return 0;
// }

#include <stdio.h>
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
//	//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

//int my_strlen(const char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

// int my_strlen(const char* str)
// {
// 	if(*str != '\0')
// 		return 1+my_strlen(str+1);
// 	else
// 		return 0;
// }
// 
// int main()
// {
// 	char *p = "abcdef";
// 	int len = my_strlen(p);
// 	//my_strlen("abcdef");
// 	//1+my_strlen("bcdef");
// 	//1+1+my_strlen("cdef");
// 	//1+1+1+1+1+1+my_strlen("");
// 	//1+1+1+1+1+1+0
// 	//6
// 	printf("%d\n", len);
// 	return 0;
// }
//
//int my_strlen(const char* str)
//{
//	//
//}
//
//int main()
//{
//	//int len = strlen("abc");
//	//char *p1 = "abcdef";
//	//char *p2 = "abcdddddddd";
//
//	//if(strlen(p1)-strlen(p2)>0)
//	//{
//	//	printf("p1 > p2\n");
//	//}
//	//else
//	//{
//	//	printf("p1 <= p2\n");
//	//}
//	char arr[] = {'a', 'b', 'c'};
//	printf("%d\n", strlen(arr));
//	//
//	return 0;
//}

#include <assert.h>
// 
// char* my_strcpy(char*dest,const char* src)
// {
// 	char *ret = dest;
// 	assert(dest != NULL);
// 	assert(src != NULL);
// 
// 	while(*dest++ = *src++)
// 	{
// 		;
// 	}
// 	return ret;
// }
// 
// int main()
// {
// 	char arr1[20] = {0};
// 	char arr2[] = {'b', 'i', 't', '\0'};
// 
// 	my_strcpy(arr1, arr2);
// 	printf("%s\n", arr1);
// 	return 0;
// }
// 


//char* my_strcat(char* dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1. 找目标空间的'\0'
//	while(*dest)
//	{
//		dest++;
//	}
//	//2. 追加
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//char arr[20] = "hello \0xxxxxx";//
//	//char arr2[]= {'b', 'i', 't', '\0'};
//	//my_strcat(arr, arr2);
//	//printf("%s\n", arr);
//
//	char arr[20] = "abcdef";
//	my_strcat(arr, arr);
//
//	return 0;
//}

//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//			return 0;
//
//		str1++;
//		str2++;
//	}
//	return *str1-*str2;
//}
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abc";
//
//	int ret = my_strcmp(p2, p1);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//char *strcpy( char *strDestination, const char *strSource );
//char *strncpy( char *strDest, const char *strSource, size_t count );
// 
// int main()
// {
// 	char arr[10] = "aaaaaaaaa";
// 	strncpy(arr, "hello", 7);
// 	//my_strncpy
// 	printf("%s\n", arr);
// 	return 0;
// }
// 

// 
// int main()
// {
// 	char arr[20] = "hello \0aaaaaaaaaa";
// 	my_strncat(arr, "world", 7);
// 	printf("%s\n", arr);
// 	return 0;
// }
//

// 
// int main()
// {
// 	char *p1 = "abcdef";
// 	char *p2 = "abc";
// 	int ret = my_strncmp(p1, p2, 1);
// 	printf("%d\n", ret);
// 	return 0;
// }
// 
// 

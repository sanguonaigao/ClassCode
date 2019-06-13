#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//
//int main()
//{
//	char*str = strstr("abcdefabc", "defabb");
//	if(str != NULL)
//		printf("%s\n", str);
//	else
//		printf("找不到子串\n");
//	system("pause");
//	return 0;
//}

#include <assert.h>

//
//查找子字符串
//KMP-查找算法
//《程序员的编程艺术》
//
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* tmp  = str1;
//
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	if(*str2 == '\0')
//	{
//		return (char *)str1;
//	}
//
//	while(*tmp)
//	{
//		s1 = tmp ;
//		s2 = str2;
//		while(*s1 && *s2 && *s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return (char*)tmp;
//		}
//		tmp++;
//	}
//
//	return NULL;
//}
//
//int main()
//{
//	//char*str = my_strstr("abcdef", "cde");
//	char*str = my_strstr("abbbcdef", "bbc");
//
//	if(str != NULL)
//		printf("%s\n", str);
//	else
//		printf("找不到子串\n");
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//
//
//	system("pause");
//	return 0;
//}
//
//#include <errno.h>
//
//int main()
//{
//	//打开文件
//	int ch = 0;
//	FILE* pf = fopen("test.txt", "r");
//	if(NULL == pf)
//	{
//		//errno-
//		printf("%s\n", strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//读文件
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
//
#include <ctype.h>
//
//int main()
//{
//	//int ret = isdigit('w');
//	int ret = islower('W');
//
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//


//abCdEF

//ABCDEF

//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		if(islower(ch))
//		{
//			ch = toupper(ch);
//		}
//		putchar(ch);
//	}
//	return 0;
//}

void* my_memcpy(void* dest, void* src, size_t count)
{
	size_t i = 0;
	void*ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	for(i=0; i<count; i++)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}
//
//memmove
//
//
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if(dest<src)
//	{
//		//前-后
//		while(count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		//后-前
//		while(count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	//1 2 1 2 3 4 7 8 9 10
//	//
//	//int arr2[10] = {0};
//	//strcpy(arr2, arr1, 20);
//	//my_memcpy(arr1+2, arr1, 16);
//	//my_memmove(arr1+2, arr1, 16);
//	memcpy(arr1+2, arr1, 16);
//
//	return 0;
//}
//
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 ...
//	//01 00 00 00 02 00 00 00 06 00 00 ...
//	int arr1[] = {1,2,10,4,5,6};
//	int arr2[] = {1,2,6,4,5,6};
//	int ret = memcmp(arr1, arr2, 9);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//
//int main()
//{
//	char *p = "12345";
//	int ret = atoi(p);
//	printf("%d\n", ret);
//
//	//printf("%s\n", p);
//
//	system("pause");
//	return 0;
//}
//10-4
//
//
//int my_atoi(const char* str)
//{
//	int ret = 0;
//	assert(str != NULL);
//	while(*str)
//	{
//		ret = ret*10+(*str-'0');
//		str++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char *p = "1111111111111111111111111111";
//	int ret = my_atoi(p);
//
//	printf("%d\n", ret);
//
//	//printf("%s\n", p);
//
//	system("pause");
//	return 0;
//}
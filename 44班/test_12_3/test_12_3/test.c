#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <assert.h>

//abcdef
//bc

//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char *s1 = str1;
//	const char *s2 = str2;
//	const char *st = s1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	if (*str2 == '\0')
//		return (char *)str1;
//
//	while (*st)
//	{
//		s1 = st;
//		s2 = str2;
//		while (*s1 == *s2 && *s1 )
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			//找到了
//			return (char*)st;
//		}
//		st++;
//	}
//	//找不到
//	return NULL;
//}

//KMP算法-查找子字符串

//
//int main()
//{
//	//strstr查找字符串的函数
//	char *p = "abbbcdef";
//	char *ret = my_strstr(p, "cdefq");
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//
//	//strchr-返回了字符串中第一次出现字符的位置
//	/*char *ret = strchr("abdcdef", 'd');
//	printf("%s\n", ret);*/
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	//strtok
//	//"zhangsan@bitedu.tech";  //@.
//	//"192.168.0.1"   //.
//	//char arr[] = "zhangsan@bitedu.tech";
//	char *p = "zhangsan@bitedu.tech";
//	char arr[30] = { 0 };
//	char *ret = NULL;
//
//	strcpy(arr, p);
//
//	char *sep = "@.";
//
//	for (ret = strtok(arr, sep); ret != NULL; ret=strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	//char*ret = strtok(arr, sep);
//	//printf("%s\n", ret);//zhangsan
//	//ret = strtok(NULL, sep);
//	//printf("%s\n", ret);
//	system("pause");
//	return 0;
//}

#include <errno.h>
//
//int main()
//{
//	//int a = 10;
//	//char arr[10] = { 0 };
//	int *p = (int *)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//使用
//
//	free(p);
//	p = NULL;
//	
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//读文件
//	//....
//	fclose(pf);
//	pf = NULL;
//
//	//printf("%s\n", strerror(errno));
//	//打开文件
//	//fopen
//	//
//	//errno
//	//全局变量
//	//当使用库函数的时候，发生了错误
//	//
//
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//	system("pause");
//	return 0;
//}

//#include <ctype.h>
//
//int main()
//{
//	printf("%d\n", isdigit('a'));
//	printf("%d\n", isdigit('4'));
//	printf("%d\n", isdigit('8'));
//	printf("%d\n", isdigit('6'));
//	printf("%d\n", isdigit('@'));
//	printf("%d\n", isupper('A'));
//	printf("%d\n", isupper('a'));
//
//
//
//	system("pause");
//	return 0;
//}

//strcpy
//
//void* my_memcpy(void* dest, const void*src, size_t sz)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (sz--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//
//void* my_memmove(void* dest, const void* src, size_t sz)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	if (dest < src)
//	{
//		//前->后
//		while (sz--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		//后->前
//		while (sz--)
//		{
//			*((char *)dest + sz) = *((char*)src + sz);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//1 2 1 2 3 4 7 8 9
//	//01 00 00 00 02 00 00 00 03 00 00 00 ...
//	int arr2[20] = { 0 };
//	//内存拷贝
//	//my_memcpy(arr2, arr1, 36);//ok
//	//memmove(arr2, arr1, 36);//ok
//
//	//my_memcpy(arr1+2, arr1, 16);
//	//my_memmove(arr1 + 2, arr1, 16);
//	memcpy(arr1 + 2, arr1, 16);
//
//	//void *memcpy(void *dest, const void *src, size_t count);
//	//void *memmove(void *dest, const void *src, size_t count);
//
//
//
//	//char* const char*
//	//strcpy((char*)arr2, (const char*)arr1);//int * int *
//
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int arr2[] = { 1, 2, 3, 4, 5 ,0};
//	int ret = memcmp(arr1, arr2, 24);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//

//memset

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memset(arr, 'a', 7);
	return 0;
}

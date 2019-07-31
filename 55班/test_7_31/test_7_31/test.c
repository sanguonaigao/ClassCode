#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//size_t -无符号
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abc";
//	if(strlen(arr2)-strlen(arr1)>0)
//	{
//		printf("arr2 > arr1\n");
//	}
//	else
//	{
//		printf("arr2 <= arr1\n");
//	}
//
//	return 0;
//}

//char *strcpy( char *strDestination, const char *strSource );
//
//int main()
//{
//	//char arr1[20]= {0};
//	//char arr2[] = {'a', 'b', 'c', 'd', '\0'};
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	//char*p = "hello world";
//	char arr1[] = "hello world";
//	char arr2[] = {'a', 'b', 'c', 'd', '\0'};
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//
//	return 0;
//}

#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
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
//	char arr1[20] = "xxxxxxxx";
//	char* p = "hello";
//	my_strcpy(arr1, p);
//	printf("%s\n", arr1);
//	return 0;
//}
//

//
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
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
//	char arr1[20] = "hello ";
//	my_strcat(arr1, arr1);
//	printf("%s\n", arr1);
//	return 0;
//}
//

//strcmp-字符串比较
//
//int main()
//{
//	char *p = "acd";
//	char *q = "aqcdef";
//	int ret = strcmp(p, q);
//	if(ret>0)
//	{
//		printf("p>q\n");
//	}
//	else if(ret == 0)
//	{
//		printf("p==q\n");
//	}
//	else
//	{
//		printf("p<q\n");
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//
//	return *str1-*str2;
//}
//
//int main()
//{
//	char* str1 = "abc";
//	char *str2 = "abcdef";
//
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//	return 0;
//}
//长度不受限制的字符串操作函数
//strcpy
//strcat
//strcmp

//长度受限制的字符串操作函数
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr1[2] = "";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "hello \0xxxxx";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 5);
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char*p1 = "abcdef";
//	char *p2 = "abcqqqq";
//	printf("%d\n", strncmp(p2, p1, 4));
//	return 0;
//}
//strstr
//strchr
//
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* start = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//查找
//	if(*str2 == '\0')
//		return (char*)str1;
//
//	while(*start)
//	{
//		s2 = str2;
//		s1 = start;
//		while(*s1 && *s2 && *s1==*s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return (char*)start;
//		}
//		start++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if(ret == NULL)
//	{
//		printf("不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


// int main()
// {
// 	char*ret = strchr("hello world", 'o');
// 	printf("%s\n", ret);
// 	return 0;
// }

//
//"192.168.0.1" -点分十进制
//"zpw@bitedu.tech"
//

//strtok
//
//int main()
//{
//	char*p = "@.";
//	char *ret = NULL;
//	char arr1[] = "bit@bitedu.tech";
//	char tmp[50] = {0};
//	strcpy(tmp, arr1);
//	for(ret=strtok(tmp, p); ret != NULL; ret=strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}
//
//#include <errno.h>
//
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));*/
//	//操作文件
//	FILE* pf = fopen("hehe.txt", "r");
//	if(pf == NULL)
//		printf("%s\n", strerror(errno));//C语言内置的错误码存放的变量
//
//	return 0;
//}

#include <ctype.h>
//
//int main()
//{
//	//int ret = isspace('a');
//	//int ret = islower('A');
//	int ret = isupper('a');
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	printf("%c\n", toupper('a'));
	printf("%c\n", tolower('1'));

	return 0;
}
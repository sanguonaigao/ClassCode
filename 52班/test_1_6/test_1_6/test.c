#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
//int main()
//{
//	char *p1 = "abc";
//	char *p2 = "abc";
//	if(strcmp(p1, p2) > 0)
//	{
//
//	}
//	printf("ret = %d\n", ret);
//
//	system("pause");
//	return 0;
//}

#include <assert.h>
//
//int my_strcmp(const char*s1, const char*s2)
//{
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	while(*s1 == *s2)
//	{
//		if(*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1-*s2;
//}
//int main()
//{
//	char *p1 = "abwdef";
//	char *p2 = "abq";
//	int ret = my_strcmp(p1, p2);
//	
//	printf("ret = %d\n", ret);
//
//	system("pause");
//	return 0;
//}


//strlen

//strcpy
//strcat
//strcmp
//长度不受限制的字符串操作函数
//

//strncpy
//strncat
//strncmp
//长度受限制的字符串操作函数

//char *strncpy( char *strDest, const char *strSource, size_t count );
//char *strcpy ( char *strDest, const char *strSource );
//
//NULL
//Null/NUL--'\0'
//


//int main()
//{
//	char arr[20] = "aaaaaaaaa";
//	strncpy(arr, "bit", 5);
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}

//strncat

// int main()
// {
// 	char arr[20] = "hello \0xxxxxx";
// 	strncat(arr, "bit", 5);
// 	printf("%s\n", arr);
// 	system("pause");
// 	return 0;
// }

//int main()
//{
//	char arr[5] = {0};
//	//scanf("%s", arr);
//	strncpy(arr, "hello world", 4);
//	return 0;
//}

//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abc";
//	int ret = strncmp(p1, p2, 4);
//	printf("ret = %d\n",ret);
//	system("pause");
//	return 0;
//}

//strchr
//strstr
//
//int main()
//{
//	char arr[] = "abcdefabcdef";
//	char *ret = strchr(arr, 'c');
//	if(ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}
//
//char* my_strstr(const char* str1, const char*str2)
//{
//	const char *s1 = str1;
//	const char *s2 = str2;
//	const char *cur = str1;
//
//	assert(str1);
//	assert(str2);
//
//	if(*str2 == '\0')
//		return str1;
//
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		//查找
//		while(*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//			return (char*)cur;
//		cur++;
//	}
//	//找不到
//	return NULL;
//}
//
////
////KMP-<程序员的编程艺术>
////
//
//int main()
//{
//	char arr[] = "abc";
//	char* ret = my_strstr(arr, "");
//	if(ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//char arr1[] = "192.168.0.1";
//	char arr2[] = "zpw@bitedu.tech";
//	char buf[30] = {0};
//	char *ret = NULL;
//	char *sep = "@.";
//	strcpy(buf, arr2);
//	for(ret=strtok(buf, sep); ret != NULL; ret=strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//
//// 	printf("%s\n", strtok(buf, "@."));
//// 	printf("%s\n", strtok(NULL, "@."));
//// 	printf("%s\n", strtok(NULL, "@."));
//	system("pause");
//
//	return 0;
//}
#include <errno.h>
//
//int main()
//{
//	//errno
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		system("pause");
//		return 0;
//	}
//	//char *ret = strerror(errno);
//	//0 1 2 3 4 
//	//错误码
//	//错误信息
//
//	//printf("%s\n", ret);
//	fclose(pf);
//	pf = NULL;
//	system("pause");
//	return 0;
//}
#include <ctype.h>
// 
// int main()
// {
// 	//int ret = isdigit('r');
// 	//printf("ret = %d\n", ret);
// 	//printf("%c\n", tolower('A'));
// 	printf("%c\n", toupper('a'));
// 
// 	system("pause");
// 	return 0;
// }

//memcpy--内存拷贝
//memmove
//memset
//memcmp

//void *memcpy( void *dest, const void *src, size_t count );


void* my_memcpy(void* dest, const void* src, size_t count)
{
	void *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//拷贝
	while(count)
	{
		//拷贝一个字节
		*(char*)dest = *(char*)src;
		//((char*)dest)++;
		++(char*)dest;
		++(char*)src;
		count--;
	}
	return ret;
}

int main()
{
	int arr1[] = {1,2,3,4,5,6,7,8,9,0};
	int arr2[10] = {0};
	//my_memcpy(arr2, arr1, 20);
	my_memcpy(arr1+2, arr1, 16);
	//01 00 00 00 02 00 00 00 03 00 00 00 ...
	//
	//strcpy(arr2, arr1);
	/*char arr1[10] = {0};
	char arr2[10] = "abc";
	strcpy(arr2, arr1);*/

	return 0;
}


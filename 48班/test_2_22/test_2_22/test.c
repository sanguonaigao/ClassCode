#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//char *p = "abcdef";
//	//int len = strlen(p);
//	//printf("%d\n", len);
//
//	char *p = "abcdef";
//	char *q = "abc";
//	if(strlen(q)-strlen(p)>0)
//	{
//		printf("q>p\n");
//	}
//	else
//	{
//		printf("q<=p\n");
//	}
//	system("pause");
//	return 0;
//}
//
#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	const char *start = str;
//	assert(str != NULL);
//	while(*str)
//	{
//		str++;
//	}
//	return str-start;
//}

//my_strlen("abcdef")
//1+my_strlen("bcdef")
//1+1+my_strlen("cdef")
//..
//1+1+1+1+1+1+my_strlen("")
//
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}
//
//int main()
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("len = %d\n", len);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//char arr[20] = {0};
//	//char *arr = "hehehehehehehe";
//	//char *p = "abcdef";
//
//	/*char arr1[20] = {0};
//	char arr2[3] = {'b', 'i', 't'};
//	strcpy(arr1, arr2);*/
//
//	char arr[20] = "hello \0xxxxx";
//	char* p = "bit";
//
//	strcat(arr, p);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	char *q = "abcq";
//	//int len = strcmp(p, q);
//	if(strcmp(p, q)>0)
//	{
//		printf("p>q\n");
//	}
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//
//int my_strcmp(const char* str1, const char*str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if(*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}

//
//int my_strcmp(const char* str1, const char*str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while(*str1 == *str2)
//	{
//		if(*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1-*str2;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	char *q = "abcq";
//	int ret = my_strcmp(p, q);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//

//长度不受限制的字符串操作函数
//strcpy
//strcat
//strcmp

//长度受限制的字符串操作函数
//strncpy
//strncat
//strncmp
//
//int main()
//{
//	char arr[10] ="xxxxxxxx";
//	char *p = "bit";
//	strncpy(arr, p, 5);
//	printf("%s\n", arr);//
//	system("pause");
//	return 0;
//}
//

//int main()
//{
//	char arr[20] = "hello \0xxxxxx";
//	char *p = "bit";
//	strncat(arr, p, 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	char *q = "abcq";
//	int ret = strncmp(p, q, 6);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	char *p = "abcdefabcdef";
//	char *q = "defabc";
//	char* ret = NULL;
//	if((ret = strstr(p, q)) != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//
//
//char* my_strstr(const char *str1, const char* str2)
//{
//	const char*s1 = str1;
//	const char*s2 = str2;
//	const char* cur = str1;
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while(*cur)
//	{
//		s1 = cur;
//		s2 = str2;
//		while((*s1) && (*s2) && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if(*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *p = "abbbbcdef";
//	char *q = "bbc";
//	char* ret = NULL;
//	if((ret = my_strstr(p, q)) != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//	{
//		printf("不存在\n");
//	}
//	system("pause");
//	return 0;
//}

//strchr
//strstr
//
//int main()
//{
//	char *p = "hehe\n";
//	char *ret = strchr(p, 'e');
//	if(ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";//strtok
//	char *sep = "@.";
//	char *str = NULL;
//	for(str=strtok(arr, sep); 
//		str != NULL; 
//		str=strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//	/*printf("%s\n", strtok(arr, sep));
//	printf("%s\n", strtok(NULL, sep));
//	printf("%s\n", strtok(NULL, sep));*/
//
//	system("pause");
//	return 0;
//}
//
#include <errno.h>

//int main()
//{
//	//printf("%s\n", strerror(3));
//	FILE* pf = fopen("test.txt", "r");
//	if(pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("use fopen");
//	}
//	system("pause");
//	return 0;
//}
#include <ctype.h>
//
//int main()
//{
//	//printf("%d\n", isspace('a'));
//	//printf("%d\n", islower('a'));
//	printf("%c\n", tolower('A'));
//	printf("%c\n", tolower('a'));
//
//
//	system("pause");
//	return 0;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void *ret = dest;
//	while(count--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = {0};
//	int arr2[] = {1,2,3,4,5};
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 ....
//	//strcpy((char*)arr1, (const char*)arr2);
//	my_memcpy(arr1, arr2, 20);
//	return 0;
//}


void* my_memcpy(void* dest, const void* src, size_t count)
{
	void *ret = dest;
	assert(dest);
	assert(src);
	while(count--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}

void* my_memmove(void* dest, const void*src, size_t count)
{
	void *ret = dest;
	assert(dest);
	assert(src);

	if(dest<src)
	{
		//前->后
		while(count--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}
	}
	else
	{
		//后->前
		while(count--)
		{
			*((char*)dest+count) = *((char*)src+count);
		}
	}
	return ret;
}

int main()
{
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	//              1,2,1,2,3,4,7,8,9,10
	//my_memcpy(arr1+2, arr1, 16);
	//
	my_memmove(arr1+6, arr1+4, 16);
	//memcpy(arr1+2, arr1, 16);
	return 0;
}

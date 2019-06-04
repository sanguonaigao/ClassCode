#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char arr[5] = {0};
//	//scanf("%s", arr);
//	strcpy(arr, "hello world");
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//size_t
//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abc";
//
//	if(strlen(p2)-strlen(p1)>0)//strlen(p2)>strlen(p1)
//	{
//		printf("p2 > p1\n");
//	}
//	else
//	{
//		printf("p2 <= p1\n");
//	}
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	char arr[] = {'a', 'b', 'c'};
// 	int len = strlen(arr);
// 	printf("%d\n", len);
// 	system("pause");
// 	return 0;
// }
// 
#include <assert.h>

//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str != NULL);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	int ret = my_strlen(p);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	//char arr1[50] = {0};
//	//char arr2[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c'};
//	strcpy(arr1, arr2);
//
//	//strcpy(arr1, "hello world");
//
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *p = "hello world";
//	char *q = "abc";
//	strcpy(p, q);
//	printf("%s\n", p);
//
//	system("pause");
//	return 0;
//}
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//
//char* my_strcpy(char* dest,const char* src)
//{
//	char * ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(*dest = *src)
//	{
//		src++;
//		dest++;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
//}
//
//strcat
//
//
//char* my_strcat(char*dest, const char* src)
//{
//	//1. 找目标空间中的‘\0’
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while(*dest != '\0')
//	{
//		dest++;
//	}
//	//2. 数据拷贝
//	while(*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr[20] = "hello ";
//
//	my_strcat(arr, "world");
//	printf("%s\n", arr);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char*p1 = "abadef";
//	char*p2 = "abbbcdef";
//	int ret = strcmp(p1, p2);
//	if(ret>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if(ret <0)
//	{
//		printf("p1 < p2\n");
//	}
//	else
//	{
//		printf("p1 == p2\n");
//	}
//	printf("%d\n", ret);
//
//	system("pause");
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
//		srr2++;
//	}
//
//	return *str1-*str2;
//}
//int main()
//{
//	char*p1 = "abadef";
//	char*p2 = "abbbcdef";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//
//	system("pause");
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
//	char arr[5] = {'a', 'a', 'a', 'a', 'a'};
//	strncpy(arr, "he", 4);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello \0xxxxx";
//	char arr2[] = "bi";
//	strncat(arr1, arr2, 3);
//
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "abccccdef";
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	char arr[] = "zpw@bitedu.tech";
	char tmp[20] = {0};
	char *sep = "@.";
	char *str = NULL;
	strcpy(tmp, arr);
	//切割字符串
	
// 	printf("%s\n", strtok(tmp, sep));
// 	printf("%s\n", strtok(NULL, sep));
// 	printf("%s\n", strtok(NULL, sep));
	for(str=strtok(tmp, sep); str!=NULL; str=strtok(NULL, sep))
	{
		printf("%s\n", str);
	}

	system("pause");
	//
	//"192.168.0.1"-点分十进制
	//"zpw@bitedu.tech"
	//
	return 0;
}
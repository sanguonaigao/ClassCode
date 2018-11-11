#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>

//abcdef
//abcd
//
#include <assert.h>
// 
// int my_strcmp(const char*str1, const char*str2)
// {
// 	assert(str1 != NULL);
// 	assert(str2 != NULL);
// 
// 	while(*str1 == *str2)
// 	{
// 		if(*str1 == '\0')
// 		{
// 			return 0;
// 		}
// 		str1++;
// 		str2++;
// 	}
// 	return *str1-*str2;
// }
// 
// int main()
// {
// 	//"abcdef"
// 	//"abcccccccccc";
// 	int ret = my_strcmp("abc", "abcdef");
// 	if(ret > 0)
// 	{
// 		printf("hehe\n");
// 	}
// 	printf("%d\n", ret);
// 	return 0;
// }

//
// 长度不受限制的字符串操作函数
//
//strcpy
//strcat
//strcmp
//
// 
// int main()
// {
// 	char arr[4] = {0};
// 	scanf("%s", arr);
// 	printf("%s\n", arr);
// 	return 0;
// }
// 
// int main()
// {
// 	char arr[4] = {0};
// 	strcpy(arr, "hello");
// 	printf("%s\n", arr);
// 	return 0;
// }
// 
//strncpy
//strncat
//strncmp
// 
// int main()
// {
// 	char arr[20] = "qqqqqqqqqqqqqqqqqq";
// 	strncpy(arr, "bit", 5);
// 	printf("%s\n", arr);
// 	return 0;
// }

// 
// int main()
// {
// 	char arr[20] = "hello \0wwwwwwwwwww";
// 	strncat(arr, "bit", 5);
// 	printf("%s\n", arr);
// 	return 0;
// }
//
// 
// 
// int main()
// {
// 	int ret = strncmp("abc", "abcdddddddd", 5);
// 
// 	printf("%d\n", ret);
// 	return 0;
// }
// 

//strchr
//strstr
//
//
//abcdef
//bcd
//
//abbbcdef
//bbc
//

//
//KMP-<程序员编程艺术>
//
// 
// char* my_strstr(const char*str1, const char*str2)
// {
// 	const char *s1 = str1;
// 	const char *s2 = str2;
// 	const char *cp = str1;
// 	assert(str1 != NULL);
// 	assert(str2 != NULL);
// 	
// 	if(*str2 == '\0')
// 		return (char*)str1;
// 
// 	while(*cp)
// 	{
// 		s1 = cp;
// 		s2 = str2;
// 
// 		while(*s1 && *s2 && *s1 == *s2)
// 		{
// 			s1++;
// 			s2++;
// 		}
// 		if(*s2 == '\0')
// 			return (char *)cp;
// 
// 		cp++;
// 	}
// 	return NULL;
// }
// 
// int main()
// {
// 	char *p1 = "abcdef";
// 	char *p2 = "abcdabcdefghiabcdefghi";
// 	char *ret = my_strstr(p2, p1);
// 	printf("%s\n", ret);
// 	return 0;
// }

// 
// int main()
// {
// 	char*str = "zpengwei@yeah.net";
// 	char arr[20] = {0};
// 	char *ret = NULL;
// 	char *p = "@.";
// 
// 	strcpy(arr, str);
// 
// 	for(ret=strtok(arr, p); ret != NULL; ret=strtok(NULL, p))
// 	{
// 		printf("%s\n", ret);
// 	}
// 	//char *p = "zpengwei@yeah.net";
// 	//printf("%s\n", strtok(arr, "@."));
// 	//printf("%s\n", strtok(NULL, "@."));
// 	//printf("%s\n", strtok(NULL, "@."));
// 
// 	
// 	return 0;	
// }


#include <errno.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>


// int  main()
// {
// 	//char *ret = strerror(5);
// 	//printf("%s\n", ret);
// // 	FILE* pf = fopen("test.txt", "r");
// // 	if(pf == NULL)
// // 	{
// // 		printf("打开文件失败\n");
// // 		printf("%s\n", strerror(errno));//errno--错误码
// // 		return 0;
// // 	}
// // 	//...
// // 	fclose(pf);
// 
// 	int *p = (int *)malloc(INT_MAX);
// 	if(p == NULL)
// 	{
// 		printf("%s\n", strerror(errno));
// 		return 0;
// 	}
// 	free(p);
// 	p = NULL;
// 	return 0;
// }
// 
// int main()
// {
// 	printf("%d\n", islower('X'));
// 	return 0;
// }
//

void* my_memcpy(void* dest, const void* src, int count)
{
	void *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while(count--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
	return ret;
}

//
//	周力功
//

// void* my_memmove(void*dest, const void*src, int count)
// {
// 	void *ret = dest;
// 	assert(dest != NULL);
// 	assert(src != NULL);
// 	
// 	if(dest<src)
// 	{
// 		//前-->后
// 		while(count--)
// 		{
// 			*(char*)dest = *(char*)src;
// 			((char*)dest)++;
// 			((char*)src)++;
// 		}
// 	}
// 	else
// 	{
// 		//后->前
// 		while(count--)
// 		{
// 			*((char *)dest+count) = *((char*)src+count);
// 		}
// 	}
// 	return ret;
// }
// int  main()
// {
// 	//char arr[20] = {0};
// 	//strcpy(arr, "hello bit");
// 	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
// 
// 	//my_memcpy(arr1+2, arr1, 16);
// 	my_memmove(arr1, arr1+2, 16);
// 	//int arr2[20] = {0};
// 
// 	//my_memcpy(arr2, arr1, 12);
// 	
// 	//strcpy(arr2, arr1);
// 	return 0;
// }

// 
// int main()
// {
// 	int arr1[] = {1,2,3,4,5,6};
// 	int arr2[] = {1,2,3,4};
// 	int ret = memcmp(arr1, arr2, 20);
// 	printf("%d\n", ret);
// 	return 0;
// }
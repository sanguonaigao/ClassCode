#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	char *c[] = {"ENTER","NEW","POINT","FIRST"};
//	char**cp[] = {c+3,c+2,c+1,c};
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
#include <assert.h>


//size_t
//int main()
//{
//	if((strlen("abc")-strlen("abcdef"))>0)
//	{
//		printf("呵呵\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
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
//	char arr[20] = {0};
//	const char *p = "hello bit";
//	my_strcpy(arr, p);
//	printf("%s\n", arr);
//	return 0;
//}
//
//
//char* my_strcat(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1. 找目的地的'\0'
//	while(*dest)
//	{
//		dest++;
//	}
//	//2. 拷贝
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[20] = "hello ";
//	my_strcat(arr, "world");
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//int main()
//{
//	char arr[20] = "abcdef";
//	strcat(arr, arr);
//
//	return 0;
//}
//
//int main()
//{
//	int ret = strcmp("abc", "abc");
//	if(ret < 0)
//	{
//		printf("小于\n");
//	}
//	else if(ret == 0)
//	{
//		printf("等于\n");
//	}
//	else if(ret > 0)
//	{
//		printf("大于\n");
//	}
//
//	return 0;
//}

//'\0'  -0
//NULL  -0
//0     -0
//'0'----48
//EOF-end of file  (-1)

/*int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1-*str2;
}


int main()
{
	int ret = my_strcmp("abq", "abq");

	printf("%d\n", ret);
	return 0;
}
*/
//
//strcpy
//strcmp
//strcat
//长度不受限制的字符串函数
//




//int main()
//{
//	char arr[10] = {0};
//	strcpy(arr, "hello world");
//	printf("%s\n", arr);
//
//	return 0;
//}


//长度受限制的字符串函数
//strncpy
//strncat
//strncmp

//int main()
//{
//	char arr[10] = "xxxxxxxx";
//	strncpy(arr, "bit", 5);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int main()
//{
//	char arr[20] = "hello \0xxxxx";
//	strncat(arr, "w", 3);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int ret = strncmp("abcdef", "abc", 4);
//	printf("%d\n", ret);
//	return 0;
//}

//strchr-字符串中找字符
//strstr-字符串中找字符串
//int main()
//{
//	char arr[] = "hello world";
//	char *ret = strchr(arr, 'q');
//	if(ret != NULL)
//		printf("%s\n", ret);
//	//
//	return 0;
//}

char* my_strstr(const char* s1, const char* s2)
{
	const char*p1 = s1;
	const char*p2 = s2;
	const char*start = p1;

	if(*s2 == '\0')
		return s1;

	while(*start)
	{
		p1 = start;
		p2 = s2;

		while(*p1 && *p2 && *p1==*p2)
		{
			p1++;
			p2++;
		}
		if(*p2 == '\0')
		{
			return (char*)start;
		}
		start++;
	}
	return NULL;
}

int main()
{
	char arr[] = "abbbcdef";
	char*ret = my_strstr(arr, "bbc");
	if(ret != NULL)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}
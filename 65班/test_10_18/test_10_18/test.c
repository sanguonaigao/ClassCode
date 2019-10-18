#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//
//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char*ret = dest;
//	assert(dest != NULL); //断言
//	assert(src != NULL); //断言
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
//	//strcpy
//	char arr1[20] = "########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));//hello bit
//
//	return 0;
//}

//
//int main()
//{
//	const int a = 10;
//	int b = 100;
//	const int*const p = &a;
//
//	*p = 20;
//	p = &b;
//
//	//const放在*左边，修饰的是指针指向的内容
//	//表示指针指向的内容不能通过指针来改变
//
//	printf("%d\n", a);
//
//	return 0;
//}



//int main()
//{
//	//int *p;//野指针
//	//*p = 20;
//
//// 	int*p = NULL;
//// 	*p = 20;
//
//	return 0;
//}

//int main()
//{
//// 	int a = 10;
//// 	int*p = &a;
//	int *p = NULL;
//	if(p != NULL)
//	{
//
//	}
//	return 0;
//}
//

//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	assert(0);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x*y;
//}
//
//int main()
//{
//	int ret = Add(1, 2);
//	printf("%d\n", ret);
//	return 0;
//}
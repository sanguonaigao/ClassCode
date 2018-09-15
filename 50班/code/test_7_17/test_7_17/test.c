#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

extern int Add(int ,int);

int main()
{
	printf("%d\n", add(1, 2));
	return 0;
}
//10
//2
//

//void my_strcpy(char *dest, char* src)
//{
//	//if(dest==NULL || src==NULL)
//	//{
//	//	//...
//	//	return;
//	//}
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	//字符串的拷贝
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}
//char *strcpy( char *strDestination, const char *strSource );
//
//int main()
//{
//	const int num = 10;
//	int m = 0;
//	const int *const p = &num;
//	p = &m;//
//	*p = 20;//
//
//	return 0;
//}
//
//
////返回char* 是为了实现：链式访问
//char* my_strcpy(char *dest, const char* src)
//{
//	char * ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	//字符串的拷贝
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
////strlen
//
////函数调用约定
//
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////C:\Program Files (x86)\Microsoft Visual Studio 9.0\VC\crt\src
//
//
//int main()
//{
//	char *str = "abcdef";
//	printf("%d\n", my_strlen(str));//6 
//	return 0;
//}

//
//int main()
//{
//	char arr[20] = {'x', 'x', 'x', 'x', 'x'};
//	char arr2[20] = {'a', 'b', 'c', '\0'};
//
//	//arr = "hello world";//err
//	//strcpy(arr, "hello world");
//
//	printf("%s\n", my_strcpy(arr, arr2));
//
//	return 0;
//}
//

//void my_strcpy(char *dest, char* src)
//{
//	//字符串的拷贝
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	// \0的拷贝
//	*dest = *src;
//}


//
//《C陷阱和缺陷》
//
//
//int main()
//{
//	int i = 0;
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 4;
//	int ret = 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	
//	//1 2 6 = 9
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);//9
//
//	return 0;
//}

//
//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	int a = 1;
//	test();
//	return 0;
//}


//
//深信服
//
//mainCRTStartup
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	printf("i = %d\n", i);
//	//}
//	return 0;
//}



































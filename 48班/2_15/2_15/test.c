#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
//
//int my_strlen(const char* str)
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
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", my_strlen(p));
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int * const p = &num;
//	//const修饰指针变量
//	//const int * p = &num;
//	//当const放在*的左边，修饰的是指针指向的内容
//
//	//int *const p = &num;
//	//当const放在*的右边，修饰的是指针变量本身
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	system("pause");
//	//num = 20;
//	return 0;
//}

//assert -- 断言

//10
//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	//断言--assert中的可以放一个表达式，表达式的结果为真
//	//表达式的结果为假，就会报错
//	assert(src != NULL);
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy-string copy-字符串拷贝
//	//"hello";
//	char arr[10] = "xxxxxxxx";
//	my_strcpy(arr, "hello");
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	//
//	//1 + 2 + 6 = 9
//	//
//	for(j=1; j<=3; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret = ret * i;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}

//
//void test2()
//{
//	printf("hehe\n");
//}
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
//	test();
//	return 0;
//}
//
//深信服
//mainCRTStartup
//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i+1;
//	}
//
//	return 0;
//}
//
//void test()
//{
//	printf("test\n");
//}
//
//int main()
//{
//	int i = 0;
//	test();
//
//	for(i=0; i<10; i++)
//	{
//		printf("i = %d\n", i);
//	}
//	//断点
//	for(i=1000; i>0; i--)
//	{
//		printf("i = %d\n", i);
//	}
//	return 0;
//}


//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
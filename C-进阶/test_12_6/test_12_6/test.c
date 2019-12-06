#define _CRT_SECURE_NO_WARNINGS 1

//null-'\0'
//Null-'\0'

//NULL
//strcpy
#include <stdio.h>
#include <string.h>
#include <assert.h>

int Add(int x, int y)
{
	return x+y;
}

int main()
{
	//assert(0);
	Add(1, 2);
	return 0;
}
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
//int main()
//{
//	const char * str = "hello bit";
//	//TDD-测试驱动开发
//	int len = my_strlen(str);
//	printf("len = %d\n", len);
//	return 0;
//}

//1. 编译型错误
//2. 链接型错误-无法解析的外部符号
//3. 运行时错误

//https://blog.codingnow.com/ooc/ioeo/


//敏捷软件开发
//
//int main()
//{
//// 	int a = 10;
//// 	int *p = &a;
//// 	*p = 20;
//
//	/*int *p = NULL;
//	if(p != NULL)
//	*p = 20;
//	*/
//	return 0;
//}

//5
//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, char* src)
//{
//	if(dest == NULL)
//		return;
//	if(src == NULL)
//		return;
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//}
#include <assert.h>
//
//int main()
//{
//	const int num = 10;
//	int n = 20;
//	
//	const int * const p = &num;
//	//const修饰指针
//	//const放在*的左边，修饰的是指针指向的内容，表示指针指向的内容不能通过指针来修改
//	//const放在*的右边，修饰的是指针 变量本身，表示指针本身不能修改
//
//	*p = 0;
//	p = &n;
//	printf("%d\n", num);
//
//	return 0;
//}
// 
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
// 
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
// 
// int main()
// {
// 	char buf1[20] = "##############";
// 	//char buf2[] = "hello bit";
// 	char *buf2 = "hello bit";
// 	printf("%s\n", my_strcpy(buf1, buf2));
// 
// 	return 0;
// }
//
//
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=11; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for(j=1; j<=n; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(j=1; j<=n; j++)
//	{
//		int ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 10-i;
//		printf("%d ", 10-i);
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//void test2()
//{
//	printf("test2\n");
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
//	//深信服-18-29
//	return 0;
//}














































































































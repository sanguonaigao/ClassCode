#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//	}
//
//	return 0;
//}

#include <71.h>
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
//	getchar();
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		arr[i] = 0x11223344;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d\n", arr[i]);//断点
//	}
//
//	return 0;
//}

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
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(j=1; j<=n; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//printf("%p\n", &a);
//	//printf("%p\n", &b);
//
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=11; i++)
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
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%p\n", &i);
//	printf("%p\n", &arr[0]);
//
//// 	for(i=0; i<=12; i++)
//// 	{
//// 		arr[i] = 0;
//// 		printf("hehe\n");
//// 	}
//	getchar();
//	return 0;
//}

//char *strcpy( char *strDestination, const char *strSource );

//void my_strcpy(char* dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

#include <assert.h>

char* my_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言

	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}
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
//int main()
//{
//	char arr[10] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//int main()
//{
//	//strcpy-字符串拷贝
//	char arr1[20] = "#######";
//	char arr2[] = "bit";
//	//char arr2[] = {'b', 'i', 't'};
//	printf("%s\n", my_strcpy(arr1, arr2));
//	//链式访问
//
//	return 0;
//}


//
//int main()
//{
//	const int num = 10;
//	int val = 20;
//	//num = 20;
//	int * const p = &num;
//	*p = 20;
//	p = &val;
//	//const修饰指针
//	//1. 当const放在*的左边，修饰的是指针指向的内容
//	//   表示指针指向的内容，不能通过指针来改变
//	//2. 当const放在*的右边，修饰的是指针变量本身
//	//   表示指针变量的内容不能修改
//
//	printf("%d\n", num);
//	return 0;
//}
//
//

int add(int x, int y)
{
	return x+y;
}


int main()
{
	int ret = add(2, 3);
	printf("%d\n", ret);
	return 0;
}

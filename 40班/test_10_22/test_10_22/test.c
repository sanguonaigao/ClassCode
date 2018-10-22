#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//
//int main()
//{
//	const int num = 10;
//	int m = 100;
//	const int * const p = &num;
//	p = &m;
//	printf("%d\n", *p);
//	*p = 20;
//
//	return 0;
//}


char* my_strcpy(char* dest, const char *src)
{
	char *ret = dest;
	assert(src != NULL);//╤оят
	assert(dest != NULL);//╤оят

	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char *p = "hello bit";
	char arr[20] = {0};
	My_strcpy(arr, p);
	printf("%s\n", arr);
	return 0;
}


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
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	//1 2 6 = 9
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
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//void test2()
//{
//	printf("HEHE\n");
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

// int main()
//{
//	int i = 0;
//	int a = 10;
//	for(i=0; i<10; i++)
//	{
//		a++;
//	}
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
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
//	printf("%d\n", sum);
//	return 0;
//}


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
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = {0};
//	for(i=0; i<10; i++)
//	{
//		arr[i] = i;
//		printf("%d ", i);
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//
//int main()
//{
//// 	int a = 10;
//// 	int b = 20;
//// 	printf("%p\n", &a);
//// 	printf("%p\n", &b);
//
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//<cœ›⁄Â∫Õ»±œ›>

//char *strcpy( char *strDestination, const char *strSource );

//
//NULL-ø’÷∏’Î
//Null-'\0'
//
#include <string.h>

//void my_strcpy(char*dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char*dest, char* src)
//{
//	while(*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//
#include <assert.h>
 //
 //char* my_strcpy(char*dest, const char* src)
 //{
	// char *ret = dest;
 //	assert(dest != NULL);//∂œ—‘
 //	assert(src != NULL);
 //	while(*dest++ = *src++)
 //	{
 //		;
 //	}
	//return ret; 
 //}
 //
 //int main()
 //{
 //	//char* p = NULL;
 //	//char arr[] = {'b', 'i', 't','\0'};
 //	char arr[] = "bit";
 //	char buf[10] = {0};
 //	my_strcpy(buf, arr);
 //	printf("%s\n", buf);
 //
 //	return 0;
 //}

//
//int main()
//{
//	//int* p;//“∞÷∏’Î
//	//*p = 20;
//
//	//int a = 10;
//	//int*pa = &a;
//	//*pa = 20;
//
//	int *p = NULL;
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}
//
//int main()
//{
//	const int num = 10;
//	//num = 20;
//	int n = 100;
//	const int * p = &num;
//	*p = 20;
//	//p = &n;
//
//	printf("num = %d\n", num);
//	return 0;
//}

//Ω°◊≥–‘/¬≥∞Ù–‘

//
int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);
	while(*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
//
//int main()
//{
//	int len = my_strlen("bit");
//	printf("len = %d\n", len);
//	return 0;
//}

//
//int main()
//{
//	if(my_strlen("abc")-my_strlen("abcdef")>0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//¡¥Ω”–Õ¥ÌŒÛ
//int AdD(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//
//	return 0;
//}

//‘À–– ±¥ÌŒÛ




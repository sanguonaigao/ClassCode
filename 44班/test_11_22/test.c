#define _CRT_SECURE_NO_WARNINGS 1
//
//int main()
//{
//	int i = 0;
//
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//	}
//
//	for(i=0; i<10; i++)
//	{
//		printf("haha\n");
//	}
//
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
//
//int main()
//{
//	test();
//	return 0;
//}
//
// int main()
// {
// 	int a = 10;//00 00 00 0a
// 	int arr[] = {1,2,3,4,5};
// 
// 	return 0;
// }
//
//#include <stdio.h>

//int main()
//{
//	const int a = 10;
//	int *p = (int *)&a;
//	*p = 20;
//
//	printf("%d\n", a);//20
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=0; i<10000; i++)
//	{
//		if(i==5000)
//		{
//			printf("hehe\n");
//		}
//		printf("%d\n", 5000-i);
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6  = 9
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
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//

//
//int main()
//{
//	//
//	//¡¶CÏÝÚåºÍÈ±ÏÝ¡·
//	//
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//
//	for(i=0; i<=11; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

//10
#include <assert.h>
//char *strcpy( char *strDestination, const char *strSource );

//½¡×³ÐÔ
//Â³°ôÐÔ
//
// char* my_strcpy(char* dest, const char* src)
// {
//    char* ret = dest;
//    assert(dest != NULL);
//	assert(src != NULL);
//
// 	while(*dest++ = *src++)
// 	{
// 		;
// 	}
//	return ret;
// }
// 
// 
// int main()
// {
// 	char arr[20] = "**************";
//
// 	//Á´Ê½·ÃÎÊ
// 	printf("%s\n", my_strcpy(arr, "hello"));
// 	return 0;
// }
// 
//
// //strlen
//
//
// int my_strlen(const char* str)
// {
//	int count = 0;
//	assert(str != NULL);//¶ÏÑÔ
//
//	while(*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
// }
////
//int main()
//{
//	const int num = 10;
//	int n = 20;
//	const int *const p = &num;
//	p = &n;//
//
//	*p = 20;
//
//	printf("%d\n", num);
//
//	//int *p = &num;
//	//*p = 20;
//	//num = 20;
//	//num = 20;
//	return 0;
//}


// 
// int main()
// {
// // 	int a = 10;
// // 	int *p = &a;
// // 	*p = 20;
// 
// 	int *p = NULL;
// 	if(p != NULL)
// 		*p = 20;
// 
// 	return 0;
// }


























































#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
////int main()
////{
////	int ret = Add(1, 2);
////	printf("%d\n", ret);
////	return 0;
////}
////
////#include <stdio.h>
////
////int main()
////{
////	int m = 0;
////	int n = 0;
////
////	while(scanf("%d %d", &m ,&n) != EOF)
////	{
////		int count = 0;
////		while(m)
////		{
////			count += m%n;
////			m/=n;
////		}
////		printf("%d\n", count);
////	}
////
////	return 0;
////}
//
//
//#include<stdio.h>
//int main()
//{
//	unsigned char i=7;
//	//
//	int j=0;
//	for(;i>0;i-=3)
//	{
//		++j;
//	}
//	printf("%d\n",j);
//	return 0;
//}

//
//void Ts(char * str)
//{
//	int i = 0;
//	int j = 0;
//	int x =0;
//	int y = 0;
//	char arr[10][10] = {0};
//	while(*str != '\0')
//	{
//		if(*str != ' ')
//			{
//			 arr[i][j] = *str;
//			    j++;
//		    }
//		if(*str == ' ')
//			{
//				i++;
//				j = 0;
//		}
//
//		*str++;
//	}
//	for(x= i;x>=0;j--)
//	{
//
//		for(y =0;y<10;y++)
//		{
//			printf("%c",arr[x][y]);
//		}
//		printf(" ");
//	}
//
//}
//int main()
//{
//	char str[20] = "I LIKE BEIJ";
//	Ts(str);
//	return 0;
//}






//10
//
//C++- 9
//JAVA- 8.5

//
//测试开发
//
//


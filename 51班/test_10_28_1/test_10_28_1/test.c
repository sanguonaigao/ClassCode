#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int ADD(int x, int y)
{
	return x+y;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = ADD(a, b);

	return 0;
}
//
//int main()
//{
//	int i = 0;
//	printf("%d\n", i);
//	return 0;
//}
//
//10 6
//

//#define NDEBUG
//
//
//#include <assert.h>
//
//int main()
//{
//	int a = 10;
//	char* p = &a;
//
//	//0x0012ff40
//	//0x0012ff41
//	
//	return 0;
//}
//
////int main()
//{
//	const int a = 10;
//	int n =100;
//	 int *  p = &a;
//	*p = 0;
//	p = &n;
//
//	printf("%d\n", a);
//	return 0;
//}
//
//cpp
// int main()
// {
// 	const int a = 10;
// 	int* p = (int*)&a;
// 	*p = 20;
// 	printf("a = %d\n", a);
// 
// 	return 0;
// }
//volatile ---c

// 

//strlen
//
//my_strlen

// 
// int my_strlen(const char* str)
// {
// 	int count = 0;
// 	assert(str != NULL);
// 
// 	while(*str != '\0')
// 	{
// 		count++;
// 		str++;
// 	}
// 	return count;
// }
// 
// int main()
// {
// 	char *p = "abcdef";
// 	int len = my_strlen(p);
// 	printf("%d\n", len);
// 	return 0;
// }
// //

// 
// 
//  char* my_strcpy(char* dest, const char* src)
//  {
// 	char* ret = dest;
//  	assert(src != NULL);//断言
//  	assert(dest != NULL);//断言
//  
//  	while(*dest++ = *src++)
//  	{
//  		;
//  	}
// 	return ret;
//  }
// 
//  
//  int main()
//  {
//  	char arr[20] = "qqqqqqq";
//  	char *p = "BIT";
//  	my_strcpy(arr, p);
//  	printf("%s\n", arr);
//  	return 0;
//  }
//  

//int main()
//{
//	//局部变量
//	//栈区
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}


//
//int main()
//{
//	//n的阶乘
//	//1 2 3 ... n
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;//和
//	int ret = 1;
//
//	//1 2 6 24 = 33
//	scanf("%d", &n);
//
//	for(j=1; j<=n; j++)
//	{
//		//for(i=1; i<=j; i++)
//		//{
//		ret *= j;
//		//}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);//5
//	//1 2 6 = 9
//	for(j=1; j<=n; j++)
//	{
//		ret = 1;
//		for(i=1; i<=j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//
//	for(i=0; i<=12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

#include <string.h>


//void my_strcpy(char arr1[], char arr2[])
//void my_strcpy(char* pdest, char* psrc)
//{
//	while(*psrc != '\0')
//	{
//		*pdest = *psrc;
//		pdest++;
//		psrc++;
//	}
//	*pdest = *psrc;
//}

#include <assert.h>
////
//char* my_strcpy(char* pdest, const char* psrc)
//{
//	char *ret = pdest;
//	assert(psrc != NULL);//断言
//	assert(pdest != NULL);//断言
//
//	while(*pdest = *psrc)
//	{
//		pdest++;
//		psrc++;
//	}
//	return ret;
//}

//NUL null - '\0'
//
//
//int main()
//{
//	//strcpy();
//	char arr1[20] = "aaaaaaaa";
//	char arr2[] = "bit";
//	//char *p = NULL;
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	int m = 100;
//	const int * const p = &a;
//	*p = 20;
//	p = &m;
//
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//const 修饰变量-const int num;//常变量
//const修饰指针
//const 放在*的左边，表示指针指向的对象不能通过指针来改变.指针变量本身可以改变
//const 放在*的右边，表示指针指向的对象可以通过指针来改变.但是指针变量本身不可以改变
//

//
//int main()
//{
//	int* p = NULL;
//
//	if(p != NULL)
//		*p = 20;
//
//	int a = 10;
//	int* ptr = &a;
//	if(ptr != NULL)
//		*ptr = 20;
//
//	system("pause");
//	return 0;
//}
//
//
//健壮性
//鲁棒性
//
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
//	char arr1[] = "abcdef";
//	int len = my_strlen(arr1);
//	printf("%d\n", len);
//
//	system("pause");
//	return 0;
//}
//编译型错误
//
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
// ]LinkList
//

extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("c = %d\n", c);
	system("pause");
	return 0;
}



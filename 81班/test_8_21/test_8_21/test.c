#define _CRT_SECURE_NO_WARNINGS 1

//
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


#include <stdio.h>
#include <string.h>

// void my_strcpy(char* dest, char* src)
// {
// 	while(*src)
// 	{
// 		*dest = *src;
// 		dest++;
// 		src++;
// 	}
// 	*dest = *src;
// }
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
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
//	char arr1[20] = {0};
//	char arr2[20] = "bit";
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	printf("%d\n", my_strlen(arr1));
//	return 0;
//}
//函数调用约定
//

//
//int main()
//{
//	const int num = 10;
//	int n = 0;
//	//num = 20;
//    int *const p = &num;
//	//
//	//const 放在*的左边，修饰的是*p，意思是指针指向的内容不能改变
//	//但是指针变量本身可以被修改
//	//const 放在*的右边，修饰的是p，意思是指针指向的内容可以改变
//	//但是指针变量本身不可以被修改
//	//
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//
//	return 0;
//}

//int main()
//{
//	//野指针
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//
//	return 0;
//}
//
//

//
//int main()
//{
//	int* p = NULL;
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}
//
//char* test()
//{
//	char arr[] = "abcdef";
//	return arr;
//}
//
//int main()
//{
//	char *str = test();
//	printf("%s\n", str);
//
//	return 0;
//}
//
#include <assert.h>

//int main()
//{
//	assert(0 == 1);
//	printf("hehe");
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	Add(1, 3);
//	return 0;
//}

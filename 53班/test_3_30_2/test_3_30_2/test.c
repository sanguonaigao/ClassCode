#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	char* p = (char*)&arr[9];
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		printf("%d ", *(p-i));
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf("%d\n", &arr[9]-&ch[4]);//?
//	//printf("%d\n", &arr[0]-&arr[9]);
//
//	system("pause");
//	return 0;
//}

#include <string.h>


//abc
//1+bc
//1+1+c
//
//int my_strlen(char* str)//abc
//{
//	if(*str == '\0')
//		return 0;
//	else
//		return 1+my_strlen(str+1);
//}
//int my_strlen(char *str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	char *start = str;
//	while(*str != '\0')
//	{
//		str++;
//	}
//	return str-start;
//}
//
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		//printf("%p <==> %p\n", &arr[i], p+i);
//		printf("%d\n", *(p+i));
//		//
//		//arr[i] *(p+i) *(arr+i) *(i+arr) i[arr]
//		//
//
//	}
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* *pp = &p;
//
//	printf("%d\n", **pp);
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
//
//
//int main()
//{
//	int arr[10];
//	char ch[5];
//	//指针数组
//	int* arr2[5];
//	char* arr3[6];
//	return 0;
//}
//
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//#include <string.h>
//
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	float weight;
//	struct S s;
//}Stu;
//
//int main()
//{
//	//编译错误
//	//链接错误
//	//运行时错误
//	struct Stu s = {"张三", 20, 55.6f, {100, 'w', 3.14}};
//	strcpy(s.name, "张四");
//	s.age = 30;
//
//	printf("%s %d %f -- %d %c %lf", s.name, s.age, s.weight, s.s.a, s.s.c, s.s.d);
//	system("pause");
//	return 0;
//}
//

//
//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	test();
//	//printf("%p\n", &i);
//	//printf("%p\n", &arr[0]);
//
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	for(i=0; i<10; i++)
//	{
//		printf("hehe\n");
//		arr[i] = i;
//	}
//
//	//system("pause");
//	return 0;
//}
//
// 
// int main()
// {
// 	int arr[10] = {0};
// 	int i = 0;
// 	int a = 10;
// 	{
// 		int b = 20;
// 	}
// 	for(i=0; i<10; i++)
// 	{
// 		arr[i] = 10-i;
// 	}
// 	return 0;
// }
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
//mainCRTStartup
//
//
//深信服
//

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1 2 6 = 9
//	//运行时错误
//	for(n=1; n<=3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//

//
//int main()
//{
//	//局部变量
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//10-4
//void my_strcpy(char* dest, const char* src)
//{
//	while(*src != '\0')
//	{
//		*src = *dest;
//		dest++;
//		src++;
//	}
//	*dest = *src;//\0
//}
//7
#include <assert.h>
//
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	//num = 20;
//	const int *const p = &num;
//
//	*p = 20;
//	p = &n;
//
//	printf("%d\n",num);
//	system("pause");
//	return 0;
//}
//10
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//
//	while(*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = {0};
//	//char arr2[] = "bit";
//	char *arr2 = "bit";
//
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);//bit
//	//printf("%s\n", arr2);//bit
//	printf("%d\n", strlen(my_strcpy(arr1, arr2)));
//
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int *p = NULL;
//	if(p != NULL)
//		*p = 20;
//
//	return 0;
//}


int main()
{
	int a = 10;
	const char *p = "abcdef";
	printf("%s\n", "hehe");
	printf("hehe\n");
	printf("%p\n", p);
	printf("%c\n", *p);
	system("pause");
	return 0;
}
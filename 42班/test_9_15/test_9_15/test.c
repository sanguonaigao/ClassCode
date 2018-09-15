#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("%c\n", '\x045');//
	//printf("%d\n", strlen("abcdef"));//
	//printf("%d\n", strlen("c:\test\32\test.c"));//12 15 14 11 13 


	//c:\test\test.c

	//printf("c:\\test\\test.c\n");
	//printf("(are you ok\?\?)\n");
	//printf("%c\n", '\'');
	//printf("%s", "\"");
	//printf("\a\a\a\a\a\a\a\a\a");


	return 0;
}
//
//int main()
//{
//	//"abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//
//	printf("%s\n", "abcdef");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//
////枚举
//enum Sex
//{
//	//枚举常量
//	MALE=5,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s1 = MALE;
//	enum Sex s2 = FEMALE;
//	enum Sex s3 = SECRET;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}
//
//#define 定义的标识符常量
// #define MAX 1000
// 
// int main()
// {
// 	//MAX = 2000;
// 	int arr[MAX];
// 	printf("%d\n", MAX);//1000	
// 	return 0;
// }
//
//int main()
//{
////	3;
////	3.14;
//	//3 = 5;
//	//const int num = 10;
//	//num = 20;
//	//printf("%d\n", num);//20
//	//const int n = 10;
//	//int arr[n] = {0};
//
//	return 0;
//}

//int main()
//{
//	{
//		int age = 20;
//	}
//	printf("%d\n", age);
//	return 0;
//}

//int age = 10;
//
//void print()
//{
//	printf("2:%d\n", age);
//}
//int main()
//{
//	printf("1:%d\n", age);//
//	print();
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
// int age = 20;
// //代码块
// int main()
// {
// 	int age = 10;
// 	{
// 		int age = 30;
// 		printf("age  =%d\n", age);//
// 	}
// 	return 0;
// }


//
//int main()
//{
//	char ch = 'B';
//	short age = 20;
//	float weight = 150.0;//double
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}

// int main()
// {
// 	printf("hehe\n");
// 	//system("pause");//暂停
// 	return 0;
// }
// 
// int main()
// {
// 	int num = 20;
// 	scanf("%d", &num);
// 	//scanf_s
// 
// 	printf("num = %d\n", num);
// 
// 	return 0;
// }

//#include <stdio.h>

//主函数--程序的入口

// int main()
// {
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 	printf("hehe\n");
// 
// 	return 0;
// }

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//printf("hehe\n");
	//转义
	printf("%c\n", '\'');
	system("pause");
	return 0;
}
//
//int main()
//{
//	//"abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%s\n", "abcdef");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	system("pause");
//	return 0;
//}

//枚举常量
//枚举
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = MALE;
//	//MALE = 5;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	system("pause");
//	return 0;
//}

//#define定义的标识符常量
//#define MAX 1000
//int main()
//{
//	int a = MAX;
//	//MAX = 2000;
//	int arr[MAX] = {0};
//	printf("%d\n", a);
//	//字面常量
//	//3;
//	//3.14;
//	//const int num = 10;
//	//num = 20;
//	//printf("%d\n", num);
//	//const修饰的常变量
//	//const int n = 10;
//	//int arr[n];
//	//C++
//	//
//	system("pause");
//	return 0;
//}
//extern int a;
//
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok
//	}
//	//printf("a = %d\n", a);//ok
//	system("pause");
//	return 0;
//}
// 
// int main()
// {
// 	{
// 		int a = 10;
// 	}
// 	printf("a = %d\n", a);
// 	system("pause");
// 	return 0;
// }

// 
// int main()
// {
// 	printf("hehe\n");
// 	printf("%s\n", "hehe");
// 	printf("%c%c%c%c\n", 'h', 'e', 'h', 'e');
// 	system("pause");
// 	return 0;
// }
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//
//int a = 20;//全局变量
////代码块-{}
//
//int main()
//{
//	int a = 10;//局部变量
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}

//
//int main()
//{
//	int age = 20;//4
//	int a = 0;
//	a = a+1;
//	float weight = 55.5;
//	double num = 0.0;
//	//变量-常量
//
//	return 0;
//}
//
//int main()
//{
//	//
//	//char short int long long long float double
//	//
//	printf("%d\n", sizeof(char));//1-字节
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 8
//	printf("%d\n", sizeof(long long));//10 8 
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int age = 20;
//	scanf("%d", &age);
//	printf("%d\n", age);
//	system("pause");
//	return 0;
//}

//标准输入输出头文件
//#include <stdio.h>
//#include <stdlib.h>
//
////MSDN
////ctrl+F5
////主函数
//
//int main()
//{
//	//输出函数
//	printf("hello world\n");
//	//暂停
//	system("pause");
//	return 0;
//}
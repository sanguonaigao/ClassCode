#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//printf("c:\\test\\56\\test.c");
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");
	//printf("\a\a\a\a\a\a\a\a");
	//printf("%d\n", strlen("abc"));//string length
	printf("%d\n", strlen("c:\test\328\test.c"));
	system("pause");
	return 0;
}
//
//int main()
//{
//	//"hello bit";
//	//"abc";
//	//"a";
//	//"";
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	printf("%s\n", "abcdef");//1
//	printf("%s\n", arr1);    //2
//	printf("%s\n", arr2);    //3
//
//	system("pause");
//	return 0;
//}


//枚举常量

//枚举的关键字
//
//enum Sex
//{
//	MALE=3,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//enum Sex s = SECRET;//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	system("pause");
//	return 0;
//}



//#define 定义的标识符常量

//#define PAI 3.14
//
//int main()
//{
//	double d = PAI;
//	//PAI = 4.14;//err
//	printf("%lf\n", d);
//	//字面常量
//	//3.14;
//	//5;
//	//"abcdef";
//
//	//const int num = 10;
//	//num = 20;
//	//printf("num = %d\n", num);
//	//const int n = 10;
//	//int arr[n] = {0};
//
//
//	system("pause");
//
//	return 0;
//}
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	//
//	return 0;
//}

//声明外部符号g_val
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);//
//	system("pause");
//	return 0;
//}
//
//int a = 120;
//
//int main()
//{
//	//
//	//{
//	//	int a = 10;
//	//	printf("a = %d\n", a);
//	//}
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//
//	printf("请输入要相加的两个数:");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	system("pause");
//	return 0;
//}

//{}-代码块
//int a = 20;//全局
//int main()
//{
//	int a = 10;//局部
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int age = 0;//4-32
//	float weight = 3.14f;
//
//	printf("%d\n", sizeof(char));//1 
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//8/4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	system("pause");
//	return 0;
//}

//
////标准输入输出头文件
//#include <stdio.h>
//#include <stdlib.h>
//#include <windows.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	printf("age = %d\n", age);
//	system("pause");
//	return 0;
//}

//main-主函数-
//int main()
//{
//	//printf-库函数-输出/打印
//	printf("hello bit!\n");
//	printf("hello bit!\n");
//	printf("hello bit!\n");
//	printf("hello bit!\n");
//	printf("hello bit!\n");
//	printf("hello bit!\n");
//	printf("hello bit!\n");
//
//	Sleep(1000);
//	//暂停
//	system("cls");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}
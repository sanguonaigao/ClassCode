#define _CRT_SECURE_NO_WARNINGS 1


// void main()
// {
// 	
// }

#include <stdio.h>

//main-主函数-程序的入口
//
//int main()
//{
//	//打印函数-C语言的库-输出
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	return 0;
////}
//
//int main()
//{
//	//printf("%d\n", 100);//%d 整型
//	//printf("%c\n", 100);//%c 字符
//	printf("%d\n", sizeof(char));//1 字节
//	printf("%d\n", sizeof(short));//2 - 16
//	//1111111111111111
//	//
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4 
//	printf("%d\n", sizeof(long long));//8 
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}
//

//int main()
//{
//	short age = 20;
//	float weight = 5.6f;
//	//101.100
//	printf("%f\n", weight);
//
//	return 0;
//}

//int main()
//{
//	int num = 10;
//	num = 20;
//	printf("num = %d\n", num);
//
//	return 0;
//}

//{}-代码块
//
//int a = 100;//全局变量
//
//int main()
//{
//	int a = 10;//局部变量
//	printf("%d\n", a);//
//
//	return 0;
//}

//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum  = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1+num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	char arr[5] = {0};
//	scanf("%s", arr);//err
//	printf("%s\n", arr);
//
//	return 0;
//}
//int g_val = 2019;
//
//void test()
//{
//	printf("g_val 4 = %d\n", g_val);
//}
//int main()
//{
//	printf("g_val 1 = %d\n", g_val);
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//		printf("g_val 2 = %d\n", g_val);
//	}
//	printf("g_val 3 = %d\n", g_val);
//	test();
//	return 0;
//}

//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//}

//
//int main()
//{
//	//...
//	{
//		int a = 10;
//	}
//
//	return 0;
//}


#define MAX 100

//结构体关键字
struct Stu
{
	char name[20];
	short age;
	char id[15];
};

enum Sex
{
	MALE,
	FEMALE=5,
	SECRET
};

int main()
{
	//1. 字面常量
// 	3.14;
// 	50;
	//2. const修饰的常变量
	//const int num = 10;
	//num = 20;
	//printf("num = %d\n", num);
	/*const int n = 10;
	int arr[n] = {0};*/
	//3. #define 定义的标识符常量
	//printf("%d\n", MAX);//100
	//MAX = 200;
	//4. 枚举常量
	//枚举
	
	
	//结构体

	/*struct Stu s1 = {"张三", 20, "20190101"};
	struct Stu s2 = {"张三", 20, "20190101"};
	struct Stu s3 = {"张三", 20, "20190101"};
	struct Stu s[40];*/

	/*enum Sex sex = MALE;
	sex = FEMALE;
	sex = SECRET;
	*/
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	//MALE  = 4;//err

	return 0;
}